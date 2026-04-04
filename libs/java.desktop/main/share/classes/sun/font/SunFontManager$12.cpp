#include <sun/font/SunFontManager$12.h>
#include <java/util/Locale.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

#undef ROOT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;

namespace sun {
	namespace font {

void SunFontManager$12::init$() {
}

$Object* SunFontManager$12::run() {
	$useLocalObjectStack();
	$var($String, fileEncoding, $System::getProperty("file.encoding"_s, ""_s));
	$var($String, sysEncoding, $System::getProperty("sun.jnu.encoding"_s));
	if (sysEncoding != nullptr && !sysEncoding->equals(fileEncoding)) {
		$init($Locale);
		return $of($Locale::ROOT);
	}
	$var($String, language, $System::getProperty("user.language"_s, "en"_s));
	$var($String, country, $System::getProperty("user.country"_s, ""_s));
	$var($String, variant, $System::getProperty("user.variant"_s, ""_s));
	return $of($new($Locale, language, country, variant));
}

SunFontManager$12::SunFontManager$12() {
}

$Class* SunFontManager$12::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SunFontManager$12, init$, void)},
		{"run", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(SunFontManager$12, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.SunFontManager",
		"getSystemStartupLocale",
		"()Ljava/util/Locale;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.SunFontManager$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.SunFontManager$12",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/Locale;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.SunFontManager"
	};
	$loadClass(SunFontManager$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunFontManager$12);
	});
	return class$;
}

$Class* SunFontManager$12::class$ = nullptr;

	} // font
} // sun