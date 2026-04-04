#include <sun/font/StrikeCache$DisposableStrike.h>
#include <sun/font/FontStrikeDisposer.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FontStrikeDisposer = ::sun::font::FontStrikeDisposer;

namespace sun {
	namespace font {

$Class* StrikeCache$DisposableStrike::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDisposer", "()Lsun/font/FontStrikeDisposer;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(StrikeCache$DisposableStrike, getDisposer, $FontStrikeDisposer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.StrikeCache$DisposableStrike", "sun.font.StrikeCache", "DisposableStrike", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.font.StrikeCache$DisposableStrike",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.StrikeCache"
	};
	$loadClass(StrikeCache$DisposableStrike, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StrikeCache$DisposableStrike);
	});
	return class$;
}

$Class* StrikeCache$DisposableStrike::class$ = nullptr;

	} // font
} // sun