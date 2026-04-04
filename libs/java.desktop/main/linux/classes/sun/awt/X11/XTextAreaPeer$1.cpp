#include <sun/awt/X11/XTextAreaPeer$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer$Type.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler$Pointer.h>
#include <sun/awt/X11/XTextAreaPeer$JavaMouseEventHandler.h>
#include <sun/awt/X11/XTextAreaPeer.h>
#include <jcpp.h>

#undef BAR
#undef BUTTON
#undef TEXT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = ::sun::awt::X11::XTextAreaPeer$JavaMouseEventHandler$Pointer$Type;

namespace sun {
	namespace awt {
		namespace X11 {

$ints* XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type = nullptr;

void XTextAreaPeer$1::clinit$($Class* clazz) {
	$assignStatic(XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type, $new($ints, $($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::values())->length));
	{
		try {
			XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::TEXT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BAR->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XTextAreaPeer$1::$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type->set($XTextAreaPeer$JavaMouseEventHandler$Pointer$Type::BUTTON->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XTextAreaPeer$1::XTextAreaPeer$1() {
}

$Class* XTextAreaPeer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XTextAreaPeer$1, $SwitchMap$sun$awt$X11$XTextAreaPeer$JavaMouseEventHandler$Pointer$Type)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XTextAreaPeer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XTextAreaPeer$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.X11.XTextAreaPeer$1",
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
		"sun.awt.X11.XTextAreaPeer"
	};
	$loadClass(XTextAreaPeer$1, name, initialize, &classInfo$$, XTextAreaPeer$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XTextAreaPeer$1);
	});
	return class$;
}

$Class* XTextAreaPeer$1::class$ = nullptr;

		} // X11
	} // awt
} // sun