#include <sun/awt/CausedFocusEvent$3.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/CausedFocusEvent$Cause.h>
#include <sun/awt/CausedFocusEvent.h>
#include <jcpp.h>

#undef ACTIVATION
#undef CLEAR_GLOBAL_FOCUS_OWNER
#undef MOUSE_EVENT
#undef NATIVE_SYSTEM
#undef ROLLBACK
#undef TRAVERSAL
#undef TRAVERSAL_BACKWARD
#undef TRAVERSAL_DOWN
#undef TRAVERSAL_FORWARD
#undef TRAVERSAL_UP
#undef UNKNOWN

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $CausedFocusEvent$Cause = ::sun::awt::CausedFocusEvent$Cause;

namespace sun {
	namespace awt {

$ints* CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause = nullptr;

void CausedFocusEvent$3::clinit$($Class* clazz) {
	$assignStatic(CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause, $new($ints, $($CausedFocusEvent$Cause::values())->length));
	{
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::UNKNOWN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::MOUSE_EVENT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::TRAVERSAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::TRAVERSAL_UP->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::TRAVERSAL_DOWN->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::TRAVERSAL_FORWARD->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::TRAVERSAL_BACKWARD->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::ROLLBACK->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::NATIVE_SYSTEM->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::ACTIVATION->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CausedFocusEvent$3::$SwitchMap$sun$awt$CausedFocusEvent$Cause->set($CausedFocusEvent$Cause::CLEAR_GLOBAL_FOCUS_OWNER->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CausedFocusEvent$3::CausedFocusEvent$3() {
}

$Class* CausedFocusEvent$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$awt$CausedFocusEvent$Cause", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CausedFocusEvent$3, $SwitchMap$sun$awt$CausedFocusEvent$Cause)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.CausedFocusEvent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.CausedFocusEvent$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.CausedFocusEvent$3",
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
		"sun.awt.CausedFocusEvent"
	};
	$loadClass(CausedFocusEvent$3, name, initialize, &classInfo$$, CausedFocusEvent$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CausedFocusEvent$3);
	});
	return class$;
}

$Class* CausedFocusEvent$3::class$ = nullptr;

	} // awt
} // sun