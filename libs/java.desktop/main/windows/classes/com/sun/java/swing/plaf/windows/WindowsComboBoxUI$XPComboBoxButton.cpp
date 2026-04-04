#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$XPComboBoxButton.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$GlyphButton.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JComboBox.h>
#include <jcpp.h>

#undef CP_DROPDOWNBUTTON
#undef CP_DROPDOWNBUTTONLEFT
#undef CP_DROPDOWNBUTTONRIGHT
#undef DISABLED
#undef HOT
#undef NORMAL
#undef PRESSED
#undef RIGHT_TO_LEFT

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$GlyphButton = ::com::sun::java::swing::plaf::windows::XPStyle$GlyphButton;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Dimension = ::java::awt::Dimension;
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

void WindowsComboBoxUI$XPComboBoxButton::init$($WindowsComboBoxUI* this$0, $XPStyle* xp) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	$var($Component, var$0, $WindowsComboBoxUI::access$1000(this$0));
	$init($TMSchema$Part);
	$init($ComponentOrientation);
	$XPStyle$GlyphButton::init$(var$0, (!$nc(xp)->isSkinDefined($($WindowsComboBoxUI::access$1100(this$0)), $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT)) ? $TMSchema$Part::CP_DROPDOWNBUTTON : ($$nc($WindowsComboBoxUI::access$1200(this$0))->getComponentOrientation() == $ComponentOrientation::RIGHT_TO_LEFT) ? $TMSchema$Part::CP_DROPDOWNBUTTONLEFT : $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT);
	$set(this, prevState, nullptr);
	setRequestFocusEnabled(false);
}

$TMSchema$State* WindowsComboBoxUI$XPComboBoxButton::getState() {
	$useLocalObjectStack();
	$TMSchema$State* rv = nullptr;
	$$nc(getModel())->setPressed($$nc($WindowsComboBoxUI::access$1300(this->this$0))->isPopupVisible());
	rv = $XPStyle$GlyphButton::getState();
	$var($XPStyle, xp, $XPStyle::getXP());
	$init($TMSchema$State);
	bool var$1 = rv != $TMSchema$State::DISABLED && $WindowsComboBoxUI::access$1400(this->this$0) != nullptr;
	bool var$0 = var$1 && !$$nc($WindowsComboBoxUI::access$1500(this->this$0))->isEditable() && xp != nullptr;
	$init($TMSchema$Part);
	if (var$0 && xp->isSkinDefined($($WindowsComboBoxUI::access$1600(this->this$0)), $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT)) {
		rv = $TMSchema$State::NORMAL;
	}
	if (rv == $TMSchema$State::NORMAL && (this->prevState == $TMSchema$State::HOT || this->prevState == $TMSchema$State::PRESSED)) {
		$nc(this->skin)->switchStates(true);
	}
	if (rv != this->prevState) {
		$set(this, prevState, rv);
	}
	return rv;
}

$Dimension* WindowsComboBoxUI$XPComboBoxButton::getPreferredSize() {
	return $new($Dimension, 17, 21);
}

void WindowsComboBoxUI$XPComboBoxButton::setPart($TMSchema$Part* part) {
	setPart($($WindowsComboBoxUI::access$1700(this->this$0)), part);
}

$WindowsComboBoxUI* WindowsComboBoxUI$XPComboBoxButton::getWindowsComboBoxUI() {
	return this->this$0;
}

WindowsComboBoxUI$XPComboBoxButton::WindowsComboBoxUI$XPComboBoxButton() {
}

$Class* WindowsComboBoxUI$XPComboBoxButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$XPComboBoxButton, this$0)},
		{"prevState", "Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PRIVATE, $field(WindowsComboBoxUI$XPComboBoxButton, prevState)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;Lcom/sun/java/swing/plaf/windows/XPStyle;)V", nullptr, $PUBLIC, $method(WindowsComboBoxUI$XPComboBoxButton, init$, void, $WindowsComboBoxUI*, $XPStyle*)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxUI$XPComboBoxButton, getPreferredSize, $Dimension*)},
		{"getState", "()Lcom/sun/java/swing/plaf/windows/TMSchema$State;", nullptr, $PROTECTED, $virtualMethod(WindowsComboBoxUI$XPComboBoxButton, getState, $TMSchema$State*)},
		{"getWindowsComboBoxUI", "()Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, 0, $virtualMethod(WindowsComboBoxUI$XPComboBoxButton, getWindowsComboBoxUI, $WindowsComboBoxUI*)},
		{"setPart", "(Lcom/sun/java/swing/plaf/windows/TMSchema$Part;)V", nullptr, 0, $virtualMethod(WindowsComboBoxUI$XPComboBoxButton, setPart, void, $TMSchema$Part*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$XPComboBoxButton", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "XPComboBoxButton", $PRIVATE},
		{"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton", "com.sun.java.swing.plaf.windows.XPStyle", "GlyphButton", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$XPComboBoxButton",
		"com.sun.java.swing.plaf.windows.XPStyle$GlyphButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
	};
	$loadClass(WindowsComboBoxUI$XPComboBoxButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsComboBoxUI$XPComboBoxButton));
	});
	return class$;
}

$Class* WindowsComboBoxUI$XPComboBoxButton::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com