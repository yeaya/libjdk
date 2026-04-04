#include <sun/awt/SunHints$LCDContrastKey.h>
#include <sun/awt/SunHints$Key.h>
#include <sun/awt/SunHints.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SunHints$Key = ::sun::awt::SunHints$Key;

namespace sun {
	namespace awt {

void SunHints$LCDContrastKey::init$(int32_t privatekey, $String* description) {
	$SunHints$Key::init$(privatekey, description);
}

bool SunHints$LCDContrastKey::isCompatibleValue(Object$* val) {
	if ($instanceOf($Integer, val)) {
		int32_t ival = $cast($Integer, val)->intValue();
		return ival >= 100 && ival <= 250;
	}
	return false;
}

SunHints$LCDContrastKey::SunHints$LCDContrastKey() {
}

$Class* SunHints$LCDContrastKey::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(ILjava/lang/String;)V", nullptr, $PUBLIC, $method(SunHints$LCDContrastKey, init$, void, int32_t, $String*)},
		{"isCompatibleValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(SunHints$LCDContrastKey, isCompatibleValue, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.SunHints$LCDContrastKey", "sun.awt.SunHints", "LCDContrastKey", $PUBLIC | $STATIC},
		{"sun.awt.SunHints$Key", "sun.awt.SunHints", "Key", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.SunHints$LCDContrastKey",
		"sun.awt.SunHints$Key",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.SunHints"
	};
	$loadClass(SunHints$LCDContrastKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SunHints$LCDContrastKey);
	});
	return class$;
}

$Class* SunHints$LCDContrastKey::class$ = nullptr;

	} // awt
} // sun