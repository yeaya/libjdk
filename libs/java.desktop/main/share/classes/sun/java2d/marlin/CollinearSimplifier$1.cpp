#include <sun/java2d/marlin/CollinearSimplifier$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/java2d/marlin/CollinearSimplifier$SimplifierState.h>
#include <sun/java2d/marlin/CollinearSimplifier.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CollinearSimplifier$SimplifierState = ::sun::java2d::marlin::CollinearSimplifier$SimplifierState;

namespace sun {
	namespace java2d {
		namespace marlin {

$ints* CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState = nullptr;

void CollinearSimplifier$1::clinit$($Class* clazz) {
	$assignStatic(CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState, $new($ints, $($CollinearSimplifier$SimplifierState::values())->length));
	{
		try {
			CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState->set($CollinearSimplifier$SimplifierState::Empty->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState->set($CollinearSimplifier$SimplifierState::PreviousPoint->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CollinearSimplifier$1::$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState->set($CollinearSimplifier$SimplifierState::PreviousLine->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CollinearSimplifier$1::CollinearSimplifier$1() {
}

$Class* CollinearSimplifier$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CollinearSimplifier$1, $SwitchMap$sun$java2d$marlin$CollinearSimplifier$SimplifierState)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.java2d.marlin.CollinearSimplifier",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.CollinearSimplifier$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.java2d.marlin.CollinearSimplifier$1",
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
		"sun.java2d.marlin.CollinearSimplifier"
	};
	$loadClass(CollinearSimplifier$1, name, initialize, &classInfo$$, CollinearSimplifier$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CollinearSimplifier$1);
	});
	return class$;
}

$Class* CollinearSimplifier$1::class$ = nullptr;

		} // marlin
	} // java2d
} // sun