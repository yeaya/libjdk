#ifndef _javax_xml_catalog_CatalogResolverImpl$LSInputImpl_h_
#define _javax_xml_catalog_CatalogResolverImpl$LSInputImpl_h_
//$ class javax.xml.catalog.CatalogResolverImpl$LSInputImpl
//$ extends org.w3c.dom.ls.LSInput

#include <org/w3c/dom/ls/LSInput.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}
namespace javax {
	namespace xml {
		namespace catalog {
			class CatalogResolverImpl;
		}
	}
}

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogResolverImpl$LSInputImpl : public ::org::w3c::dom::ls::LSInput {
	$class(CatalogResolverImpl$LSInputImpl, $NO_CLASS_INIT, ::org::w3c::dom::ls::LSInput)
public:
	CatalogResolverImpl$LSInputImpl();
	void init$(::javax::xml::catalog::CatalogResolverImpl* this$0, $String* systemId);
	virtual $String* getBaseURI() override;
	virtual ::java::io::InputStream* getByteStream() override;
	virtual bool getCertifiedText() override;
	virtual ::java::io::Reader* getCharacterStream() override;
	virtual $String* getEncoding() override;
	virtual $String* getPublicId() override;
	virtual $String* getStringData() override;
	virtual $String* getSystemId() override;
	virtual void setBaseURI($String* baseURI) override;
	virtual void setByteStream(::java::io::InputStream* byteStream) override;
	virtual void setCertifiedText(bool certifiedText) override;
	virtual void setCharacterStream(::java::io::Reader* characterStream) override;
	virtual void setEncoding($String* encoding) override;
	virtual void setPublicId($String* publicId) override;
	virtual void setStringData($String* stringData) override;
	virtual void setSystemId($String* systemId) override;
	::javax::xml::catalog::CatalogResolverImpl* this$0 = nullptr;
	$String* systemId = nullptr;
};

		} // catalog
	} // xml
} // javax

#endif // _javax_xml_catalog_CatalogResolverImpl$LSInputImpl_h_