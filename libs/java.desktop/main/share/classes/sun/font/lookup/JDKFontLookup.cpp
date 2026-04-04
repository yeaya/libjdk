#include <sun/font/lookup/JDKFontLookup.h>
#include <sun/font/SunFontManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunFontManager = ::sun::font::SunFontManager;

namespace sun {
	namespace font {
		namespace lookup {

void JDKFontLookup::init$() {
}

$String* JDKFontLookup::getJDKFontDir() {
	return $SunFontManager::getJDKFontDir();
}

JDKFontLookup::JDKFontLookup() {
}

$Class* JDKFontLookup::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JDKFontLookup, init$, void)},
		{"getJDKFontDir", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(JDKFontLookup, getJDKFontDir, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.font.lookup.JDKFontLookup",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JDKFontLookup, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JDKFontLookup);
	});
	return class$;
}

$Class* JDKFontLookup::class$ = nullptr;

		} // lookup
	} // font
} // sun