#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$1.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$XPComboBoxButton.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Container.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/awt/event/MouseListener.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsComboBoxUI$XPComboBoxButton = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$XPComboBoxButton;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ButtonModel = ::javax::swing::ButtonModel;
using $JComboBox = ::javax::swing::JComboBox;
using $JTextField = ::javax::swing::JTextField;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsComboBoxUI$1::init$() {
	$MouseAdapter::init$();
}

void WindowsComboBoxUI$1::handleRollover($MouseEvent* e, bool isRollover) {
	$useLocalObjectStack();
	$var($JComboBox, comboBox, getComboBox(e));
	$var($WindowsComboBoxUI, comboBoxUI, getWindowsComboBoxUI(e));
	if (comboBox == nullptr || comboBoxUI == nullptr) {
		return;
	}
	if (!$nc(comboBox)->isEditable()) {
		$var($ButtonModel, m, nullptr);
		if ($WindowsComboBoxUI::access$000(comboBoxUI) != nullptr) {
			$assign(m, $$nc($WindowsComboBoxUI::access$100(comboBoxUI))->getModel());
		}
		if (m != nullptr) {
			m->setRollover(isRollover);
		}
	}
	$nc(comboBoxUI)->isRollover = isRollover;
	comboBox->repaint();
}

void WindowsComboBoxUI$1::mouseEntered($MouseEvent* e) {
	handleRollover(e, true);
}

void WindowsComboBoxUI$1::mouseExited($MouseEvent* e) {
	handleRollover(e, false);
}

$JComboBox* WindowsComboBoxUI$1::getComboBox($MouseEvent* event) {
	$useLocalObjectStack();
	$var($Object, source, $nc(event)->getSource());
	$var($JComboBox, rv, nullptr);
	if ($instanceOf($JComboBox, source)) {
		$assign(rv, $cast($JComboBox, source));
	} else if ($instanceOf($WindowsComboBoxUI$XPComboBoxButton, source)) {
		$assign(rv, $WindowsComboBoxUI::access$200($($cast($WindowsComboBoxUI$XPComboBoxButton, source)->getWindowsComboBoxUI())));
	} else if ($instanceOf($JTextField, source) && $instanceOf($JComboBox, $($cast($JTextField, source)->getParent()))) {
		$assign(rv, $cast($JComboBox, $cast($JTextField, source)->getParent()));
	}
	return rv;
}

$WindowsComboBoxUI* WindowsComboBoxUI$1::getWindowsComboBoxUI($MouseEvent* event) {
	$useLocalObjectStack();
	$var($JComboBox, comboBox, getComboBox(event));
	$var($WindowsComboBoxUI, rv, nullptr);
	if (comboBox != nullptr && $instanceOf($WindowsComboBoxUI, $$cast($ComboBoxUI, comboBox->getUI()))) {
		$assign(rv, $cast($WindowsComboBoxUI, $cast($ComboBoxUI, comboBox->getUI())));
	}
	return rv;
}

WindowsComboBoxUI$1::WindowsComboBoxUI$1() {
}

$Class* WindowsComboBoxUI$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(WindowsComboBoxUI$1, init$, void)},
		{"getComboBox", "(Ljava/awt/event/MouseEvent;)Ljavax/swing/JComboBox;", "(Ljava/awt/event/MouseEvent;)Ljavax/swing/JComboBox<*>;", $PRIVATE, $method(WindowsComboBoxUI$1, getComboBox, $JComboBox*, $MouseEvent*)},
		{"getWindowsComboBoxUI", "(Ljava/awt/event/MouseEvent;)Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, $PRIVATE, $method(WindowsComboBoxUI$1, getWindowsComboBoxUI, $WindowsComboBoxUI*, $MouseEvent*)},
		{"handleRollover", "(Ljava/awt/event/MouseEvent;Z)V", nullptr, $PRIVATE, $method(WindowsComboBoxUI$1, handleRollover, void, $MouseEvent*, bool)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxUI$1, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxUI$1, mouseExited, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$1",
		"java.awt.event.MouseAdapter",
		nullptr,
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
	$loadClass(WindowsComboBoxUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsComboBoxUI$1));
	});
	return class$;
}

$Class* WindowsComboBoxUI$1::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com