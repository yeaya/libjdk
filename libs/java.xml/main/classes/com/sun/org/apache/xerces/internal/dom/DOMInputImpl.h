#ifndef _com_sun_org_apache_xerces_internal_dom_DOMInputImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMInputImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMInputImpl
//$ extends org.w3c.dom.ls.LSInput

#include <org/w3c/dom/ls/LSInput.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMInputImpl : public ::org::w3c::dom::ls::LSInput {
	$class(DOMInputImpl, $NO_CLASS_INIT, ::org::w3c::dom::ls::LSInput)
public:
	DOMInputImpl();
	void init$();
	void init$($String* publicId, $String* systemId, $String* baseSystemId);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::InputStream* byteStream, $String* encoding);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, ::java::io::Reader* charStream, $String* encoding);
	void init$($String* publicId, $String* systemId, $String* baseSystemId, $String* data, $String* encoding);
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
	$String* fPublicId = nullptr;
	$String* fSystemId = nullptr;
	$String* fBaseSystemId = nullptr;
	::java::io::InputStream* fByteStream = nullptr;
	::java::io::Reader* fCharStream = nullptr;
	$String* fData = nullptr;
	$String* fEncoding = nullptr;
	bool fCertifiedText = false;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMInputImpl_h_