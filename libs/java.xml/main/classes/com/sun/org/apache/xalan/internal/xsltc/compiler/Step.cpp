#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>

#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/ICONST.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/ISTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/DOM.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/FilterParentPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/NodeTest.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ParentPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/RelativeLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/UnionPathExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/StringBuffer.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ANODE
#undef ATTRIBUTE
#undef CURRENT_NODE_LIST_FILTER_SIG
#undef CURRENT_NODE_LIST_ITERATOR
#undef DOM_INTF
#undef DUP
#undef ELEMENT
#undef GET_NODE_VALUE_ITERATOR
#undef GET_NODE_VALUE_ITERATOR_SIG
#undef NODE_ITERATOR_SIG
#undef NODE_SIG
#undef NTH_ITERATOR_CLASS
#undef NTYPES
#undef PARENT
#undef RETURN_CURRENT
#undef RETURN_PARENT
#undef SELF
#undef SINGLETON_ITERATOR
#undef TRANSLET_SIG

using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $ICONST = ::com::sun::org::apache::bcel::internal::generic::ICONST;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $ISTORE = ::com::sun::org::apache::bcel::internal::generic::ISTORE;
using $Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $DOM = ::com::sun::org::apache::xalan::internal::xsltc::DOM;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $FilterParentPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::FilterParentPath;
using $NodeTest = ::com::sun::org::apache::xalan::internal::xsltc::compiler::NodeTest;
using $ParentLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParentLocationPath;
using $ParentPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ParentPattern;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Predicate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Predicate;
using $RelativeLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::RelativeLocationPath;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $UnionPathExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::UnionPathExpr;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $Collection = ::java::util::Collection;
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

$FieldInfo _Step_FieldInfo_[] = {
	{"_axis", "I", nullptr, $PRIVATE, $field(Step, _axis)},
	{"_predicates", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;", $PRIVATE, $field(Step, _predicates)},
	{"_hadPredicates", "Z", nullptr, $PRIVATE, $field(Step, _hadPredicates)},
	{"_nodeType", "I", nullptr, $PRIVATE, $field(Step, _nodeType)},
	{}
};

$MethodInfo _Step_MethodInfo_[] = {
	{"<init>", "(IILjava/util/List;)V", "(IILjava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;)V", $PUBLIC, $method(Step, init$, void, int32_t, int32_t, $List*)},
	{"addPredicates", "(Ljava/util/List;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;)V", $PUBLIC, $method(Step, addPredicates, void, $List*)},
	{"getAxis", "()I", nullptr, $PUBLIC, $virtualMethod(Step, getAxis, int32_t)},
	{"getNodeType", "()I", nullptr, $PUBLIC, $method(Step, getNodeType, int32_t)},
	{"getPredicates", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Predicate;>;", $PUBLIC, $method(Step, getPredicates, $List*)},
	{"hasParentLocationPath", "()Z", nullptr, $PRIVATE, $method(Step, hasParentLocationPath, bool)},
	{"hasParentPattern", "()Z", nullptr, $PRIVATE, $method(Step, hasParentPattern, bool)},
	{"hasPredicates", "()Z", nullptr, $PRIVATE, $method(Step, hasPredicates, bool)},
	{"isAbbreviatedDDot", "()Z", nullptr, $PUBLIC, $method(Step, isAbbreviatedDDot, bool)},
	{"isAbbreviatedDot", "()Z", nullptr, $PUBLIC, $method(Step, isAbbreviatedDot, bool)},
	{"isPredicate", "()Z", nullptr, $PRIVATE, $method(Step, isPredicate, bool)},
	{"setAxis", "(I)V", nullptr, $PUBLIC, $virtualMethod(Step, setAxis, void, int32_t)},
	{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Step, setParser, void, $Parser*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Step, toString, $String*)},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Step, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translatePredicates", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PUBLIC, $method(Step, translatePredicates, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"translateStep", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;I)V", nullptr, $PRIVATE, $method(Step, translateStep, void, $ClassGenerator*, $MethodGenerator*, int32_t)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Step, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Step_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Step",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.RelativeLocationPath",
	nullptr,
	_Step_FieldInfo_,
	_Step_MethodInfo_
};

$Object* allocate$Step($Class* clazz) {
	return $of($alloc(Step));
}

void Step::init$(int32_t axis, int32_t nodeType, $List* predicates) {
	$RelativeLocationPath::init$();
	this->_hadPredicates = false;
	this->_axis = axis;
	this->_nodeType = nodeType;
	$set(this, _predicates, predicates);
}

void Step::setParser($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$RelativeLocationPath::setParser(parser);
	if (this->_predicates != nullptr) {
		int32_t n = $nc(this->_predicates)->size();
		for (int32_t i = 0; i < n; ++i) {
			$var($Predicate, exp, $cast($Predicate, $nc(this->_predicates)->get(i)));
			$nc(exp)->setParser(parser);
			exp->setParent(this);
		}
	}
}

int32_t Step::getAxis() {
	return this->_axis;
}

void Step::setAxis(int32_t axis) {
	this->_axis = axis;
}

int32_t Step::getNodeType() {
	return this->_nodeType;
}

$List* Step::getPredicates() {
	return this->_predicates;
}

void Step::addPredicates($List* predicates) {
	if (this->_predicates == nullptr) {
		$set(this, _predicates, predicates);
	} else {
		$nc(this->_predicates)->addAll(predicates);
	}
}

bool Step::hasParentPattern() {
	$var($SyntaxTreeNode, parent, getParent());
	return ($instanceOf($ParentPattern, parent) || $instanceOf($ParentLocationPath, parent) || $instanceOf($UnionPathExpr, parent) || $instanceOf($FilterParentPath, parent));
}

bool Step::hasParentLocationPath() {
	return $instanceOf($ParentLocationPath, $(getParent()));
}

bool Step::hasPredicates() {
	return this->_predicates != nullptr && $nc(this->_predicates)->size() > 0;
}

bool Step::isPredicate() {
	$var($SyntaxTreeNode, parent, this);
	while (parent != nullptr) {
		$assign(parent, parent->getParent());
		if ($instanceOf($Predicate, parent)) {
			return true;
		}
	}
	return false;
}

bool Step::isAbbreviatedDot() {
	return this->_nodeType == $NodeTest::ANODE && this->_axis == $Axis::SELF;
}

bool Step::isAbbreviatedDDot() {
	return this->_nodeType == $NodeTest::ANODE && this->_axis == $Axis::PARENT;
}

$Type* Step::typeCheck($SymbolTable* stable) {
	$useLocalCurrentObjectStackCache();
	this->_hadPredicates = hasPredicates();
	if (isAbbreviatedDot()) {
		bool var$1 = hasParentPattern();
		bool var$0 = var$1 || hasPredicates();
		$init($Type);
		$set(this, _type, (var$0 || hasParentLocationPath()) ? $Type::NodeSet : $Type::Node);
	} else {
		$init($Type);
		$set(this, _type, $Type::NodeSet);
	}
	if (this->_predicates != nullptr) {
		{
			$var($Iterator, i$, $nc(this->_predicates)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Expression, pred, $cast($Expression, i$->next()));
				{
					$nc(pred)->typeCheck(stable);
				}
			}
		}
	}
	return this->_type;
}

void Step::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	translateStep(classGen, methodGen, hasPredicates() ? $nc(this->_predicates)->size() - 1 : -1);
}

void Step::translateStep($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t predicateIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (predicateIndex >= 0) {
		translatePredicates(classGen, methodGen, predicateIndex);
	} else {
		int32_t star = 0;
		$var($String, name, nullptr);
		$var($XSLTC, xsltc, $nc($(getParser()))->getXSLTC());
		if (this->_nodeType >= $DTM::NTYPES) {
			$var($List, ni, $nc(xsltc)->getNamesIndex());
			$assign(name, $cast($String, $nc(ni)->get(this->_nodeType - $DTM::NTYPES)));
			star = $nc(name)->lastIndexOf((int32_t)u'*');
		}
		if (this->_axis == $Axis::ATTRIBUTE && this->_nodeType != $NodeTest::ATTRIBUTE && this->_nodeType != $NodeTest::ANODE && !hasParentPattern() && star == 0) {
			$init($Constants);
			int32_t iter = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getTypedAxisIterator"_s, $$str({"(II)"_s, $Constants::NODE_ITERATOR_SIG}));
			$nc(il)->append($(methodGen->loadDOM()));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Axis::ATTRIBUTE)));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_nodeType)));
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, iter, 3)));
			return;
		}
		$var($SyntaxTreeNode, parent, getParent());
		if (isAbbreviatedDot()) {
			$init($Type);
			if (this->_type == $Type::Node) {
				$nc(il)->append($(methodGen->loadContextNode()));
			} else if ($instanceOf($ParentLocationPath, parent)) {
				$init($Constants);
				int32_t init = $nc(cpg)->addMethodref($Constants::SINGLETON_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_SIG, ")V"_s}));
				$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::SINGLETON_ITERATOR))));
				il->append(static_cast<$Instruction*>($Constants::DUP));
				il->append($(methodGen->loadContextNode()));
				il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, init)));
			} else {
				$init($Constants);
				int32_t git = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getAxisIterator"_s, $$str({"(I)"_s, $Constants::NODE_ITERATOR_SIG}));
				$nc(il)->append($(methodGen->loadDOM()));
				il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_axis)));
				il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, git, 2)));
			}
			return;
		}
		if (($instanceOf($ParentLocationPath, parent)) && ($instanceOf($ParentLocationPath, $($nc(parent)->getParent())))) {
			if ((this->_nodeType == $NodeTest::ELEMENT) && (!this->_hadPredicates)) {
				this->_nodeType = $NodeTest::ANODE;
			}
		}
		{
			int32_t git = 0;
			int32_t ty = 0;
			switch (this->_nodeType) {
			case $NodeTest::ATTRIBUTE:
				{
					this->_axis = $Axis::ATTRIBUTE;
				}
			case $NodeTest::ANODE:
				{
					$init($Constants);
					git = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getAxisIterator"_s, $$str({"(I)"_s, $Constants::NODE_ITERATOR_SIG}));
					$nc(il)->append($(methodGen->loadDOM()));
					$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_axis)));
					$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, git, 2)));
					break;
				}
			default:
				{
					if (star > 1) {
						$var($String, namespace$, nullptr);
						if (this->_axis == $Axis::ATTRIBUTE) {
							$assign(namespace$, $nc(name)->substring(0, star - 2));
						} else {
							$assign(namespace$, $nc(name)->substring(0, star - 1));
						}
						int32_t nsType = $nc(xsltc)->registerNamespace(namespace$);
						$init($Constants);
						int32_t ns = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getNamespaceAxisIterator"_s, $$str({"(II)"_s, $Constants::NODE_ITERATOR_SIG}));
						$nc(il)->append($(methodGen->loadDOM()));
						il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_axis)));
						il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nsType)));
						il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, ns, 3)));
						break;
					}
				}
			case $NodeTest::ELEMENT:
				{
					$init($Constants);
					ty = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getTypedAxisIterator"_s, $$str({"(II)"_s, $Constants::NODE_ITERATOR_SIG}));
					$nc(il)->append($(methodGen->loadDOM()));
					$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_axis)));
					$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, this->_nodeType)));
					$nc(il)->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, ty, 3)));
					break;
				}
			}
		}
	}
}

void Step::translatePredicates($ClassGenerator* classGen, $MethodGenerator* methodGen, int32_t predicateIndex) {
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	int32_t idx = 0;
	if (predicateIndex < 0) {
		translateStep(classGen, methodGen, predicateIndex);
	} else {
		$var($Predicate, predicate, $cast($Predicate, $nc(this->_predicates)->get(predicateIndex--)));
		if ($nc(predicate)->isNodeValueTest()) {
			$var(Step, step, predicate->getStep());
			$nc(il)->append($(methodGen->loadDOM()));
			if ($nc(step)->isAbbreviatedDot()) {
				translateStep(classGen, methodGen, predicateIndex);
				il->append(static_cast<$Instruction*>($$new($ICONST, $DOM::RETURN_CURRENT)));
			} else {
				$var($ParentLocationPath, path, $new($ParentLocationPath, this, step));
				$set(this, _parent, ($set(step, _parent, path)));
				try {
					path->typeCheck($($nc($(getParser()))->getSymbolTable()));
				} catch ($TypeCheckError& e) {
				}
				translateStep(classGen, methodGen, predicateIndex);
				path->translateStep(classGen, methodGen);
				il->append(static_cast<$Instruction*>($$new($ICONST, $DOM::RETURN_PARENT)));
			}
			predicate->translate(classGen, methodGen);
			$init($Constants);
			idx = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, $Constants::GET_NODE_VALUE_ITERATOR, $Constants::GET_NODE_VALUE_ITERATOR_SIG);
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, idx, 5)));
		} else if (predicate->isNthDescendant()) {
			$nc(il)->append($(methodGen->loadDOM()));
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, predicate->getPosType())));
			predicate->translate(classGen, methodGen);
			il->append(static_cast<$Instruction*>($$new($ICONST, 0)));
			$init($Constants);
			idx = $nc(cpg)->addInterfaceMethodref($Constants::DOM_INTF, "getNthDescendant"_s, $$str({"(IIZ)"_s, $Constants::NODE_ITERATOR_SIG}));
			il->append(static_cast<$Instruction*>($$new($INVOKEINTERFACE, idx, 4)));
		} else if (predicate->isNthPositionFilter()) {
			$init($Constants);
			idx = $nc(cpg)->addMethodref($Constants::NTH_ITERATOR_CLASS, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, "I)V"_s}));
			translatePredicates(classGen, methodGen, predicateIndex);
			$var($LocalVariableGen, iteratorTemp, methodGen->addLocalVariable("step_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
			$nc(iteratorTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, iteratorTemp->getIndex())))));
			predicate->translate(classGen, methodGen);
			$var($LocalVariableGen, predicateValueTemp, methodGen->addLocalVariable("step_tmp2"_s, $($Util::getJCRefType("I"_s)), nullptr, nullptr));
			$nc(predicateValueTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ISTORE, predicateValueTemp->getIndex())))));
			$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::NTH_ITERATOR_CLASS))));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			iteratorTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, iteratorTemp->getIndex())))));
			predicateValueTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ILOAD, predicateValueTemp->getIndex())))));
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, idx)));
		} else {
			$init($Constants);
			idx = $nc(cpg)->addMethodref($Constants::CURRENT_NODE_LIST_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, $Constants::CURRENT_NODE_LIST_FILTER_SIG, $Constants::NODE_SIG, $Constants::TRANSLET_SIG, ")V"_s}));
			translatePredicates(classGen, methodGen, predicateIndex);
			$var($LocalVariableGen, iteratorTemp, methodGen->addLocalVariable("step_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
			$nc(iteratorTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, iteratorTemp->getIndex())))));
			predicate->translateFilter(classGen, methodGen);
			$var($LocalVariableGen, filterTemp, methodGen->addLocalVariable("step_tmp2"_s, $($Util::getJCRefType($Constants::CURRENT_NODE_LIST_FILTER_SIG)), nullptr, nullptr));
			$nc(filterTemp)->setStart($($nc(il)->append(static_cast<$Instruction*>($$new($ASTORE, filterTemp->getIndex())))));
			$nc(il)->append(static_cast<$Instruction*>($$new($NEW, cpg->addClass($Constants::CURRENT_NODE_LIST_ITERATOR))));
			il->append(static_cast<$Instruction*>($Constants::DUP));
			iteratorTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, iteratorTemp->getIndex())))));
			filterTemp->setEnd($(il->append(static_cast<$Instruction*>($$new($ALOAD, filterTemp->getIndex())))));
			il->append($(methodGen->loadCurrentNode()));
			il->append($(classGen->loadTranslet()));
			if (classGen->isExternal()) {
				$var($String, className, classGen->getClassName());
				il->append(static_cast<$Instruction*>($$new($CHECKCAST, cpg->addClass(className))));
			}
			il->append(static_cast<$Instruction*>($$new($INVOKESPECIAL, idx)));
		}
	}
}

$String* Step::toString() {
	$useLocalCurrentObjectStackCache();
	$var($StringBuffer, buffer, $new($StringBuffer, "step(\""_s));
	buffer->append($($Axis::getNames(this->_axis)))->append("\", "_s)->append(this->_nodeType);
	if (this->_predicates != nullptr) {
		{
			$var($Iterator, i$, $nc(this->_predicates)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Expression, pred, $cast($Expression, i$->next()));
				{
					buffer->append(", "_s)->append($($nc(pred)->toString()));
				}
			}
		}
	}
	return buffer->append(u')')->toString();
}

Step::Step() {
}

$Class* Step::load$($String* name, bool initialize) {
	$loadClass(Step, name, initialize, &_Step_ClassInfo_, allocate$Step);
	return class$;
}

$Class* Step::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com