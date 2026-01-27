#ifndef _javax_xml_catalog_SystemEntry_h_
#define _javax_xml_catalog_SystemEntry_h_
//$ class javax.xml.catalog.SystemEntry
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

class SystemEntry : public ::javax::xml::catalog::BaseEntry {
	$class(SystemEntry, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	SystemEntry();
	void init$($String* base, $String* systemId, $String* uri);
	$String* getSystemId();
	::java::net::URL* getURI();
	using ::javax::xml::catalog::BaseEntry::match;
	virtual $String* match($String* systemId) override;
	void setSystemId($String* systemId);
	void setURI($String* uri);
	$String* systemId = nullptr;
	::java::net::URL* uri = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_SystemEntry_h_