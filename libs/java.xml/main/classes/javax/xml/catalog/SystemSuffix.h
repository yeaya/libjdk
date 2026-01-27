#ifndef _javax_xml_catalog_SystemSuffix_h_
#define _javax_xml_catalog_SystemSuffix_h_
//$ class javax.xml.catalog.SystemSuffix
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

class SystemSuffix : public ::javax::xml::catalog::BaseEntry {
	$class(SystemSuffix, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	SystemSuffix();
	void init$($String* base, $String* systemIdSuffix, $String* uri);
	$String* getSystemIdSuffix();
	::java::net::URL* getURI();
	virtual $String* match($String* systemId, int32_t currentMatch) override;
	virtual $String* match($String* systemId) override;
	void setSystemIdSuffix($String* systemIdSuffix);
	void setURI($String* uri);
	$String* systemIdSuffix = nullptr;
	::java::net::URL* uri = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_SystemSuffix_h_