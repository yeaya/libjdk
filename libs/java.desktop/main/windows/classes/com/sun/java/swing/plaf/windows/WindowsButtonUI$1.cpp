#include <com/sun/java/swing/plaf/windows/WindowsButtonUI$1.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <java/lang/NoSuchFieldError.h>
#include <jcpp.h>

#undef BP_CHECKBOX
#undef BP_PUSHBUTTON
#undef BP_RADIOBUTTON
#undef TP_BUTTON

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$ints* WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part = nullptr;

void WindowsButtonUI$1::clinit$($Class* clazz) {
	$assignStatic(WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part, $new($ints, $($TMSchema$Part::values())->length));
	{
		try {
			WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part->set($TMSchema$Part::BP_RADIOBUTTON->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part->set($TMSchema$Part::BP_CHECKBOX->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part->set($TMSchema$Part::BP_PUSHBUTTON->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsButtonUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part->set($TMSchema$Part::TP_BUTTON->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsButtonUI$1::WindowsButtonUI$1() {
}

$Class* WindowsButtonUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsButtonUI$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$Part)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsButtonUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsButtonUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.java.swing.plaf.windows.WindowsButtonUI$1",
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
		"com.sun.java.swing.plaf.windows.WindowsButtonUI"
	};
	$loadClass(WindowsButtonUI$1, name, initialize, &classInfo$$, WindowsButtonUI$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsButtonUI$1);
	});
	return class$;
}

$Class* WindowsButtonUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com