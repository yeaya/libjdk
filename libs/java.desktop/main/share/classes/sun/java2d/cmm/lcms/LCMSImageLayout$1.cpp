#include <sun/java2d/cmm/lcms/LCMSImageLayout$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout$BandOrder.h>
#include <sun/java2d/cmm/lcms/LCMSImageLayout.h>
#include <jcpp.h>

#undef DIRECT
#undef INVERTED
#undef UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LCMSImageLayout$BandOrder = ::sun::java2d::cmm::lcms::LCMSImageLayout$BandOrder;

namespace sun {
	namespace java2d {
		namespace cmm {
			namespace lcms {

$ints* LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder = nullptr;

void LCMSImageLayout$1::clinit$($Class* clazz) {
	$assignStatic(LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder, $new($ints, $($LCMSImageLayout$BandOrder::values())->length));
	{
		try {
			LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder->set($LCMSImageLayout$BandOrder::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder->set($LCMSImageLayout$BandOrder::DIRECT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			LCMSImageLayout$1::$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder->set($LCMSImageLayout$BandOrder::INVERTED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

LCMSImageLayout$1::LCMSImageLayout$1() {
}

$Class* LCMSImageLayout$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LCMSImageLayout$1, $SwitchMap$sun$java2d$cmm$lcms$LCMSImageLayout$BandOrder)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.cmm.lcms.LCMSImageLayout",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.cmm.lcms.LCMSImageLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.java2d.cmm.lcms.LCMSImageLayout$1",
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
		"sun.java2d.cmm.lcms.LCMSImageLayout"
	};
	$loadClass(LCMSImageLayout$1, name, initialize, &classInfo$$, LCMSImageLayout$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LCMSImageLayout$1);
	});
	return class$;
}

$Class* LCMSImageLayout$1::class$ = nullptr;

			} // lcms
		} // cmm
	} // java2d
} // sun