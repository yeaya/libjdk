#include <com/sun/tools/javac/jvm/ModuleNameReader$BadClassFile.h>
#include <com/sun/tools/javac/jvm/ModuleNameReader.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace jvm {

void ModuleNameReader$BadClassFile::init$($String* msg) {
	$Exception::init$(msg);
}

ModuleNameReader$BadClassFile::ModuleNameReader$BadClassFile() {
}

ModuleNameReader$BadClassFile::ModuleNameReader$BadClassFile(const ModuleNameReader$BadClassFile& e) : $Exception(e) {
}

void ModuleNameReader$BadClassFile::throw$() {
	throw *this;
}

$Class* ModuleNameReader$BadClassFile::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ModuleNameReader$BadClassFile, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ModuleNameReader$BadClassFile, init$, void, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile", "com.sun.tools.javac.jvm.ModuleNameReader", "BadClassFile", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.javac.jvm.ModuleNameReader$BadClassFile",
		"java.lang.Exception",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.tools.javac.jvm.ModuleNameReader"
	};
	$loadClass(ModuleNameReader$BadClassFile, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModuleNameReader$BadClassFile);
	});
	return class$;
}

$Class* ModuleNameReader$BadClassFile::class$ = nullptr;

				} // jvm
			} // javac
		} // tools
	} // sun
} // com