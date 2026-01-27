#ifndef _javax_xml_catalog_CatalogMessages_h_
#define _javax_xml_catalog_CatalogMessages_h_
//$ class javax.xml.catalog.CatalogMessages
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ERR_CIRCULAR_REFERENCE")
#undef ERR_CIRCULAR_REFERENCE
#pragma push_macro("ERR_CREATING_URI")
#undef ERR_CREATING_URI
#pragma push_macro("ERR_INVALID_ARGUMENT")
#undef ERR_INVALID_ARGUMENT
#pragma push_macro("ERR_INVALID_CATALOG")
#undef ERR_INVALID_CATALOG
#pragma push_macro("ERR_INVALID_ENTRY_TYPE")
#undef ERR_INVALID_ENTRY_TYPE
#pragma push_macro("ERR_INVALID_PATH")
#undef ERR_INVALID_PATH
#pragma push_macro("ERR_NO_CATALOG")
#undef ERR_NO_CATALOG
#pragma push_macro("ERR_NO_MATCH")
#undef ERR_NO_MATCH
#pragma push_macro("ERR_NO_URI_MATCH")
#undef ERR_NO_URI_MATCH
#pragma push_macro("ERR_NULL_ARGUMENT")
#undef ERR_NULL_ARGUMENT
#pragma push_macro("ERR_OTHER")
#undef ERR_OTHER
#pragma push_macro("ERR_PARSER_CONF")
#undef ERR_PARSER_CONF
#pragma push_macro("ERR_PARSING_FAILED")
#undef ERR_PARSING_FAILED
#pragma push_macro("ERR_URI_NOTABSOLUTE")
#undef ERR_URI_NOTABSOLUTE
#pragma push_macro("ERR_URI_NOTVALIDURL")
#undef ERR_URI_NOTVALIDURL

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Locale;
		class ResourceBundle;
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogMessages : public ::java::lang::Object {
	$class(CatalogMessages, 0, ::java::lang::Object)
public:
	CatalogMessages();
	void init$();
	static $String* formatMessage($String* key, $ObjectArray* arguments);
	static $String* formatMessage($String* key, $ObjectArray* arguments, ::java::util::Locale* locale);
	static void reportError($String* key);
	static void reportError($String* key, $ObjectArray* arguments);
	static void reportIAE($String* key, $ObjectArray* arguments, $Throwable* cause);
	static void reportIAEOnNull($String* name, $String* value);
	static void reportNPEOnNull($String* name, Object$* value);
	static void reportRunTimeError($String* key, $ObjectArray* arguments);
	static void reportRunTimeError($String* key, $Throwable* cause);
	static void reportRunTimeError($String* key, $ObjectArray* arguments, $Throwable* cause);
	static $String* sanitize($String* uri);
	static $String* ERR_INVALID_CATALOG;
	static $String* ERR_INVALID_ENTRY_TYPE;
	static $String* ERR_URI_NOTABSOLUTE;
	static $String* ERR_URI_NOTVALIDURL;
	static $String* ERR_INVALID_ARGUMENT;
	static $String* ERR_NULL_ARGUMENT;
	static $String* ERR_CIRCULAR_REFERENCE;
	static $String* ERR_INVALID_PATH;
	static $String* ERR_PARSER_CONF;
	static $String* ERR_PARSING_FAILED;
	static $String* ERR_NO_CATALOG;
	static $String* ERR_NO_MATCH;
	static $String* ERR_NO_URI_MATCH;
	static $String* ERR_CREATING_URI;
	static $String* ERR_OTHER;
	static $String* bundleName;
	static ::java::util::ResourceBundle* resourceBundle;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("ERR_CIRCULAR_REFERENCE")
#pragma pop_macro("ERR_CREATING_URI")
#pragma pop_macro("ERR_INVALID_ARGUMENT")
#pragma pop_macro("ERR_INVALID_CATALOG")
#pragma pop_macro("ERR_INVALID_ENTRY_TYPE")
#pragma pop_macro("ERR_INVALID_PATH")
#pragma pop_macro("ERR_NO_CATALOG")
#pragma pop_macro("ERR_NO_MATCH")
#pragma pop_macro("ERR_NO_URI_MATCH")
#pragma pop_macro("ERR_NULL_ARGUMENT")
#pragma pop_macro("ERR_OTHER")
#pragma pop_macro("ERR_PARSER_CONF")
#pragma pop_macro("ERR_PARSING_FAILED")
#pragma pop_macro("ERR_URI_NOTABSOLUTE")
#pragma pop_macro("ERR_URI_NOTVALIDURL")

#endif // _javax_xml_catalog_CatalogMessages_h_