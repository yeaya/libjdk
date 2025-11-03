#ifndef _sun_tools_jar_GNUStyleOptions$15_h_
#define _sun_tools_jar_GNUStyleOptions$15_h_
//$ class sun.tools.jar.GNUStyleOptions$15
//$ extends sun.tools.jar.GNUStyleOptions$Option

#include <java/lang/Array.h>
#include <sun/tools/jar/GNUStyleOptions$Option.h>

namespace sun {
	namespace tools {
		namespace jar {
			class GNUStyleOptions$OptionType;
			class Main;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class GNUStyleOptions$15 : public ::sun::tools::jar::GNUStyleOptions$Option {
	$class(GNUStyleOptions$15, $NO_CLASS_INIT, ::sun::tools::jar::GNUStyleOptions$Option)
public:
	GNUStyleOptions$15();
	void init$(bool hasArg, ::sun::tools::jar::GNUStyleOptions$OptionType* type, $StringArray* aliases);
	virtual void process(::sun::tools::jar::Main* jartool, $String* opt, $String* arg) override;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_GNUStyleOptions$15_h_