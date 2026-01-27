#ifndef _javax_xml_catalog_DelegatePublic_h_
#define _javax_xml_catalog_DelegatePublic_h_
//$ class javax.xml.catalog.DelegatePublic
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

class DelegatePublic : public ::javax::xml::catalog::AltCatalog {
	$class(DelegatePublic, $NO_CLASS_INIT, ::javax::xml::catalog::AltCatalog)
public:
	DelegatePublic();
	void init$($String* base, $String* startString, $String* catalog);
	$String* getPublicIdStartString();
	using ::javax::xml::catalog::AltCatalog::match;
	virtual $String* match($String* publicId) override;
	virtual ::java::net::URI* matchURI($String* publicId, int32_t currentMatch) override;
	void setPublicIdStartString($String* startString);
	$String* publicIdStartString = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_DelegatePublic_h_