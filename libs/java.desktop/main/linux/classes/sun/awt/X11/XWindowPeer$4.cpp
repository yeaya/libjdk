#include <sun/awt/X11/XWindowPeer$4.h>
#include <java/awt/Window$Type.h>
#include <java/awt/Window.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XWindowPeer.h>
#include <jcpp.h>

#undef NORMAL
#undef POPUP
#undef UTILITY

using $Window$Type = ::java::awt::Window$Type;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace sun {
	namespace awt {
		namespace X11 {

$ints* XWindowPeer$4::$SwitchMap$java$awt$Window$Type = nullptr;

void XWindowPeer$4::clinit$($Class* clazz) {
	$assignStatic(XWindowPeer$4::$SwitchMap$java$awt$Window$Type, $new($ints, $($Window$Type::values())->length));
	{
		try {
			XWindowPeer$4::$SwitchMap$java$awt$Window$Type->set($Window$Type::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XWindowPeer$4::$SwitchMap$java$awt$Window$Type->set($Window$Type::UTILITY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XWindowPeer$4::$SwitchMap$java$awt$Window$Type->set($Window$Type::POPUP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XWindowPeer$4::XWindowPeer$4() {
}

$Class* XWindowPeer$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$java$awt$Window$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XWindowPeer$4, $SwitchMap$java$awt$Window$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XWindowPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XWindowPeer$4", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.X11.XWindowPeer$4",
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
		"sun.awt.X11.XWindowPeer"
	};
	$loadClass(XWindowPeer$4, name, initialize, &classInfo$$, XWindowPeer$4::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XWindowPeer$4);
	});
	return class$;
}

$Class* XWindowPeer$4::class$ = nullptr;

		} // X11
	} // awt
} // sun