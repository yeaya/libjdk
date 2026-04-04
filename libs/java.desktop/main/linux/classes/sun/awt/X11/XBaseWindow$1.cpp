#include <sun/awt/X11/XBaseWindow$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <sun/awt/X11/XBaseWindow$InitialiseState.h>
#include <sun/awt/X11/XBaseWindow.h>
#include <jcpp.h>

#undef FAILED_INITIALISATION
#undef INITIALISED
#undef INITIALISING

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $XBaseWindow$InitialiseState = ::sun::awt::X11::XBaseWindow$InitialiseState;

namespace sun {
	namespace awt {
		namespace X11 {

$ints* XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState = nullptr;

void XBaseWindow$1::clinit$($Class* clazz) {
	$assignStatic(XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState, $new($ints, $($XBaseWindow$InitialiseState::values())->length));
	{
		try {
			XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState->set($XBaseWindow$InitialiseState::INITIALISED->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState->set($XBaseWindow$InitialiseState::INITIALISING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			XBaseWindow$1::$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState->set($XBaseWindow$InitialiseState::FAILED_INITIALISATION->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

XBaseWindow$1::XBaseWindow$1() {
}

$Class* XBaseWindow$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(XBaseWindow$1, $SwitchMap$sun$awt$X11$XBaseWindow$InitialiseState)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.X11.XBaseWindow",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.X11.XBaseWindow$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.awt.X11.XBaseWindow$1",
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
		"sun.awt.X11.XBaseWindow"
	};
	$loadClass(XBaseWindow$1, name, initialize, &classInfo$$, XBaseWindow$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XBaseWindow$1);
	});
	return class$;
}

$Class* XBaseWindow$1::class$ = nullptr;

		} // X11
	} // awt
} // sun