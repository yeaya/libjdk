#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentLocationPath.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <jcpp.h>

#undef ANCESTOR
#undef ANCESTORORSELF
#undef ATTRIBUTE_NODE
#undef CHILD
#undef DESCENDANT
#undef DESCENDANTORSELF
#undef DOM_INTF
#undef DUP
#undef FOLLOWING
#undef FOLLOWINGSIBLING
#undef NODE_ITERATOR_BASE
#undef NODE_ITERATOR_SIG
#undef ORDER_ITERATOR
#undef ORDER_ITERATOR_SIG
#undef PARENT
#undef PRECEDING
#undef PRECEDINGSIBLING
#undef STEP_ITERATOR_CLASS
#undef SWAP

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $RelativeLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _ParentLocationPath_FieldInfo_[] = {
	{"_step", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(ParentLocationPath, _step)},
	{"_path", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath;", nullptr, $PRIVATE | $FINAL, $field(ParentLocationPath, _path)},
	{"stype", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PRIVATE, $field(ParentLocationPath, stype)},
	{"_orderNodes", "Z", nullptr, $PRIVATE, $field(ParentLocationPath, _orderNodes)},
	{"_axisMismatch", "Z", nullptr, $PRIVATE, $field(ParentLocationPath, _axisMismatch)},
	{}
};

$MethodInfo _ParentLocationPath_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(ParentLocationPath, init$, void, $RelativeLocationPath*, $Expression*)},
	{"checkAxisMismatch", "()Z", nullptr, $PUBLIC, $method(ParentLocationPath, checkAxisMismatch, bool)},
	{"enableNodeOrdering", "()V", nullptr, $PUBLIC, $method(ParentLocationPath, enableNodeOrdering, void)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, getAxis, int32_t)},
	{"getPath", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath;", nullptr, $PUBLIC, $method(ParentLocationPath, getPath, $RelativeLocationPath*)},
	{"getStep", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(ParentLocationPath, getStep, $Expression*)},
	{"setAxis", "(I)V", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, setAxis, void, int32_t)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateStep", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(ParentLocationPath, translateStep, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(ParentLocationPath, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _ParentLocationPath_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.ParentLocationPath",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath",
	nullptr,
	_ParentLocationPath_FieldInfo_,
	_ParentLocationPath_MethodInfo_
};

$Object* allocate$ParentLocationPath($Class* clazz) {
	return $of($alloc(ParentLocationPath));
}

void ParentLocationPath::init$($RelativeLocationPath* path, $Expression* step) {
	$RelativeLocationPath::init$();
	this->_orderNodes = false;
	this->_axisMismatch = false;
	$set(this, _path, path);
	$set(this, _step, step);
	$nc(this->_path)->setParent(this);
	$nc(this->_step)->setParent(this);
	if ($instanceOf($Step, this->_step)) {
		this->_axisMismatch = checkAxisMismatch();
	}
}

void ParentLocationPath::setAxis(int32_t axis) {
	$nc(this->_path)->setAxis(axis);
}

int32_t ParentLocationPath::getAxis() {
	return $nc(this->_path)->getAxis();
}

$RelativeLocationPath* ParentLocationPath::getPath() {
	return (this->_path);
}

$Expression* ParentLocationPath::getStep() {
	return (this->_step);
}

void ParentLocationPath::setParser($Parser* parser) {
	$RelativeLocationPath::setParser(parser);
	$nc(this->_step)->setParser(parser);
	$nc(this->_path)->setParser(parser);
}

$String* ParentLocationPath::toString() {
	return $str({"ParentLocationPath("_s, this->_path, ", "_s, this->_step, $$str(u')')});
}

$Type* ParentLocationPath::typeCheck($SymbolTable* stable) {
	$set(this, stype, $nc(this->_step)->typeCheck(stable));
	$nc(this->_path)->typeCheck(stable);
	if (this->_axisMismatch) {
		enableNodeOrdering();
	}
	$init($Type);
	return $set(this, _type, $Type::NodeSet);
}

void ParentLocationPath::enableNodeOrdering() {
	$var($SyntaxTreeNode, parent, getParent());
	if ($instanceOf(ParentLocationPath, parent)) {
		$nc(($cast(ParentLocationPath, parent)))->enableNodeOrdering();
	} else {
		this->_orderNodes = true;
	}
}

bool ParentLocationPath::checkAxisMismatch() {
	int32_t left = $nc(this->_path)->getAxis();
	int32_t right = $nc(($cast($Step, this->_step)))->getAxis();
	if (((left == $Axis::ANCESTOR) || (left == $Axis::ANCESTORORSELF)) && ((right == $Axis::CHILD) || (right == $Axis::DESCENDANT) || (right == $Axis::DESCENDANTORSELF) || (right == $Axis::PARENT) || (right == $Axis::PRECEDING) || (right == $Axis::PRECEDINGSIBLING))) {
		return true;
	}
	if ((left == $Axis::CHILD) && (right == $Axis::ANCESTOR) || (right == $Axis::ANCESTORORSELF) || (right == $Axis::PARENT) || (right == $Axis::PRECEDING)) {
		return true;
	}
	if ((left == $Axis::DESCENDANT) || (left == $Axis::DESCENDANTORSELF)) {
		return true;
	}
	if (((left == $Axis::FOLLOWING) || (left == $Axis::FOLLOWINGSIBLING)) && ((right == $Axis::FOLLOWING) || (right == $Axis::PARENT) || (right == $Axis::PRECEDING) || (right == $Axis::PRECEDINGSIBLING))) {
		return true;
	}
	if (((left == $Axis::PRECEDING) || (left == $Axis::PRECEDINGSIBLING)) && ((right == $Axis::DESCENDANT) || (right == $Axis::DESCENDANTORSELF) || (right == $Axis::FOLLOWING) || (right == $Axis::FOLLOWINGSIBLING) || (right == $Axis::PARENT) || (right == $Axis::PRECEDING) || (right == $Axis::PRECEDINGSIBLING))) {
		return true;
	}
	if ((right == $Axis::FOLLOWING) && (left == $Axis::CHILD)) {
		if ($instanceOf($Step, this->_path)) {
			int32_t type = $nc(($cast($Step, this->_path)))->getNodeType();
			if (type == $DTM::ATTRIBUTE_NODE) {
				return true;
			}
		}
	}
	return false;
}

void ParentLocationPath::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_path)->translate(classGen, methodGen);
	translateStep(classGen, methodGen);
}

void ParentLocationPath::translateStep($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	$var($LocalVariableGen, pathTemp, methodGen->addLocalVariable("parent_location_path_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$nc(pathTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, pathTemp->getIndex())))));
	$nc(this->_step)->translate(classGen, methodGen);
	$var($LocalVariableGen, stepTemp, methodGen->addLocalVariable("parent_location_path_tmp2"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$nc(stepTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, stepTemp->getIndex())))));
	int32_t initSI = $nc(cpg)->addMethodref($Constants::STEP_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, $Constants::NODE_ITERATOR_SIG, ")V"_s}));
	$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::STEP_ITERATOR_CLASS))));
	il->append(static_cast<$Instruction*>($Constants::DUP));
	pathTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, pathTemp->getIndex())))));
	stepTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, stepTemp->getIndex())))));
	il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, initSI)));
	$var($Expression, stp, this->_step);
	if ($instanceOf(ParentLocationPath, stp)) {
		$assign(stp, $nc(($cast(ParentLocationPath, stp)))->getStep());
	}
	if (($instanceOf($Step, this->_path)) && ($instanceOf($Step, stp))) {
		int32_t path = $nc(($cast($Step, this->_path)))->getAxis();
		int32_t step = $nc(($cast($Step, stp)))->getAxis();
		if ((path == $Axis::DESCENDANTORSELF && step == $Axis::CHILD) || (path == $Axis::PRECEDING && step == $Axis::PARENT)) {
			int32_t incl = cpg->addMethodref($Constants::NODE_ITERATOR_BASE, "includeSelf"_s, $$str({"()"_s, $Constants::NODE_ITERATOR_SIG}));
			il->append(static_cast<$Instruction*>($$new($INVOKEVIRTUAL, incl)));
		}
	}
	if (this->_orderNodes) {
		int32_t order = cpg->addInterfaceMethodref($Constants::DOM_INTF, $Constants::ORDER_ITERATOR, $Constants::ORDER_ITERATOR_SIG);
		il->append($(methodGen->loadDOM()));
		il->append(static_cast<$Instruction*>($Constants::SWAP));
		il->append($(methodGen->loadContextNode()));
		il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, order, 3)));
	}
}

ParentLocationPath::ParentLocationPath() {
}

$Class* ParentLocationPath::load$($String* name, bool initialize) {
	$loadClass(ParentLocationPath, name, initialize, &_ParentLocationPath_ClassInfo_, allocate$ParentLocationPath);
	return class$;
}

$Class* ParentLocationPath::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com