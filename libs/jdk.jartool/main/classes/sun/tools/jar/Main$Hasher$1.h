#ifndef _sun_tools_jar_Main$Hasher$1_h_
#define _sun_tools_jar_Main$Hasher$1_h_
//$ class sun.tools.jar.Main$Hasher$1
//$ extends java.lang.module.ModuleReference

#include <java/lang/module/ModuleReference.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleReader;
		}
	}
}
namespace java {
	namespace net {
		class URI;
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class Main;
			class Main$Hasher;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$Hasher$1 : public ::java::lang::module::ModuleReference {
	$class(Main$Hasher$1, $NO_CLASS_INIT, ::java::lang::module::ModuleReference)
public:
	Main$Hasher$1();
	void init$(::sun::tools::jar::Main$Hasher* this$1, ::java::lang::module::ModuleDescriptor* arg0, ::java::net::URI* arg1, ::sun::tools::jar::Main* val$this$0);
	virtual ::java::lang::module::ModuleReader* open() override;
	::sun::tools::jar::Main$Hasher* this$1 = nullptr;
	::sun::tools::jar::Main* val$this$0 = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$Hasher$1_h_