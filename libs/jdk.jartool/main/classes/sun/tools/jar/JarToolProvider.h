#ifndef _sun_tools_jar_JarToolProvider_h_
#define _sun_tools_jar_JarToolProvider_h_
//$ class sun.tools.jar.JarToolProvider
//$ extends java.util.spi.ToolProvider

#include <java/lang/Array.h>
#include <java/util/spi/ToolProvider.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class JarToolProvider : public ::java::util::spi::ToolProvider {
	$class(JarToolProvider, $NO_CLASS_INIT, ::java::util::spi::ToolProvider)
public:
	JarToolProvider();
	void init$();
	virtual $String* name() override;
	using ::java::util::spi::ToolProvider::run;
	virtual int32_t run(::java::io::PrintWriter* out, ::java::io::PrintWriter* err, $StringArray* args) override;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_JarToolProvider_h_