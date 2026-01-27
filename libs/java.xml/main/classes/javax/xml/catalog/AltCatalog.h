#ifndef _javax_xml_catalog_AltCatalog_h_
#define _javax_xml_catalog_AltCatalog_h_
//$ class javax.xml.catalog.AltCatalog
//$ extends javax.xml.catalog.BaseEntry

#include <javax/xml/catalog/BaseEntry.h>

namespace java {
	namespace net {
		class URI;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class BaseEntry$CatalogEntryType;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class AltCatalog : public ::javax::xml::catalog::BaseEntry {
	$class(AltCatalog, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	AltCatalog();
	void init$(::javax::xml::catalog::BaseEntry$CatalogEntryType* type, $String* base);
	virtual $String* getCatalogId();
	virtual ::java::net::URI* getCatalogURI();
	virtual ::java::net::URI* matchURI($String* id, int32_t currentMatch);
	virtual void setCatalog($String* catalog);
	::java::net::URI* catalogURI = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_AltCatalog_h_