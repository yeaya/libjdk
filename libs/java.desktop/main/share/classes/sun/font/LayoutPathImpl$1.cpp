#include <sun/font/LayoutPathImpl$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/font/LayoutPathImpl$EndType.h>
#include <sun/font/LayoutPathImpl.h>
#include <jcpp.h>

#undef CLOSED
#undef EXTENDED
#undef PINNED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutPathImpl$EndType = ::sun::font::LayoutPathImpl$EndType;

namespace sun {
	namespace font {

$ints* LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType = nullptr;

void LayoutPathImpl$1::clinit$($Class* clazz) {
	$assignStatic(LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType, $new($ints, $($LayoutPathImpl$EndType::values())->length));
	{
		try {
			LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType->set($LayoutPathImpl$EndType::PINNED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType->set($LayoutPathImpl$EndType::EXTENDED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LayoutPathImpl$1::$SwitchMap$sun$font$LayoutPathImpl$EndType->set($LayoutPathImpl$EndType::CLOSED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LayoutPathImpl$1::LayoutPathImpl$1() {
}

$Class* LayoutPathImpl$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$font$LayoutPathImpl$EndType", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LayoutPathImpl$1, $SwitchMap$sun$font$LayoutPathImpl$EndType)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.font.LayoutPathImpl",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.font.LayoutPathImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.font.LayoutPathImpl$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.font.LayoutPathImpl"
	};
	$loadClass(LayoutPathImpl$1, name, initialize, &classInfo$$, LayoutPathImpl$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutPathImpl$1);
	});
	return class$;
}

$Class* LayoutPathImpl$1::class$ = nullptr;

	} // font
} // sun