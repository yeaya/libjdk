#include <com/sun/org/apache/xpath/internal/compiler/Keywords.h>

#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/compiler/OpCodes.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef FROM_ANCESTORS
#undef FROM_ANCESTORS_OR_SELF
#undef FROM_ANCESTORS_OR_SELF_STRING
#undef FROM_ANCESTORS_STRING
#undef FROM_ATTRIBUTES
#undef FROM_ATTRIBUTES_STRING
#undef FROM_CHILDREN
#undef FROM_CHILDREN_STRING
#undef FROM_DESCENDANTS
#undef FROM_DESCENDANTS_OR_SELF
#undef FROM_DESCENDANTS_OR_SELF_STRING
#undef FROM_DESCENDANTS_STRING
#undef FROM_FOLLOWING
#undef FROM_FOLLOWING_SIBLINGS
#undef FROM_FOLLOWING_SIBLINGS_STRING
#undef FROM_FOLLOWING_STRING
#undef FROM_NAMESPACE
#undef FROM_NAMESPACE_STRING
#undef FROM_PARENT
#undef FROM_PARENT_STRING
#undef FROM_PRECEDING
#undef FROM_PRECEDING_SIBLINGS
#undef FROM_PRECEDING_SIBLINGS_STRING
#undef FROM_PRECEDING_STRING
#undef FROM_SELF
#undef FROM_SELF_ABBREVIATED_STRING
#undef FROM_SELF_STRING
#undef FUNC_BOOLEAN_STRING
#undef FUNC_CEILING_STRING
#undef FUNC_CONCAT_STRING
#undef FUNC_CONTAINS_STRING
#undef FUNC_COUNT_STRING
#undef FUNC_CURRENT_STRING
#undef FUNC_DOCLOCATION_STRING
#undef FUNC_EXT_ELEM_AVAILABLE_STRING
#undef FUNC_EXT_FUNCTION_AVAILABLE_STRING
#undef FUNC_FALSE_STRING
#undef FUNC_FLOOR_STRING
#undef FUNC_GENERATE_ID_STRING
#undef FUNC_HERE_STRING
#undef FUNC_ID
#undef FUNC_ID_STRING
#undef FUNC_KEY
#undef FUNC_KEY_STRING
#undef FUNC_LANG_STRING
#undef FUNC_LAST_STRING
#undef FUNC_LOCAL_PART_STRING
#undef FUNC_NAMESPACE_STRING
#undef FUNC_NAME_STRING
#undef FUNC_NORMALIZE_SPACE_STRING
#undef FUNC_NOT_STRING
#undef FUNC_NUMBER_STRING
#undef FUNC_POSITION_STRING
#undef FUNC_ROUND_STRING
#undef FUNC_STARTS_WITH_STRING
#undef FUNC_STRING_LENGTH_STRING
#undef FUNC_STRING_STRING
#undef FUNC_SUBSTRING_AFTER_STRING
#undef FUNC_SUBSTRING_BEFORE_STRING
#undef FUNC_SUBSTRING_STRING
#undef FUNC_SUM_STRING
#undef FUNC_SYSTEM_PROPERTY_STRING
#undef FUNC_TRANSLATE_STRING
#undef FUNC_TRUE_STRING
#undef FUNC_UNPARSED_ENTITY_URI_STRING
#undef NODETYPE_ANYELEMENT
#undef NODETYPE_ANYELEMENT_STRING
#undef NODETYPE_COMMENT
#undef NODETYPE_COMMENT_STRING
#undef NODETYPE_NODE
#undef NODETYPE_NODE_STRING
#undef NODETYPE_PI
#undef NODETYPE_PI_STRING
#undef NODETYPE_TEXT
#undef NODETYPE_TEXT_STRING

using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $OpCodes = ::com::sun::org::apache::xpath::internal::compiler::OpCodes;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace compiler {

$FieldInfo _Keywords_FieldInfo_[] = {
	{"m_keywords", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, m_keywords)},
	{"m_axisnames", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, m_axisnames)},
	{"m_nodetests", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, m_nodetests)},
	{"m_nodetypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, m_nodetypes)},
	{"FROM_ANCESTORS_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_ANCESTORS_STRING)},
	{"FROM_ANCESTORS_OR_SELF_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_ANCESTORS_OR_SELF_STRING)},
	{"FROM_ATTRIBUTES_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_ATTRIBUTES_STRING)},
	{"FROM_CHILDREN_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_CHILDREN_STRING)},
	{"FROM_DESCENDANTS_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_DESCENDANTS_STRING)},
	{"FROM_DESCENDANTS_OR_SELF_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_DESCENDANTS_OR_SELF_STRING)},
	{"FROM_FOLLOWING_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_FOLLOWING_STRING)},
	{"FROM_FOLLOWING_SIBLINGS_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_FOLLOWING_SIBLINGS_STRING)},
	{"FROM_PARENT_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_PARENT_STRING)},
	{"FROM_PRECEDING_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_PRECEDING_STRING)},
	{"FROM_PRECEDING_SIBLINGS_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_PRECEDING_SIBLINGS_STRING)},
	{"FROM_SELF_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_SELF_STRING)},
	{"FROM_NAMESPACE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_NAMESPACE_STRING)},
	{"FROM_SELF_ABBREVIATED_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, FROM_SELF_ABBREVIATED_STRING)},
	{"NODETYPE_COMMENT_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, NODETYPE_COMMENT_STRING)},
	{"NODETYPE_TEXT_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, NODETYPE_TEXT_STRING)},
	{"NODETYPE_PI_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, NODETYPE_PI_STRING)},
	{"NODETYPE_NODE_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, NODETYPE_NODE_STRING)},
	{"NODETYPE_ANYELEMENT_STRING", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Keywords, NODETYPE_ANYELEMENT_STRING)},
	{"FUNC_CURRENT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_CURRENT_STRING)},
	{"FUNC_LAST_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_LAST_STRING)},
	{"FUNC_POSITION_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_POSITION_STRING)},
	{"FUNC_COUNT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_COUNT_STRING)},
	{"FUNC_ID_STRING", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Keywords, FUNC_ID_STRING)},
	{"FUNC_KEY_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_KEY_STRING)},
	{"FUNC_LOCAL_PART_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_LOCAL_PART_STRING)},
	{"FUNC_NAMESPACE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_NAMESPACE_STRING)},
	{"FUNC_NAME_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_NAME_STRING)},
	{"FUNC_GENERATE_ID_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_GENERATE_ID_STRING)},
	{"FUNC_NOT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_NOT_STRING)},
	{"FUNC_TRUE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_TRUE_STRING)},
	{"FUNC_FALSE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_FALSE_STRING)},
	{"FUNC_BOOLEAN_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_BOOLEAN_STRING)},
	{"FUNC_LANG_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_LANG_STRING)},
	{"FUNC_NUMBER_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_NUMBER_STRING)},
	{"FUNC_FLOOR_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_FLOOR_STRING)},
	{"FUNC_CEILING_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_CEILING_STRING)},
	{"FUNC_ROUND_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_ROUND_STRING)},
	{"FUNC_SUM_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_SUM_STRING)},
	{"FUNC_STRING_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_STRING_STRING)},
	{"FUNC_STARTS_WITH_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_STARTS_WITH_STRING)},
	{"FUNC_CONTAINS_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_CONTAINS_STRING)},
	{"FUNC_SUBSTRING_BEFORE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_SUBSTRING_BEFORE_STRING)},
	{"FUNC_SUBSTRING_AFTER_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_SUBSTRING_AFTER_STRING)},
	{"FUNC_NORMALIZE_SPACE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_NORMALIZE_SPACE_STRING)},
	{"FUNC_TRANSLATE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_TRANSLATE_STRING)},
	{"FUNC_CONCAT_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_CONCAT_STRING)},
	{"FUNC_SYSTEM_PROPERTY_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_SYSTEM_PROPERTY_STRING)},
	{"FUNC_EXT_FUNCTION_AVAILABLE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_EXT_FUNCTION_AVAILABLE_STRING)},
	{"FUNC_EXT_ELEM_AVAILABLE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_EXT_ELEM_AVAILABLE_STRING)},
	{"FUNC_SUBSTRING_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_SUBSTRING_STRING)},
	{"FUNC_STRING_LENGTH_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_STRING_LENGTH_STRING)},
	{"FUNC_UNPARSED_ENTITY_URI_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_UNPARSED_ENTITY_URI_STRING)},
	{"FUNC_HERE_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_HERE_STRING)},
	{"FUNC_DOCLOCATION_STRING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Keywords, FUNC_DOCLOCATION_STRING)},
	{}
};

$MethodInfo _Keywords_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Keywords, init$, void)},
	{"getAxisName", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $STATIC, $staticMethod(Keywords, getAxisName, $Integer*, $String*)},
	{"getKeyWord", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $STATIC, $staticMethod(Keywords, getKeyWord, $Integer*, $String*)},
	{"getNodeType", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $STATIC, $staticMethod(Keywords, getNodeType, $Integer*, $String*)},
	{"lookupNodeTest", "(Ljava/lang/String;)Ljava/lang/Integer;", nullptr, $STATIC, $staticMethod(Keywords, lookupNodeTest, $Integer*, $String*)},
	{}
};

$ClassInfo _Keywords_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.compiler.Keywords",
	"java.lang.Object",
	nullptr,
	_Keywords_FieldInfo_,
	_Keywords_MethodInfo_
};

$Object* allocate$Keywords($Class* clazz) {
	return $of($alloc(Keywords));
}

$Map* Keywords::m_keywords = nullptr;
$Map* Keywords::m_axisnames = nullptr;
$Map* Keywords::m_nodetests = nullptr;
$Map* Keywords::m_nodetypes = nullptr;
$String* Keywords::FROM_ANCESTORS_STRING = nullptr;
$String* Keywords::FROM_ANCESTORS_OR_SELF_STRING = nullptr;
$String* Keywords::FROM_ATTRIBUTES_STRING = nullptr;
$String* Keywords::FROM_CHILDREN_STRING = nullptr;
$String* Keywords::FROM_DESCENDANTS_STRING = nullptr;
$String* Keywords::FROM_DESCENDANTS_OR_SELF_STRING = nullptr;
$String* Keywords::FROM_FOLLOWING_STRING = nullptr;
$String* Keywords::FROM_FOLLOWING_SIBLINGS_STRING = nullptr;
$String* Keywords::FROM_PARENT_STRING = nullptr;
$String* Keywords::FROM_PRECEDING_STRING = nullptr;
$String* Keywords::FROM_PRECEDING_SIBLINGS_STRING = nullptr;
$String* Keywords::FROM_SELF_STRING = nullptr;
$String* Keywords::FROM_NAMESPACE_STRING = nullptr;
$String* Keywords::FROM_SELF_ABBREVIATED_STRING = nullptr;
$String* Keywords::NODETYPE_COMMENT_STRING = nullptr;
$String* Keywords::NODETYPE_TEXT_STRING = nullptr;
$String* Keywords::NODETYPE_PI_STRING = nullptr;
$String* Keywords::NODETYPE_NODE_STRING = nullptr;
$String* Keywords::NODETYPE_ANYELEMENT_STRING = nullptr;
$String* Keywords::FUNC_CURRENT_STRING = nullptr;
$String* Keywords::FUNC_LAST_STRING = nullptr;
$String* Keywords::FUNC_POSITION_STRING = nullptr;
$String* Keywords::FUNC_COUNT_STRING = nullptr;
$String* Keywords::FUNC_ID_STRING = nullptr;
$String* Keywords::FUNC_KEY_STRING = nullptr;
$String* Keywords::FUNC_LOCAL_PART_STRING = nullptr;
$String* Keywords::FUNC_NAMESPACE_STRING = nullptr;
$String* Keywords::FUNC_NAME_STRING = nullptr;
$String* Keywords::FUNC_GENERATE_ID_STRING = nullptr;
$String* Keywords::FUNC_NOT_STRING = nullptr;
$String* Keywords::FUNC_TRUE_STRING = nullptr;
$String* Keywords::FUNC_FALSE_STRING = nullptr;
$String* Keywords::FUNC_BOOLEAN_STRING = nullptr;
$String* Keywords::FUNC_LANG_STRING = nullptr;
$String* Keywords::FUNC_NUMBER_STRING = nullptr;
$String* Keywords::FUNC_FLOOR_STRING = nullptr;
$String* Keywords::FUNC_CEILING_STRING = nullptr;
$String* Keywords::FUNC_ROUND_STRING = nullptr;
$String* Keywords::FUNC_SUM_STRING = nullptr;
$String* Keywords::FUNC_STRING_STRING = nullptr;
$String* Keywords::FUNC_STARTS_WITH_STRING = nullptr;
$String* Keywords::FUNC_CONTAINS_STRING = nullptr;
$String* Keywords::FUNC_SUBSTRING_BEFORE_STRING = nullptr;
$String* Keywords::FUNC_SUBSTRING_AFTER_STRING = nullptr;
$String* Keywords::FUNC_NORMALIZE_SPACE_STRING = nullptr;
$String* Keywords::FUNC_TRANSLATE_STRING = nullptr;
$String* Keywords::FUNC_CONCAT_STRING = nullptr;
$String* Keywords::FUNC_SYSTEM_PROPERTY_STRING = nullptr;
$String* Keywords::FUNC_EXT_FUNCTION_AVAILABLE_STRING = nullptr;
$String* Keywords::FUNC_EXT_ELEM_AVAILABLE_STRING = nullptr;
$String* Keywords::FUNC_SUBSTRING_STRING = nullptr;
$String* Keywords::FUNC_STRING_LENGTH_STRING = nullptr;
$String* Keywords::FUNC_UNPARSED_ENTITY_URI_STRING = nullptr;
$String* Keywords::FUNC_HERE_STRING = nullptr;
$String* Keywords::FUNC_DOCLOCATION_STRING = nullptr;

void Keywords::init$() {
}

$Integer* Keywords::getAxisName($String* key) {
	$init(Keywords);
	return $cast($Integer, $nc(Keywords::m_axisnames)->get(key));
}

$Integer* Keywords::lookupNodeTest($String* key) {
	$init(Keywords);
	return $cast($Integer, $nc(Keywords::m_nodetests)->get(key));
}

$Integer* Keywords::getKeyWord($String* key) {
	$init(Keywords);
	return $cast($Integer, $nc(Keywords::m_keywords)->get(key));
}

$Integer* Keywords::getNodeType($String* key) {
	$init(Keywords);
	return $cast($Integer, $nc(Keywords::m_nodetypes)->get(key));
}

void clinit$Keywords($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(Keywords::FROM_ANCESTORS_STRING, "ancestor"_s);
	$assignStatic(Keywords::FROM_ANCESTORS_OR_SELF_STRING, "ancestor-or-self"_s);
	$assignStatic(Keywords::FROM_ATTRIBUTES_STRING, "attribute"_s);
	$assignStatic(Keywords::FROM_CHILDREN_STRING, "child"_s);
	$assignStatic(Keywords::FROM_DESCENDANTS_STRING, "descendant"_s);
	$assignStatic(Keywords::FROM_DESCENDANTS_OR_SELF_STRING, "descendant-or-self"_s);
	$assignStatic(Keywords::FROM_FOLLOWING_STRING, "following"_s);
	$assignStatic(Keywords::FROM_FOLLOWING_SIBLINGS_STRING, "following-sibling"_s);
	$assignStatic(Keywords::FROM_PARENT_STRING, "parent"_s);
	$assignStatic(Keywords::FROM_PRECEDING_STRING, "preceding"_s);
	$assignStatic(Keywords::FROM_PRECEDING_SIBLINGS_STRING, "preceding-sibling"_s);
	$assignStatic(Keywords::FROM_SELF_STRING, "self"_s);
	$assignStatic(Keywords::FROM_NAMESPACE_STRING, "namespace"_s);
	$assignStatic(Keywords::FROM_SELF_ABBREVIATED_STRING, "."_s);
	$assignStatic(Keywords::NODETYPE_COMMENT_STRING, "comment"_s);
	$assignStatic(Keywords::NODETYPE_TEXT_STRING, "text"_s);
	$assignStatic(Keywords::NODETYPE_PI_STRING, "processing-instruction"_s);
	$assignStatic(Keywords::NODETYPE_NODE_STRING, "node"_s);
	$assignStatic(Keywords::NODETYPE_ANYELEMENT_STRING, "*"_s);
	$assignStatic(Keywords::FUNC_CURRENT_STRING, "current"_s);
	$assignStatic(Keywords::FUNC_LAST_STRING, "last"_s);
	$assignStatic(Keywords::FUNC_POSITION_STRING, "position"_s);
	$assignStatic(Keywords::FUNC_COUNT_STRING, "count"_s);
	$assignStatic(Keywords::FUNC_ID_STRING, "id"_s);
	$assignStatic(Keywords::FUNC_KEY_STRING, "key"_s);
	$assignStatic(Keywords::FUNC_LOCAL_PART_STRING, "local-name"_s);
	$assignStatic(Keywords::FUNC_NAMESPACE_STRING, "namespace-uri"_s);
	$assignStatic(Keywords::FUNC_NAME_STRING, "name"_s);
	$assignStatic(Keywords::FUNC_GENERATE_ID_STRING, "generate-id"_s);
	$assignStatic(Keywords::FUNC_NOT_STRING, "not"_s);
	$assignStatic(Keywords::FUNC_TRUE_STRING, "true"_s);
	$assignStatic(Keywords::FUNC_FALSE_STRING, "false"_s);
	$assignStatic(Keywords::FUNC_BOOLEAN_STRING, "boolean"_s);
	$assignStatic(Keywords::FUNC_LANG_STRING, "lang"_s);
	$assignStatic(Keywords::FUNC_NUMBER_STRING, "number"_s);
	$assignStatic(Keywords::FUNC_FLOOR_STRING, "floor"_s);
	$assignStatic(Keywords::FUNC_CEILING_STRING, "ceiling"_s);
	$assignStatic(Keywords::FUNC_ROUND_STRING, "round"_s);
	$assignStatic(Keywords::FUNC_SUM_STRING, "sum"_s);
	$assignStatic(Keywords::FUNC_STRING_STRING, "string"_s);
	$assignStatic(Keywords::FUNC_STARTS_WITH_STRING, "starts-with"_s);
	$assignStatic(Keywords::FUNC_CONTAINS_STRING, "contains"_s);
	$assignStatic(Keywords::FUNC_SUBSTRING_BEFORE_STRING, "substring-before"_s);
	$assignStatic(Keywords::FUNC_SUBSTRING_AFTER_STRING, "substring-after"_s);
	$assignStatic(Keywords::FUNC_NORMALIZE_SPACE_STRING, "normalize-space"_s);
	$assignStatic(Keywords::FUNC_TRANSLATE_STRING, "translate"_s);
	$assignStatic(Keywords::FUNC_CONCAT_STRING, "concat"_s);
	$assignStatic(Keywords::FUNC_SYSTEM_PROPERTY_STRING, "system-property"_s);
	$assignStatic(Keywords::FUNC_EXT_FUNCTION_AVAILABLE_STRING, "function-available"_s);
	$assignStatic(Keywords::FUNC_EXT_ELEM_AVAILABLE_STRING, "element-available"_s);
	$assignStatic(Keywords::FUNC_SUBSTRING_STRING, "substring"_s);
	$assignStatic(Keywords::FUNC_STRING_LENGTH_STRING, "string-length"_s);
	$assignStatic(Keywords::FUNC_UNPARSED_ENTITY_URI_STRING, "unparsed-entity-uri"_s);
	$assignStatic(Keywords::FUNC_HERE_STRING, "here"_s);
	$assignStatic(Keywords::FUNC_DOCLOCATION_STRING, "document-location"_s);
	{
		$var($Map, keywords, $new($HashMap));
		$var($Map, axisnames, $new($HashMap));
		$var($Map, nodetests, $new($HashMap));
		$var($Map, nodetypes, $new($HashMap));
		axisnames->put(Keywords::FROM_ANCESTORS_STRING, $($Integer::valueOf($OpCodes::FROM_ANCESTORS)));
		axisnames->put(Keywords::FROM_ANCESTORS_OR_SELF_STRING, $($Integer::valueOf($OpCodes::FROM_ANCESTORS_OR_SELF)));
		axisnames->put(Keywords::FROM_ATTRIBUTES_STRING, $($Integer::valueOf($OpCodes::FROM_ATTRIBUTES)));
		axisnames->put(Keywords::FROM_CHILDREN_STRING, $($Integer::valueOf($OpCodes::FROM_CHILDREN)));
		axisnames->put(Keywords::FROM_DESCENDANTS_STRING, $($Integer::valueOf($OpCodes::FROM_DESCENDANTS)));
		axisnames->put(Keywords::FROM_DESCENDANTS_OR_SELF_STRING, $($Integer::valueOf($OpCodes::FROM_DESCENDANTS_OR_SELF)));
		axisnames->put(Keywords::FROM_FOLLOWING_STRING, $($Integer::valueOf($OpCodes::FROM_FOLLOWING)));
		axisnames->put(Keywords::FROM_FOLLOWING_SIBLINGS_STRING, $($Integer::valueOf($OpCodes::FROM_FOLLOWING_SIBLINGS)));
		axisnames->put(Keywords::FROM_PARENT_STRING, $($Integer::valueOf($OpCodes::FROM_PARENT)));
		axisnames->put(Keywords::FROM_PRECEDING_STRING, $($Integer::valueOf($OpCodes::FROM_PRECEDING)));
		axisnames->put(Keywords::FROM_PRECEDING_SIBLINGS_STRING, $($Integer::valueOf($OpCodes::FROM_PRECEDING_SIBLINGS)));
		axisnames->put(Keywords::FROM_SELF_STRING, $($Integer::valueOf($OpCodes::FROM_SELF)));
		axisnames->put(Keywords::FROM_NAMESPACE_STRING, $($Integer::valueOf($OpCodes::FROM_NAMESPACE)));
		$assignStatic(Keywords::m_axisnames, $Collections::unmodifiableMap(axisnames));
		nodetypes->put(Keywords::NODETYPE_COMMENT_STRING, $($Integer::valueOf($OpCodes::NODETYPE_COMMENT)));
		nodetypes->put(Keywords::NODETYPE_TEXT_STRING, $($Integer::valueOf($OpCodes::NODETYPE_TEXT)));
		nodetypes->put(Keywords::NODETYPE_PI_STRING, $($Integer::valueOf($OpCodes::NODETYPE_PI)));
		nodetypes->put(Keywords::NODETYPE_NODE_STRING, $($Integer::valueOf($OpCodes::NODETYPE_NODE)));
		nodetypes->put(Keywords::NODETYPE_ANYELEMENT_STRING, $($Integer::valueOf($OpCodes::NODETYPE_ANYELEMENT)));
		$assignStatic(Keywords::m_nodetypes, $Collections::unmodifiableMap(nodetypes));
		keywords->put(Keywords::FROM_SELF_ABBREVIATED_STRING, $($Integer::valueOf($OpCodes::FROM_SELF)));
		keywords->put(Keywords::FUNC_ID_STRING, $($Integer::valueOf($FunctionTable::FUNC_ID)));
		keywords->put(Keywords::FUNC_KEY_STRING, $($Integer::valueOf($FunctionTable::FUNC_KEY)));
		$assignStatic(Keywords::m_keywords, $Collections::unmodifiableMap(keywords));
		nodetests->put(Keywords::NODETYPE_COMMENT_STRING, $($Integer::valueOf($OpCodes::NODETYPE_COMMENT)));
		nodetests->put(Keywords::NODETYPE_TEXT_STRING, $($Integer::valueOf($OpCodes::NODETYPE_TEXT)));
		nodetests->put(Keywords::NODETYPE_PI_STRING, $($Integer::valueOf($OpCodes::NODETYPE_PI)));
		nodetests->put(Keywords::NODETYPE_NODE_STRING, $($Integer::valueOf($OpCodes::NODETYPE_NODE)));
		$assignStatic(Keywords::m_nodetests, $Collections::unmodifiableMap(nodetests));
	}
}

Keywords::Keywords() {
}

$Class* Keywords::load$($String* name, bool initialize) {
	$loadClass(Keywords, name, initialize, &_Keywords_ClassInfo_, clinit$Keywords, allocate$Keywords);
	return class$;
}

$Class* Keywords::class$ = nullptr;

						} // compiler
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com