#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO_W.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNE.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPEQ.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPLT.h>
#include <com/sun/org/apache/bcel/internal/generic/IF_ICMPNE.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/IfInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FlowList.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LocationPathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativePathPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACC_PRIVATE
#undef ATTRIBUTE_NODE
#undef CHILD
#undef DOM_INTF
#undef DUP
#undef ELEMENT_NODE
#undef GENERAL_CONTEXT
#undef GET_PARENT
#undef GET_PARENT_SIG
#undef GTYPE
#undef MATCHING_ITERATOR
#undef MAX_VALUE
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef NOP
#undef NO_CONTEXT
#undef POP
#undef SIMPLE_CONTEXT
#undef SWAP

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GOTO_W = ::com::sun::org::apache::bcel::internal::generic::GOTO_W;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFLT = ::com::sun::org::apache::bcel::internal::generic::IFLT;
using $IFNE = ::com::sun::org::apache::bcel::internal::generic::IFNE;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $IF_ICMPEQ = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPEQ;
using $IF_ICMPLT = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPLT;
using $IF_ICMPNE = ::com::sun::org::apache::bcel::internal::generic::IF_ICMPNE;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FlowList = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FlowList;
using $LocationPathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LocationPathPattern;
using $NodeTest = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $Predicate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Predicate;
using $RelativePathPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativePathPattern;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _StepPattern_FieldInfo_[] = {
	{"NO_CONTEXT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StepPattern, NO_CONTEXT)},
	{"SIMPLE_CONTEXT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StepPattern, SIMPLE_CONTEXT)},
	{"GENERAL_CONTEXT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StepPattern, GENERAL_CONTEXT)},
	{"_axis", "I", nullptr, $PROTECTED | $FINAL, $field(StepPattern, _axis)},
	{"_nodeType", "I", nullptr, $PROTECTED | $FINAL, $field(StepPattern, _nodeType)},
	{"_predicates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;", $PROTECTED, $field(StepPattern, _predicates)},
	{"_step", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Step;", nullptr, $PRIVATE, $field(StepPattern, _step)},
	{"_isEpsilon", "Z", nullptr, $PRIVATE, $field(StepPattern, _isEpsilon)},
	{"_contextCase", "I", nullptr, $PRIVATE, $field(StepPattern, _contextCase)},
	{"_priority", "D", nullptr, $PRIVATE, $field(StepPattern, _priority)},
	{}
};

$MethodInfo _StepPattern_MethodInfo_[] = {
	{"<init>", "(IILjava/util/List;)V", "(IILjava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;)V", $PUBLIC, $method(StepPattern, init$, void, int32_t, int32_t, $List*)},
	{"analyzeCases", "()I", nullptr, $PRIVATE, $method(StepPattern, analyzeCases, int32_t)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(StepPattern, getAxis, int32_t)},
	{"getDefaultPriority", "()D", nullptr, $PUBLIC, $virtualMethod(StepPattern, getDefaultPriority, double)},
	{"getKernelPattern", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", nullptr, $PUBLIC, $virtualMethod(StepPattern, getKernelPattern, StepPattern*)},
	{"getNextFieldName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(StepPattern, getNextFieldName, $String*)},
	{"getNodeType", "()I", nullptr, $PUBLIC, $virtualMethod(StepPattern, getNodeType, int32_t)},
	{"hasPredicates", "()Z", nullptr, $PROTECTED, $virtualMethod(StepPattern, hasPredicates, bool)},
	{"isWildcard", "()Z", nullptr, $PUBLIC, $virtualMethod(StepPattern, isWildcard, bool)},
	{"reduceKernelPattern", "()V", nullptr, $PUBLIC, $virtualMethod(StepPattern, reduceKernelPattern, void)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setParser, void, $Parser*)},
	{"setPredicates", "(Ljava/util/List;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern;", $PUBLIC, $virtualMethod(StepPattern, setPredicates, StepPattern*, $List*)},
	{"setPriority", "(D)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, setPriority, void, double)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(StepPattern, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(StepPattern, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateGeneralContext", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(StepPattern, translateGeneralContext, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateKernel", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(StepPattern, translateKernel, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateNoContext", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(StepPattern, translateNoContext, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateSimpleContext", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(StepPattern, translateSimpleContext, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(StepPattern, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _StepPattern_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.StepPattern",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativePathPattern",
	nullptr,
	_StepPattern_FieldInfo_,
	_StepPattern_MethodInfo_
};

$Object* allocate$StepPattern($Class* clazz) {
	return $of($alloc(StepPattern));
}

void StepPattern::init$(int32_t axis, int32_t nodeType, $List* predicates) {
	$RelativePathPattern::init$();
	$set(this, _step, nullptr);
	this->_isEpsilon = false;
	$init($Double);
	this->_priority = $Double::MAX_VALUE;
	this->_axis = axis;
	this->_nodeType = nodeType;
	$set(this, _predicates, predicates);
}

void StepPattern::setParser($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$RelativePathPattern::setParser(parser);
	if (this->_predicates != nullptr) {
		{
			$var($Iterator, i$, $nc(this->_predicates)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Predicate, exp, $cast($Predicate, i$->next()));
				{
					$nc(exp)->setParser(parser);
					exp->setParent(this);
				}
			}
		}
	}
}

int32_t StepPattern::getNodeType() {
	return this->_nodeType;
}

void StepPattern::setPriority(double priority) {
	this->_priority = priority;
}

StepPattern* StepPattern::getKernelPattern() {
	return this;
}

bool StepPattern::isWildcard() {
	return this->_isEpsilon && hasPredicates() == false;
}

StepPattern* StepPattern::setPredicates($List* predicates) {
	$set(this, _predicates, predicates);
	return (this);
}

bool StepPattern::hasPredicates() {
	return this->_predicates != nullptr && $nc(this->_predicates)->size() > 0;
}

double StepPattern::getDefaultPriority() {
	$init($Double);
	if (this->_priority != $Double::MAX_VALUE) {
		return this->_priority;
	}
	if (hasPredicates()) {
		return 0.5;
	} else {
		switch (this->_nodeType) {
		case -1:
			{
				return -0.5;
			}
		case 0:
			{
				return 0.0;
			}
		default:
			{
				return (this->_nodeType >= $NodeTest::GTYPE) ? 0.0 : -0.5;
			}
		}
	}
}

int32_t StepPattern::getAxis() {
	return this->_axis;
}

void StepPattern::reduceKernelPattern() {
	this->_isEpsilon = true;
}

$String* StepPattern::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buffer, $new($StringBuffer, "stepPattern(\""_s));
	buffer->append($($Axis::getNames(this->_axis)))->append("\", "_s)->append(this->_isEpsilon ? ($$str({"epsilon{"_s, $($Integer::toString(this->_nodeType)), "}"_s})) : $($Integer::toString(this->_nodeType)));
	if (this->_predicates != nullptr) {
		buffer->append(", "_s)->append($($nc($of(this->_predicates))->toString()));
	}
	return buffer->append(u')')->toString();
}

int32_t StepPattern::analyzeCases() {
	$useLocalCurrentObjectStackCache();
	bool noContext = true;
	int32_t n = $nc(this->_predicates)->size();
	for (int32_t i = 0; i < n && noContext; ++i) {
		$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(i)));
		bool var$1 = $nc(pred)->isNthPositionFilter();
		bool var$0 = var$1 || $nc(pred)->hasPositionCall();
		if (var$0 || $nc(pred)->hasLastCall()) {
			noContext = false;
		}
	}
	if (noContext) {
		return StepPattern::NO_CONTEXT;
	} else if (n == 1) {
		return StepPattern::SIMPLE_CONTEXT;
	}
	return StepPattern::GENERAL_CONTEXT;
}

$String* StepPattern::getNextFieldName() {
	$useLocalCurrentObjectStackCache();
	return $str({"__step_pattern_iter_"_s, $$str($nc($(getXSLTC()))->nextStepPatternSerial())});
}

$Type* StepPattern::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	if (hasPredicates()) {
		{
			$var($Iterator, i$, $nc(this->_predicates)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Predicate, pred, $cast($Predicate, i$->next()));
				{
					$nc(pred)->typeCheck(stable);
				}
			}
		}
		this->_contextCase = analyzeCases();
		$var($Step, step, nullptr);
		if (this->_contextCase == StepPattern::SIMPLE_CONTEXT) {
			$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(0)));
			if ($nc(pred)->isNthPositionFilter()) {
				this->_contextCase = StepPattern::GENERAL_CONTEXT;
				$assign(step, $new($Step, this->_axis, this->_nodeType, this->_predicates));
			} else {
				$assign(step, $new($Step, this->_axis, this->_nodeType, nullptr));
			}
		} else if (this->_contextCase == StepPattern::GENERAL_CONTEXT) {
			{
				$var($Iterator, i$, $nc(this->_predicates)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Predicate, pred, $cast($Predicate, i$->next()));
					{
						$nc(pred)->dontOptimize();
					}
				}
			}
			$assign(step, $new($Step, this->_axis, this->_nodeType, this->_predicates));
		}
		if (step != nullptr) {
			step->setParser($(getParser()));
			step->typeCheck(stable);
			$set(this, _step, step);
		}
	}
	$init($Type);
	return this->_axis == $Axis::CHILD ? $Type::Element : $Type::Attribute;
}

void StepPattern::translateKernel($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_nodeType == $DTM::ELEMENT_NODE) {
		$init($Constants);
		int32_t check = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "isElement"_s, "(I)Z"_s);
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, check, 2)));
		$var($BranchHandle, icmp, il->append(static_cast<$BranchInstruction*>($$new($IFNE, nullptr))));
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr)))));
		$nc(icmp)->setTarget($(il->append($Constants::NOP)));
	} else if (this->_nodeType == $DTM::ATTRIBUTE_NODE) {
		$init($Constants);
		int32_t check = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "isAttribute"_s, "(I)Z"_s);
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, check, 2)));
		$var($BranchHandle, icmp, il->append(static_cast<$BranchInstruction*>($$new($IFNE, nullptr))));
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr)))));
		$nc(icmp)->setTarget($(il->append($Constants::NOP)));
	} else {
		$init($Constants);
		int32_t getEType = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getExpandedTypeID"_s, "(I)I"_s);
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, getEType, 2)));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_nodeType)));
		$var($BranchHandle, icmp, il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPEQ, nullptr))));
		$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO_W, nullptr)))));
		$nc(icmp)->setTarget($(il->append($Constants::NOP)));
	}
}

void StepPattern::translateNoContext($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(methodGen->loadCurrentNode()));
	$init($Constants);
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append($(methodGen->storeCurrentNode()));
	if (!this->_isEpsilon) {
		il->append($(methodGen->loadCurrentNode()));
		translateKernel(classGen, methodGen);
	}
	{
		$var($Iterator, i$, $nc(this->_predicates)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Predicate, pred, $cast($Predicate, i$->next()));
			{
				$var($Expression, exp, $nc(pred)->getExpr());
				$nc(exp)->translateDesynthesized(classGen, methodGen);
				$nc(this->_trueList)->append(exp->_trueList);
				$nc(this->_falseList)->append(exp->_falseList);
			}
		}
	}
	$var($InstructionHandle, restore, nullptr);
	$assign(restore, il->append($(methodGen->storeCurrentNode())));
	backPatchTrueList(restore);
	$var($BranchHandle, skipFalse, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$assign(restore, il->append($(methodGen->storeCurrentNode())));
	backPatchFalseList(restore);
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr)))));
	$nc(skipFalse)->setTarget($(il->append($Constants::NOP)));
}

void StepPattern::translateSimpleContext($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($LocalVariableGen, match, nullptr);
	$init($Constants);
	$assign(match, methodGen->addLocalVariable("step_pattern_tmp1"_s, $($Util::getJCRefType($Constants::NODE_SIG)), nullptr, nullptr));
	$nc(match)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ISTORE, match->getIndex())))));
	if (!this->_isEpsilon) {
		$nc(il)->append(static_cast<$Instruction*>($$new($ILOAD, match->getIndex())));
		translateKernel(classGen, methodGen);
	}
	$nc(il)->append($(methodGen->loadCurrentNode()));
	il->append($(methodGen->loadIterator()));
	index = $nc(cpg)->addMethodref($Constants::MATCHING_ITERATOR, "<init>"_s, $$str({"(I"_s, $Constants::NODE_ITERATOR_SIG, ")V"_s}));
	$nc(this->_step)->translate(classGen, methodGen);
	$var($LocalVariableGen, stepIteratorTemp, methodGen->addLocalVariable("step_pattern_tmp2"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$nc(stepIteratorTemp)->setStart($(il->append(static_cast<$Instruction*>($$new($ASTORE, stepIteratorTemp->getIndex())))));
	il->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::MATCHING_ITERATOR))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$Instruction*>($$new($ILOAD, match->getIndex())));
	stepIteratorTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, stepIteratorTemp->getIndex())))));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, index)));
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($ILOAD, match->getIndex())));
	index = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	il->append($(methodGen->setStartNode()));
	il->append($(methodGen->storeIterator()));
	match->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, match->getIndex())))));
	il->append($(methodGen->storeCurrentNode()));
	$var($Predicate, pred, $cast($Predicate, $nc(this->_predicates)->get(0)));
	$var($Expression, exp, $nc(pred)->getExpr());
	$nc(exp)->translateDesynthesized(classGen, methodGen);
	$var($InstructionHandle, restore, il->append($(methodGen->storeIterator())));
	il->append($(methodGen->storeCurrentNode()));
	exp->backPatchTrueList(restore);
	$var($BranchHandle, skipFalse, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$assign(restore, il->append($(methodGen->storeIterator())));
	il->append($(methodGen->storeCurrentNode()));
	exp->backPatchFalseList(restore);
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr)))));
	$nc(skipFalse)->setTarget($(il->append($Constants::NOP)));
}

void StepPattern::translateGeneralContext($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t iteratorIndex = 0;
	$var($BranchHandle, ifBlock, nullptr);
	$var($LocalVariableGen, iter, nullptr);
	$var($LocalVariableGen, node, nullptr);
	$var($LocalVariableGen, node2, nullptr);
	$var($String, iteratorName, getNextFieldName());
	$init($Constants);
	$assign(node, methodGen->addLocalVariable("step_pattern_tmp1"_s, $($Util::getJCRefType($Constants::NODE_SIG)), nullptr, nullptr));
	$nc(node)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ISTORE, node->getIndex())))));
	$assign(iter, methodGen->addLocalVariable("step_pattern_tmp2"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	if (!classGen->isExternal()) {
		int32_t var$0 = $Constants::ACC_PRIVATE;
		int32_t var$1 = $nc(cpg)->addUtf8(iteratorName);
		int32_t var$2 = cpg->addUtf8($Constants::NODE_ITERATOR_SIG);
		$var($Field, iterator, $new($Field, var$0, var$1, var$2, nullptr, $(cpg->getConstantPool())));
		classGen->addField(iterator);
		iteratorIndex = $nc(cpg)->addFieldref($(classGen->getClassName()), iteratorName, $Constants::NODE_ITERATOR_SIG);
		$nc(il)->append($(classGen->loadTranslet()));
		il->append(static_cast<$Instruction*>($$new($GETFIELD, iteratorIndex)));
		il->append(static_cast<$Instruction*>($Constants::DUP));
		$nc(iter)->setStart($(il->append(static_cast<$Instruction*>($$new($ASTORE, iter->getIndex())))));
		$assign(ifBlock, il->append(static_cast<$BranchInstruction*>($$new($IFNONNULL, nullptr))));
		il->append($(classGen->loadTranslet()));
	}
	$nc(this->_step)->translate(classGen, methodGen);
	$var($InstructionHandle, iterStore, $nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, $nc(iter)->getIndex()))));
	if (!classGen->isExternal()) {
		il->append(static_cast<$Instruction*>($$new($ALOAD, $nc(iter)->getIndex())));
		il->append(static_cast<$Instruction*>($$new($PUTFIELD, iteratorIndex)));
		$nc(ifBlock)->setTarget($(il->append($Constants::NOP)));
	} else {
		$nc(iter)->setStart(iterStore);
	}
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$Instruction*>($$new($ILOAD, node->getIndex())));
	int32_t index = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_PARENT, $Constants::GET_PARENT_SIG);
	il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, index, 2)));
	il->append(static_cast<$Instruction*>($$new($ALOAD, $nc(iter)->getIndex())));
	il->append(static_cast<$Instruction*>($Constants::SWAP));
	il->append($(methodGen->setStartNode()));
	$var($BranchHandle, skipNext, nullptr);
	$var($InstructionHandle, begin, nullptr);
	$var($InstructionHandle, next, nullptr);
	$assign(node2, methodGen->addLocalVariable("step_pattern_tmp3"_s, $($Util::getJCRefType($Constants::NODE_SIG)), nullptr, nullptr));
	$assign(skipNext, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$assign(next, il->append(static_cast<$Instruction*>($$new($ALOAD, $nc(iter)->getIndex()))));
	$nc(node2)->setStart(next);
	$assign(begin, il->append($(methodGen->nextNode())));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	il->append(static_cast<$Instruction*>($$new($ISTORE, node2->getIndex())));
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IFLT, nullptr)))));
	il->append(static_cast<$Instruction*>($$new($ILOAD, node2->getIndex())));
	il->append(static_cast<$Instruction*>($$new($ILOAD, node->getIndex())));
	$nc(iter)->setEnd($(il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPLT, next)))));
	node2->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, node2->getIndex())))));
	node->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, node->getIndex())))));
	$nc(this->_falseList)->add($(il->append(static_cast<$BranchInstruction*>($$new($IF_ICMPNE, nullptr)))));
	$nc(skipNext)->setTarget(begin);
}

void StepPattern::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (hasPredicates()) {
		switch (this->_contextCase) {
		case StepPattern::NO_CONTEXT:
			{
				translateNoContext(classGen, methodGen);
				break;
			}
		case StepPattern::SIMPLE_CONTEXT:
			{
				translateSimpleContext(classGen, methodGen);
				break;
			}
		default:
			{
				translateGeneralContext(classGen, methodGen);
				break;
			}
		}
	} else if (isWildcard()) {
		$init($Constants);
		$nc(il)->append(static_cast<$Instruction*>($Constants::POP));
	} else {
		translateKernel(classGen, methodGen);
	}
}

StepPattern::StepPattern() {
}

$Class* StepPattern::load$($String* name, bool initialize) {
	$loadClass(StepPattern, name, initialize, &_StepPattern_ClassInfo_, allocate$StepPattern);
	return class$;
}

$Class* StepPattern::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com