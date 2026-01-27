#ifndef _javax_xml_catalog_CatalogReader_h_
#define _javax_xml_catalog_CatalogReader_h_
//$ class javax.xml.catalog.CatalogReader
//$ extends org.xml.sax.helpers.DefaultHandler
//$ implements javax.xml.transform.URIResolver

#include <javax/xml/transform/URIResolver.h>
#include <org/xml/sax/helpers/DefaultHandler.h>

#pragma push_macro("NAMESPACE_OASIS")
#undef NAMESPACE_OASIS

namespace javax {
	namespace xml {
		namespace catalog {
			class BaseEntry;
			class Catalog;
			class CatalogEntry;
			class CatalogImpl;
			class GroupEntry;
		}
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class SAXParser;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogReader : public ::org::xml::sax::helpers::DefaultHandler, public ::javax::xml::transform::URIResolver {
	$class(CatalogReader, 0, ::org::xml::sax::helpers::DefaultHandler, ::javax::xml::transform::URIResolver)
public:
	CatalogReader();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::catalog::Catalog* catalog, ::javax::xml::parsers::SAXParser* parser);
	virtual void endElement($String* namespaceURI, $String* localName, $String* qName) override;
	virtual ::javax::xml::transform::Source* resolve($String* href, $String* base) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void startElement($String* namespaceURI, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual $String* toString() override;
	static $String* xmlCatalogXSD;
	static $String* xmlCatalogPubId;
	static $String* NAMESPACE_OASIS;
	bool seenRoot = false;
	bool inGroup = false;
	::javax::xml::catalog::CatalogImpl* catalog = nullptr;
	::javax::xml::parsers::SAXParser* parser = nullptr;
	::javax::xml::catalog::CatalogEntry* catalogEntry = nullptr;
	::javax::xml::catalog::GroupEntry* group = nullptr;
	::javax::xml::catalog::BaseEntry* entry = nullptr;
	bool ignoreTheCatalog = false;
};

		} // catalog
	} // xml
} // javax

#pragma pop_macro("NAMESPACE_OASIS")

#endif // _javax_xml_catalog_CatalogReader_h_