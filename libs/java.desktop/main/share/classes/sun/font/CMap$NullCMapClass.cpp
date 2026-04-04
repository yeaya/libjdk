#include <sun/font/CMap$NullCMapClass.h>
#include <sun/font/CMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CMap = ::sun::font::CMap;

namespace sun {
	namespace font {

void CMap$NullCMapClass::init$() {
	$CMap::init$();
}

char16_t CMap$NullCMapClass::getGlyph(int32_t charCode) {
	return 0;
}

CMap$NullCMapClass::CMap$NullCMapClass() {
}

$Class* CMap$NullCMapClass::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(CMap$NullCMapClass, init$, void)},
		{"getGlyph", "(I)C", nullptr, 0, $virtualMethod(CMap$NullCMapClass, getGlyph, char16_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.CMap$NullCMapClass", "sun.font.CMap", "NullCMapClass", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.CMap$NullCMapClass",
		"sun.font.CMap",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.CMap"
	};
	$loadClass(CMap$NullCMapClass, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CMap$NullCMapClass);
	});
	return class$;
}

$Class* CMap$NullCMapClass::class$ = nullptr;

	} // font
} // sun