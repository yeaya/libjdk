#include <sun/awt/windows/WDesktopPeer$1.h>
#include <java/awt/Desktop$Action.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/windows/WDesktopPeer.h>
#include <jcpp.h>

#undef APP_EVENT_SYSTEM_SLEEP
#undef APP_EVENT_USER_SESSION
#undef APP_SUDDEN_TERMINATION
#undef BROWSE
#undef EDIT
#undef MAIL
#undef MOVE_TO_TRASH
#undef OPEN
#undef PRINT

using $Desktop$Action = ::java::awt::Desktop$Action;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace sun {
	namespace awt {
		namespace windows {

$ints* WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action = nullptr;

void WDesktopPeer$1::clinit$($Class* clazz) {
	$assignStatic(WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action, $new($ints, $($Desktop$Action::values())->length));
	{
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::OPEN->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::EDIT->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::PRINT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::MAIL->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::BROWSE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::MOVE_TO_TRASH->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::APP_SUDDEN_TERMINATION->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::APP_EVENT_SYSTEM_SLEEP->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WDesktopPeer$1::$SwitchMap$java$awt$Desktop$Action->set($Desktop$Action::APP_EVENT_USER_SESSION->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WDesktopPeer$1::WDesktopPeer$1() {
}

$Class* WDesktopPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Desktop$Action", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WDesktopPeer$1, $SwitchMap$java$awt$Desktop$Action)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WDesktopPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WDesktopPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.windows.WDesktopPeer$1",
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
		"sun.awt.windows.WDesktopPeer"
	};
	$loadClass(WDesktopPeer$1, name, initialize, &classInfo$$, WDesktopPeer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WDesktopPeer$1);
	});
	return class$;
}

$Class* WDesktopPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun