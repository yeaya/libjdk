#ifndef _javax_tools_Tool_h_
#define _javax_tools_Tool_h_
//$ interface javax.tools.Tool
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace javax {
	namespace tools {

class $export Tool : public ::java::lang::Object {
	$interface(Tool, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::util::Set* getSourceVersions() {return nullptr;}
	virtual $String* name();
	virtual int32_t run(::java::io::InputStream* in, ::java::io::OutputStream* out, ::java::io::OutputStream* err, $StringArray* arguments) {return 0;}
};

	} // tools
} // javax

#endif // _javax_tools_Tool_h_