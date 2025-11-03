#ifndef _sun_tools_jar_Main$Hasher_h_
#define _sun_tools_jar_Main$Hasher_h_
//$ class sun.tools.jar.Main$Hasher
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
			class ModuleFinder;
			class ModuleReference;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace jdk {
	namespace internal {
		namespace module {
			class ModuleHashes;
			class ModuleHashesBuilder;
		}
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class Main;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Main$Hasher : public ::java::lang::Object {
	$class(Main$Hasher, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Main$Hasher();
	void init$(::sun::tools::jar::Main* this$0, ::java::lang::module::ModuleDescriptor* descriptor, $String* fname);
	virtual ::jdk::internal::module::ModuleHashes* computeHashes($String* name);
	static $String* lambda$new$0(::java::lang::module::ModuleReference* ref);
	bool lambda$new$1($String* mn);
	static bool lambda$new$2(::java::util::Set* roots, ::java::lang::module::ModuleFinder* system, $String* mn);
	::sun::tools::jar::Main* this$0 = nullptr;
	::jdk::internal::module::ModuleHashesBuilder* hashesBuilder = nullptr;
	::java::lang::module::ModuleFinder* finder = nullptr;
	::java::util::Set* modules = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Main$Hasher_h_