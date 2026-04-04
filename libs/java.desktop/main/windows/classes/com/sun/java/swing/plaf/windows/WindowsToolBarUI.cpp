#include <com/sun/java/swing/plaf/windows/WindowsToolBarUI.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsButtonUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <jcpp.h>

#undef TP_TOOLBAR

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsButtonUI = ::com::sun::java::swing::plaf::windows::WindowsButtonUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsToolBarUI::init$() {
	$BasicToolBarUI::init$();
}

$ComponentUI* WindowsToolBarUI::createUI($JComponent* c) {
	$init(WindowsToolBarUI);
	return $new(WindowsToolBarUI);
}

void WindowsToolBarUI::installDefaults() {
	if ($XPStyle::getXP() != nullptr) {
		setRolloverBorders(true);
	}
	$BasicToolBarUI::installDefaults();
}

$Border* WindowsToolBarUI::createRolloverBorder() {
	if ($XPStyle::getXP() != nullptr) {
		return $new($EmptyBorder, 3, 3, 3, 3);
	} else {
		return $BasicToolBarUI::createRolloverBorder();
	}
}

$Border* WindowsToolBarUI::createNonRolloverBorder() {
	if ($XPStyle::getXP() != nullptr) {
		return $new($EmptyBorder, 3, 3, 3, 3);
	} else {
		return $BasicToolBarUI::createNonRolloverBorder();
	}
}

void WindowsToolBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalObjectStack();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		int32_t var$0 = $nc(c)->getWidth();
		$$nc(xp->getSkin(c, $TMSchema$Part::TP_TOOLBAR))->paintSkin(g, 0, 0, var$0, c->getHeight(), nullptr, true);
	} else {
		$BasicToolBarUI::paint(g, c);
	}
}

$Border* WindowsToolBarUI::getRolloverBorder($AbstractButton* b) {
	$useLocalObjectStack();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		return xp->getBorder(b, $($WindowsButtonUI::getXPButtonType(b)));
	} else {
		return $BasicToolBarUI::getRolloverBorder(b);
	}
}

WindowsToolBarUI::WindowsToolBarUI() {
}

$Class* WindowsToolBarUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsToolBarUI, init$, void)},
		{"createNonRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(WindowsToolBarUI, createNonRolloverBorder, $Border*)},
		{"createRolloverBorder", "()Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(WindowsToolBarUI, createRolloverBorder, $Border*)},
		{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsToolBarUI, createUI, $ComponentUI*, $JComponent*)},
		{"getRolloverBorder", "(Ljavax/swing/AbstractButton;)Ljavax/swing/border/Border;", nullptr, $PROTECTED, $virtualMethod(WindowsToolBarUI, getRolloverBorder, $Border*, $AbstractButton*)},
		{"installDefaults", "()V", nullptr, $PROTECTED, $virtualMethod(WindowsToolBarUI, installDefaults, void)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsToolBarUI, paint, void, $Graphics*, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsToolBarUI",
		"javax.swing.plaf.basic.BasicToolBarUI",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsToolBarUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsToolBarUI));
	});
	return class$;
}

$Class* WindowsToolBarUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com