#ifndef _javax_xml_catalog_UriSuffix_h_
#define _javax_xml_catalog_UriSuffix_h_
//$ class javax.xml.catalog.UriSuffix
//$ extends javax.xml.catalog.BaseEntry

#include <javax/xml/catalog/BaseEntry.h>

namespace java {
	namespace net {
		class URL;
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class UriSuffix : public ::javax::xml::catalog::BaseEntry {
	$class(UriSuffix, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	UriSuffix();
	void init$($String* base, $String* uriSuffix, $String* uri);
	$String* getURI();
	$String* getURISuffix();
	virtual $String* match($String* systemId, int32_t currentMatch) override;
	virtual $String* match($String* systemId) override;
	void setURI($String* uri);
	void setURISuffix($String* uriSuffix);
	$String* uriSuffix = nullptr;
	::java::net::URL* uri = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_UriSuffix_h_