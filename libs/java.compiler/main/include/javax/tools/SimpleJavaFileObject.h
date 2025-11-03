#ifndef _javax_tools_SimpleJavaFileObject_h_
#define _javax_tools_SimpleJavaFileObject_h_
//$ class javax.tools.SimpleJavaFileObject
//$ extends javax.tools.JavaFileObject

#include <javax/tools/JavaFileObject.h>

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
	namespace lang {
		namespace model {
			namespace element {
				class Modifier;
				class NestingKind;
			}
		}
	}
}
namespace javax {
	namespace tools {
		class JavaFileObject$Kind;
	}
}

namespace javax {
	namespace tools {

class $import SimpleJavaFileObject : public ::javax::tools::JavaFileObject {
	$class(SimpleJavaFileObject, $NO_CLASS_INIT, ::javax::tools::JavaFileObject)
public:
	SimpleJavaFileObject();
	void init$(::java::net::URI* uri, ::javax::tools::JavaFileObject$Kind* kind);
	virtual bool delete$() override;
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
	::java::net::URI* uri = nullptr;
	::javax::tools::JavaFileObject$Kind* kind = nullptr;
};

	} // tools
} // javax

#endif // _javax_tools_SimpleJavaFileObject_h_