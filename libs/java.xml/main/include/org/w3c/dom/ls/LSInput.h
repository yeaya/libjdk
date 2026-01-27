#ifndef _org_w3c_dom_ls_LSInput_h_
#define _org_w3c_dom_ls_LSInput_h_
//$ interface org.w3c.dom.ls.LSInput
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class Reader;
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $import LSInput : public ::java::lang::Object {
	$interface(LSInput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getBaseURI() {return nullptr;}
	virtual ::java::io::InputStream* getByteStream() {return nullptr;}
	virtual bool getCertifiedText() {return false;}
	virtual ::java::io::Reader* getCharacterStream() {return nullptr;}
	virtual $String* getEncoding() {return nullptr;}
	virtual $String* getPublicId() {return nullptr;}
	virtual $String* getStringData() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
	virtual void setBaseURI($String* baseURI) {}
	virtual void setByteStream(::java::io::InputStream* byteStream) {}
	virtual void setCertifiedText(bool certifiedText) {}
	virtual void setCharacterStream(::java::io::Reader* characterStream) {}
	virtual void setEncoding($String* encoding) {}
	virtual void setPublicId($String* publicId) {}
	virtual void setStringData($String* stringData) {}
	virtual void setSystemId($String* systemId) {}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSInput_h_