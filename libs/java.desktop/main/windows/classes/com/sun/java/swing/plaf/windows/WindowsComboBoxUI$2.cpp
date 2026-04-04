#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$2.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$XPComboBoxButton.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef CP_DROPDOWNBUTTONLEFT
#undef CP_DROPDOWNBUTTONRIGHT
#undef RIGHT_TO_LEFT

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsComboBoxUI$XPComboBoxButton = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$XPComboBoxButton;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsComboBoxUI$2::init$() {
}

void WindowsComboBoxUI$2::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	$var($Object, source, nullptr);
	bool var$0 = "componentOrientation"_s == propertyName && $instanceOf($JComboBox, $assign(source, e->getSource()));
	if (var$0 && $instanceOf($WindowsComboBoxUI, $$cast($ComboBoxUI, $nc($cast($JComboBox, source))->getUI()))) {
		$var($JComboBox, comboBox, $cast($JComboBox, source));
		$var($WindowsComboBoxUI, comboBoxUI, $cast($WindowsComboBoxUI, $cast($ComboBoxUI, comboBox->getUI())));
		if ($instanceOf($WindowsComboBoxUI$XPComboBoxButton, $($WindowsComboBoxUI::access$300(comboBoxUI)))) {
			$init($ComponentOrientation);
			$init($TMSchema$Part);
			$$sure($WindowsComboBoxUI$XPComboBoxButton, $WindowsComboBoxUI::access$400(comboBoxUI))->setPart((comboBox->getComponentOrientation() == $ComponentOrientation::RIGHT_TO_LEFT) ? $TMSchema$Part::CP_DROPDOWNBUTTONLEFT : $TMSchema$Part::CP_DROPDOWNBUTTONRIGHT);
		}
	}
}

WindowsComboBoxUI$2::WindowsComboBoxUI$2() {
}

$Class* WindowsComboBoxUI$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsComboBoxUI$2, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxUI$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
	};
	$loadClass(WindowsComboBoxUI$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxUI$2);
	});
	return class$;
}

$Class* WindowsComboBoxUI$2::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com