#ifndef _sun_tools_jar_Main$Entry_h_
#define _sun_tools_jar_Main$Entry_h_
//$ class sun.tools.jar.Main$Entry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class File;
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$Entry : public ::java::lang::Object {
	$class(Main$Entry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main$Entry();
	void init$(::java::io::File* file, $String* name, bool isDir);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	$String* name = nullptr;
	::java::io::File* file = nullptr;
	bool isDir = false;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$Entry_h_