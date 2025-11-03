#ifndef _javax_tools_FileObject_h_
#define _javax_tools_FileObject_h_
//$ interface javax.tools.FileObject
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
		class Reader;
		class Writer;
	}
}
namespace java {
	namespace lang {
		class CharSequence;
	}
}
namespace java {
	namespace net {
		class URI;
	}
}

namespace javax {
	namespace tools {

class $import FileObject : public ::java::lang::Object {
	$interface(FileObject, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool delete$() {return false;}
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) {return nullptr;}
	virtual int64_t getLastModified() {return 0;}
	virtual $String* getName() {return nullptr;}
	virtual ::java::io::InputStream* openInputStream() {return nullptr;}
	virtual ::java::io::OutputStream* openOutputStream() {return nullptr;}
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) {return nullptr;}
	virtual ::java::io::Writer* openWriter() {return nullptr;}
	virtual ::java::net::URI* toUri() {return nullptr;}
};

	} // tools
} // javax

#endif // _javax_tools_FileObject_h_