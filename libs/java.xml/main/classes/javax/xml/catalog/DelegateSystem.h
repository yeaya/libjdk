#ifndef _javax_xml_catalog_DelegateSystem_h_
#define _javax_xml_catalog_DelegateSystem_h_
//$ class javax.xml.catalog.DelegateSystem
//$ extends javax.xml.catalog.AltCatalog

#include <javax/xml/catalog/AltCatalog.h>

namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class DelegateSystem : public ::javax::xml::catalog::AltCatalog {
	$class(DelegateSystem, $NO_CLASS_INIT, ::javax::xml::catalog::AltCatalog)
public:
	DelegateSystem();
	void init$($String* base, $String* systemIdStartString, $String* catalog);
	$String* getSystemIdStartString();
	using ::javax::xml::catalog::AltCatalog::match;
	virtual $String* match($String* systemId) override;
	virtual ::java::net::URI* matchURI($String* systemId, int32_t currentMatch) override;
	void setSystemIdStartString($String* systemIdStartString);
	$String* systemIdStartString = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_DelegateSystem_h_