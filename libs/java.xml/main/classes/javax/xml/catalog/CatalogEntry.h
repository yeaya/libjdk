#ifndef _javax_xml_catalog_CatalogEntry_h_
#define _javax_xml_catalog_CatalogEntry_h_
//$ class javax.xml.catalog.CatalogEntry
//$ extends javax.xml.catalog.GroupEntry

#include <java/lang/Array.h>
#include <javax/xml/catalog/GroupEntry.h>

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogEntry : public ::javax::xml::catalog::GroupEntry {
	$class(CatalogEntry, $NO_CLASS_INIT, ::javax::xml::catalog::GroupEntry)
public:
	CatalogEntry();
	void init$($String* base, $StringArray* attributes);
	using ::javax::xml::catalog::GroupEntry::match;
	virtual $String* match($String* match) override;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogEntry_h_