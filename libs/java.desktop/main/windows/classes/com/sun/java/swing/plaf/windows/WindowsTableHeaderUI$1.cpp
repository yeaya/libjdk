#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI$1.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsTableHeaderUI.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/swing/SortOrder.h>
#include <jcpp.h>

#undef ASCENDING
#undef DESCENDING
#undef HOT
#undef NORMAL
#undef PRESSED

using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SortOrder = ::javax::swing::SortOrder;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$ints* WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State = nullptr;
$ints* WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder = nullptr;

void WindowsTableHeaderUI$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State, $new($ints, $($TMSchema$State::values())->length));
	{
		try {
			WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::NORMAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::PRESSED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsTableHeaderUI$1::$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State->set($TMSchema$State::HOT->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder, $new($ints, $($SortOrder::values())->length));
	{
		try {
			WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::ASCENDING->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			WindowsTableHeaderUI$1::$SwitchMap$javax$swing$SortOrder->set($SortOrder::DESCENDING->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

WindowsTableHeaderUI$1::WindowsTableHeaderUI$1() {
}

$Class* WindowsTableHeaderUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsTableHeaderUI$1, $SwitchMap$com$sun$java$swing$plaf$windows$TMSchema$State)},
		{"$SwitchMap$javax$swing$SortOrder", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(WindowsTableHeaderUI$1, $SwitchMap$javax$swing$SortOrder)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI$1",
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
		"com.sun.java.swing.plaf.windows.WindowsTableHeaderUI"
	};
	$loadClass(WindowsTableHeaderUI$1, name, initialize, &classInfo$$, WindowsTableHeaderUI$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsTableHeaderUI$1);
	});
	return class$;
}

$Class* WindowsTableHeaderUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com