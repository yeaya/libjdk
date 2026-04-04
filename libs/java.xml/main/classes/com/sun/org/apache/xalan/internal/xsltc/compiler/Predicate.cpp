#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Predicate.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AbsoluteLocationPath.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/BooleanExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/EqualityExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/LiteralExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/PositionCall.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/QName.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Step.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/StepPattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/TopLevelElement.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/BooleanType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/FilterGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NumberType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ReferenceType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ResultTreeType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TestGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/Operators.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PUBLIC
#undef ACC_SUPER
#undef ALOAD_0
#undef BOOLEAN
#undef CURRENT_NODE_LIST_FILTER
#undef DOM_FIELD
#undef DOM_INTF_SIG
#undef DUP
#undef EQ
#undef INT
#undef IRETURN
#undef NODE_ITERATOR_SIG
#undef STRING_CLASS
#undef TRANSLET_SIG

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $AbsoluteLocationPath = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AbsoluteLocationPath;
using $BooleanExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::BooleanExpr;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $EqualityExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::EqualityExpr;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $LiteralExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::LiteralExpr;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $PositionCall = ::com::sun::org::apache::xalan::internal::xsltc::compiler::PositionCall;
using $QName = ::com::sun::org::apache::xalan::internal::xsltc::compiler::QName;
using $Step = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Step;
using $StepPattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::StepPattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $TopLevelElement = ::com::sun::org::apache::xalan::internal::xsltc::compiler::TopLevelElement;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $BooleanType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::BooleanType;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $FilterGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::FilterGenerator;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NumberType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NumberType;
using $ReferenceType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ReferenceType;
using $ResultTreeType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ResultTreeType;
using $TestGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TestGenerator;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Operators = ::com::sun::org::apache::xalan::internal::xsltc::runtime::Operators;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

int32_t Predicate::hashCode() {
	 return this->$Expression::hashCode();
}

bool Predicate::equals(Object$* arg0) {
	 return this->$Expression::equals(arg0);
}

$Object* Predicate::clone() {
	 return this->$Expression::clone();
}

void Predicate::finalize() {
	this->$Expression::finalize();
}

void Predicate::init$($Expression* exp) {
	$Expression::init$();
	$set(this, _exp, nullptr);
	this->_canOptimize = true;
	this->_nthPositionFilter = false;
	this->_nthDescendant = false;
	this->_ptype = -1;
	$set(this, _className, nullptr);
	$set(this, _closureVars, nullptr);
	$set(this, _parentClosure, nullptr);
	$set(this, _value, nullptr);
	$set(this, _step, nullptr);
	$set(this, _exp, exp);
	$nc(this->_exp)->setParent(this);
}

void Predicate::setParser($Parser* parser) {
	$Expression::setParser(parser);
	$nc(this->_exp)->setParser(parser);
}

bool Predicate::isNthPositionFilter() {
	return this->_nthPositionFilter;
}

bool Predicate::isNthDescendant() {
	return this->_nthDescendant;
}

void Predicate::dontOptimize() {
	this->_canOptimize = false;
}

bool Predicate::hasPositionCall() {
	return $nc(this->_exp)->hasPositionCall();
}

bool Predicate::hasLastCall() {
	return $nc(this->_exp)->hasLastCall();
}

bool Predicate::inInnerClass() {
	return (this->_className != nullptr);
}

$Closure* Predicate::getParentClosure() {
	if (this->_parentClosure == nullptr) {
		$var($SyntaxTreeNode, node, getParent());
		do {
			if ($instanceOf($Closure, node)) {
				$set(this, _parentClosure, $cast($Closure, node));
				break;
			}
			if ($instanceOf($TopLevelElement, node)) {
				break;
			}
			$assign(node, $nc(node)->getParent());
		} while (node != nullptr);
	}
	return this->_parentClosure;
}

$String* Predicate::getInnerClassName() {
	return this->_className;
}

void Predicate::addVariable($VariableRefBase* variableRef) {
	if (this->_closureVars == nullptr) {
		$set(this, _closureVars, $new($ArrayList));
	}
	if (!$nc(this->_closureVars)->contains(variableRef)) {
		this->_closureVars->add(variableRef);
		$var($Closure, parentClosure, getParentClosure());
		if (parentClosure != nullptr) {
			parentClosure->addVariable(variableRef);
		}
	}
}

int32_t Predicate::getPosType() {
	$useLocalObjectStack();
	if (this->_ptype == -1) {
		$var($SyntaxTreeNode, parent, getParent());
		if ($instanceOf($StepPattern, parent)) {
			this->_ptype = $cast($StepPattern, parent)->getNodeType();
		} else if ($instanceOf($AbsoluteLocationPath, parent)) {
			$var($AbsoluteLocationPath, path, $cast($AbsoluteLocationPath, parent));
			$var($Expression, exp, path->getPath());
			if ($instanceOf($Step, exp)) {
				this->_ptype = $cast($Step, exp)->getNodeType();
			}
		} else if ($instanceOf($VariableRefBase, parent)) {
			$var($VariableRefBase, ref, $cast($VariableRefBase, parent));
			$var($VariableBase, var, ref->getVariable());
			$var($Expression, exp, $nc(var)->getExpression());
			if ($instanceOf($Step, exp)) {
				this->_ptype = $cast($Step, exp)->getNodeType();
			}
		} else if ($instanceOf($Step, parent)) {
			this->_ptype = $cast($Step, parent)->getNodeType();
		}
	}
	return this->_ptype;
}

bool Predicate::parentIsPattern() {
	return ($instanceOf($Pattern, $(getParent())));
}

$Expression* Predicate::getExpr() {
	return this->_exp;
}

$String* Predicate::toString() {
	return $str({"pred("_s, this->_exp, $$str(u')')});
}

$Type* Predicate::typeCheck($SymbolTable* stable) {
	$useLocalObjectStack();
	$var($Type, texp, $nc(this->_exp)->typeCheck(stable));
	if ($instanceOf($ReferenceType, texp)) {
		$init($Type);
		$set(this, _exp, $new($CastExpr, this->_exp, $assign(texp, $Type::Real)));
	}
	if ($instanceOf($ResultTreeType, texp)) {
		$init($Type);
		$set(this, _exp, $new($CastExpr, this->_exp, $Type::Boolean));
		$set(this, _exp, $new($CastExpr, this->_exp, $Type::Real));
		$assign(texp, this->_exp->typeCheck(stable));
	}
	if ($instanceOf($NumberType, texp)) {
		if ($instanceOf($IntType, texp) == false) {
			$init($Type);
			$set(this, _exp, $new($CastExpr, this->_exp, $Type::Int));
		}
		if (this->_canOptimize) {
			bool var$0 = !$nc(this->_exp)->hasLastCall();
			this->_nthPositionFilter = var$0 && !this->_exp->hasPositionCall();
			if (this->_nthPositionFilter) {
				$var($SyntaxTreeNode, parent, getParent());
				this->_nthDescendant = ($instanceOf($Step, parent)) && ($instanceOf($AbsoluteLocationPath, $(parent->getParent())));
				$init($Type);
				return $set(this, _type, $Type::NodeSet);
			}
		}
		this->_nthPositionFilter = (this->_nthDescendant = false);
		$var($QName, position, $$nc(getParser())->getQNameIgnoreDefaultNs("position"_s));
		$var($PositionCall, positionCall, $new($PositionCall, position));
		positionCall->setParser($(getParser()));
		positionCall->setParent(this);
		$set(this, _exp, $new($EqualityExpr, $Operators::EQ, positionCall, this->_exp));
		$init($Type);
		if (this->_exp->typeCheck(stable) != $Type::Boolean) {
			$set(this, _exp, $new($CastExpr, this->_exp, $Type::Boolean));
		}
		return $set(this, _type, $Type::Boolean);
	} else {
		if ($instanceOf($BooleanType, texp) == false) {
			$init($Type);
			$set(this, _exp, $new($CastExpr, this->_exp, $Type::Boolean));
		}
		$init($Type);
		return $set(this, _type, $Type::Boolean);
	}
}

void Predicate::compileFilter($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($TestGenerator, testGen, nullptr);
	$var($LocalVariableGen, local, nullptr);
	$var($FilterGenerator, filterGen, nullptr);
	$set(this, _className, $$nc(getXSLTC())->getHelperClassName());
	$var($String, var$0, this->_className);
	$var($String, var$1, "java.lang.Object"_s);
	$var($String, var$2, toString());
	$init($Constants);
	$var($StringArray, var$3, $new($StringArray, {$Constants::CURRENT_NODE_LIST_FILTER}));
	$assign(filterGen, $new($FilterGenerator, var$0, var$1, var$2, $Constants::ACC_PUBLIC | $Constants::ACC_SUPER, var$3, $($nc(classGen)->getStylesheet())));
	$var($ConstantPoolGen, cpg, filterGen->getConstantPool());
	int32_t length = (this->_closureVars == nullptr) ? 0 : this->_closureVars->size();
	for (int32_t i = 0; i < length; ++i) {
		$var($VariableBase, var, $$sure($VariableRefBase, $nc(this->_closureVars)->get(i))->getVariable());
		int32_t var$4 = $nc(cpg)->addUtf8($($nc(var)->getEscapedName()));
		int32_t var$5 = cpg->addUtf8($($$nc(var->getType())->toSignature()));
		filterGen->addField($$new($Field, $Constants::ACC_PUBLIC, var$4, var$5, nullptr, $(cpg->getConstantPool())));
	}
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$assign(testGen, $new($TestGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::BOOLEAN, $$new($TypeArray, {
		$1Type::INT,
		$1Type::INT,
		$1Type::INT,
		$1Type::INT,
		$($Util::getJCRefType($Constants::TRANSLET_SIG)),
		$($Util::getJCRefType($Constants::NODE_ITERATOR_SIG))
	}), $$new($StringArray, {
		"node"_s,
		"position"_s,
		"last"_s,
		"current"_s,
		"translet"_s,
		"iterator"_s
	}), "test"_s, this->_className, il, cpg));
	$assign(local, testGen->addLocalVariable("document"_s, $($Util::getJCRefType($Constants::DOM_INTF_SIG)), nullptr, nullptr));
	$var($String, className, classGen->getClassName());
	il->append($(filterGen->loadTranslet()));
	il->append($$new($CHECKCAST, $nc(cpg)->addClass(className)));
	il->append($$new($GETFIELD, cpg->addFieldref(className, $Constants::DOM_FIELD, $Constants::DOM_INTF_SIG)));
	$nc(local)->setStart($(il->append($$new($ASTORE, $nc(local)->getIndex()))));
	testGen->setDomIndex(local->getIndex());
	$nc(this->_exp)->translate(filterGen, testGen);
	il->append($Constants::IRETURN);
	filterGen->addEmptyConstructor($Constants::ACC_PUBLIC);
	filterGen->addMethod(testGen);
	$$nc(getXSLTC())->dumpClass($(filterGen->getJavaClass()));
}

bool Predicate::isBooleanTest() {
	return ($instanceOf($BooleanExpr, this->_exp));
}

bool Predicate::isNodeValueTest() {
	if (!this->_canOptimize) {
		return false;
	}
	bool var$0 = getStep() != nullptr;
	return (var$0 && getCompareValue() != nullptr);
}

$Step* Predicate::getStep() {
	$useLocalObjectStack();
	if (this->_step != nullptr) {
		return this->_step;
	}
	if (this->_exp == nullptr) {
		return nullptr;
	}
	if ($instanceOf($EqualityExpr, this->_exp)) {
		$var($EqualityExpr, exp, $cast($EqualityExpr, this->_exp));
		$var($Expression, left, $nc(exp)->getLeft());
		$var($Expression, right, exp->getRight());
		if ($instanceOf($CastExpr, left)) {
			$assign(left, $cast($CastExpr, left)->getExpr());
		}
		if ($instanceOf($Step, left)) {
			$set(this, _step, $cast($Step, left));
		}
		if ($instanceOf($CastExpr, right)) {
			$assign(right, $cast($CastExpr, right)->getExpr());
		}
		if ($instanceOf($Step, right)) {
			$set(this, _step, $cast($Step, right));
		}
	}
	return this->_step;
}

$Expression* Predicate::getCompareValue() {
	$useLocalObjectStack();
	if (this->_value != nullptr) {
		return this->_value;
	}
	if (this->_exp == nullptr) {
		return nullptr;
	}
	if ($instanceOf($EqualityExpr, this->_exp)) {
		$var($EqualityExpr, exp, $cast($EqualityExpr, this->_exp));
		$var($Expression, left, $nc(exp)->getLeft());
		$var($Expression, right, exp->getRight());
		if ($instanceOf($LiteralExpr, left)) {
			$set(this, _value, left);
			return this->_value;
		}
		$init($Type);
		if ($instanceOf($VariableRefBase, left) && left->getType() == $Type::String) {
			$set(this, _value, left);
			return this->_value;
		}
		if ($instanceOf($LiteralExpr, right)) {
			$set(this, _value, right);
			return this->_value;
		}
		if ($instanceOf($VariableRefBase, right) && right->getType() == $Type::String) {
			$set(this, _value, right);
			return this->_value;
		}
	}
	return nullptr;
}

void Predicate::translateFilter($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	compileFilter(classGen, methodGen);
	$nc(il)->append($$new($NEW, $nc(cpg)->addClass(this->_className)));
	$init($Constants);
	il->append($Constants::DUP);
	il->append($$new($INVOKESPECIAL, cpg->addMethodref(this->_className, "<init>"_s, "()V"_s)));
	int32_t length = (this->_closureVars == nullptr) ? 0 : this->_closureVars->size();
	for (int32_t i = 0; i < length; ++i) {
		$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(this->_closureVars)->get(i)));
		$var($VariableBase, var, $nc(varRef)->getVariable());
		$var($Type, varType, $nc(var)->getType());
		il->append($Constants::DUP);
		$var($Closure, variableClosure, this->_parentClosure);
		while (variableClosure != nullptr) {
			if (variableClosure->inInnerClass()) {
				break;
			}
			$assign(variableClosure, variableClosure->getParentClosure());
		}
		if (variableClosure != nullptr) {
			il->append($Constants::ALOAD_0);
			$var($String, var$0, variableClosure->getInnerClassName());
			$var($String, var$1, var->getEscapedName());
			il->append($$new($GETFIELD, cpg->addFieldref(var$0, var$1, $($nc(varType)->toSignature()))));
		} else {
			il->append($(var->loadInstruction()));
		}
		$var($String, var$2, this->_className);
		$var($String, var$3, var->getEscapedName());
		il->append($$new($PUTFIELD, cpg->addFieldref(var$2, var$3, $($nc(varType)->toSignature()))));
	}
}

void Predicate::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	if (this->_nthPositionFilter || this->_nthDescendant) {
		$nc(this->_exp)->translate(classGen, methodGen);
	} else {
		bool var$0 = isNodeValueTest();
		if (var$0 && ($instanceOf($Step, $(getParent())))) {
			$nc(this->_value)->translate(classGen, methodGen);
			$init($Constants);
			$nc(il)->append($$new($CHECKCAST, $nc(cpg)->addClass($Constants::STRING_CLASS)));
			il->append($$new($PUSH, cpg, $nc($cast($EqualityExpr, this->_exp))->getOp()));
		} else {
			translateFilter(classGen, methodGen);
		}
	}
}

Predicate::Predicate() {
}

$Class* Predicate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"_exp", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(Predicate, _exp)},
		{"_canOptimize", "Z", nullptr, $PRIVATE, $field(Predicate, _canOptimize)},
		{"_nthPositionFilter", "Z", nullptr, $PRIVATE, $field(Predicate, _nthPositionFilter)},
		{"_nthDescendant", "Z", nullptr, $PRIVATE, $field(Predicate, _nthDescendant)},
		{"_ptype", "I", nullptr, 0, $field(Predicate, _ptype)},
		{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Predicate, _className)},
		{"_closureVars", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;>;", $PRIVATE, $field(Predicate, _closureVars)},
		{"_parentClosure", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PRIVATE, $field(Predicate, _parentClosure)},
		{"_value", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(Predicate, _value)},
		{"_step", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Step;", nullptr, $PRIVATE, $field(Predicate, _step)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;)V", nullptr, $PUBLIC, $method(Predicate, init$, void, $Expression*)},
		{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;)V", nullptr, $PUBLIC, $virtualMethod(Predicate, addVariable, void, $VariableRefBase*)},
		{"compileFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(Predicate, compileFilter, void, $ClassGenerator*, $MethodGenerator*)},
		{"dontOptimize", "()V", nullptr, $PUBLIC, $method(Predicate, dontOptimize, void)},
		{"getCompareValue", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(Predicate, getCompareValue, $Expression*)},
		{"getExpr", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PUBLIC, $method(Predicate, getExpr, $Expression*)},
		{"getInnerClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Predicate, getInnerClassName, $String*)},
		{"getParentClosure", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PUBLIC, $virtualMethod(Predicate, getParentClosure, $Closure*)},
		{"getPosType", "()I", nullptr, $PUBLIC, $method(Predicate, getPosType, int32_t)},
		{"getStep", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Step;", nullptr, $PUBLIC, $method(Predicate, getStep, $Step*)},
		{"hasLastCall", "()Z", nullptr, $PUBLIC, $virtualMethod(Predicate, hasLastCall, bool)},
		{"hasPositionCall", "()Z", nullptr, $PUBLIC, $virtualMethod(Predicate, hasPositionCall, bool)},
		{"inInnerClass", "()Z", nullptr, $PUBLIC, $virtualMethod(Predicate, inInnerClass, bool)},
		{"isBooleanTest", "()Z", nullptr, $PUBLIC, $method(Predicate, isBooleanTest, bool)},
		{"isNodeValueTest", "()Z", nullptr, $PUBLIC, $method(Predicate, isNodeValueTest, bool)},
		{"isNthDescendant", "()Z", nullptr, $PUBLIC, $method(Predicate, isNthDescendant, bool)},
		{"isNthPositionFilter", "()Z", nullptr, $PUBLIC, $method(Predicate, isNthPositionFilter, bool)},
		{"parentIsPattern", "()Z", nullptr, $PUBLIC, $method(Predicate, parentIsPattern, bool)},
		{"setParser", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Predicate, setParser, void, $Parser*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Predicate, toString, $String*)},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Predicate, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"translateFilter", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Predicate, translateFilter, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Predicate, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Predicate",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Expression",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Closure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Predicate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Predicate));
	});
	return class$;
}

$Class* Predicate::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com