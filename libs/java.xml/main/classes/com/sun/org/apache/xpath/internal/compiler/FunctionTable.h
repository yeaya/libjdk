#ifndef _com_sun_org_apache_xpath_internal_compiler_FunctionTable_h_
#define _com_sun_org_apache_xpath_internal_compiler_FunctionTable_h_
//$ class com.sun.org.apache.xpath.internal.compiler.FunctionTable
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("FUNC_BOOLEAN")
#undef FUNC_BOOLEAN
#pragma push_macro("FUNC_CEILING")
#undef FUNC_CEILING
#pragma push_macro("FUNC_CONCAT")
#undef FUNC_CONCAT
#pragma push_macro("FUNC_CONTAINS")
#undef FUNC_CONTAINS
#pragma push_macro("FUNC_COUNT")
#undef FUNC_COUNT
#pragma push_macro("FUNC_CURRENT")
#undef FUNC_CURRENT
#pragma push_macro("FUNC_DOCLOCATION")
#undef FUNC_DOCLOCATION
#pragma push_macro("FUNC_EXT_ELEM_AVAILABLE")
#undef FUNC_EXT_ELEM_AVAILABLE
#pragma push_macro("FUNC_EXT_FUNCTION_AVAILABLE")
#undef FUNC_EXT_FUNCTION_AVAILABLE
#pragma push_macro("FUNC_FALSE")
#undef FUNC_FALSE
#pragma push_macro("FUNC_FLOOR")
#undef FUNC_FLOOR
#pragma push_macro("FUNC_GENERATE_ID")
#undef FUNC_GENERATE_ID
#pragma push_macro("FUNC_HERE")
#undef FUNC_HERE
#pragma push_macro("FUNC_ID")
#undef FUNC_ID
#pragma push_macro("FUNC_KEY")
#undef FUNC_KEY
#pragma push_macro("FUNC_LANG")
#undef FUNC_LANG
#pragma push_macro("FUNC_LAST")
#undef FUNC_LAST
#pragma push_macro("FUNC_LOCAL_PART")
#undef FUNC_LOCAL_PART
#pragma push_macro("FUNC_NAMESPACE")
#undef FUNC_NAMESPACE
#pragma push_macro("FUNC_NORMALIZE_SPACE")
#undef FUNC_NORMALIZE_SPACE
#pragma push_macro("FUNC_NOT")
#undef FUNC_NOT
#pragma push_macro("FUNC_NUMBER")
#undef FUNC_NUMBER
#pragma push_macro("FUNC_POSITION")
#undef FUNC_POSITION
#pragma push_macro("FUNC_QNAME")
#undef FUNC_QNAME
#pragma push_macro("FUNC_ROUND")
#undef FUNC_ROUND
#pragma push_macro("FUNC_STARTS_WITH")
#undef FUNC_STARTS_WITH
#pragma push_macro("FUNC_STRING")
#undef FUNC_STRING
#pragma push_macro("FUNC_STRING_LENGTH")
#undef FUNC_STRING_LENGTH
#pragma push_macro("FUNC_SUBSTRING")
#undef FUNC_SUBSTRING
#pragma push_macro("FUNC_SUBSTRING_AFTER")
#undef FUNC_SUBSTRING_AFTER
#pragma push_macro("FUNC_SUBSTRING_BEFORE")
#undef FUNC_SUBSTRING_BEFORE
#pragma push_macro("FUNC_SUM")
#undef FUNC_SUM
#pragma push_macro("FUNC_SYSTEM_PROPERTY")
#undef FUNC_SYSTEM_PROPERTY
#pragma push_macro("FUNC_TRANSLATE")
#undef FUNC_TRANSLATE
#pragma push_macro("FUNC_TRUE")
#undef FUNC_TRUE
#pragma push_macro("FUNC_UNPARSED_ENTITY_URI")
#undef FUNC_UNPARSED_ENTITY_URI
#pragma push_macro("NUM_ALLOWABLE_ADDINS")
#undef NUM_ALLOWABLE_ADDINS
#pragma push_macro("NUM_BUILT_IN_FUNCS")
#undef NUM_BUILT_IN_FUNCS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace functions {
							class Function;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

class $export FunctionTable : public ::java::lang::Object {
	$class(FunctionTable, 0, ::java::lang::Object)
public:
	FunctionTable();
	void init$();
	virtual bool functionAvailable($String* methName);
	virtual ::com::sun::org::apache::xpath::internal::functions::Function* getFunction(int32_t which);
	virtual ::java::lang::Integer* getFunctionID($String* key);
	virtual $String* getFunctionName(int32_t funcID);
	virtual int32_t installFunction($String* name, $Class* func);
	static const int32_t FUNC_CURRENT = 0;
	static const int32_t FUNC_LAST = 1;
	static const int32_t FUNC_POSITION = 2;
	static const int32_t FUNC_COUNT = 3;
	static const int32_t FUNC_ID = 4;
	static const int32_t FUNC_KEY = 5;
	static const int32_t FUNC_LOCAL_PART = 7;
	static const int32_t FUNC_NAMESPACE = 8;
	static const int32_t FUNC_QNAME = 9;
	static const int32_t FUNC_GENERATE_ID = 10;
	static const int32_t FUNC_NOT = 11;
	static const int32_t FUNC_TRUE = 12;
	static const int32_t FUNC_FALSE = 13;
	static const int32_t FUNC_BOOLEAN = 14;
	static const int32_t FUNC_NUMBER = 15;
	static const int32_t FUNC_FLOOR = 16;
	static const int32_t FUNC_CEILING = 17;
	static const int32_t FUNC_ROUND = 18;
	static const int32_t FUNC_SUM = 19;
	static const int32_t FUNC_STRING = 20;
	static const int32_t FUNC_STARTS_WITH = 21;
	static const int32_t FUNC_CONTAINS = 22;
	static const int32_t FUNC_SUBSTRING_BEFORE = 23;
	static const int32_t FUNC_SUBSTRING_AFTER = 24;
	static const int32_t FUNC_NORMALIZE_SPACE = 25;
	static const int32_t FUNC_TRANSLATE = 26;
	static const int32_t FUNC_CONCAT = 27;
	static const int32_t FUNC_SUBSTRING = 29;
	static const int32_t FUNC_STRING_LENGTH = 30;
	static const int32_t FUNC_SYSTEM_PROPERTY = 31;
	static const int32_t FUNC_LANG = 32;
	static const int32_t FUNC_EXT_FUNCTION_AVAILABLE = 33;
	static const int32_t FUNC_EXT_ELEM_AVAILABLE = 34;
	static const int32_t FUNC_UNPARSED_ENTITY_URI = 36;
	static const int32_t FUNC_HERE = 37;
	static const int32_t FUNC_DOCLOCATION = 35;
	static $ClassArray* m_functions;
	static ::java::util::Map* m_functionID;
	$ClassArray* m_functions_customer = nullptr;
	::java::util::Map* m_functionID_customer = nullptr;
	static const int32_t NUM_BUILT_IN_FUNCS = 38;
	static const int32_t NUM_ALLOWABLE_ADDINS = 30;
	int32_t m_funcNextFreeIndex = 0;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FUNC_BOOLEAN")
#pragma pop_macro("FUNC_CEILING")
#pragma pop_macro("FUNC_CONCAT")
#pragma pop_macro("FUNC_CONTAINS")
#pragma pop_macro("FUNC_COUNT")
#pragma pop_macro("FUNC_CURRENT")
#pragma pop_macro("FUNC_DOCLOCATION")
#pragma pop_macro("FUNC_EXT_ELEM_AVAILABLE")
#pragma pop_macro("FUNC_EXT_FUNCTION_AVAILABLE")
#pragma pop_macro("FUNC_FALSE")
#pragma pop_macro("FUNC_FLOOR")
#pragma pop_macro("FUNC_GENERATE_ID")
#pragma pop_macro("FUNC_HERE")
#pragma pop_macro("FUNC_ID")
#pragma pop_macro("FUNC_KEY")
#pragma pop_macro("FUNC_LANG")
#pragma pop_macro("FUNC_LAST")
#pragma pop_macro("FUNC_LOCAL_PART")
#pragma pop_macro("FUNC_NAMESPACE")
#pragma pop_macro("FUNC_NORMALIZE_SPACE")
#pragma pop_macro("FUNC_NOT")
#pragma pop_macro("FUNC_NUMBER")
#pragma pop_macro("FUNC_POSITION")
#pragma pop_macro("FUNC_QNAME")
#pragma pop_macro("FUNC_ROUND")
#pragma pop_macro("FUNC_STARTS_WITH")
#pragma pop_macro("FUNC_STRING")
#pragma pop_macro("FUNC_STRING_LENGTH")
#pragma pop_macro("FUNC_SUBSTRING")
#pragma pop_macro("FUNC_SUBSTRING_AFTER")
#pragma pop_macro("FUNC_SUBSTRING_BEFORE")
#pragma pop_macro("FUNC_SUM")
#pragma pop_macro("FUNC_SYSTEM_PROPERTY")
#pragma pop_macro("FUNC_TRANSLATE")
#pragma pop_macro("FUNC_TRUE")
#pragma pop_macro("FUNC_UNPARSED_ENTITY_URI")
#pragma pop_macro("NUM_ALLOWABLE_ADDINS")
#pragma pop_macro("NUM_BUILT_IN_FUNCS")

#endif // _com_sun_org_apache_xpath_internal_compiler_FunctionTable_h_