#ifndef _javax_xml_catalog_PublicEntry_h_
#define _javax_xml_catalog_PublicEntry_h_
//$ class javax.xml.catalog.PublicEntry
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

class PublicEntry : public ::javax::xml::catalog::BaseEntry {
	$class(PublicEntry, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	PublicEntry();
	void init$($String* base, $String* publicId, $String* uri);
	$String* getPublicId();
	::java::net::URL* getURI();
	using ::javax::xml::catalog::BaseEntry::match;
	virtual $String* match($String* publicId) override;
	void setPublicId($String* publicId);
	void setURI($String* uri);
	$String* publicId = nullptr;
	::java::net::URL* uri = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_PublicEntry_h_