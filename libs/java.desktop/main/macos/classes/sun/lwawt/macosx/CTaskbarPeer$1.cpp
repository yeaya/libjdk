#include <sun/lwawt/macosx/CTaskbarPeer$1.h>
#include <java/awt/Taskbar$Feature.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/lwawt/macosx/CTaskbarPeer.h>
#include <jcpp.h>

#undef ICON_BADGE_NUMBER
#undef ICON_BADGE_TEXT
#undef ICON_IMAGE
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
	namespace lwawt {
		namespace macosx {

$ints* CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature = nullptr;

void CTaskbarPeer$1::clinit$($Class* clazz) {
	$assignStatic(CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature, $new($ints, $($Taskbar$Feature::values())->length));
	{
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::ICON_BADGE_TEXT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::ICON_BADGE_NUMBER->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::ICON_IMAGE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::MENU->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::PROGRESS_VALUE->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			CTaskbarPeer$1::$SwitchMap$java$awt$Taskbar$Feature->set($Taskbar$Feature::USER_ATTENTION->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

CTaskbarPeer$1::CTaskbarPeer$1() {
}

$Class* CTaskbarPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Taskbar$Feature", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CTaskbarPeer$1, $SwitchMap$java$awt$Taskbar$Feature)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.lwawt.macosx.CTaskbarPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.macosx.CTaskbarPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.lwawt.macosx.CTaskbarPeer$1",
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
		"sun.lwawt.macosx.CTaskbarPeer"
	};
	$loadClass(CTaskbarPeer$1, name, initialize, &classInfo$$, CTaskbarPeer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CTaskbarPeer$1);
	});
	return class$;
}

$Class* CTaskbarPeer$1::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun