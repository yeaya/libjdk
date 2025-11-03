#ifndef _javax_tools_ForwardingJavaFileObject_h_
#define _javax_tools_ForwardingJavaFileObject_h_
//$ class javax.tools.ForwardingJavaFileObject
//$ extends javax.tools.ForwardingFileObject
//$ implements javax.tools.JavaFileObject

#include <javax/tools/ForwardingFileObject.h>
#include <javax/tools/JavaFileObject.h>

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

class $export ForwardingJavaFileObject : public ::javax::tools::ForwardingFileObject, public ::javax::tools::JavaFileObject {
	$class(ForwardingJavaFileObject, $NO_CLASS_INIT, ::javax::tools::ForwardingFileObject, ::javax::tools::JavaFileObject)
public:
	ForwardingJavaFileObject();
	virtual $Object* clone() override;
	virtual bool delete$() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::lang::CharSequence* getCharContent(bool ignoreEncodingErrors) override;
	virtual int64_t getLastModified() override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	void init$(::javax::tools::JavaFileObject* fileObject);
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() override;
	virtual ::javax::tools::JavaFileObject$Kind* getKind() override;
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() override;
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) override;
	virtual ::java::io::InputStream* openInputStream() override;
	virtual ::java::io::OutputStream* openOutputStream() override;
	virtual ::java::io::Reader* openReader(bool ignoreEncodingErrors) override;
	virtual ::java::io::Writer* openWriter() override;
	virtual $String* toString() override;
	virtual ::java::net::URI* toUri() override;
};

	} // tools
} // javax

#endif // _javax_tools_ForwardingJavaFileObject_h_