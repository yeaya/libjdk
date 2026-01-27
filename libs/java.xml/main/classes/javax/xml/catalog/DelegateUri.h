#ifndef _javax_xml_catalog_DelegateUri_h_
#define _javax_xml_catalog_DelegateUri_h_
//$ class javax.xml.catalog.DelegateUri
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

class DelegateUri : public ::javax::xml::catalog::AltCatalog {
	$class(DelegateUri, $NO_CLASS_INIT, ::javax::xml::catalog::AltCatalog)
public:
	DelegateUri();
	void init$($String* base, $String* uriStartString, $String* catalog);
	$String* getURIStartString();
	using ::javax::xml::catalog::AltCatalog::match;
	virtual $String* match($String* systemId) override;
	virtual ::java::net::URI* matchURI($String* systemId, int32_t currentMatch) override;
	void setURIStartString($String* uriStartString);
	$String* uriStartString = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_DelegateUri_h_