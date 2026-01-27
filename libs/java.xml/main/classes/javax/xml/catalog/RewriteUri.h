#ifndef _javax_xml_catalog_RewriteUri_h_
#define _javax_xml_catalog_RewriteUri_h_
//$ class javax.xml.catalog.RewriteUri
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

class RewriteUri : public ::javax::xml::catalog::BaseEntry {
	$class(RewriteUri, $NO_CLASS_INIT, ::javax::xml::catalog::BaseEntry)
public:
	RewriteUri();
	void init$($String* base, $String* uriStartString, $String* rewritePrefix);
	::java::net::URL* getRewritePrefix();
	$String* getURIStartString();
	virtual $String* match($String* systemId, int32_t currentMatch) override;
	virtual $String* match($String* systemId) override;
	void setRewritePrefix($String* rewritePrefix);
	void setURIStartString($String* uriStartString);
	$String* uriStartString = nullptr;
	::java::net::URL* rewritePrefix = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_RewriteUri_h_