#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Sort.h>

#include <com/sun/org/apache/bcel/internal/classfile/Attribute.h>
#include <com/sun/org/apache/bcel/internal/classfile/ConstantPool.h>
#include <com/sun/org/apache/bcel/internal/classfile/Field.h>
#include <com/sun/org/apache/bcel/internal/classfile/JavaClass.h>
#include <com/sun/org/apache/bcel/internal/generic/ALOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/ANEWARRAY.h>
#include <com/sun/org/apache/bcel/internal/generic/ASTORE.h>
#include <com/sun/org/apache/bcel/internal/generic/ArrayInstruction.h>
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
#include <com/sun/org/apache/bcel/internal/generic/ILOAD.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKEINTERFACE.h>
#include <com/sun/org/apache/bcel/internal/generic/INVOKESPECIAL.h>
#include <com/sun/org/apache/bcel/internal/generic/Instruction.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionHandle.h>
#include <com/sun/org/apache/bcel/internal/generic/InstructionList.h>
#include <com/sun/org/apache/bcel/internal/generic/InvokeInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LoadInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableGen.h>
#include <com/sun/org/apache/bcel/internal/generic/LocalVariableInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/NEW.h>
#include <com/sun/org/apache/bcel/internal/generic/NOP.h>
#include <com/sun/org/apache/bcel/internal/generic/ObjectType.h>
#include <com/sun/org/apache/bcel/internal/generic/PUSH.h>
#include <com/sun/org/apache/bcel/internal/generic/PUTFIELD.h>
#include <com/sun/org/apache/bcel/internal/generic/ReferenceType.h>
#include <com/sun/org/apache/bcel/internal/generic/ReturnInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/Select.h>
#include <com/sun/org/apache/bcel/internal/generic/StackInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/StoreInstruction.h>
#include <com/sun/org/apache/bcel/internal/generic/TABLESWITCH.h>
#include <com/sun/org/apache/bcel/internal/generic/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ApplyTemplates.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/CastExpr.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Closure.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Constants.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Expression.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/ForEach.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Instruction.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Parser.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/Stylesheet.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/SyntaxTreeNode.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/XSLTC.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/CompareGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/IntType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordFactGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordGenerator.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/StringType.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Type.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/TypeCheckError.h>
#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/Util.h>
#include <com/sun/org/apache/xml/internal/dtm/Axis.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef AASTORE
#undef ACC_FINAL
#undef ACC_PUBLIC
#undef ACC_SUPER
#undef ALOAD_0
#undef ALOAD_1
#undef ALOAD_2
#undef ARETURN
#undef CHILD
#undef DOCUMENT_PNAME
#undef DOM_INTF
#undef DOM_INTF_SIG
#undef DUP
#undef EMPTYSTRING
#undef ILOAD_1
#undef ILOAD_2
#undef INT
#undef NODE_ITERATOR_SIG
#undef NODE_SORT_FACTORY
#undef NODE_SORT_FACTORY_SIG
#undef NODE_SORT_RECORD
#undef NODE_SORT_RECORD_SIG
#undef NOP
#undef POP
#undef RETURN
#undef SORT_ITERATOR
#undef STRAY_SORT_ERR
#undef STRING
#undef STRING_SIG
#undef TRANSLET_INTF_SIG
#undef TRANSLET_PNAME
#undef TRANSLET_SIG
#undef VOID

using $AttributeArray = $Array<::com::sun::org::apache::bcel::internal::classfile::Attribute>;
using $InstructionHandleArray = $Array<::com::sun::org::apache::bcel::internal::generic::InstructionHandle>;
using $TypeArray = $Array<::com::sun::org::apache::bcel::internal::generic::Type>;
using $Field = ::com::sun::org::apache::bcel::internal::classfile::Field;
using $ALOAD = ::com::sun::org::apache::bcel::internal::generic::ALOAD;
using $ANEWARRAY = ::com::sun::org::apache::bcel::internal::generic::ANEWARRAY;
using $ASTORE = ::com::sun::org::apache::bcel::internal::generic::ASTORE;
using $BranchInstruction = ::com::sun::org::apache::bcel::internal::generic::BranchInstruction;
using $CHECKCAST = ::com::sun::org::apache::bcel::internal::generic::CHECKCAST;
using $CPInstruction = ::com::sun::org::apache::bcel::internal::generic::CPInstruction;
using $CompoundInstruction = ::com::sun::org::apache::bcel::internal::generic::CompoundInstruction;
using $ConstantPoolGen = ::com::sun::org::apache::bcel::internal::generic::ConstantPoolGen;
using $FieldInstruction = ::com::sun::org::apache::bcel::internal::generic::FieldInstruction;
using $FieldOrMethod = ::com::sun::org::apache::bcel::internal::generic::FieldOrMethod;
using $GETFIELD = ::com::sun::org::apache::bcel::internal::generic::GETFIELD;
using $ILOAD = ::com::sun::org::apache::bcel::internal::generic::ILOAD;
using $INVOKEINTERFACE = ::com::sun::org::apache::bcel::internal::generic::INVOKEINTERFACE;
using $INVOKESPECIAL = ::com::sun::org::apache::bcel::internal::generic::INVOKESPECIAL;
using $1Instruction = ::com::sun::org::apache::bcel::internal::generic::Instruction;
using $InstructionHandle = ::com::sun::org::apache::bcel::internal::generic::InstructionHandle;
using $InstructionList = ::com::sun::org::apache::bcel::internal::generic::InstructionList;
using $InvokeInstruction = ::com::sun::org::apache::bcel::internal::generic::InvokeInstruction;
using $LoadInstruction = ::com::sun::org::apache::bcel::internal::generic::LoadInstruction;
using $LocalVariableGen = ::com::sun::org::apache::bcel::internal::generic::LocalVariableGen;
using $LocalVariableInstruction = ::com::sun::org::apache::bcel::internal::generic::LocalVariableInstruction;
using $NEW = ::com::sun::org::apache::bcel::internal::generic::NEW;
using $NOP = ::com::sun::org::apache::bcel::internal::generic::NOP;
using $PUSH = ::com::sun::org::apache::bcel::internal::generic::PUSH;
using $PUTFIELD = ::com::sun::org::apache::bcel::internal::generic::PUTFIELD;
using $ReferenceType = ::com::sun::org::apache::bcel::internal::generic::ReferenceType;
using $Select = ::com::sun::org::apache::bcel::internal::generic::Select;
using $StoreInstruction = ::com::sun::org::apache::bcel::internal::generic::StoreInstruction;
using $TABLESWITCH = ::com::sun::org::apache::bcel::internal::generic::TABLESWITCH;
using $1Type = ::com::sun::org::apache::bcel::internal::generic::Type;
using $ApplyTemplates = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ApplyTemplates;
using $AttributeValue = ::com::sun::org::apache::xalan::internal::xsltc::compiler::AttributeValue;
using $CastExpr = ::com::sun::org::apache::xalan::internal::xsltc::compiler::CastExpr;
using $Closure = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Closure;
using $Constants = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Constants;
using $Expression = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Expression;
using $ForEach = ::com::sun::org::apache::xalan::internal::xsltc::compiler::ForEach;
using $Instruction = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Instruction;
using $Parser = ::com::sun::org::apache::xalan::internal::xsltc::compiler::Parser;
using $SymbolTable = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SymbolTable;
using $SyntaxTreeNode = ::com::sun::org::apache::xalan::internal::xsltc::compiler::SyntaxTreeNode;
using $VariableBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableBase;
using $VariableRefBase = ::com::sun::org::apache::xalan::internal::xsltc::compiler::VariableRefBase;
using $XSLTC = ::com::sun::org::apache::xalan::internal::xsltc::compiler::XSLTC;
using $ClassGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ClassGenerator;
using $CompareGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::CompareGenerator;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
using $IntType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::IntType;
using $MethodGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::MethodGenerator;
using $NodeSortRecordFactGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSortRecordFactGenerator;
using $NodeSortRecordGenerator = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::NodeSortRecordGenerator;
using $StringType = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::StringType;
using $Type = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Type;
using $TypeCheckError = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::TypeCheckError;
using $Util = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::Util;
using $Axis = ::com::sun::org::apache::xml::internal::dtm::Axis;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace compiler {

$FieldInfo _Sort_FieldInfo_[] = {
	{"_select", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;", nullptr, $PRIVATE, $field(Sort, _select)},
	{"_order", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(Sort, _order)},
	{"_caseOrder", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(Sort, _caseOrder)},
	{"_dataType", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(Sort, _dataType)},
	{"_lang", "Lcom/sun/org/apache/xalan/internal/xsltc/compiler/AttributeValue;", nullptr, $PRIVATE, $field(Sort, _lang)},
	{"_className", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Sort, _className)},
	{"_closureVars", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;>;", $PRIVATE, $field(Sort, _closureVars)},
	{"_needsSortRecordFactory", "Z", nullptr, $PRIVATE, $field(Sort, _needsSortRecordFactory)},
	{}
};

$MethodInfo _Sort_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(Sort, init$, void)},
	{"addVariable", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/VariableRefBase;)V", nullptr, $PUBLIC, $virtualMethod(Sort, addVariable, void, $VariableRefBase*)},
	{"compileExtract", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordGenerator;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Sort;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordGenerator;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", $PRIVATE | $STATIC, $staticMethod(Sort, compileExtract, $MethodGenerator*, $List*, $NodeSortRecordGenerator*, $ConstantPoolGen*, $String*)},
	{"compileInit", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/NodeSortRecordGenerator;Lcom/sun/org/apache/bcel/internal/generic/ConstantPoolGen;Ljava/lang/String;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;", nullptr, $PRIVATE | $STATIC, $staticMethod(Sort, compileInit, $MethodGenerator*, $NodeSortRecordGenerator*, $ConstantPoolGen*, $String*)},
	{"compileSortRecord", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)Ljava/lang/String;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Sort;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)Ljava/lang/String;", $PRIVATE | $STATIC, $staticMethod(Sort, compileSortRecord, $String*, $List*, $ClassGenerator*, $MethodGenerator*)},
	{"compileSortRecordFactory", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Sort;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", $PUBLIC | $STATIC, $staticMethod(Sort, compileSortRecordFactory, void, $List*, $ClassGenerator*, $MethodGenerator*)},
	{"compileSortRecordFactory", "(Ljava/util/List;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Sort;>;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Ljava/lang/String;)Ljava/lang/String;", $PUBLIC | $STATIC, $staticMethod(Sort, compileSortRecordFactory, $String*, $List*, $ClassGenerator*, $MethodGenerator*, $String*)},
	{"getInnerClassName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Sort, getInnerClassName, $String*)},
	{"getParentClosure", "()Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Closure;", nullptr, $PUBLIC, $virtualMethod(Sort, getParentClosure, $Closure*)},
	{"inInnerClass", "()Z", nullptr, $PUBLIC, $virtualMethod(Sort, inInnerClass, bool)},
	{"parseContents", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Parser;)V", nullptr, $PUBLIC, $virtualMethod(Sort, parseContents, void, $Parser*)},
	{"setInnerClassName", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Sort, setInnerClassName, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translate", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $virtualMethod(Sort, translate, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateCaseOrder", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Sort, translateCaseOrder, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateLang", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Sort, translateLang, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateSelect", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Sort, translateSelect, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateSortIterator", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Ljava/util/List;)V", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Expression;Ljava/util/List<Lcom/sun/org/apache/xalan/internal/xsltc/compiler/Sort;>;)V", $PUBLIC | $STATIC, $staticMethod(Sort, translateSortIterator, void, $ClassGenerator*, $MethodGenerator*, $Expression*, $List*)},
	{"translateSortOrder", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Sort, translateSortOrder, void, $ClassGenerator*, $MethodGenerator*)},
	{"translateSortType", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/ClassGenerator;Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/MethodGenerator;)V", nullptr, $PUBLIC, $method(Sort, translateSortType, void, $ClassGenerator*, $MethodGenerator*)},
	{"typeCheck", "(Lcom/sun/org/apache/xalan/internal/xsltc/compiler/SymbolTable;)Lcom/sun/org/apache/xalan/internal/xsltc/compiler/util/Type;", nullptr, $PUBLIC, $virtualMethod(Sort, typeCheck, $Type*, $SymbolTable*), "com.sun.org.apache.xalan.internal.xsltc.compiler.util.TypeCheckError"},
	{}
};

$ClassInfo _Sort_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Sort",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Instruction",
	"com.sun.org.apache.xalan.internal.xsltc.compiler.Closure",
	_Sort_FieldInfo_,
	_Sort_MethodInfo_
};

$Object* allocate$Sort($Class* clazz) {
	return $of($alloc(Sort));
}

int32_t Sort::hashCode() {
	 return this->$Instruction::hashCode();
}

bool Sort::equals(Object$* arg0) {
	 return this->$Instruction::equals(arg0);
}

$Object* Sort::clone() {
	 return this->$Instruction::clone();
}

$String* Sort::toString() {
	 return this->$Instruction::toString();
}

void Sort::finalize() {
	this->$Instruction::finalize();
}

void Sort::init$() {
	$Instruction::init$();
	$set(this, _className, nullptr);
	$set(this, _closureVars, nullptr);
	this->_needsSortRecordFactory = false;
}

bool Sort::inInnerClass() {
	return (this->_className != nullptr);
}

$Closure* Sort::getParentClosure() {
	return nullptr;
}

$String* Sort::getInnerClassName() {
	return this->_className;
}

void Sort::addVariable($VariableRefBase* variableRef) {
	if (this->_closureVars == nullptr) {
		$set(this, _closureVars, $new($ArrayList));
	}
	if (!$nc(this->_closureVars)->contains(variableRef)) {
		$nc(this->_closureVars)->add(variableRef);
		this->_needsSortRecordFactory = true;
	}
}

void Sort::setInnerClassName($String* className) {
	$set(this, _className, className);
}

void Sort::parseContents($Parser* parser) {
	$useLocalCurrentObjectStackCache();
	$var($SyntaxTreeNode, parent, getParent());
	if (!($instanceOf($ApplyTemplates, parent)) && !($instanceOf($ForEach, parent))) {
		$init($ErrorMsg);
		reportError(this, parser, $ErrorMsg::STRAY_SORT_ERR, nullptr);
		return;
	}
	$set(this, _select, $nc(parser)->parseExpression(this, "select"_s, "string(.)"_s));
	$var($String, val, getAttribute("order"_s));
	if ($nc(val)->length() == 0) {
		$assign(val, "ascending"_s);
	}
	$set(this, _order, $AttributeValue::create(this, val, parser));
	$assign(val, getAttribute("data-type"_s));
	if ($nc(val)->length() == 0) {
		try {
			$var($Type, type, $nc(this->_select)->typeCheck($(parser->getSymbolTable())));
			if ($instanceOf($IntType, type)) {
				$assign(val, "number"_s);
			} else {
				$assign(val, "text"_s);
			}
		} catch ($TypeCheckError& e) {
			$assign(val, "text"_s);
		}
	}
	$set(this, _dataType, $AttributeValue::create(this, val, parser));
	$assign(val, getAttribute("lang"_s));
	$set(this, _lang, $AttributeValue::create(this, val, parser));
	$assign(val, getAttribute("case-order"_s));
	$set(this, _caseOrder, $AttributeValue::create(this, val, parser));
}

$Type* Sort::typeCheck($SymbolTable* stable) {
	$var($Type, tselect, $nc(this->_select)->typeCheck(stable));
	if (!($instanceOf($StringType, tselect))) {
		$init($Type);
		$set(this, _select, $new($CastExpr, this->_select, $Type::String));
	}
	$nc(this->_order)->typeCheck(stable);
	$nc(this->_caseOrder)->typeCheck(stable);
	$nc(this->_dataType)->typeCheck(stable);
	$nc(this->_lang)->typeCheck(stable);
	$init($Type);
	return $Type::Void;
}

void Sort::translateSortType($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_dataType)->translate(classGen, methodGen);
}

void Sort::translateSortOrder($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_order)->translate(classGen, methodGen);
}

void Sort::translateCaseOrder($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_caseOrder)->translate(classGen, methodGen);
}

void Sort::translateLang($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_lang)->translate(classGen, methodGen);
}

void Sort::translateSelect($ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$nc(this->_select)->translate(classGen, methodGen);
}

void Sort::translate($ClassGenerator* classGen, $MethodGenerator* methodGen) {
}

void Sort::translateSortIterator($ClassGenerator* classGen, $MethodGenerator* methodGen, $Expression* nodeSet, $List* sortObjects) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$init($Constants);
	int32_t init = $nc(cpg)->addMethodref($Constants::SORT_ITERATOR, "<init>"_s, $$str({"("_s, $Constants::NODE_ITERATOR_SIG, $Constants::NODE_SORT_FACTORY_SIG, ")V"_s}));
	$var($LocalVariableGen, nodesTemp, methodGen->addLocalVariable("sort_tmp1"_s, $($Util::getJCRefType($Constants::NODE_ITERATOR_SIG)), nullptr, nullptr));
	$var($LocalVariableGen, sortRecordFactoryTemp, methodGen->addLocalVariable("sort_tmp2"_s, $($Util::getJCRefType($Constants::NODE_SORT_FACTORY_SIG)), nullptr, nullptr));
	if (nodeSet == nullptr) {
		int32_t children = cpg->addInterfaceMethodref($Constants::DOM_INTF, "getAxisIterator"_s, $$str({"(I)"_s, $Constants::NODE_ITERATOR_SIG}));
		$nc(il)->append($(methodGen->loadDOM()));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Axis::CHILD)));
		il->append(static_cast<$1Instruction*>($$new($INVOKEINTERFACE, children, 2)));
	} else {
		$nc(nodeSet)->translate(classGen, methodGen);
	}
	$nc(nodesTemp)->setStart($($nc(il)->append(static_cast<$1Instruction*>($$new($ASTORE, nodesTemp->getIndex())))));
	compileSortRecordFactory(sortObjects, classGen, methodGen);
	$nc(sortRecordFactoryTemp)->setStart($($nc(il)->append(static_cast<$1Instruction*>($$new($ASTORE, sortRecordFactoryTemp->getIndex())))));
	$nc(il)->append(static_cast<$1Instruction*>($$new($NEW, cpg->addClass($Constants::SORT_ITERATOR))));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	nodesTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, nodesTemp->getIndex())))));
	sortRecordFactoryTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, sortRecordFactoryTemp->getIndex())))));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, init)));
}

void Sort::compileSortRecordFactory($List* sortObjects, $ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($String, sortRecordClass, compileSortRecord(sortObjects, classGen, methodGen));
	bool needsSortRecordFactory = false;
	int32_t nsorts = $nc(sortObjects)->size();
	for (int32_t i = 0; i < nsorts; ++i) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(i)));
		needsSortRecordFactory |= $nc(sort)->_needsSortRecordFactory;
	}
	$init($Constants);
	$var($String, sortRecordFactoryClass, $Constants::NODE_SORT_FACTORY);
	if (needsSortRecordFactory) {
		$assign(sortRecordFactoryClass, compileSortRecordFactory(sortObjects, classGen, methodGen, sortRecordClass));
	}
	$var($ConstantPoolGen, cpg, $nc(classGen)->getConstantPool());
	$var($InstructionList, il, $nc(methodGen)->getInstructionList());
	$var($LocalVariableGen, sortOrderTemp, methodGen->addLocalVariable("sort_order_tmp"_s, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))), nullptr, nullptr));
	$nc(il)->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nsorts)));
	il->append(static_cast<$1Instruction*>($$new($ANEWARRAY, $nc(cpg)->addClass($Constants::STRING))));
	for (int32_t level = 0; level < nsorts; ++level) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(level)));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, level)));
		$nc(sort)->translateSortOrder(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($Constants::AASTORE));
	}
	$nc(sortOrderTemp)->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, sortOrderTemp->getIndex())))));
	$var($LocalVariableGen, sortTypeTemp, methodGen->addLocalVariable("sort_type_tmp"_s, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))), nullptr, nullptr));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nsorts)));
	il->append(static_cast<$1Instruction*>($$new($ANEWARRAY, $nc(cpg)->addClass($Constants::STRING))));
	for (int32_t level = 0; level < nsorts; ++level) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(level)));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, level)));
		$nc(sort)->translateSortType(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($Constants::AASTORE));
	}
	$nc(sortTypeTemp)->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, sortTypeTemp->getIndex())))));
	$var($LocalVariableGen, sortLangTemp, methodGen->addLocalVariable("sort_lang_tmp"_s, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))), nullptr, nullptr));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nsorts)));
	il->append(static_cast<$1Instruction*>($$new($ANEWARRAY, $nc(cpg)->addClass($Constants::STRING))));
	for (int32_t level = 0; level < nsorts; ++level) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(level)));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, level)));
		$nc(sort)->translateLang(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($Constants::AASTORE));
	}
	$nc(sortLangTemp)->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, sortLangTemp->getIndex())))));
	$var($LocalVariableGen, sortCaseOrderTemp, methodGen->addLocalVariable("sort_case_order_tmp"_s, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))), nullptr, nullptr));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, nsorts)));
	il->append(static_cast<$1Instruction*>($$new($ANEWARRAY, $nc(cpg)->addClass($Constants::STRING))));
	for (int32_t level = 0; level < nsorts; ++level) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(level)));
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, level)));
		$nc(sort)->translateCaseOrder(classGen, methodGen);
		il->append(static_cast<$1Instruction*>($Constants::AASTORE));
	}
	$nc(sortCaseOrderTemp)->setStart($(il->append(static_cast<$1Instruction*>($$new($ASTORE, sortCaseOrderTemp->getIndex())))));
	il->append(static_cast<$1Instruction*>($$new($NEW, $nc(cpg)->addClass(sortRecordFactoryClass))));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append($(methodGen->loadDOM()));
	il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, sortRecordClass)));
	il->append($(classGen->loadTranslet()));
	sortOrderTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, sortOrderTemp->getIndex())))));
	sortTypeTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, sortTypeTemp->getIndex())))));
	sortLangTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, sortLangTemp->getIndex())))));
	sortCaseOrderTemp->setEnd($(il->append(static_cast<$1Instruction*>($$new($ALOAD, sortCaseOrderTemp->getIndex())))));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref(sortRecordFactoryClass, "<init>"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::STRING_SIG, $Constants::TRANSLET_INTF_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, ")V"_s})))));
	$var($List, dups, $new($ArrayList));
	for (int32_t j = 0; j < nsorts; ++j) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(j)));
		int32_t length = ($nc(sort)->_closureVars == nullptr) ? 0 : $nc($nc(sort)->_closureVars)->size();
		for (int32_t i = 0; i < length; ++i) {
			$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(sort->_closureVars)->get(i)));
			if (dups->contains(varRef)) {
				continue;
			}
			$var($VariableBase, var, $nc(varRef)->getVariable());
			il->append(static_cast<$1Instruction*>($Constants::DUP));
			il->append($($nc(var)->loadInstruction()));
			$var($String, var$0, sortRecordFactoryClass);
			$var($String, var$1, $nc(var)->getEscapedName());
			il->append(static_cast<$1Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref(var$0, var$1, $($nc($(var->getType()))->toSignature())))));
			dups->add(varRef);
		}
	}
}

$String* Sort::compileSortRecordFactory($List* sortObjects, $ClassGenerator* classGen, $MethodGenerator* methodGen, $String* sortRecordClass) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc(($cast(Sort, $($nc(sortObjects)->get(0)))))->getXSLTC());
	$var($String, className, $nc(xsltc)->getHelperClassName());
	$init($Constants);
	$var($NodeSortRecordFactGenerator, sortRecordFactory, $new($NodeSortRecordFactGenerator, className, $Constants::NODE_SORT_FACTORY, $$str({className, ".java"_s}), ($Constants::ACC_PUBLIC | $Constants::ACC_SUPER) | $Constants::ACC_FINAL, $$new($StringArray, 0), $($nc(classGen)->getStylesheet())));
	$var($ConstantPoolGen, cpg, sortRecordFactory->getConstantPool());
	int32_t nsorts = sortObjects->size();
	$var($List, dups, $new($ArrayList));
	for (int32_t j = 0; j < nsorts; ++j) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(j)));
		int32_t length = ($nc(sort)->_closureVars == nullptr) ? 0 : $nc($nc(sort)->_closureVars)->size();
		for (int32_t i = 0; i < length; ++i) {
			$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(sort->_closureVars)->get(i)));
			if (dups->contains(varRef)) {
				continue;
			}
			$var($VariableBase, var, $nc(varRef)->getVariable());
			int32_t var$0 = $Constants::ACC_PUBLIC;
			int32_t var$1 = $nc(cpg)->addUtf8($($nc(var)->getEscapedName()));
			int32_t var$2 = cpg->addUtf8($($nc($($nc(var)->getType()))->toSignature()));
			sortRecordFactory->addField($$new($Field, var$0, var$1, var$2, nullptr, $(cpg->getConstantPool())));
			dups->add(varRef);
		}
	}
	$var($TypeArray, argTypes, $new($TypeArray, 7));
	argTypes->set(0, $($Util::getJCRefType($Constants::DOM_INTF_SIG)));
	argTypes->set(1, $($Util::getJCRefType($Constants::STRING_SIG)));
	argTypes->set(2, $($Util::getJCRefType($Constants::TRANSLET_INTF_SIG)));
	argTypes->set(3, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))));
	argTypes->set(4, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))));
	argTypes->set(5, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))));
	argTypes->set(6, $($Util::getJCRefType($$str({"["_s, $Constants::STRING_SIG}))));
	$var($StringArray, argNames, $new($StringArray, 7));
	argNames->set(0, $Constants::DOCUMENT_PNAME);
	argNames->set(1, "className"_s);
	argNames->set(2, $Constants::TRANSLET_PNAME);
	argNames->set(3, "order"_s);
	argNames->set(4, "type"_s);
	argNames->set(5, "lang"_s);
	argNames->set(6, "case_order"_s);
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, constructor, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, argTypes, argNames, "<init>"_s, className, il, cpg));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_1));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_2));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 3)));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 4)));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 5)));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 6)));
	il->append(static_cast<$1Instruction*>($$new($ALOAD, 7)));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::NODE_SORT_FACTORY, "<init>"_s, $$str({"("_s, $Constants::DOM_INTF_SIG, $Constants::STRING_SIG, $Constants::TRANSLET_INTF_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, "["_s, $Constants::STRING_SIG, ")V"_s})))));
	il->append(static_cast<$1Instruction*>($Constants::RETURN));
	$assign(il, $new($InstructionList));
	$var($MethodGenerator, makeNodeSortRecord, $new($MethodGenerator, $Constants::ACC_PUBLIC, $($Util::getJCRefType($Constants::NODE_SORT_RECORD_SIG)), $$new($TypeArray, {
		static_cast<$1Type*>($1Type::INT),
		static_cast<$1Type*>($1Type::INT)
	}), $$new($StringArray, {
		"node"_s,
		"last"_s
	}), "makeNodeSortRecord"_s, className, il, cpg));
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($Constants::ILOAD_1));
	il->append(static_cast<$1Instruction*>($Constants::ILOAD_2));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::NODE_SORT_FACTORY, "makeNodeSortRecord"_s, $$str({"(II)"_s, $Constants::NODE_SORT_RECORD_SIG})))));
	il->append(static_cast<$1Instruction*>($Constants::DUP));
	il->append(static_cast<$1Instruction*>($$new($CHECKCAST, $nc(cpg)->addClass(sortRecordClass))));
	int32_t ndups = dups->size();
	for (int32_t i = 0; i < ndups; ++i) {
		$var($VariableRefBase, varRef, $cast($VariableRefBase, dups->get(i)));
		$var($VariableBase, var, $nc(varRef)->getVariable());
		$var($Type, varType, $nc(var)->getType());
		il->append(static_cast<$1Instruction*>($Constants::DUP));
		il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
		$var($String, var$3, className);
		$var($String, var$4, var->getEscapedName());
		il->append(static_cast<$1Instruction*>($$new($GETFIELD, $nc(cpg)->addFieldref(var$3, var$4, $($nc(varType)->toSignature())))));
		$var($String, var$5, sortRecordClass);
		$var($String, var$6, var->getEscapedName());
		il->append(static_cast<$1Instruction*>($$new($PUTFIELD, $nc(cpg)->addFieldref(var$5, var$6, $($nc(varType)->toSignature())))));
	}
	il->append(static_cast<$1Instruction*>($Constants::POP));
	il->append(static_cast<$1Instruction*>($Constants::ARETURN));
	constructor->setMaxLocals();
	constructor->setMaxStack();
	sortRecordFactory->addMethod(constructor);
	makeNodeSortRecord->setMaxLocals();
	makeNodeSortRecord->setMaxStack();
	sortRecordFactory->addMethod(makeNodeSortRecord);
	xsltc->dumpClass($(sortRecordFactory->getJavaClass()));
	return className;
}

$String* Sort::compileSortRecord($List* sortObjects, $ClassGenerator* classGen, $MethodGenerator* methodGen) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($XSLTC, xsltc, $nc(($cast(Sort, $($nc(sortObjects)->get(0)))))->getXSLTC());
	$var($String, className, $nc(xsltc)->getHelperClassName());
	$init($Constants);
	$var($NodeSortRecordGenerator, sortRecord, $new($NodeSortRecordGenerator, className, $Constants::NODE_SORT_RECORD, "sort$0.java"_s, ($Constants::ACC_PUBLIC | $Constants::ACC_SUPER) | $Constants::ACC_FINAL, $$new($StringArray, 0), $($nc(classGen)->getStylesheet())));
	$var($ConstantPoolGen, cpg, sortRecord->getConstantPool());
	int32_t nsorts = sortObjects->size();
	$var($List, dups, $new($ArrayList));
	for (int32_t j = 0; j < nsorts; ++j) {
		$var(Sort, sort, $cast(Sort, sortObjects->get(j)));
		$nc(sort)->setInnerClassName(className);
		int32_t length = (sort->_closureVars == nullptr) ? 0 : $nc(sort->_closureVars)->size();
		for (int32_t i = 0; i < length; ++i) {
			$var($VariableRefBase, varRef, $cast($VariableRefBase, $nc(sort->_closureVars)->get(i)));
			if (dups->contains(varRef)) {
				continue;
			}
			$var($VariableBase, var, $nc(varRef)->getVariable());
			int32_t var$0 = $Constants::ACC_PUBLIC;
			int32_t var$1 = $nc(cpg)->addUtf8($($nc(var)->getEscapedName()));
			int32_t var$2 = cpg->addUtf8($($nc($($nc(var)->getType()))->toSignature()));
			sortRecord->addField($$new($Field, var$0, var$1, var$2, nullptr, $(cpg->getConstantPool())));
			dups->add(varRef);
		}
	}
	$var($MethodGenerator, init, compileInit(sortRecord, cpg, className));
	$var($MethodGenerator, extract, compileExtract(sortObjects, sortRecord, cpg, className));
	sortRecord->addMethod(init);
	sortRecord->addMethod(extract);
	xsltc->dumpClass($(sortRecord->getJavaClass()));
	return className;
}

$MethodGenerator* Sort::compileInit($NodeSortRecordGenerator* sortRecord, $ConstantPoolGen* cpg, $String* className) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$var($MethodGenerator, init, $new($MethodGenerator, $Constants::ACC_PUBLIC, $1Type::VOID, nullptr, nullptr, "<init>"_s, className, il, cpg));
	$init($Constants);
	il->append(static_cast<$1Instruction*>($Constants::ALOAD_0));
	il->append(static_cast<$1Instruction*>($$new($INVOKESPECIAL, $nc(cpg)->addMethodref($Constants::NODE_SORT_RECORD, "<init>"_s, "()V"_s))));
	il->append(static_cast<$1Instruction*>($Constants::RETURN));
	return init;
}

$MethodGenerator* Sort::compileExtract($List* sortObjects, $NodeSortRecordGenerator* sortRecord, $ConstantPoolGen* cpg, $String* className) {
	$init(Sort);
	$useLocalCurrentObjectStackCache();
	$var($InstructionList, il, $new($InstructionList));
	$init($1Type);
	$init($Constants);
	$var($CompareGenerator, extractMethod, $new($CompareGenerator, $Constants::ACC_PUBLIC | $Constants::ACC_FINAL, $1Type::STRING, $$new($TypeArray, {
		$($Util::getJCRefType($Constants::DOM_INTF_SIG)),
		static_cast<$1Type*>($1Type::INT),
		static_cast<$1Type*>($1Type::INT),
		$($Util::getJCRefType($Constants::TRANSLET_SIG)),
		static_cast<$1Type*>($1Type::INT)
	}), $$new($StringArray, {
		"dom"_s,
		"current"_s,
		"level"_s,
		"translet"_s,
		"last"_s
	}), "extractValueFromDOM"_s, className, il, cpg));
	int32_t levels = $nc(sortObjects)->size();
	$var($ints, match, $new($ints, levels));
	$var($InstructionHandleArray, target, $new($InstructionHandleArray, levels));
	$var($InstructionHandle, tblswitch, nullptr);
	if (levels > 1) {
		il->append(static_cast<$1Instruction*>($$new($ILOAD, extractMethod->getLocalIndex("level"_s))));
		$assign(tblswitch, il->append(static_cast<$1Instruction*>($$new($NOP))));
	}
	for (int32_t level = 0; level < levels; ++level) {
		match->set(level, level);
		$var(Sort, sort, $cast(Sort, sortObjects->get(level)));
		target->set(level, $(il->append($Constants::NOP)));
		$nc(sort)->translateSelect(sortRecord, extractMethod);
		il->append(static_cast<$1Instruction*>($Constants::ARETURN));
	}
	if (levels > 1) {
		$var($InstructionHandle, defaultTarget, il->append(static_cast<$CompoundInstruction*>($$new($PUSH, cpg, $Constants::EMPTYSTRING))));
		il->insert(tblswitch, static_cast<$BranchInstruction*>($$new($TABLESWITCH, match, target, defaultTarget)));
		il->append(static_cast<$1Instruction*>($Constants::ARETURN));
	}
	return extractMethod;
}

Sort::Sort() {
}

$Class* Sort::load$($String* name, bool initialize) {
	$loadClass(Sort, name, initialize, &_Sort_ClassInfo_, allocate$Sort);
	return class$;
}

$Class* Sort::class$ = nullptr;

							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com