#ifndef _javax_xml_catalog_RewriteSystem_h_
#define _javax_xml_catalog_RewriteSystem_h_
//$ class javax.xml.catalog.RewriteSystem
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

class RewriteSystem : public ::javax::xml::catalog::BaseEntry {
	$class(RewriteSystem, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	RewriteSystem();
	void init$($String* base, $String* systemIdStartString, $String* rewritePrefix);
	::java::net::URL* getRewritePrefix();
	$String* getSystemIdStartString();
	virtual $String* match($String* systemId, int32_t currentMatch) override;
	virtual $String* match($String* systemId) override;
	void setRewritePrefix($String* rewritePrefix);
	void setSystemIdStartString($String* systemIdStartString);
	$String* systemIdStartString = nullptr;
	::java::net::URL* rewritePrefix = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_RewriteSystem_h_