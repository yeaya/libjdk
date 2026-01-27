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
#include <com/sun/org/apache/bcel/internal/generic/CPInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/CompoundInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/ConstantPoolGen.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/FieldOrMethod.h>
#include <com/sun/org/apache/bcel/internal/generic/GETFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/GOTO.h>
#include <com/sun/org/apache/bcel/internal/generic/GotoInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/IFNONNULL.h>
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESTATIC.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEVIRTUAL.h>
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
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
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
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
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
#include <java/util/AbstractList.h>
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
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $GOTO = ::com::sun::org::apache::bcel::internal::generic::GOTO;
using $GotoInstruction = ::com::sun::org::apache::bcel::internal::generic::GotoInstruction;
using $IFNONNULL = ::com::sun::org::apache::bcel::internal::generic::IFNONNULL;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $INVOKESTATIC = ::com::sun::org::apache::bcel::internal::generic::INVOKESTATIC;
using $INVOKEVIRTUAL = ::com::sun::org::apache::bcel::internal::generic::INVOKEVIRTUAL;
using $IfInstruction = ::com::sun::org::apache::bcel::internal::generic::IfInstruction;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
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
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $AttributeValueTemplate = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValueTemplate;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $Pattern = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Pattern;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
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
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $AttributesImpl = ::org::xml::sax::helpers::AttributesImpl;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Number_FieldInfo_[] = {
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

$MethodInfo _Number_MethodInfo_[] = {
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

$ClassInfo _Number_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Number",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Closure",
	_Number_FieldInfo_,
	_Number_MethodInfo_
};

$Object* allocate$Number($Class* clazz) {
	return $of($alloc(Number));
}

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
		$nc(this->_closureVars)->add(variableRef);
	}
}

void Number::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
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
		$var($Type, tvalue, $nc(this->_value)->typeCheck(stable));
		if ($instanceOf($RealType, tvalue) == false) {
			$init($Type);
			$set(this, _value, $new($CastExpr, this->_value, $Type::Real));
		}
	}
	if (this->_count != nullptr) {
		$nc(this->_count)->typeCheck(stable);
	}
	if (this->_from != nullptr) {
		$nc(this->_from)->typeCheck(stable);
	}
	if (this->_format != nullptr) {
		$nc(this->_format)->typeCheck(stable);
	}
	if (this->_lang != nullptr) {
		$nc(this->_lang)->typeCheck(stable);
	}
	if (this->_letterValue != nullptr) {
		$nc(this->_letterValue)->typeCheck(stable);
	}
	if (this->_groupingSeparator != nullptr) {
		$nc(this->_groupingSeparator)->typeCheck(stable);
	}
	if (this->_groupingSize != nullptr) {
		$nc(this->_groupingSize)->typeCheck(stable);
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
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($ints, fieldIndexes, $nc($(getXSLTC()))->getNumberFieldIndexes());
	if ($nc(fieldIndexes)->get(this->_level) == -1) {
		int32_t var$0 = $Constants::ACC_PRIVATE;
		int32_t var$1 = $nc(cpg)->addUtf8($nc(Number::FieldNames)->get(this->_level));
		$init($Constants);
		int32_t var$2 = cpg->addUtf8($Constants::NODE_COUNTER_SIG);
		$var($Field, defaultNode, $new($Field, var$0, var$1, var$2, nullptr, $(cpg->getConstantPool())));
		classGen->addField(defaultNode);
		fieldIndexes->set(this->_level, $nc(cpg)->addFieldref($(classGen->getClassName()), $nc(Number::FieldNames)->get(this->_level), $Constants::NODE_COUNTER_SIG));
	}
	$nc(il)->append($(classGen->loadTranslet()));
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(fieldIndexes)->get(this->_level))));
	$var($BranchHandle, ifBlock1, il->append(static_cast<$BranchInstruction*>($$new($IFNONNULL, nullptr))));
	$init($Constants);
	index = $nc(cpg)->addMethodref($nc(Number::ClassNames)->get(this->_level), "getDefaultNodeCounter"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, ")"_s, $Constants::NODE_COUNTER_SIG}));
	il->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, index)));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append($(classGen->loadTranslet()));
	il->append(static_cast<$1Instruction*>($Constants::SWAP));
	il->append(static_cast<$1Instruction*>($$new($PUTFIELD, $nc(fieldIndexes)->get(this->_level))));
	$var($BranchHandle, ifBlock2, il->append(static_cast<$BranchInstruction*>($$new($GOTO, nullptr))));
	$nc(ifBlock1)->setTarget($(il->append($(classGen->loadTranslet()))));
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(fieldIndexes)->get(this->_level))));
	$nc(ifBlock2)->setTarget($(il->append($Constants::NOP)));
}

void Number::compileConstructor($ClassGenerator* classGen) {
	$useLocalCurrentObjectStackCache();
	$var($MethodGenerator, cons, nullptr);
	$var($InstructionList, il, $new($InstructionList));
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$init($1Type);
	$init($Constants);
	$assign(cons, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, $$new($TypeArray, {
		$($Util::getJCRefType($Constants::TRANSLET_INTF_SIG)),
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		$($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)),
		static_cast<$1Type*>($1Type::BOOLEAN)
	}), $$new($StringArray, {
		"dom"_s,
		"translet"_s,
		"iterator"_s,
		"hasFrom"_s
	}), "<init>"_s, this->_className, il, cpg));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_1));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_2));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 3)));
	il->append(static_cast<$1Instruction*>($$new($ILOAD, 4)));
	int32_t index = $nc(cpg)->addMethodref($nc(Number::ClassNames)->get(this->_level), "<init>"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, "Z)V"_s}));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, index)));
	il->append(static_cast<$1Instruction*>($Constants::RETURN));
	classGen->addMethod(cons);
}

void Number::compileLocals($NodeCounterGenerator* nodeCounterGen, $MatchGenerator* matchGen, $InstructionList* il) {
	$useLocalCurrentObjectStackCache();
	int32_t field = 0;
	$var($LocalVariableGen, local, nullptr);
	$var($ConstantPoolGen, cpg, $nc(nodeCounterGen)->getConstantPool());
	$init($Constants);
	$assign(local, $nc(matchGen)->addLocalVariable("iterator"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	field = $nc(cpg)->addFieldref($Constants::NODE_COUNTER, "_iterator"_s, $Constants::ITERATOR_FIELD_SIG);
	$nc(il)->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, field)));
	$nc(local)->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, local->getIndex())))));
	matchGen->setIteratorIndex(local->getIndex());
	$assign(local, matchGen->addLocalVariable("translet"_s, $($Util::getJCRefType($Constants::TRANSLET_SIG)), nullptr, nullptr));
	field = cpg->addFieldref($Constants::NODE_COUNTER, "_translet"_s, "Lcom/sun/org/apache/xalan/internal/xsltc/Translet;"_s);
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, field)));
	il->append(static_cast<$1Instruction*>($$new($CHECKCAST, cpg->addClass($Constants::TRANSLET_CLASS))));
	local->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, local->getIndex())))));
	nodeCounterGen->setTransletIndex(local->getIndex());
	$assign(local, matchGen->addLocalVariable("document"_s, $($Util::getJCRefType($Constants::DOM_INTF_SIG)), nullptr, nullptr));
	field = cpg->addFieldref(this->_className, "_document"_s, $Constants::DOM_INTF_SIG);
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($$new($GETFIELD, field)));
	local->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, local->getIndex())))));
	matchGen->setDomIndex(local->getIndex());
}

void Number::compilePatterns($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t current = 0;
	int32_t field = 0;
	$var($LocalVariableGen, local, nullptr);
	$var($MatchGenerator, matchGen, nullptr);
	$var($NodeCounterGenerator, nodeCounterGen, nullptr);
	$set(this, _className, $nc($(getXSLTC()))->getHelperClassName());
	$var($String, var$0, this->_className);
	$var($String, var$1, $nc(Number::ClassNames)->get(this->_level));
	$var($String, var$2, toString());
	int32_t var$3 = $Constants::ACC_PUBLIC | $Constants::ACC_SUPER;
	$assign(nodeCounterGen, $new($NodeCounterGenerator, var$0, var$1, var$2, var$3, nullptr, $($nc(classGen)->getStylesheet())));
	$var($InstructionList, il, nullptr);
	$var($ConstantPoolGen, cpg, nodeCounterGen->getConstantPool());
	int32_t closureLen = (this->_closureVars == nullptr) ? 0 : $nc(this->_closureVars)->size();
	for (int32_t i = 0; i < closureLen; ++i) {
		$var($VariableBase, var, $nc(($cast($VariableRefBase, $($nc(this->_closureVars)->get(i)))))->getVariable());
		int32_t var$4 = $Constants::ACC_PUBLIC;
		int32_t var$5 = $nc(cpg)->addUtf8($($nc(var)->getEscapedName()));
		int32_t var$6 = cpg->addUtf8($($nc($($nc(var)->getType()))->toSignature()));
		nodeCounterGen->addField($$new($Field, var$4, var$5, var$6, nullptr, $(cpg->getConstantPool())));
	}
	compileConstructor(nodeCounterGen);
	if (this->_from != nullptr) {
		$assign(il, $new($InstructionList));
		$init($1Type);
		$assign(matchGen, $new($MatchGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::BOOLEAN, $$new($TypeArray, {static_cast<$1Type*>($1Type::INT)}), $$new($StringArray, {"node"_s}), "matchesFrom"_s, this->_className, il, cpg));
		compileLocals(nodeCounterGen, matchGen, il);
		il->append($(matchGen->loadContextNode()));
		$nc(this->_from)->translate(nodeCounterGen, matchGen);
		$nc(this->_from)->synthesize(nodeCounterGen, matchGen);
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::IRETURN));
		nodeCounterGen->addMethod(static_cast<$MethodGenerator*>(matchGen));
	}
	if (this->_count != nullptr) {
		$assign(il, $new($InstructionList));
		$init($1Type);
		$assign(matchGen, $new($MatchGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::BOOLEAN, $$new($TypeArray, {static_cast<$1Type*>($1Type::INT)}), $$new($StringArray, {"node"_s}), "matchesCount"_s, this->_className, il, cpg));
		compileLocals(nodeCounterGen, matchGen, il);
		il->append($(matchGen->loadContextNode()));
		$nc(this->_count)->translate(nodeCounterGen, matchGen);
		$nc(this->_count)->synthesize(nodeCounterGen, matchGen);
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::IRETURN));
		nodeCounterGen->addMethod(static_cast<$MethodGenerator*>(matchGen));
	}
	$nc($(getXSLTC()))->dumpClass($(nodeCounterGen->getJavaClass()));
	$assign(cpg, $nc(classGen)->getConstantPool());
	$assign(il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t index = $nc(cpg)->addMethodref(this->_className, "<init>"_s, $$str({"("_s, $Constants::TRANSLET_INTF_SIG, $Constants::DOM_INTF_SIG, $Constants::NODE_ITERATOR_SIG, "Z)V"_s}));
	$nc(il)->append(static_cast<$1Instruction*>($$new($NEW, cpg->addClass(this->_className))));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append($(classGen->loadTranslet()));
	il->append($(methodGen->loadDOM()));
	il->append($(methodGen->loadIterator()));
	il->append(this->_from != nullptr ? $Constants::ICONST_1 : $Constants::ICONST_0);
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, index)));
	for (int32_t i = 0; i < closureLen; ++i) {
		$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(this->_closureVars)->get(i)));
		$var($VariableBase, var, $nc(varRef)->getVariable());
		$var($Type, varType, $nc(var)->getType());
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append($(var->loadInstruction()));
		$var($String, var$7, this->_className);
		$var($String, var$8, var->getEscapedName());
		il->append(static_cast<$1Instruction*>($$new($PUTFIELD, cpg->addFieldref(var$7, var$8, $($nc(varType)->toSignature())))));
	}
}

void Number::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$nc(il)->append($(classGen->loadTranslet()));
	if (hasValue()) {
		compileDefault(classGen, methodGen);
		$nc(this->_value)->translate(classGen, methodGen);
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, 0.5)));
		$init($Constants);
		il->append(static_cast<$1Instruction*>($Constants::DADD));
		index = $nc(cpg)->addMethodref($Constants::MATH_CLASS, "floor"_s, "(D)D"_s);
		il->append(static_cast<$1Instruction*>($$new($INVOKESTATIC, index)));
		index = cpg->addMethodref($Constants::NODE_COUNTER, "setValue"_s, $$str({"(D)"_s, $Constants::NODE_COUNTER_SIG}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
	} else if (isDefault()) {
		compileDefault(classGen, methodGen);
	} else {
		compilePatterns(classGen, methodGen);
	}
	if (!hasValue()) {
		il->append($(methodGen->loadContextNode()));
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, $Constants::SET_START_NODE, $$str({"(I)"_s, $Constants::NODE_COUNTER_SIG}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
	}
	if (this->_formatNeeded) {
		if (this->_format != nullptr) {
			$nc(this->_format)->translate(classGen, methodGen);
		} else {
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "1"_s)));
		}
		if (this->_lang != nullptr) {
			$nc(this->_lang)->translate(classGen, methodGen);
		} else {
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "en"_s)));
		}
		if (this->_letterValue != nullptr) {
			$nc(this->_letterValue)->translate(classGen, methodGen);
		} else {
			$init($Constants);
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
		}
		if (this->_groupingSeparator != nullptr) {
			$nc(this->_groupingSeparator)->translate(classGen, methodGen);
		} else {
			$init($Constants);
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING)));
		}
		if (this->_groupingSize != nullptr) {
			$nc(this->_groupingSize)->translate(classGen, methodGen);
		} else {
			il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, "0"_s)));
		}
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, "getCounter"_s, $$str({"("_s, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, $Constants::STRING_SIG, ")"_s, $Constants::STRING_SIG}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
	} else {
		$init($Constants);
		index = $nc(cpg)->addMethodref($Constants::NODE_COUNTER, "setDefaultFormatting"_s, $$str({"()"_s, $Constants::NODE_COUNTER_SIG}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
		index = cpg->addMethodref($Constants::NODE_COUNTER, "getCounter"_s, $$str({"()"_s, $Constants::STRING_SIG}));
		il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
	}
	il->append($(methodGen->loadHandler()));
	$init($Constants);
	index = $nc(cpg)->addMethodref($Constants::TRANSLET_CLASS, $Constants::CHARACTERSW, $Constants::CHARACTERSW_SIG);
	il->append(static_cast<$1Instruction*>($$new($INVOKEVIRTUAL, index)));
}

void clinit$Number($Class* class$) {
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
	$loadClass(Number, name, initialize, &_Number_ClassInfo_, clinit$Number, allocate$Number);
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