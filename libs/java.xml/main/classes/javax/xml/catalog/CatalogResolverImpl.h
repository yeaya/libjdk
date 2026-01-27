#ifndef _javax_xml_catalog_CatalogResolverImpl_h_
#define _javax_xml_catalog_CatalogResolverImpl_h_
//$ class javax.xml.catalog.CatalogResolverImpl
//$ extends javax.xml.catalog.CatalogResolver

#include <javax/xml/catalog/CatalogResolver.h>

namespace javax {
	namespace xml {
		namespace catalog {
			class Catalog;
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
namespace javax {
	namespace xml {
		namespace transform {
			namespace sax {
				class SAXSource;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSInput;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class InputSource;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogResolverImpl : public ::javax::xml::catalog::CatalogResolver {
	$class(CatalogResolverImpl, $NO_CLASS_INIT, ::javax::xml::catalog::CatalogResolver)
public:
	CatalogResolverImpl();
	void init$(::javax::xml::catalog::Catalog* catalog);
	virtual ::javax::xml::transform::Source* resolve($String* href, $String* base) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual $Object* resolveEntity($String* publicId, $String* systemId, $String* baseUri, $String* namespace$) override;
	virtual ::org::w3c::dom::ls::LSInput* resolveResource($String* type, $String* namespaceURI, $String* publicId, $String* systemId, $String* baseURI) override;
	void setEntityResolver(::javax::xml::transform::sax::SAXSource* source);
	::javax::xml::catalog::Catalog* catalog = nullptr;
	::javax::xml::catalog::CatalogResolverImpl* entityResolver = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogResolverImpl_h_