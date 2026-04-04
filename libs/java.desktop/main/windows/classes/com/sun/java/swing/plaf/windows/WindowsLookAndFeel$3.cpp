#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$3.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/LayoutStyle$ComponentPlacement.h>
#include <javax/swing/LayoutStyle.h>
#include <jcpp.h>

#undef INDENT
#undef RELATED
#undef UNRELATED

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $LayoutStyle$ComponentPlacement = ::javax::swing::LayoutStyle$ComponentPlacement;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$ints* WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement = nullptr;

void WindowsLookAndFeel$3::clinit$($Class* clazz) {
	$assignStatic(WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement, $new($ints, $($LayoutStyle$ComponentPlacement::values())->length));
	{
		try {
			WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::INDENT->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::RELATED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsLookAndFeel$3::$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement->set($LayoutStyle$ComponentPlacement::UNRELATED->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsLookAndFeel$3::WindowsLookAndFeel$3() {
}

$Class* WindowsLookAndFeel$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$swing$LayoutStyle$ComponentPlacement", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsLookAndFeel$3, $SwitchMap$javax$swing$LayoutStyle$ComponentPlacement)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$3",
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
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$3, name, initialize, &classInfo$$, WindowsLookAndFeel$3::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$3);
	});
	return class$;
}

$Class* WindowsLookAndFeel$3::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com