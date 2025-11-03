#ifndef _sun_tools_jar_Validator_h_
#define _sun_tools_jar_Validator_h_
//$ class sun.tools.jar.Validator
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace lang {
		class Integer;
	}
}
namespace java {
	namespace lang {
		namespace module {
			class ModuleDescriptor;
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace zip {
			class ZipEntry;
			class ZipFile;
		}
	}
}
namespace sun {
	namespace tools {
		namespace jar {
			class FingerPrint;
			class Main;
		}
	}
}

namespace sun {
	namespace tools {
		namespace jar {

class Validator : public ::java::lang::Object {
	$class(Validator, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Validator();
	void init$(::sun::tools::jar::Main* main, ::java::util::zip::ZipFile* zf);
	bool checkClassName(::sun::tools::jar::FingerPrint* fp);
	void checkModuleDescriptor($String* miName);
	bool checkNestedClass(::sun::tools::jar::FingerPrint* fp, ::java::util::Map* outerClasses);
	static $String* className($String* entryName);
	void error($String* msg);
	void errorAndInvalid($String* msg);
	::sun::tools::jar::FingerPrint* getFingerPrint(::java::util::zip::ZipEntry* ze);
	bool isConcealed($String* className);
	static bool isPlatformModule($String* name);
	bool lambda$checkModuleDescriptor$4($String* p);
	void lambda$checkModuleDescriptor$5($String* p);
	static bool lambda$validate$0(::java::util::zip::ZipEntry* e);
	void lambda$validate$1(::java::lang::Integer* version, ::java::util::Map* entries);
	void lambda$validateBase$2(::java::util::Map* fps, ::sun::tools::jar::FingerPrint* fp);
	void lambda$validateVersioned$3(::java::util::Map* fps, ::sun::tools::jar::FingerPrint* fp);
	::sun::tools::jar::FingerPrint* sameNameFingerPrint(::sun::tools::jar::FingerPrint* fp1, ::sun::tools::jar::FingerPrint* fp2);
	static bool validate(::sun::tools::jar::Main* main, ::java::util::zip::ZipFile* zf);
	bool validate();
	void validateBase(::java::util::Map* fps);
	void validateVersioned(::java::util::Map* fps);
	void warn($String* msg);
	::java::util::Map* classes = nullptr;
	::sun::tools::jar::Main* main = nullptr;
	::java::util::zip::ZipFile* zf = nullptr;
	bool isValid = false;
	::java::util::Set* concealedPkgs = nullptr;
	::java::lang::module::ModuleDescriptor* md = nullptr;
	$String* mdName = nullptr;
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Validator_h_