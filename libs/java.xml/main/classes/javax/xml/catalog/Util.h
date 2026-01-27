#ifndef _javax_xml_catalog_Util_h_
#define _javax_xml_catalog_Util_h_
//$ class javax.xml.catalog.Util
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("PUBLICID_PREFIX")
#undef PUBLICID_PREFIX
#pragma push_macro("PUBLICID_PREFIX_ALT")
#undef PUBLICID_PREFIX_ALT
#pragma push_macro("SCHEME_FILE")
#undef SCHEME_FILE
#pragma push_macro("SCHEME_JAR")
#undef SCHEME_JAR
#pragma push_macro("SCHEME_JARFILE")
#undef SCHEME_JARFILE
#pragma push_macro("URN")
#undef URN

namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures$Feature;
			class CatalogImpl;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class Util : public ::java::lang::Object {
	$class(Util, 0, ::java::lang::Object)
public:
	Util();
	void init$();
	static $StringArray* getCatalogFiles($String* sysPropertyName);
	static $String* getNotNullOrEmpty($String* test);
	static bool isFileUri(::java::net::URI* uri);
	static bool isFileUriExist(::java::net::URI* uri, bool openJarFile);
	static $String* resolve(::javax::xml::catalog::CatalogImpl* catalog, $String* publicId, $String* systemId);
	static void validateFeatureInput(::javax::xml::catalog::CatalogFeatures$Feature* f, $String* value);
	static void validateUriSyntax(::java::net::URI* uri);
	static void validateUrisSyntax($Array<::java::net::URI>* uris);
	static void validateUrisSyntax($StringArray* uris);
	static $String* URN;
	static $String* PUBLICID_PREFIX;
	static $String* PUBLICID_PREFIX_ALT;
	static $String* SCHEME_FILE;
	static $String* SCHEME_JAR;
	static $String* SCHEME_JARFILE;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("PUBLICID_PREFIX")
#pragma pop_macro("PUBLICID_PREFIX_ALT")
#pragma pop_macro("SCHEME_FILE")
#pragma pop_macro("SCHEME_JAR")
#pragma pop_macro("SCHEME_JARFILE")
#pragma pop_macro("URN")

#endif // _javax_xml_catalog_Util_h_