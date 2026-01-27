#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>

#include <com/sun/org/apache/xpath/internal/compiler/Keywords.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncBoolean.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncCeiling.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncConcat.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncContains.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncCount.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncCurrent.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncDoclocation.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtElementAvailable.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncExtFunctionAvailable.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncFalse.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncFloor.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncGenerateId.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncHere.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncId.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncLang.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncLast.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncLocalPart.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncNamespace.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncNormalizeSpace.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncNot.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncNumber.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncPosition.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncQname.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncRound.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncStartsWith.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncString.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncStringLength.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncSubstring.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncSubstringAfter.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncSubstringBefore.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncSum.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncSystemProperty.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncTranslate.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncTrue.h>
#include <com/sun/org/apache/xpath/internal/functions/FuncUnparsedEntityURI.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/SecurityException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

#undef FUNC_BOOLEAN
#undef FUNC_BOOLEAN_STRING
#undef FUNC_CEILING
#undef FUNC_CEILING_STRING
#undef FUNC_CONCAT
#undef FUNC_CONCAT_STRING
#undef FUNC_CONTAINS
#undef FUNC_CONTAINS_STRING
#undef FUNC_COUNT
#undef FUNC_COUNT_STRING
#undef FUNC_CURRENT
#undef FUNC_CURRENT_STRING
#undef FUNC_DOCLOCATION
#undef FUNC_DOCLOCATION_STRING
#undef FUNC_EXT_ELEM_AVAILABLE
#undef FUNC_EXT_ELEM_AVAILABLE_STRING
#undef FUNC_EXT_FUNCTION_AVAILABLE
#undef FUNC_EXT_FUNCTION_AVAILABLE_STRING
#undef FUNC_FALSE
#undef FUNC_FALSE_STRING
#undef FUNC_FLOOR
#undef FUNC_FLOOR_STRING
#undef FUNC_GENERATE_ID
#undef FUNC_GENERATE_ID_STRING
#undef FUNC_HERE
#undef FUNC_HERE_STRING
#undef FUNC_ID
#undef FUNC_ID_STRING
#undef FUNC_KEY
#undef FUNC_KEY_STRING
#undef FUNC_LANG
#undef FUNC_LANG_STRING
#undef FUNC_LAST
#undef FUNC_LAST_STRING
#undef FUNC_LOCAL_PART
#undef FUNC_LOCAL_PART_STRING
#undef FUNC_NAMESPACE
#undef FUNC_NAMESPACE_STRING
#undef FUNC_NAME_STRING
#undef FUNC_NORMALIZE_SPACE
#undef FUNC_NORMALIZE_SPACE_STRING
#undef FUNC_NOT
#undef FUNC_NOT_STRING
#undef FUNC_NUMBER
#undef FUNC_NUMBER_STRING
#undef FUNC_POSITION
#undef FUNC_POSITION_STRING
#undef FUNC_QNAME
#undef FUNC_ROUND
#undef FUNC_ROUND_STRING
#undef FUNC_STARTS_WITH
#undef FUNC_STARTS_WITH_STRING
#undef FUNC_STRING
#undef FUNC_STRING_LENGTH
#undef FUNC_STRING_LENGTH_STRING
#undef FUNC_STRING_STRING
#undef FUNC_SUBSTRING
#undef FUNC_SUBSTRING_AFTER
#undef FUNC_SUBSTRING_AFTER_STRING
#undef FUNC_SUBSTRING_BEFORE
#undef FUNC_SUBSTRING_BEFORE_STRING
#undef FUNC_SUBSTRING_STRING
#undef FUNC_SUM
#undef FUNC_SUM_STRING
#undef FUNC_SYSTEM_PROPERTY
#undef FUNC_SYSTEM_PROPERTY_STRING
#undef FUNC_TRANSLATE
#undef FUNC_TRANSLATE_STRING
#undef FUNC_TRUE
#undef FUNC_TRUE_STRING
#undef FUNC_UNPARSED_ENTITY_URI
#undef FUNC_UNPARSED_ENTITY_URI_STRING
#undef NUM_ALLOWABLE_ADDINS
#undef NUM_BUILT_IN_FUNCS

using $Keywords = ::com::sun::org::apache::xpath::internal::compiler::Keywords;
using $FuncBoolean = ::com::sun::org::apache::xpath::internal::functions::FuncBoolean;
using $FuncCeiling = ::com::sun::org::apache::xpath::internal::functions::FuncCeiling;
using $FuncConcat = ::com::sun::org::apache::xpath::internal::functions::FuncConcat;
using $FuncContains = ::com::sun::org::apache::xpath::internal::functions::FuncContains;
using $FuncCount = ::com::sun::org::apache::xpath::internal::functions::FuncCount;
using $FuncCurrent = ::com::sun::org::apache::xpath::internal::functions::FuncCurrent;
using $FuncDoclocation = ::com::sun::org::apache::xpath::internal::functions::FuncDoclocation;
using $FuncExtElementAvailable = ::com::sun::org::apache::xpath::internal::functions::FuncExtElementAvailable;
using $FuncExtFunctionAvailable = ::com::sun::org::apache::xpath::internal::functions::FuncExtFunctionAvailable;
using $FuncFalse = ::com::sun::org::apache::xpath::internal::functions::FuncFalse;
using $FuncFloor = ::com::sun::org::apache::xpath::internal::functions::FuncFloor;
using $FuncGenerateId = ::com::sun::org::apache::xpath::internal::functions::FuncGenerateId;
using $FuncHere = ::com::sun::org::apache::xpath::internal::functions::FuncHere;
using $FuncId = ::com::sun::org::apache::xpath::internal::functions::FuncId;
using $FuncLang = ::com::sun::org::apache::xpath::internal::functions::FuncLang;
using $FuncLast = ::com::sun::org::apache::xpath::internal::functions::FuncLast;
using $FuncLocalPart = ::com::sun::org::apache::xpath::internal::functions::FuncLocalPart;
using $FuncNamespace = ::com::sun::org::apache::xpath::internal::functions::FuncNamespace;
using $FuncNormalizeSpace = ::com::sun::org::apache::xpath::internal::functions::FuncNormalizeSpace;
using $FuncNot = ::com::sun::org::apache::xpath::internal::functions::FuncNot;
using $FuncNumber = ::com::sun::org::apache::xpath::internal::functions::FuncNumber;
using $FuncPosition = ::com::sun::org::apache::xpath::internal::functions::FuncPosition;
using $FuncQname = ::com::sun::org::apache::xpath::internal::functions::FuncQname;
using $FuncRound = ::com::sun::org::apache::xpath::internal::functions::FuncRound;
using $FuncStartsWith = ::com::sun::org::apache::xpath::internal::functions::FuncStartsWith;
using $FuncString = ::com::sun::org::apache::xpath::internal::functions::FuncString;
using $FuncStringLength = ::com::sun::org::apache::xpath::internal::functions::FuncStringLength;
using $FuncSubstring = ::com::sun::org::apache::xpath::internal::functions::FuncSubstring;
using $FuncSubstringAfter = ::com::sun::org::apache::xpath::internal::functions::FuncSubstringAfter;
using $FuncSubstringBefore = ::com::sun::org::apache::xpath::internal::functions::FuncSubstringBefore;
using $FuncSum = ::com::sun::org::apache::xpath::internal::functions::FuncSum;
using $FuncSystemProperty = ::com::sun::org::apache::xpath::internal::functions::FuncSystemProperty;
using $FuncTranslate = ::com::sun::org::apache::xpath::internal::functions::FuncTranslate;
using $FuncTrue = ::com::sun::org::apache::xpath::internal::functions::FuncTrue;
using $FuncUnparsedEntityURI = ::com::sun::org::apache::xpath::internal::functions::FuncUnparsedEntityURI;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InstantiationException = ::java::lang::InstantiationException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $SecurityException = ::java::lang::SecurityException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _FunctionTable_FieldInfo_[] = {
	{"FUNC_CURRENT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_CURRENT)},
	{"FUNC_LAST", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_LAST)},
	{"FUNC_POSITION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_POSITION)},
	{"FUNC_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_COUNT)},
	{"FUNC_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_ID)},
	{"FUNC_KEY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_KEY)},
	{"FUNC_LOCAL_PART", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_LOCAL_PART)},
	{"FUNC_NAMESPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_NAMESPACE)},
	{"FUNC_QNAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_QNAME)},
	{"FUNC_GENERATE_ID", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_GENERATE_ID)},
	{"FUNC_NOT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_NOT)},
	{"FUNC_TRUE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_TRUE)},
	{"FUNC_FALSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_FALSE)},
	{"FUNC_BOOLEAN", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_BOOLEAN)},
	{"FUNC_NUMBER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_NUMBER)},
	{"FUNC_FLOOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_FLOOR)},
	{"FUNC_CEILING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_CEILING)},
	{"FUNC_ROUND", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_ROUND)},
	{"FUNC_SUM", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_SUM)},
	{"FUNC_STRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_STRING)},
	{"FUNC_STARTS_WITH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_STARTS_WITH)},
	{"FUNC_CONTAINS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_CONTAINS)},
	{"FUNC_SUBSTRING_BEFORE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_SUBSTRING_BEFORE)},
	{"FUNC_SUBSTRING_AFTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_SUBSTRING_AFTER)},
	{"FUNC_NORMALIZE_SPACE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_NORMALIZE_SPACE)},
	{"FUNC_TRANSLATE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_TRANSLATE)},
	{"FUNC_CONCAT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_CONCAT)},
	{"FUNC_SUBSTRING", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_SUBSTRING)},
	{"FUNC_STRING_LENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_STRING_LENGTH)},
	{"FUNC_SYSTEM_PROPERTY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_SYSTEM_PROPERTY)},
	{"FUNC_LANG", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_LANG)},
	{"FUNC_EXT_FUNCTION_AVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_EXT_FUNCTION_AVAILABLE)},
	{"FUNC_EXT_ELEM_AVAILABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_EXT_ELEM_AVAILABLE)},
	{"FUNC_UNPARSED_ENTITY_URI", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_UNPARSED_ENTITY_URI)},
	{"FUNC_HERE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_HERE)},
	{"FUNC_DOCLOCATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(FunctionTable, FUNC_DOCLOCATION)},
	{"m_functions", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticField(FunctionTable, m_functions)},
	{"m_functionID", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(FunctionTable, m_functionID)},
	{"m_functions_customer", "[Ljava/lang/Class;", "[Ljava/lang/Class<*>;", $PRIVATE, $field(FunctionTable, m_functions_customer)},
	{"m_functionID_customer", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE, $field(FunctionTable, m_functionID_customer)},
	{"NUM_BUILT_IN_FUNCS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FunctionTable, NUM_BUILT_IN_FUNCS)},
	{"NUM_ALLOWABLE_ADDINS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FunctionTable, NUM_ALLOWABLE_ADDINS)},
	{"m_funcNextFreeIndex", "I", nullptr, $PRIVATE, $field(FunctionTable, m_funcNextFreeIndex)},
	{}
};

$MethodInfo _FunctionTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FunctionTable, init$, void)},
	{"functionAvailable", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(FunctionTable, functionAvailable, bool, $String*)},
	{"getFunction", "(I)Lcom/sun/org/apache/xpath/internal/functions/Function;", nullptr, 0, $virtualMethod(FunctionTable, getFunction, $Function*, int32_t), "javax.xml.transform.TransformerException"},
	{"getFunctionID", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, 0, $virtualMethod(FunctionTable, getFunctionID, $Integer*, $String*)},
	{"getFunctionName", "(I)Ljava/lang/String;", nullptr, 0, $virtualMethod(FunctionTable, getFunctionName, $String*, int32_t)},
	{"installFunction", "(Ljava/lang/String;Ljava/lang/Class;)I", "(Ljava/lang/String;Ljava/lang/Class<*>;)I", $PUBLIC, $virtualMethod(FunctionTable, installFunction, int32_t, $String*, $Class*)},
	{}
};

$ClassInfo _FunctionTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.FunctionTable",
	"java.lang.Object",
	nullptr,
	_FunctionTable_FieldInfo_,
	_FunctionTable_MethodInfo_
};

$Object* allocate$FunctionTable($Class* clazz) {
	return $of($alloc(FunctionTable));
}

$ClassArray* FunctionTable::m_functions = nullptr;
$Map* FunctionTable::m_functionID = nullptr;

void FunctionTable::init$() {
	$set(this, m_functions_customer, $new($ClassArray, FunctionTable::NUM_ALLOWABLE_ADDINS));
	$set(this, m_functionID_customer, $new($HashMap));
	this->m_funcNextFreeIndex = FunctionTable::NUM_BUILT_IN_FUNCS;
}

$String* FunctionTable::getFunctionName(int32_t funcID) {
	if (funcID < FunctionTable::NUM_BUILT_IN_FUNCS) {
		return $nc($nc(FunctionTable::m_functions)->get(funcID))->getName();
	} else {
		return $nc($nc(this->m_functions_customer)->get(funcID - FunctionTable::NUM_BUILT_IN_FUNCS))->getName();
	}
}

$Function* FunctionTable::getFunction(int32_t which) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		if (which < FunctionTable::NUM_BUILT_IN_FUNCS) {
			return $cast($Function, $nc($($nc($nc(FunctionTable::m_functions)->get(which))->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		} else {
			$Class* c = $nc(this->m_functions_customer)->get(which - FunctionTable::NUM_BUILT_IN_FUNCS);
			return $cast($Function, $nc($($nc(c)->getConstructor($$new($ClassArray, 0))))->newInstance($$new($ObjectArray, 0)));
		}
	} catch ($InstantiationException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	} catch ($IllegalAccessException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	} catch ($SecurityException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	} catch ($IllegalArgumentException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	} catch ($InvocationTargetException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	} catch ($NoSuchMethodException& ex) {
		$throwNew($TransformerException, $(ex->getMessage()));
	}
	$shouldNotReachHere();
}

$Integer* FunctionTable::getFunctionID($String* key) {
	$var($Integer, id, $cast($Integer, $nc(this->m_functionID_customer)->get(key)));
	if (nullptr == id) {
		$assign(id, $cast($Integer, $nc(FunctionTable::m_functionID)->get(key)));
	}
	return id;
}

int32_t FunctionTable::installFunction($String* name, $Class* func) {
	$useLocalCurrentObjectStackCache();
	int32_t funcIndex = 0;
	$var($Integer, funcIndexObj, getFunctionID(name));
	$load($Function);
	if (func != nullptr && !$Function::class$->isAssignableFrom(func)) {
		$var($String, var$0, $$str({$(func->getName()), " cannot be cast to "_s}));
		$throwNew($ClassCastException, $$concat(var$0, $($Function::class$->getName())));
	}
	if (nullptr != funcIndexObj) {
		funcIndex = funcIndexObj->intValue();
		if (funcIndex < FunctionTable::NUM_BUILT_IN_FUNCS) {
			funcIndex = this->m_funcNextFreeIndex++;
			$nc(this->m_functionID_customer)->put(name, $($Integer::valueOf(funcIndex)));
		}
		$nc(this->m_functions_customer)->set(funcIndex - FunctionTable::NUM_BUILT_IN_FUNCS, func);
	} else {
		funcIndex = this->m_funcNextFreeIndex++;
		$nc(this->m_functions_customer)->set(funcIndex - FunctionTable::NUM_BUILT_IN_FUNCS, func);
		$nc(this->m_functionID_customer)->put(name, $($Integer::valueOf(funcIndex)));
	}
	return funcIndex;
}

bool FunctionTable::functionAvailable($String* methName) {
	$var($Integer, tblEntry, $cast($Integer, $nc(FunctionTable::m_functionID)->get(methName)));
	if (nullptr != tblEntry) {
		return true;
	} else {
		$assign(tblEntry, $cast($Integer, $nc(this->m_functionID_customer)->get(methName)));
		return (nullptr != tblEntry);
	}
}

void clinit$FunctionTable($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(FunctionTable::m_functionID, $new($HashMap));
	{
		$assignStatic(FunctionTable::m_functions, $new($ClassArray, FunctionTable::NUM_BUILT_IN_FUNCS));
		$load($FuncCurrent);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_CURRENT, $FuncCurrent::class$);
		$load($FuncLast);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_LAST, $FuncLast::class$);
		$load($FuncPosition);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_POSITION, $FuncPosition::class$);
		$load($FuncCount);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_COUNT, $FuncCount::class$);
		$load($FuncId);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_ID, $FuncId::class$);
		$load($FuncLocalPart);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_LOCAL_PART, $FuncLocalPart::class$);
		$load($FuncNamespace);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_NAMESPACE, $FuncNamespace::class$);
		$load($FuncQname);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_QNAME, $FuncQname::class$);
		$load($FuncGenerateId);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_GENERATE_ID, $FuncGenerateId::class$);
		$load($FuncNot);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_NOT, $FuncNot::class$);
		$load($FuncTrue);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_TRUE, $FuncTrue::class$);
		$load($FuncFalse);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_FALSE, $FuncFalse::class$);
		$load($FuncBoolean);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_BOOLEAN, $FuncBoolean::class$);
		$load($FuncLang);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_LANG, $FuncLang::class$);
		$load($FuncNumber);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_NUMBER, $FuncNumber::class$);
		$load($FuncFloor);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_FLOOR, $FuncFloor::class$);
		$load($FuncCeiling);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_CEILING, $FuncCeiling::class$);
		$load($FuncRound);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_ROUND, $FuncRound::class$);
		$load($FuncSum);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_SUM, $FuncSum::class$);
		$load($FuncString);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_STRING, $FuncString::class$);
		$load($FuncStartsWith);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_STARTS_WITH, $FuncStartsWith::class$);
		$load($FuncContains);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_CONTAINS, $FuncContains::class$);
		$load($FuncSubstringBefore);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_SUBSTRING_BEFORE, $FuncSubstringBefore::class$);
		$load($FuncSubstringAfter);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_SUBSTRING_AFTER, $FuncSubstringAfter::class$);
		$load($FuncNormalizeSpace);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_NORMALIZE_SPACE, $FuncNormalizeSpace::class$);
		$load($FuncTranslate);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_TRANSLATE, $FuncTranslate::class$);
		$load($FuncConcat);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_CONCAT, $FuncConcat::class$);
		$load($FuncSystemProperty);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_SYSTEM_PROPERTY, $FuncSystemProperty::class$);
		$load($FuncExtFunctionAvailable);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_EXT_FUNCTION_AVAILABLE, $FuncExtFunctionAvailable::class$);
		$load($FuncExtElementAvailable);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_EXT_ELEM_AVAILABLE, $FuncExtElementAvailable::class$);
		$load($FuncSubstring);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_SUBSTRING, $FuncSubstring::class$);
		$load($FuncStringLength);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_STRING_LENGTH, $FuncStringLength::class$);
		$load($FuncDoclocation);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_DOCLOCATION, $FuncDoclocation::class$);
		$load($FuncUnparsedEntityURI);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_UNPARSED_ENTITY_URI, $FuncUnparsedEntityURI::class$);
		$load($FuncHere);
		$nc(FunctionTable::m_functions)->set(FunctionTable::FUNC_HERE, $FuncHere::class$);
	}
	{
		$init($Keywords);
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_CURRENT_STRING, $($Integer::valueOf(FunctionTable::FUNC_CURRENT)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_LAST_STRING, $($Integer::valueOf(FunctionTable::FUNC_LAST)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_POSITION_STRING, $($Integer::valueOf(FunctionTable::FUNC_POSITION)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_COUNT_STRING, $($Integer::valueOf(FunctionTable::FUNC_COUNT)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_ID_STRING, $($Integer::valueOf(FunctionTable::FUNC_ID)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_KEY_STRING, $($Integer::valueOf(FunctionTable::FUNC_KEY)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_LOCAL_PART_STRING, $($Integer::valueOf(FunctionTable::FUNC_LOCAL_PART)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_NAMESPACE_STRING, $($Integer::valueOf(FunctionTable::FUNC_NAMESPACE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_NAME_STRING, $($Integer::valueOf(FunctionTable::FUNC_QNAME)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_GENERATE_ID_STRING, $($Integer::valueOf(FunctionTable::FUNC_GENERATE_ID)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_NOT_STRING, $($Integer::valueOf(FunctionTable::FUNC_NOT)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_TRUE_STRING, $($Integer::valueOf(FunctionTable::FUNC_TRUE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_FALSE_STRING, $($Integer::valueOf(FunctionTable::FUNC_FALSE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_BOOLEAN_STRING, $($Integer::valueOf(FunctionTable::FUNC_BOOLEAN)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_LANG_STRING, $($Integer::valueOf(FunctionTable::FUNC_LANG)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_NUMBER_STRING, $($Integer::valueOf(FunctionTable::FUNC_NUMBER)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_FLOOR_STRING, $($Integer::valueOf(FunctionTable::FUNC_FLOOR)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_CEILING_STRING, $($Integer::valueOf(FunctionTable::FUNC_CEILING)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_ROUND_STRING, $($Integer::valueOf(FunctionTable::FUNC_ROUND)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_SUM_STRING, $($Integer::valueOf(FunctionTable::FUNC_SUM)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_STRING_STRING, $($Integer::valueOf(FunctionTable::FUNC_STRING)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_STARTS_WITH_STRING, $($Integer::valueOf(FunctionTable::FUNC_STARTS_WITH)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_CONTAINS_STRING, $($Integer::valueOf(FunctionTable::FUNC_CONTAINS)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_SUBSTRING_BEFORE_STRING, $($Integer::valueOf(FunctionTable::FUNC_SUBSTRING_BEFORE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_SUBSTRING_AFTER_STRING, $($Integer::valueOf(FunctionTable::FUNC_SUBSTRING_AFTER)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_NORMALIZE_SPACE_STRING, $($Integer::valueOf(FunctionTable::FUNC_NORMALIZE_SPACE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_TRANSLATE_STRING, $($Integer::valueOf(FunctionTable::FUNC_TRANSLATE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_CONCAT_STRING, $($Integer::valueOf(FunctionTable::FUNC_CONCAT)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_SYSTEM_PROPERTY_STRING, $($Integer::valueOf(FunctionTable::FUNC_SYSTEM_PROPERTY)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_EXT_FUNCTION_AVAILABLE_STRING, $($Integer::valueOf(FunctionTable::FUNC_EXT_FUNCTION_AVAILABLE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_EXT_ELEM_AVAILABLE_STRING, $($Integer::valueOf(FunctionTable::FUNC_EXT_ELEM_AVAILABLE)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_SUBSTRING_STRING, $($Integer::valueOf(FunctionTable::FUNC_SUBSTRING)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_STRING_LENGTH_STRING, $($Integer::valueOf(FunctionTable::FUNC_STRING_LENGTH)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_UNPARSED_ENTITY_URI_STRING, $($Integer::valueOf(FunctionTable::FUNC_UNPARSED_ENTITY_URI)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_DOCLOCATION_STRING, $($Integer::valueOf(FunctionTable::FUNC_DOCLOCATION)));
		$nc(FunctionTable::m_functionID)->put($Keywords::FUNC_HERE_STRING, $($Integer::valueOf(FunctionTable::FUNC_HERE)));
	}
}

FunctionTable::FunctionTable() {
}

$Class* FunctionTable::load$($String* name, bool initialize) {
	$loadClass(FunctionTable, name, initialize, &_FunctionTable_ClassInfo_, clinit$FunctionTable, allocate$FunctionTable);
	return class$;
}

$Class* FunctionTable::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com