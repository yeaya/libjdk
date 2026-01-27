#ifndef _javax_xml_catalog_Catalog_h_
#define _javax_xml_catalog_Catalog_h_
//$ interface javax.xml.catalog.Catalog
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class $export Catalog : public ::java::lang::Object {
	$interface(Catalog, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::stream::Stream* catalogs() {return nullptr;}
	virtual $String* matchPublic($String* publicId) {return nullptr;}
	virtual $String* matchSystem($String* systemId) {return nullptr;}
	virtual $String* matchURI($String* uri) {return nullptr;}
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_Catalog_h_