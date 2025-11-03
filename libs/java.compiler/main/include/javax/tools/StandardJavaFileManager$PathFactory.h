#ifndef _javax_tools_StandardJavaFileManager$PathFactory_h_
#define _javax_tools_StandardJavaFileManager$PathFactory_h_
//$ interface javax.tools.StandardJavaFileManager$PathFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace nio {
		namespace file {
			class Path;
		}
	}
}

namespace javax {
	namespace tools {

class $import StandardJavaFileManager$PathFactory : public ::java::lang::Object {
	$interface(StandardJavaFileManager$PathFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::nio::file::Path* getPath($String* first, $StringArray* more) {return nullptr;}
};

	} // tools
} // javax

#endif // _javax_tools_StandardJavaFileManager$PathFactory_h_