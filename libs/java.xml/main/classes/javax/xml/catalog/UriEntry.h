#ifndef _javax_xml_catalog_UriEntry_h_
#define _javax_xml_catalog_UriEntry_h_
//$ class javax.xml.catalog.UriEntry
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

class UriEntry : public ::javax::xml::catalog::BaseEntry {
	$class(UriEntry, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	UriEntry();
	void init$($String* base, $String* name, $String* uri);
	$String* getName();
	::java::net::URL* getURI();
	using ::javax::xml::catalog::BaseEntry::match;
	virtual $String* match($String* name) override;
	void setName($String* name);
	void setURI($String* uri);
	$String* name = nullptr;
	::java::net::URL* uri = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_UriEntry_h_