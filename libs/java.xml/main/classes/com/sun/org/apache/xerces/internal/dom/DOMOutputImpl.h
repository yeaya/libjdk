#ifndef _com_sun_org_apache_xerces_internal_dom_DOMOutputImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DOMOutputImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DOMOutputImpl
//$ extends org.w3c.dom.ls.LSOutput

#include <org/w3c/dom/ls/LSOutput.h>

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DOMOutputImpl : public ::org::w3c::dom::ls::LSOutput {
	$class(DOMOutputImpl, $NO_CLASS_INIT, ::org::w3c::dom::ls::LSOutput)
public:
	DOMOutputImpl();
	void init$();
	virtual ::java::io::OutputStream* getByteStream() override;
	virtual ::java::io::Writer* getCharacterStream() override;
	virtual $String* getEncoding() override;
	virtual $String* getSystemId() override;
	virtual void setByteStream(::java::io::OutputStream* byteStream) override;
	virtual void setCharacterStream(::java::io::Writer* characterStream) override;
	virtual void setEncoding($String* encoding) override;
	virtual void setSystemId($String* systemId) override;
	::java::io::Writer* fCharStream = nullptr;
	::java::io::OutputStream* fByteStream = nullptr;
	$String* fSystemId = nullptr;
	$String* fEncoding = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DOMOutputImpl_h_