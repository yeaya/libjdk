#include <sun/font/FontManagerNativeLibrary.h>
#include <java/security/AccessController.h>
#include <sun/font/FontManagerNativeLibrary$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $FontManagerNativeLibrary$1 = ::sun::font::FontManagerNativeLibrary$1;

namespace sun {
	namespace font {

void FontManagerNativeLibrary::init$() {
}

void FontManagerNativeLibrary::load() {
	$init(FontManagerNativeLibrary);
}

void FontManagerNativeLibrary::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged($$new($FontManagerNativeLibrary$1));
	}
}

FontManagerNativeLibrary::FontManagerNativeLibrary() {
}

$Class* FontManagerNativeLibrary::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FontManagerNativeLibrary, init$, void)},
		{"load", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(FontManagerNativeLibrary, load, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.FontManagerNativeLibrary$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.font.FontManagerNativeLibrary",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.font.FontManagerNativeLibrary$1"
	};
	$loadClass(FontManagerNativeLibrary, name, initialize, &classInfo$$, FontManagerNativeLibrary::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FontManagerNativeLibrary);
	});
	return class$;
}

$Class* FontManagerNativeLibrary::class$ = nullptr;

	} // font
} // sun