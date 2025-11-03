#ifndef _javax_tools_ForwardingFileObject_h_
#define _javax_tools_ForwardingFileObject_h_
//$ class javax.tools.ForwardingFileObject
//$ extends javax.tools.FileObject

#include <javax/tools/FileObject.h>

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

class $export ForwardingFileObject : public ::javax::tools::FileObject {
	$class(ForwardingFileObject, $NO_CLASS_INIT, ::javax::tools::FileObject)
public:
	ForwardingFileObject();
	void init$(::javax::tools::FileObject* fileObject);
	virtual bool delete$() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual ::java::net::URI* toUri() override;
	::javax::tools::FileObject* fileObject = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_ForwardingFileObject_h_