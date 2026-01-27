#ifndef _javax_xml_catalog_CatalogImpl$1_h_
#define _javax_xml_catalog_CatalogImpl$1_h_
//$ class javax.xml.catalog.CatalogImpl$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace javax {
	namespace xml {
		namespace catalog {
			class Catalog;
			class CatalogImpl;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogImpl$1 : public ::java::util::Iterator {
	$class(CatalogImpl$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	CatalogImpl$1();
	void init$(::javax::xml::catalog::CatalogImpl* this$0);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	::javax::xml::catalog::Catalog* nextCatalog();
	::javax::xml::catalog::CatalogImpl* this$0 = nullptr;
	::javax::xml::catalog::Catalog* nextCatalog$ = nullptr;
	int32_t inputFilesIndex = 0;
	int32_t nextCatalogIndex = 0;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogImpl$1_h_