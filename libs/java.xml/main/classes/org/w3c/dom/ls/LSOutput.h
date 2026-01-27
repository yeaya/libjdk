#ifndef _org_w3c_dom_ls_LSOutput_h_
#define _org_w3c_dom_ls_LSOutput_h_
//$ interface org.w3c.dom.ls.LSOutput
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class OutputStream;
		class Writer;
	}
}

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

class $export LSOutput : public ::java::lang::Object {
	$interface(LSOutput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::io::OutputStream* getByteStream() {return nullptr;}
	virtual ::java::io::Writer* getCharacterStream() {return nullptr;}
	virtual $String* getEncoding() {return nullptr;}
	virtual $String* getSystemId() {return nullptr;}
	virtual void setByteStream(::java::io::OutputStream* byteStream) {}
	virtual void setCharacterStream(::java::io::Writer* characterStream) {}
	virtual void setEncoding($String* encoding) {}
	virtual void setSystemId($String* systemId) {}
};

			} // ls
		} // dom
	} // w3c
} // org

#endif // _org_w3c_dom_ls_LSOutput_h_