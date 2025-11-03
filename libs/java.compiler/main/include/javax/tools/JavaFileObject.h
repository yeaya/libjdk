#ifndef _javax_tools_JavaFileObject_h_
#define _javax_tools_JavaFileObject_h_
//$ interface javax.tools.JavaFileObject
//$ extends javax.tools.FileObject

#include <javax/tools/FileObject.h>

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

class $import JavaFileObject : public ::javax::tools::FileObject {
	$interface(JavaFileObject, $NO_CLASS_INIT, ::javax::tools::FileObject)
public:
	virtual ::javax::lang::model::element::Modifier* getAccessLevel() {return nullptr;}
	virtual ::javax::tools::JavaFileObject$Kind* getKind() {return nullptr;}
	virtual ::javax::lang::model::element::NestingKind* getNestingKind() {return nullptr;}
	virtual bool isNameCompatible($String* simpleName, ::javax::tools::JavaFileObject$Kind* kind) {return false;}
};

	} // tools
} // javax

#endif // _javax_tools_JavaFileObject_h_