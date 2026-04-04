#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$1.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton$2.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <sun/awt/AWTAccessor$MouseEventAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

#undef NOBUTTON

using $MotifDesktopIconUI = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI;
using $MotifDesktopIconUI$IconButton$1 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton$1;
using $MotifDesktopIconUI$IconButton$2 = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton$2;
using $Component = ::java::awt::Component;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$MouseEventAccessor = ::sun::awt::AWTAccessor$MouseEventAccessor;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

void MotifDesktopIconUI$IconButton::init$($MotifDesktopIconUI* this$0, $Icon* icon) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$JButton::init$(icon);
	$set(this, icon, icon);
	addMouseMotionListener($$new($MotifDesktopIconUI$IconButton$1, this, this$0));
	addMouseListener($$new($MotifDesktopIconUI$IconButton$2, this, this$0));
}

void MotifDesktopIconUI$IconButton::forwardEventToParent($MouseEvent* e) {
	$useLocalObjectStack();
	$var($Component, var$0, getParent());
	int32_t var$1 = $nc(e)->getID();
	int64_t var$2 = e->getWhen();
	int32_t var$3 = e->getModifiers();
	int32_t var$4 = e->getX();
	int32_t var$5 = e->getY();
	int32_t var$6 = e->getXOnScreen();
	int32_t var$7 = e->getYOnScreen();
	int32_t var$8 = e->getClickCount();
	$var($MouseEvent, newEvent, $new($MouseEvent, var$0, var$1, var$2, var$3, var$4, var$5, var$6, var$7, var$8, e->isPopupTrigger(), $MouseEvent::NOBUTTON));
	$var($AWTAccessor$MouseEventAccessor, meAccessor, $AWTAccessor::getMouseEventAccessor());
	$nc(meAccessor)->setCausedByTouchEvent(newEvent, $nc(meAccessor)->isCausedByTouchEvent(e));
	$$nc(getParent())->dispatchEvent(newEvent);
}

bool MotifDesktopIconUI$IconButton::isFocusTraversable() {
	return false;
}

MotifDesktopIconUI$IconButton::MotifDesktopIconUI$IconButton() {
}

$Class* MotifDesktopIconUI$IconButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(MotifDesktopIconUI$IconButton, this$0)},
		{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(MotifDesktopIconUI$IconButton, icon)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI;Ljavax/swing/Icon;)V", nullptr, 0, $method(MotifDesktopIconUI$IconButton, init$, void, $MotifDesktopIconUI*, $Icon*)},
		{"forwardEventToParent", "(Ljava/awt/event/MouseEvent;)V", nullptr, 0, $virtualMethod(MotifDesktopIconUI$IconButton, forwardEventToParent, void, $MouseEvent*)},
		{"isFocusTraversable", "()Z", nullptr, $PUBLIC, $virtualMethod(MotifDesktopIconUI$IconButton, isFocusTraversable, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2", nullptr, nullptr, 0},
		{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton",
		"javax.swing.JButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.motif.MotifDesktopIconUI"
	};
	$loadClass(MotifDesktopIconUI$IconButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MotifDesktopIconUI$IconButton));
	});
	return class$;
}

$Class* MotifDesktopIconUI$IconButton::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com