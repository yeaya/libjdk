#ifndef _com_sun_org_apache_xpath_internal_compiler_Keywords_h_
#define _com_sun_org_apache_xpath_internal_compiler_Keywords_h_
//$ class com.sun.org.apache.xpath.internal.compiler.Keywords
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("FROM_ANCESTORS_OR_SELF_STRING")
#undef FROM_ANCESTORS_OR_SELF_STRING
#pragma push_macro("FROM_ANCESTORS_STRING")
#undef FROM_ANCESTORS_STRING
#pragma push_macro("FROM_ATTRIBUTES_STRING")
#undef FROM_ATTRIBUTES_STRING
#pragma push_macro("FROM_CHILDREN_STRING")
#undef FROM_CHILDREN_STRING
#pragma push_macro("FROM_DESCENDANTS_OR_SELF_STRING")
#undef FROM_DESCENDANTS_OR_SELF_STRING
#pragma push_macro("FROM_DESCENDANTS_STRING")
#undef FROM_DESCENDANTS_STRING
#pragma push_macro("FROM_FOLLOWING_SIBLINGS_STRING")
#undef FROM_FOLLOWING_SIBLINGS_STRING
#pragma push_macro("FROM_FOLLOWING_STRING")
#undef FROM_FOLLOWING_STRING
#pragma push_macro("FROM_NAMESPACE_STRING")
#undef FROM_NAMESPACE_STRING
#pragma push_macro("FROM_PARENT_STRING")
#undef FROM_PARENT_STRING
#pragma push_macro("FROM_PRECEDING_SIBLINGS_STRING")
#undef FROM_PRECEDING_SIBLINGS_STRING
#pragma push_macro("FROM_PRECEDING_STRING")
#undef FROM_PRECEDING_STRING
#pragma push_macro("FROM_SELF_ABBREVIATED_STRING")
#undef FROM_SELF_ABBREVIATED_STRING
#pragma push_macro("FROM_SELF_STRING")
#undef FROM_SELF_STRING
#pragma push_macro("FUNC_BOOLEAN_STRING")
#undef FUNC_BOOLEAN_STRING
#pragma push_macro("FUNC_CEILING_STRING")
#undef FUNC_CEILING_STRING
#pragma push_macro("FUNC_CONCAT_STRING")
#undef FUNC_CONCAT_STRING
#pragma push_macro("FUNC_CONTAINS_STRING")
#undef FUNC_CONTAINS_STRING
#pragma push_macro("FUNC_COUNT_STRING")
#undef FUNC_COUNT_STRING
#pragma push_macro("FUNC_CURRENT_STRING")
#undef FUNC_CURRENT_STRING
#pragma push_macro("FUNC_DOCLOCATION_STRING")
#undef FUNC_DOCLOCATION_STRING
#pragma push_macro("FUNC_EXT_ELEM_AVAILABLE_STRING")
#undef FUNC_EXT_ELEM_AVAILABLE_STRING
#pragma push_macro("FUNC_EXT_FUNCTION_AVAILABLE_STRING")
#undef FUNC_EXT_FUNCTION_AVAILABLE_STRING
#pragma push_macro("FUNC_FALSE_STRING")
#undef FUNC_FALSE_STRING
#pragma push_macro("FUNC_FLOOR_STRING")
#undef FUNC_FLOOR_STRING
#pragma push_macro("FUNC_GENERATE_ID_STRING")
#undef FUNC_GENERATE_ID_STRING
#pragma push_macro("FUNC_HERE_STRING")
#undef FUNC_HERE_STRING
#pragma push_macro("FUNC_ID_STRING")
#undef FUNC_ID_STRING
#pragma push_macro("FUNC_KEY_STRING")
#undef FUNC_KEY_STRING
#pragma push_macro("FUNC_LANG_STRING")
#undef FUNC_LANG_STRING
#pragma push_macro("FUNC_LAST_STRING")
#undef FUNC_LAST_STRING
#pragma push_macro("FUNC_LOCAL_PART_STRING")
#undef FUNC_LOCAL_PART_STRING
#pragma push_macro("FUNC_NAMESPACE_STRING")
#undef FUNC_NAMESPACE_STRING
#pragma push_macro("FUNC_NAME_STRING")
#undef FUNC_NAME_STRING
#pragma push_macro("FUNC_NORMALIZE_SPACE_STRING")
#undef FUNC_NORMALIZE_SPACE_STRING
#pragma push_macro("FUNC_NOT_STRING")
#undef FUNC_NOT_STRING
#pragma push_macro("FUNC_NUMBER_STRING")
#undef FUNC_NUMBER_STRING
#pragma push_macro("FUNC_POSITION_STRING")
#undef FUNC_POSITION_STRING
#pragma push_macro("FUNC_ROUND_STRING")
#undef FUNC_ROUND_STRING
#pragma push_macro("FUNC_STARTS_WITH_STRING")
#undef FUNC_STARTS_WITH_STRING
#pragma push_macro("FUNC_STRING_LENGTH_STRING")
#undef FUNC_STRING_LENGTH_STRING
#pragma push_macro("FUNC_STRING_STRING")
#undef FUNC_STRING_STRING
#pragma push_macro("FUNC_SUBSTRING_AFTER_STRING")
#undef FUNC_SUBSTRING_AFTER_STRING
#pragma push_macro("FUNC_SUBSTRING_BEFORE_STRING")
#undef FUNC_SUBSTRING_BEFORE_STRING
#pragma push_macro("FUNC_SUBSTRING_STRING")
#undef FUNC_SUBSTRING_STRING
#pragma push_macro("FUNC_SUM_STRING")
#undef FUNC_SUM_STRING
#pragma push_macro("FUNC_SYSTEM_PROPERTY_STRING")
#undef FUNC_SYSTEM_PROPERTY_STRING
#pragma push_macro("FUNC_TRANSLATE_STRING")
#undef FUNC_TRANSLATE_STRING
#pragma push_macro("FUNC_TRUE_STRING")
#undef FUNC_TRUE_STRING
#pragma push_macro("FUNC_UNPARSED_ENTITY_URI_STRING")
#undef FUNC_UNPARSED_ENTITY_URI_STRING
#pragma push_macro("NODETYPE_ANYELEMENT_STRING")
#undef NODETYPE_ANYELEMENT_STRING
#pragma push_macro("NODETYPE_COMMENT_STRING")
#undef NODETYPE_COMMENT_STRING
#pragma push_macro("NODETYPE_NODE_STRING")
#undef NODETYPE_NODE_STRING
#pragma push_macro("NODETYPE_PI_STRING")
#undef NODETYPE_PI_STRING
#pragma push_macro("NODETYPE_TEXT_STRING")
#undef NODETYPE_TEXT_STRING

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

class $export Keywords : public ::java::lang::Object {
	$class(Keywords, 0, ::java::lang::Object)
public:
	Keywords();
	void init$();
	static ::java::lang::Integer* getAxisName($String* key);
	static ::java::lang::Integer* getKeyWord($String* key);
	static ::java::lang::Integer* getNodeType($String* key);
	static ::java::lang::Integer* lookupNodeTest($String* key);
	static ::java::util::Map* m_keywords;
	static ::java::util::Map* m_axisnames;
	static ::java::util::Map* m_nodetests;
	static ::java::util::Map* m_nodetypes;
	static $String* FROM_ANCESTORS_STRING;
	static $String* FROM_ANCESTORS_OR_SELF_STRING;
	static $String* FROM_ATTRIBUTES_STRING;
	static $String* FROM_CHILDREN_STRING;
	static $String* FROM_DESCENDANTS_STRING;
	static $String* FROM_DESCENDANTS_OR_SELF_STRING;
	static $String* FROM_FOLLOWING_STRING;
	static $String* FROM_FOLLOWING_SIBLINGS_STRING;
	static $String* FROM_PARENT_STRING;
	static $String* FROM_PRECEDING_STRING;
	static $String* FROM_PRECEDING_SIBLINGS_STRING;
	static $String* FROM_SELF_STRING;
	static $String* FROM_NAMESPACE_STRING;
	static $String* FROM_SELF_ABBREVIATED_STRING;
	static $String* NODETYPE_COMMENT_STRING;
	static $String* NODETYPE_TEXT_STRING;
	static $String* NODETYPE_PI_STRING;
	static $String* NODETYPE_NODE_STRING;
	static $String* NODETYPE_ANYELEMENT_STRING;
	static $String* FUNC_CURRENT_STRING;
	static $String* FUNC_LAST_STRING;
	static $String* FUNC_POSITION_STRING;
	static $String* FUNC_COUNT_STRING;
	static $String* FUNC_ID_STRING;
	static $String* FUNC_KEY_STRING;
	static $String* FUNC_LOCAL_PART_STRING;
	static $String* FUNC_NAMESPACE_STRING;
	static $String* FUNC_NAME_STRING;
	static $String* FUNC_GENERATE_ID_STRING;
	static $String* FUNC_NOT_STRING;
	static $String* FUNC_TRUE_STRING;
	static $String* FUNC_FALSE_STRING;
	static $String* FUNC_BOOLEAN_STRING;
	static $String* FUNC_LANG_STRING;
	static $String* FUNC_NUMBER_STRING;
	static $String* FUNC_FLOOR_STRING;
	static $String* FUNC_CEILING_STRING;
	static $String* FUNC_ROUND_STRING;
	static $String* FUNC_SUM_STRING;
	static $String* FUNC_STRING_STRING;
	static $String* FUNC_STARTS_WITH_STRING;
	static $String* FUNC_CONTAINS_STRING;
	static $String* FUNC_SUBSTRING_BEFORE_STRING;
	static $String* FUNC_SUBSTRING_AFTER_STRING;
	static $String* FUNC_NORMALIZE_SPACE_STRING;
	static $String* FUNC_TRANSLATE_STRING;
	static $String* FUNC_CONCAT_STRING;
	static $String* FUNC_SYSTEM_PROPERTY_STRING;
	static $String* FUNC_EXT_FUNCTION_AVAILABLE_STRING;
	static $String* FUNC_EXT_ELEM_AVAILABLE_STRING;
	static $String* FUNC_SUBSTRING_STRING;
	static $String* FUNC_STRING_LENGTH_STRING;
	static $String* FUNC_UNPARSED_ENTITY_URI_STRING;
	static $String* FUNC_HERE_STRING;
	static $String* FUNC_DOCLOCATION_STRING;
};

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("FROM_ANCESTORS_OR_SELF_STRING")
#pragma pop_macro("FROM_ANCESTORS_STRING")
#pragma pop_macro("FROM_ATTRIBUTES_STRING")
#pragma pop_macro("FROM_CHILDREN_STRING")
#pragma pop_macro("FROM_DESCENDANTS_OR_SELF_STRING")
#pragma pop_macro("FROM_DESCENDANTS_STRING")
#pragma pop_macro("FROM_FOLLOWING_SIBLINGS_STRING")
#pragma pop_macro("FROM_FOLLOWING_STRING")
#pragma pop_macro("FROM_NAMESPACE_STRING")
#pragma pop_macro("FROM_PARENT_STRING")
#pragma pop_macro("FROM_PRECEDING_SIBLINGS_STRING")
#pragma pop_macro("FROM_PRECEDING_STRING")
#pragma pop_macro("FROM_SELF_ABBREVIATED_STRING")
#pragma pop_macro("FROM_SELF_STRING")
#pragma pop_macro("FUNC_BOOLEAN_STRING")
#pragma pop_macro("FUNC_CEILING_STRING")
#pragma pop_macro("FUNC_CONCAT_STRING")
#pragma pop_macro("FUNC_CONTAINS_STRING")
#pragma pop_macro("FUNC_COUNT_STRING")
#pragma pop_macro("FUNC_CURRENT_STRING")
#pragma pop_macro("FUNC_DOCLOCATION_STRING")
#pragma pop_macro("FUNC_EXT_ELEM_AVAILABLE_STRING")
#pragma pop_macro("FUNC_EXT_FUNCTION_AVAILABLE_STRING")
#pragma pop_macro("FUNC_FALSE_STRING")
#pragma pop_macro("FUNC_FLOOR_STRING")
#pragma pop_macro("FUNC_GENERATE_ID_STRING")
#pragma pop_macro("FUNC_HERE_STRING")
#pragma pop_macro("FUNC_ID_STRING")
#pragma pop_macro("FUNC_KEY_STRING")
#pragma pop_macro("FUNC_LANG_STRING")
#pragma pop_macro("FUNC_LAST_STRING")
#pragma pop_macro("FUNC_LOCAL_PART_STRING")
#pragma pop_macro("FUNC_NAMESPACE_STRING")
#pragma pop_macro("FUNC_NAME_STRING")
#pragma pop_macro("FUNC_NORMALIZE_SPACE_STRING")
#pragma pop_macro("FUNC_NOT_STRING")
#pragma pop_macro("FUNC_NUMBER_STRING")
#pragma pop_macro("FUNC_POSITION_STRING")
#pragma pop_macro("FUNC_ROUND_STRING")
#pragma pop_macro("FUNC_STARTS_WITH_STRING")
#pragma pop_macro("FUNC_STRING_LENGTH_STRING")
#pragma pop_macro("FUNC_STRING_STRING")
#pragma pop_macro("FUNC_SUBSTRING_AFTER_STRING")
#pragma pop_macro("FUNC_SUBSTRING_BEFORE_STRING")
#pragma pop_macro("FUNC_SUBSTRING_STRING")
#pragma pop_macro("FUNC_SUM_STRING")
#pragma pop_macro("FUNC_SYSTEM_PROPERTY_STRING")
#pragma pop_macro("FUNC_TRANSLATE_STRING")
#pragma pop_macro("FUNC_TRUE_STRING")
#pragma pop_macro("FUNC_UNPARSED_ENTITY_URI_STRING")
#pragma pop_macro("NODETYPE_ANYELEMENT_STRING")
#pragma pop_macro("NODETYPE_COMMENT_STRING")
#pragma pop_macro("NODETYPE_NODE_STRING")
#pragma pop_macro("NODETYPE_PI_STRING")
#pragma pop_macro("NODETYPE_TEXT_STRING")

#endif // _com_sun_org_apache_xpath_internal_compiler_Keywords_h_