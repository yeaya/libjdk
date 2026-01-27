#ifndef _javax_xml_catalog_CatalogResolver_h_
#define _javax_xml_catalog_CatalogResolver_h_
//$ interface javax.xml.catalog.CatalogResolver
//$ extends org.xml.sax.EntityResolver,javax.xml.stream.XMLResolver,javax.xml.transform.URIResolver,org.w3c.dom.ls.LSResourceResolver

#include <javax/xml/stream/XMLResolver.h>
#include <javax/xml/transform/URIResolver.h>
#include <org/w3c/dom/ls/LSResourceResolver.h>
#include <org/xml/sax/EntityResolver.h>

namespace javax {
	namespace xml {
		namespace catalog {

class $export CatalogResolver : public ::org::xml::sax::EntityResolver, public ::javax::xml::stream::XMLResolver, public ::javax::xml::transform::URIResolver, public ::org::w3c::dom::ls::LSResourceResolver {
	$interface(CatalogResolver, $NO_CLASS_INIT, ::org::xml::sax::EntityResolver, ::javax::xml::stream::XMLResolver, ::javax::xml::transform::URIResolver, ::org::w3c::dom::ls::LSResourceResolver)
public:
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	virtual ::javax::xml::transform::Source* resolve($String* href, $String* base) override {return nullptr;}
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override {return nullptr;}
	virtual $Object* resolveEntity($String* publicId, $String* systemId, $String* baseUri, $String* namespace$) override {return nullptr;}
	virtual ::org::w3c::dom::ls::LSInput* resolveResource($String* type, $String* namespaceUri, $String* publicId, $String* systemId, $String* baseUri) override {return nullptr;}
	virtual $String* toString() override;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogResolver_h_