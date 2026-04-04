#include <sun/awt/X11/XTaskbarPeer$1.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XTaskbarPeer.h>
#include <jcpp.h>

#undef ICON_BADGE_NUMBER
#undef MENU
#undef PROGRESS_VALUE
#undef USER_ATTENTION

using $Taskbar$Feature = ::java::awt::Taskbar$Feature;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace sun {
	namespace awt {
		namespace X11 {

$ints* XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature = nullptr;

void XTaskbarPeer$1::clinit$($Class* clazz) {
	$assignStatic(XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature, $new($ints, $($Taskbar$Feature::values())->length));
	{
		try {
			XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::ICON_BADGE_NUMBER->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::MENU->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::PROGRESS_VALUE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::USER_ATTENTION->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XTaskbarPeer$1::XTaskbarPeer$1() {
}

$Class* XTaskbarPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Taskbar$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTaskbarPeer$1, $SwitchMap$java$awt$Taskbar$Feature)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTaskbarPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.X11.XTaskbarPeer$1",
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
		"sun.awt.X11.XTaskbarPeer"
	};
	$loadClass(XTaskbarPeer$1, name, initialize, &classInfo$$, XTaskbarPeer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XTaskbarPeer$1);
	});
	return class$;
}

$Class* XTaskbarPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun