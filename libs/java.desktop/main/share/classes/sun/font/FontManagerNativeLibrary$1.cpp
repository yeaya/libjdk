#include <sun/font/FontManagerNativeLibrary$1.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace font {

void FontManagerNativeLibrary$1::init$() {
}

$Object* FontManagerNativeLibrary$1::run() {
	$beforeCallerSensitive();
	$System::loadLibrary("awt"_s);
	if ($$nc($System::getProperty("os.name"_s))->startsWith("Windows"_s)) {
		$System::loadLibrary("freetype"_s);
	}
	$System::loadLibrary("fontmanager"_s);
	return nullptr;
}

FontManagerNativeLibrary$1::FontManagerNativeLibrary$1() {
}

$Class* FontManagerNativeLibrary$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FontManagerNativeLibrary$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FontManagerNativeLibrary$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.FontManagerNativeLibrary",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontManagerNativeLibrary$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.FontManagerNativeLibrary$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.FontManagerNativeLibrary"
	};
	$loadClass(FontManagerNativeLibrary$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FontManagerNativeLibrary$1);
	});
	return class$;
}

$Class* FontManagerNativeLibrary$1::class$ = nullptr;

	} // font
} // sun