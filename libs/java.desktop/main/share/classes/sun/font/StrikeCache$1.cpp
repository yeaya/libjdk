#include <sun/font/StrikeCache$1.h>
#include <java/lang/NumberFormatException.h>
#include <sun/font/FontStrike.h>
#include <sun/font/StrikeCache.h>
#include <jcpp.h>

#undef MINSTRIKES

using $FontStrikeArray = $Array<::sun::font::FontStrike>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $StrikeCache = ::sun::font::StrikeCache;

namespace sun {
	namespace font {

void StrikeCache$1::init$() {
}

$Object* StrikeCache$1::run() {
	$useLocalObjectStack();
	$var($String, refType, $System::getProperty("sun.java2d.font.reftype"_s, "soft"_s));
	$init($StrikeCache);
	$StrikeCache::cacheRefTypeWeak = $nc(refType)->equals("weak"_s);
	$var($String, minStrikesStr, $System::getProperty("sun.java2d.font.minstrikes"_s));
	if (minStrikesStr != nullptr) {
		try {
			$StrikeCache::MINSTRIKES = $Integer::parseInt(minStrikesStr);
			if ($StrikeCache::MINSTRIKES <= 0) {
				$StrikeCache::MINSTRIKES = 1;
			}
		} catch ($NumberFormatException& e) {
		}
	}
	$assignStatic($StrikeCache::recentStrikes, $new($FontStrikeArray, $StrikeCache::MINSTRIKES));
	return nullptr;
}

StrikeCache$1::StrikeCache$1() {
}

$Class* StrikeCache$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(StrikeCache$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(StrikeCache$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.StrikeCache",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.StrikeCache$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.font.StrikeCache$1",
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
		"sun.font.StrikeCache"
	};
	$loadClass(StrikeCache$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StrikeCache$1);
	});
	return class$;
}

$Class* StrikeCache$1::class$ = nullptr;

	} // font
} // sun