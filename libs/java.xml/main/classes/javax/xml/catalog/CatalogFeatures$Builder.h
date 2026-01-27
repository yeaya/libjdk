#ifndef _javax_xml_catalog_CatalogFeatures$Builder_h_
#define _javax_xml_catalog_CatalogFeatures$Builder_h_
//$ class javax.xml.catalog.CatalogFeatures$Builder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogFeatures;
			class CatalogFeatures$Feature;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class $export CatalogFeatures$Builder : public ::java::lang::Object {
	$class(CatalogFeatures$Builder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CatalogFeatures$Builder();
	void init$();
	virtual ::javax::xml::catalog::CatalogFeatures* build();
	virtual ::javax::xml::catalog::CatalogFeatures$Builder* with(::javax::xml::catalog::CatalogFeatures$Feature* feature, $String* value);
	::java::util::Map* values = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogFeatures$Builder_h_