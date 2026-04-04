#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPBorderValue.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel$XPValue.h>
#include <com/sun/java/swing/plaf/windows/WindowsLookAndFeel.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/BorderUIResource$CompoundBorderUIResource.h>
#include <jcpp.h>

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsLookAndFeel$XPValue = ::com::sun::java::swing::plaf::windows::WindowsLookAndFeel$XPValue;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;
using $Border = ::javax::swing::border::Border;
using $BorderUIResource$CompoundBorderUIResource = ::javax::swing::plaf::BorderUIResource$CompoundBorderUIResource;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsLookAndFeel$XPBorderValue::init$($TMSchema$Part* xpValue, Object$* classicValue) {
	WindowsLookAndFeel$XPBorderValue::init$(xpValue, classicValue, nullptr);
}

void WindowsLookAndFeel$XPBorderValue::init$($TMSchema$Part* xpValue, Object$* classicValue, $Border* extraMargin) {
	$WindowsLookAndFeel$XPValue::init$(xpValue, classicValue);
	$set(this, extraMargin, extraMargin);
}

$Object* WindowsLookAndFeel$XPBorderValue::getXPValue($UIDefaults* table) {
	$useLocalObjectStack();
	$var($XPStyle, xp, $XPStyle::getXP());
	$var($Border, xpBorder, xp != nullptr ? xp->getBorder(nullptr, $cast($TMSchema$Part, this->xpValue)) : ($Border*)nullptr);
	if (xpBorder != nullptr && this->extraMargin != nullptr) {
		return $of($new($BorderUIResource$CompoundBorderUIResource, xpBorder, this->extraMargin));
	} else {
		return xpBorder;
	}
}

WindowsLookAndFeel$XPBorderValue::WindowsLookAndFeel$XPBorderValue() {
}

$Class* WindowsLookAndFeel$XPBorderValue::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"extraMargin", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $FINAL, $field(WindowsLookAndFeel$XPBorderValue, extraMargin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Ljava/lang/Object;)V", nullptr, 0, $method(WindowsLookAndFeel$XPBorderValue, init$, void, $TMSchema$Part*, Object$*)},
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;Ljava/lang/Object;Ljavax/swing/border/Border;)V", nullptr, 0, $method(WindowsLookAndFeel$XPBorderValue, init$, void, $TMSchema$Part*, Object$*, $Border*)},
		{"getXPValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(WindowsLookAndFeel$XPBorderValue, getXPValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPBorderValue", $PRIVATE | $STATIC},
		{"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue", "com.sun.java.swing.plaf.windows.WindowsLookAndFeel", "XPValue", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPBorderValue",
		"com.sun.java.swing.plaf.windows.WindowsLookAndFeel$XPValue",
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
	$loadClass(WindowsLookAndFeel$XPBorderValue, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsLookAndFeel$XPBorderValue);
	});
	return class$;
}

$Class* WindowsLookAndFeel$XPBorderValue::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com