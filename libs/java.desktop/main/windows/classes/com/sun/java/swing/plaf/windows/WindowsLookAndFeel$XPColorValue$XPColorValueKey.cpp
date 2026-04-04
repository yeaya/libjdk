#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue$XPColorValueKey.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPColorValue.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsLookAndFeel$XPColorValue$XPColorValueKey::init$($TMSchema$Part* part, $TMSchema$State* state, $TMSchema$Prop* prop) {
	$set(this, skin, $new($XPStyle$Skin, part, state));
	$set(this, prop, prop);
}

WindowsLookAndFeel$XPColorValue$XPColorValueKey::WindowsLookAndFeel$XPColorValue$XPColorValueKey() {
}

$Class* WindowsLookAndFeel$XPColorValue$XPColorValueKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"skin", "Lcom/sun/java/swing/plaf/windows/XPStyle$Skin;", nullptr, 0, $field(WindowsLookAndFeel$XPColorValue$XPColorValueKey, skin)},
		{"prop", "Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;", nullptr, 0, $field(WindowsLookAndFeel$XPColorValue$XPColorValueKey, prop)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Lcom/sun/java/swing/plaf/windows/TMSchema$State;Lcom/sun/java/swing/plaf/windows/TMSchema$Prop;)V", nullptr, 0, $method(WindowsLookAndFeel$XPColorValue$XPColorValueKey, init$, void, $TMSchema$Part*, $TMSchema$State*, $TMSchema$Prop*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPColorValue", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue", "XPColorValueKey", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPColorValue$XPColorValueKey",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel"
	};
	$loadClass(WindowsLookAndFeel$XPColorValue$XPColorValueKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$XPColorValue$XPColorValueKey);
	});
	return class$;
}

$Class* WindowsLookAndFeel$XPColorValue$XPColorValueKey::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com