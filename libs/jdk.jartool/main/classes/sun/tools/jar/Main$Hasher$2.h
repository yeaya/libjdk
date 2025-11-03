#ifndef _sun_tools_jar_Main$Hasher$2_h_
#define _sun_tools_jar_Main$Hasher$2_h_
//$ class sun.tools.jar.Main$Hasher$2
//$ extends java.lang.module.ModuleFinder

#include <java/lang/module/ModuleFinder.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Optional;
		class Set;
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

class Main$Hasher$2 : public ::java::lang::module::ModuleFinder {
	$class(Main$Hasher$2, $NO_CLASS_INIT, ::java::lang::module::ModuleFinder)
public:
	Main$Hasher$2();
	void init$(::sun::tools::jar::Main$Hasher* this$1, ::sun::tools::jar::Main* val$this$0, ::java::lang::module::ModuleDescriptor* val$descriptor, ::java::lang::module::ModuleReference* val$mref);
	virtual ::java::util::Optional* find($String* name) override;
	virtual ::java::util::Set* findAll() override;
	::sun::tools::jar::Main$Hasher* this$1 = nullptr;
	::java::lang::module::ModuleReference* val$mref = nullptr;
	::java::lang::module::ModuleDescriptor* val$descriptor = nullptr;
	::sun::tools::jar::Main* val$this$0 = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$Hasher$2_h_