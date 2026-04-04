#include <sun/awt/windows/WTaskbarPeer$1.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/windows/WTaskbarPeer.h>
#include <jcpp.h>

#undef ICON_BADGE_IMAGE_WINDOW
#undef PROGRESS_STATE_WINDOW
#undef PROGRESS_VALUE_WINDOW
#undef USER_ATTENTION_WINDOW

using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace sun {
	namespace awt {
		namespace windows {

$ints* WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature = nullptr;

void WTaskbarPeer$1::clinit$($Class* clazz) {
	$assignStatic(WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature, $new($ints, $($Taskbar$Feature::values())->length));
	{
		try {
			WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::ICON_BADGE_IMAGE_WINDOW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::PROGRESS_STATE_WINDOW->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::PROGRESS_VALUE_WINDOW->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::USER_ATTENTION_WINDOW->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WTaskbarPeer$1::WTaskbarPeer$1() {
}

$Class* WTaskbarPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Taskbar$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WTaskbarPeer$1, $SwitchMap$java$awt$Taskbar$Feature)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.windows.WTaskbarPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.windows.WTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.windows.WTaskbarPeer$1",
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
		"sun.awt.windows.WTaskbarPeer"
	};
	$loadClass(WTaskbarPeer$1, name, initialize, &classInfo$$, WTaskbarPeer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WTaskbarPeer$1);
	});
	return class$;
}

$Class* WTaskbarPeer$1::class$ = nullptr;

		} // windows
	} // awt
} // sun