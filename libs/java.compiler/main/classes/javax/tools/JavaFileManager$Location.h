#ifndef _javax_tools_JavaFileManager$Location_h_
#define _javax_tools_JavaFileManager$Location_h_
//$ interface javax.tools.JavaFileManager$Location
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace tools {

class $export JavaFileManager$Location : public ::java::lang::Object {
	$interface(JavaFileManager$Location, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getName() {return nullptr;}
	virtual bool isModuleOrientedLocation();
	virtual bool isOutputLocation() {return false;}
};

	} // tools
} // javax

#endif // _javax_tools_JavaFileManager$Location_h_