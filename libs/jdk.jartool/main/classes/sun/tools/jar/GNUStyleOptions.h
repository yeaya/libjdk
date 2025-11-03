#ifndef _sun_tools_jar_GNUStyleOptions_h_
#define _sun_tools_jar_GNUStyleOptions_h_
//$ class sun.tools.jar.GNUStyleOptions
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class PrintWriter;
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class GNUStyleOptions$Option;
			class Main;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions : public ::java::lang::Object {
	$class(GNUStyleOptions, 0, ::java::lang::Object)
public:
	GNUStyleOptions();
	void init$();
	static ::sun::tools::jar::GNUStyleOptions$Option* getOption($String* name);
	static int32_t parseOptions(::sun::tools::jar::Main* jartool, $StringArray* args);
	static void printCompatHelp(::java::io::PrintWriter* out);
	static void printHelp(::java::io::PrintWriter* out);
	static void printHelp0(::java::io::PrintWriter* out, bool printExtra);
	static void printHelpExtra(::java::io::PrintWriter* out);
	static void printUsageTryHelp(::java::io::PrintWriter* out);
	static void printVersion(::java::io::PrintWriter* out);
	static $Array<::sun::tools::jar::GNUStyleOptions$Option>* recognizedOptions;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_GNUStyleOptions_h_