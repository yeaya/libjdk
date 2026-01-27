#ifndef _javax_xml_catalog_NextCatalog_h_
#define _javax_xml_catalog_NextCatalog_h_
//$ class javax.xml.catalog.NextCatalog
//$ extends javax.xml.catalog.AltCatalog

#include <javax/xml/catalog/AltCatalog.h>

namespace javax {
	namespace xml {
		namespace catalog {

class NextCatalog : public ::javax::xml::catalog::AltCatalog {
	$class(NextCatalog, $NO_CLASS_INIT, ::javax::xml::catalog::AltCatalog)
public:
	NextCatalog();
	void init$($String* base, $String* catalog);
	using ::javax::xml::catalog::AltCatalog::match;
	virtual $String* match($String* match) override;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_NextCatalog_h_