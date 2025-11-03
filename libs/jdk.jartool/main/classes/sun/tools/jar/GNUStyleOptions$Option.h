#ifndef _sun_tools_jar_GNUStyleOptions$Option_h_
#define _sun_tools_jar_GNUStyleOptions$Option_h_
//$ class sun.tools.jar.GNUStyleOptions$Option
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class GNUStyleOptions$Option : public ::java::lang::Object {
	$class(GNUStyleOptions$Option, $NO_CLASS_INIT, ::java::lang::Object)
public:
	GNUStyleOptions$Option();
	void init$(bool hasArg, ::sun::tools::jar::GNUStyleOptions$OptionType* type, $StringArray* aliases);
	void init$(bool hasArg, bool argIsOptional, ::sun::tools::jar::GNUStyleOptions$OptionType* type, $StringArray* aliases);
	virtual bool isExtra();
	virtual bool isHidden();
	virtual bool matches($String* opt);
	virtual void process(::sun::tools::jar::Main* jartool, $String* opt, $String* arg) {}
	bool hasArg = false;
	bool argIsOptional = false;
	$StringArray* aliases = nullptr;
	::sun::tools::jar::GNUStyleOptions$OptionType* type = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_GNUStyleOptions$Option_h_