#ifndef _javax_xml_catalog_Normalizer_h_
#define _javax_xml_catalog_Normalizer_h_
//$ class javax.xml.catalog.Normalizer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace catalog {

class Normalizer : public ::java::lang::Object {
	$class(Normalizer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Normalizer();
	void init$();
	static $String* decodeURN($String* urn);
	static $String* encodeURN($String* publicId);
	static $String* normalizePublicId($String* publicId);
	static $String* normalizeURI($String* uriref);
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_Normalizer_h_