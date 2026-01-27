#ifndef _javax_xml_catalog_CatalogManager_h_
#define _javax_xml_catalog_CatalogManager_h_
//$ class javax.xml.catalog.CatalogManager
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class Catalog;
			class CatalogFeatures;
			class CatalogResolver;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class $export CatalogManager : public ::java::lang::Object {
	$class(CatalogManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CatalogManager();
	void init$();
	static ::javax::xml::catalog::Catalog* catalog(::javax::xml::catalog::CatalogFeatures* features, $Array<::java::net::URI>* uris);
	static ::javax::xml::catalog::CatalogResolver* catalogResolver(::javax::xml::catalog::Catalog* catalog);
	static ::javax::xml::catalog::CatalogResolver* catalogResolver(::javax::xml::catalog::CatalogFeatures* features, $Array<::java::net::URI>* uris);
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogManager_h_