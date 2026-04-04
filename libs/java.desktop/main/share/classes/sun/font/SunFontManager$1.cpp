#include <sun/font/SunFontManager$1.h>
#include <java/io/File.h>
#include <sun/font/FontManagerNativeLibrary.h>
#include <sun/font/StrikeCache.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FontManagerNativeLibrary = ::sun::font::FontManagerNativeLibrary;
using $StrikeCache = ::sun::font::StrikeCache;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {

void SunFontManager$1::init$() {
}

$Object* SunFontManager$1::run() {
	$useLocalObjectStack();
	$FontManagerNativeLibrary::load();
	$SunFontManager::initIDs();
	$init($StrikeCache);
	switch ($StrikeCache::nativeAddressSize) {
	case 8:
		$SunFontManager::longAddresses = true;
		break;
	case 4:
		$SunFontManager::longAddresses = false;
		break;
	default:
		$throwNew($RuntimeException, "Unexpected address size"_s);
	}
	$SunFontManager::noType1Font = "true"_s->equals($($System::getProperty("sun.java2d.noType1Font"_s)));
	$init($File);
	$assignStatic($SunFontManager::jreLibDirName, $str({$($System::getProperty("java.home"_s, ""_s)), $File::separator, "lib"_s}));
	$assignStatic($SunFontManager::jreFontDirName, $str({$SunFontManager::jreLibDirName, $File::separator, "fonts"_s}));
	$SunFontManager::maxSoftRefCnt = $$nc($Integer::getInteger("sun.java2d.font.maxSoftRefs"_s, 10))->intValue();
	return nullptr;
}

SunFontManager$1::SunFontManager$1() {
}

$Class* SunFontManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SunFontManager$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"initStatic",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$1);
	});
	return class$;
}

$Class* SunFontManager$1::class$ = nullptr;

	} // font
} // sun