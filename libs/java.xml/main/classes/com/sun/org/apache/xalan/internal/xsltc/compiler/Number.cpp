#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Number.h>
#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ArithmeticInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/BasicType.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/BranchInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CHECKCAST.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Pattern.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MatchGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeCounterGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/RealType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ACC_FINAL
#undef ACC_PRIVATE
#undef ACC_PUBLIC
#undef ACC_SUPER
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef BOOLEAN
#undef CHARACTERSW
#undef CHARACTERSW_SIG
#undef DADD
#undef DOM_INTF_SIG
#undef DUP
#undef EMPTYSTRING
#undef ICONST_0
#undef ICONST_1
#undef INT
#undef IRETURN
#undef ITERATOR_FIELD_SIG
#undef LEVEL_ANY
#undef LEVEL_MULTIPLE
#undef LEVEL_SINGLE
#undef MATH_CLASS
#undef NODE_COUNTER
#undef NODE_COUNTER_SIG
#undef NODE_ITERATOR_SIG
#undef NOP
#undef RETURN
#undef SET_START_NODE
#undef STRING_SIG
#undef SWAP
#undef TRANSLET_CLASS
#undef TRANSLET_INTF_SIG
#undef TRANSLET_SIG
#undef VOID

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchHandle = ::com::sun::org::apache::bcel::internal::generic::BranchHandle;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $MatchGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MatchGenerator;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeCounterGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeCounterGenerator;
using $RealType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::RealType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
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

int32_t Number::hashCode() {
	 return this->$Instruction::hashCode();
}

bool Number::equals(Object$* arg0) {
	 return this->$Instruction::equals(arg0);
}

$Object* Number::clone() {
	 return this->$Instruction::clone();
}

$String* Number::toString() {
	 return this->$Instruction::toString();
}

void Number::finalize() {
	this->$Instruction::finalize();
}

$StringArray* Number::ClassNames = nullptr;
$StringArray* Number::FieldNames = nullptr;

void Number::init$() {
	$Instruction::init$();
	$set(this, _from, nullptr);
	$set(this, _count, nullptr);
	$set(this, _value, nullptr);
	$set(this, _lang, nullptr);
	$set(this, _format, nullptr);
	$set(this, _letterValue, nullptr);
	$set(this, _groupingSeparator, nullptr);
	$set(this, _groupingSize, nullptr);
	this->_level = Number::LEVEL_SINGLE;
	this->_formatNeeded = false;
	$set(this, _className, nullptr);
	$set(this, _closureVars, nullptr);
}

bool Number::inInnerClass() {
	return (this->_className != nullptr);
}

$Closure* Number::getParentClosure() {
	return nullptr;
}

$String* Number::getInnerClassName() {
	return this->_className;
}

void Number::addVariable($VariableRefBase* variableRef) {
	if (this->_closureVars == nullptr) {
		$set(this, _closureVars, $new($ArrayList));
	}
	if (!$nc(this->_closureVars)->contains(variableRef)) {
		this->_closureVars->add(variableRef);
	}
}

void Number::parseContents($Parser* parser) {
	$useLocalObjectStack();
	int32_t count = $nc(this->_attributes)->getLength();
	for (int32_t i = 0; i < count; ++i) {
		$var($String, name, $nc(this->_attributes)->getQName(i));
		$var($String, value, $nc(this->_attributes)->getValue(i));
		if ($nc(name)->equals("value"_s)) {
			$set(this, _value, $nc(parser)->parseExpression(this, name, nullptr));
		} else if (name->equals("count"_s)) {
			$set(this, _count, $nc(parser)->parsePattern(this, name, nullptr));
		} else if (name->equals("from"_s)) {
			$set(this, _from, $nc(parser)->parsePattern(this, name, nullptr));
		} else if (name->equals("level"_s)) {
			if ($nc(value)->equals("single"_s)) {
				this->_level = Number::LEVEL_SINGLE;
			} else if (value->equals("multiple"_s)) {
				this->_level = Number::LEVEL_MULTIPLE;
			} else if (value->equals("any"_s)) {
				this->_level = Number::LEVEL_ANY;
			}
		} else if (name->equals("format"_s)) {
			$set(this, _format, $new($AttributeValueTemplate, value, parser, this));
			this->_formatNeeded = true;
		} else if (name->equals("lang"_s)) {
			$set(this, _lang, $new($AttributeValueTemplate, value, parser, this));
			this->_formatNeeded = true;
		} else if (name->equals("letter-value"_s)) {
			$set(this, _letterValue, $new($AttributeValueTemplate, value, parser, this));
			this->_formatNeeded = true;
		} else if (name->equals("grouping-separator"_s)) {
			$set(this, _groupingSeparator, $new($AttributeValueTemplate, value, parser, this));
			this->_formatNeeded = true;
		} else if (name->equals("grouping-size"_s)) {
			$set(this, _groupingSize, $new($AttributeValueTemplate, value, parser, this));
			this->_formatNeeded = true;
		}
	}
}

$Type* Number::typeCheck($SymbolTable* stable) {
	if (this->_value != nullptr) {
		$var($Type, tvalue, this->_value->typeCheck(stable));
		if ($instanceOf($RealType, tvalue) == false) {
			$init($Type);
			$set(this, _value, $new($CastExpr, this->_value, $Type::Real));
		}
	}
	if (this->_count != nullptr) {
		this->_count->typeCheck(stable);
	}
	if (this->_from != nullptr) {
		this->_from->typeCheck(stable);
	}
	if (this->_format != nullptr) {
		this->_format->typeCheck(stable);
	}
	if (this->_lang != nullptr) {
		this->_lang->typeCheck(stable);
	}
	if (this->_letterValue != nullptr) {
		this->_letterValue->typeCheck(stable);
	}
	if (this->_groupingSeparator != nullptr) {
		this->_groupingSeparator->typeCheck(stable);
	}
	if (this->_groupingSize != nullptr) {
		this->_groupingSize->typeCheck(stable);
	}
	$init($Type);
	return $Type::Void;
}

bool Number::hasValue() {
	return this->_value != nullptr;
}

bool Number::isDefault() {
	return this->_from == nullptr && this->_count == nullptr;
}

void Number::compileDefault($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	int32_t index = 0;
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($ints, fieldIndexes, $$nc(getXSLTC())->getNumberFieldIndexes());
	if ($nc(fieldIndexes)->get(this->_level) == -1) {
		int32_t var$0 = $nc(cpg)->addUtf8(Number::FieldNames->get(this->_level));
		$init($Constants);
		int32_t var$1 = cpg->addUtf8($Constants::NODE_COUNTER_SIG);
		$var($Field, defaultNode, $new($Field, $Constants::ACC_PRIVATE, var$0, var$1, nullptr, $(cpg->getConstantPool())));
		classGen->addField(defaultNode);
		fieldIndexes->set(this->_level, cpg->addFieldref($(classGen->getClassName()), Number::FieldNames->get(this->_level), $Constants::NODE_COUNTER_SIG));
	}
	$nc(il)->append($(classGen->loadTranslet()));
	il->append($$new($GETFIELD, fieldIndexes->get(this->_level)));
	$var($BranchHandle, ifBlock1, il->append($$new($IFNONNULL, nullptr)));
	$init($Constants);
	index = $nc(cpg)->addMethodref(Number::ClassNames->get(this->_level), "getDefaultNodeCounter"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, ")"_s, $Constants::NODE_COUNTER_SIG}));
	il->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append($$new($INVOKESTATIC, index));
	il->append($Constants::DUP);
	il->append($(classGen->loadTranslet()));
	il->append($Constants::SWAP);
	il->append($$new($PUTFIELD, fieldIndexes->get(this->_level)));
	$var($BranchHandle, ifBlock2, il->append($$new($GOTO, nullptr)));
	$nc(ifBlock1)->setTarget($(il->append($(classGen->loadTranslet()))));
	il->append($$new($GETFIELD, fieldIndexes->get(this->_level)));
	$nc(ifBlock2)->setTarget($(il->append($Constants::NOP)));
}

void Number::compileConstructor($ClassGenerator* classGen) {
	$useLocalObjectStack();
	$var($MethodGenerator, cons, nullptr);
	$var($InstructionList, il, $new($InstructionList));
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$init($1Type);
	$init($Constants);
	$assign(cons, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, $$new($TypeArray, {
		$($Util::getJCRefType($Constants::TRANSLET_INTF_SIG)),
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)),
		$1Type::BOOLEAN
	}), $$new($StringArray, {
		"dom"_s,
		"translet"_s,
		"iterator"_s,
		"hasFrom"_s
	}), "<init>"_s, this->_className, il, cpg));
	il->append($Constants::ALOAD_0);
	il->append($Constants::ALOAD_1);
	il->append($Constants::ALOAD_2);
	il->append($$new($ALOAD, 3));
	il->append($$new($ILOAD, 4));
	int32_t index = $nc(cpg)->addMethodref(Number::ClassNames->get(this->_level), "<init>"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, "Z)V"_s}));
	il->append($$new($INVOKESPECIAL, index));
	il->append($Constants::RETURN);
	classGen->addMethod(cons);
}

void Number::compileLocals($NodeCounterGenerator* nodeCounterGen, $MatchGenerator* matchGen, $InstructionList* il) {
	$useLocalObjectStack();
	int32_t field = 0;
	$var($LocalVariableGen, local, nullptr);
	$var($ConstantPoolGen, cpg, $nc(nodeCounterGen)->getConstantPool());
	$init($Constants);
	$assign(local, $nc(matchGen)->addLocalVariable("iterator"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	field = $nc(cpg)->addFieldref($Constants::NODE_COUNTER, "_iterator"_s, $Constants::ITERATOR_FIELD_SIG);
	$nc(il)->append($Constants::ALOAD_0);
	il->append($$new($GETFIELD, field));
	$nc(local)->setStart($(il->append($$new($ASTORE, $nc(local)->getIndex()))));
	matchGen->setIteratorIndex(local->getIndex());
	$assign(local, matchGen->addLocalVariable("translet"_s, $($Util::getJCRefType($Constants::TRANSLET_SIG)), nullptr, nullptr));
	field = cpg->addFieldref($Constants::NODE_COUNTER, "_translet"_s, "Lcom/sun/org/apache/xalan/internal/xsltc/Translet;"_s);
	il->append($Constants::ALOAD_0);
	il->append($$new($GETFIELD, field));
	il->append($$new($CHECKCAST, cpg->addClass($Constants::TRANSLET_CLASS)));
	$nc(local)->setStart($(il->append($$new($ASTORE, $nc(local)->getIndex()))));
	nodeCounterGen->setTransletIndex(local->getIndex());
	$assign(local, matchGen->addLocalVariable("document"_s, $($Util::getJCRefType($Constants::DOM_INTF_SIG)), nullptr, nullptr));
	field = cpg->addFieldref(this->_className, "_document"_s, $Constants::DOM_INTF_SIG);
	il->append($Constants::ALOAD_0);
	il->append($$new($GETFIELD, field));
	$nc(local)->setStart($(il->append($$new($ASTORE, $nc(local)->getIndex()))));
	matchGen->setDomIndex(local->getIndex());
}

void Number::compilePatterns($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	int32_t current = 0;
	int32_t field = 0;
	$var($LocalVariableGen, local, nullptr);
	$var($MatchGenerator, matchGen, nullptr);
	$var($NodeCounterGenerator, nodeCounterGen, nullptr);
	$set(this, _className, $$nc(getXSLTC())->getHelperClassName());
	$var($String, var$0, this->_className);
	$var($String, var$1, Number::ClassNames->get(this->_level));
	$var($String, var$2, toString());
	$assign(nodeCounterGen, $new($NodeCounterGenerator, var$0, var$1, var$2, $Constants::ACC_PUBLIC | $Constants::ACC_SUPER, nullptr, $($nc(classGen)->getStylesheet())));
	$var($InstructionList, il, nullptr);
	$var($ConstantPoolGen, cpg, nodeCounterGen->getConstantPool());
	int32_t closureLen = (this->_closureVars == nullptr) ? 0 : this->_closureVars->size();
	for (int32_t i = 0; i < closureLen; ++i) {
		$var($VariableBase, var, $$sure($VariableRefBase, $nc(this->_closureVars)->get(i))->getVariable());
		int32_t var$3 = $nc(cpg)->addUtf8($($nc(var)->getEscapedName()));
		int32_t var$4 = cpg->addUtf8($($$nc(var->getType())->toSignature()));
		nodeCounterGen->addField($$new($Field, $Constants::ACC_PUBLIC, var$3, var$4, nullptr, $(cpg->getConstantPool())));
	}
	compileConstructor(nodeCounterGen);
	if (this->_from != nullptr) {
		$assign(il, $new($InstructionList));
		$init($1Type);
		$assign(matchGen, $new($MatchGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::BOOLEAN, $$new($TypeArray, {$1Type::INT}), $$new($StringArray, {"node"_s}), "matchesFrom"_s, this->_className, il, cpg));
		compileLocals(nodeCounterGen, matchGen, il);
		il->append($(matchGen->loadContextNode()));
		$nc(this->_from)->translate(nodeCounterGen, matchGen);
		$nc(this->_from)->synthesize(nodeCounterGen, matchGen);
		$init($Constants);
		il->append($Constants::IRETURN);
		nodeCounterGen->addMethod(matchGen);
	}
	if (this->_count != nullptr) {
		$assign(il, $new($InstructionList));
		$init($1Type);
		$assign(matchGen, $new($MatchGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::BOOLEAN, $$new($TypeArray, {$1Type::INT}), $$new($StringArray, {"node"_s}), "matchesCount"_s, this->_className, il, cpg));
		compileLocals(nodeCounterGen, matchGen, il);
		il->append($(matchGen->loadContextNode()));
		$nc(this->_count)->translate(nodeCounterGen, matchGen);
		$nc(this->_count)->synthesize(nodeCounterGen, matchGen);
		$init($Constants);
		il->append($Constants::IRETURN);
		nodeCounterGen->addMethod(matchGen);
	}
	$$nc(getXSLTC())->dumpClass($(nodeCounterGen->getJavaClass()));
	$assign(cpg, classGen->getConstantPool());
	$assign(il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref(this->_className, "<init>"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, "Z)V"_s}));
	$nc(il)->append($$new($NEW, cpg->addClass(this->_className)));
	il->append($Constants::DUP);
	il->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append(this->_from != nullptr ? $Constants::ICONST_1 : $Constants::ICONST_0);
	il->append($$new($INVOKESPECIAL, index));
	for (int32_t i = 0; i < closureLen; ++i) {
		$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(this->_closureVars)->get(i)));
		$var($VariableBase, var, $nc(varRef)->getVariable());
		$var($Type, varType, $nc(var)->getType());
		il->append($Constants::DUP);
		il->append($(var->loadInstruction()));
		$var($String, var$5, this->_className);
		$var($String, var$6, var->getEscapedName());
		il->append($$new($PUTFIELD, cpg->addFieldref(var$5, var$6, $($nc(varType)->toSignature()))));
	}
}

void Number::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalObjectStack();
	int32_t index = 0;
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(classGen->loadTranslet()));
	if (hasValue()) {
		compileDefault(classGen, methodGen);
		$nc(this->_value)->translate(classGen, methodGen);
		il->append($$new($PUSH, cpg, 0.5));
		$init($Constants);
		il->append($Constants::DADD);
		index = $nc(cpg)->addMethodref($Constants::MATH_CLASS, "floor"_s, "(D)D"_s);
		il->append($$new($INVOKESTATIC, index));
		index = cpg->addMethodref($Constants::NODE_COUNTER, "setValue"_s, $$str({"(D)"_s, $Constants::NODE_COUNTER_SIG}));
		il->append($$new($INVOKEVIRTUAL, index));
	} else if (isDefault()) {
		compileDefault(classGen, methodGen);
	} else {
		compilePatterns(classGen, methodGen);
	}
	if (!hasValue()) {
		il->append($(methodGen->loadContextNode()));
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, $Constants::SET_START_NODE, $$str({"(I)"_s, $Constants::NODE_COUNTER_SIG}));
		il->append($$new($INVOKEVIRTUAL, index));
	}
	if (this->_formatNeeded) {
		if (this->_format != nullptr) {
			this->_format->translate(classGen, methodGen);
		} else {
			il->append($$new($PUSH, cpg, "1"_s));
		}
		if (this->_lang != nullptr) {
			this->_lang->translate(classGen, methodGen);
		} else {
			il->append($$new($PUSH, cpg, "en"_s));
		}
		if (this->_letterValue != nullptr) {
			this->_letterValue->translate(classGen, methodGen);
		} else {
			$init($Constants);
			il->append($$new($PUSH, cpg, $Constants::EMPTYSTRING));
		}
		if (this->_groupingSeparator != nullptr) {
			this->_groupingSeparator->translate(classGen, methodGen);
		} else {
			$init($Constants);
			il->append($$new($PUSH, cpg, $Constants::EMPTYSTRING));
		}
		if (this->_groupingSize != nullptr) {
			this->_groupingSize->translate(classGen, methodGen);
		} else {
			il->append($$new($PUSH, cpg, "0"_s));
		}
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, "getCounter"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, ")"_s, $Constants::STRING_SIG}));
		il->append($$new($INVOKEVIRTUAL, index));
	} else {
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, "setDefaultFormatting"_s, $$str({"()"_s, $Constants::NODE_COUNTER_SIG}));
		il->append($$new($INVOKEVIRTUAL, index));
		index = cpg->addMethodref($Constants::NODE_COUNTER, "getCounter"_s, $$str({"()"_s, $Constants::STRING_SIG}));
		il->append($$new($INVOKEVIRTUAL, index));
	}
	il->append($(methodGen->loadHandler()));
	$init($Constants);
	index = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::CHARACTERSW, $Constants::CHARACTERSW_SIG);
	il->append($$new($INVOKEVIRTUAL, index));
}

void Number::clinit$($Class* clazz) {
	$assignStatic(Number::ClassNames, $new($StringArray, {
		"com.sun.org.apache.xalan.internal.xsltc.dom.SingleNodeCounter"_s,
		"com.sun.org.apache.xalan.internal.xsltc.dom.MultipleNodeCounter"_s,
		"com.sun.org.apache.xalan.internal.xsltc.dom.AnyNodeCounter"_s
	}));
	$assignStatic(Number::FieldNames, $new($StringArray, {
		"___single_node_counter"_s,
		"___multiple_node_counter"_s,
		"___any_node_counter"_s
	}));
}

Number::Number() {
}

$Class* Number::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LEVEL_SINGLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Number, LEVEL_SINGLE)},
		{"LEVEL_MULTIPLE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Number, LEVEL_MULTIPLE)},
		{"LEVEL_ANY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Number, LEVEL_ANY)},
		{"ClassNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Number, ClassNames)},
		{"FieldNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Number, FieldNames)},
		{"_from", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE, $field(Number, _from)},
		{"_count", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Pattern;", nullptr, $PRIVATE, $field(Number, _count)},
		{"_value", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(Number, _value)},
		{"_lang", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(Number, _lang)},
		{"_format", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(Number, _format)},
		{"_letterValue", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(Number, _letterValue)},
		{"_groupingSeparator", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(Number, _groupingSeparator)},
		{"_groupingSize", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValueTemplate;", nullptr, $PRIVATE, $field(Number, _groupingSize)},
		{"_level", "I", nullptr, $PRIVATE, $field(Number, _level)},
		{"_formatNeeded", "Z", nullptr, $PRIVATE, $field(Number, _formatNeeded)},
		{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Number, _className)},
		{"_closureVars", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;>;", $PRIVATE, $field(Number, _closureVars)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(Number, init$, void)},
		{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;)V", nullptr, $PUBLIC, $virtualMethod(Number, addVariable, void, $VariableRefBase*)},
		{"compileConstructor", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;)V", nullptr, $PRIVATE, $method(Number, compileConstructor, void, $ClassGenerator*)},
		{"compileDefault", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(Number, compileDefault, void, $ClassGenerator*, $MethodGenerator*)},
		{"compileLocals", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeCounterGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MatchGenerator;Lcom/sun/org/apache/bcel/internal/generic/InstructionList;)V", nullptr, $PRIVATE, $method(Number, compileLocals, void, $NodeCounterGenerator*, $MatchGenerator*, $InstructionList*)},
		{"compilePatterns", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PRIVATE, $method(Number, compilePatterns, void, $ClassGenerator*, $MethodGenerator*)},
		{"getInnerClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Number, getInnerClassName, $String*)},
		{"getParentClosure", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PUBLIC, $virtualMethod(Number, getParentClosure, $Closure*)},
		{"hasValue", "()Z", nullptr, $PUBLIC, $method(Number, hasValue, bool)},
		{"inInnerClass", "()Z", nullptr, $PUBLIC, $virtualMethod(Number, inInnerClass, bool)},
		{"isDefault", "()Z", nullptr, $PUBLIC, $method(Number, isDefault, bool)},
		{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Number, parseContents, void, $Parser*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Number, translate, void, $ClassGenerator*, $MethodGenerator*)},
		{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Number, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Number",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
		"com.sun.org.apache.xalan.internal.xsltc.compiler.Closure",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Number, name, initialize, &classInfo$$, Number::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Number));
	});
	return class$;
}

$Class* Number::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com