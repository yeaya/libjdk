#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI$12.h>
#include <com/sun/java/swing/plaf/windows/WindowsFileChooserUI.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JButton.h>
#include <jcpp.h>

#undef ARMED
#undef PRESSED

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JButton = ::javax::swing::JButton;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsFileChooserUI$12::init$($JButton* val$result) {
	$set(this, val$result, val$result);
	$DefaultButtonModel::init$();
}

void WindowsFileChooserUI$12::setPressed(bool b) {
	if (!b || isRollover()) {
		$DefaultButtonModel::setPressed(b);
	}
}

void WindowsFileChooserUI$12::setRollover(bool b) {
	$useLocalObjectStack();
	if (b && !isRollover()) {
		$var($ComponentArray, arr$, $$nc($nc(this->val$result)->getParent())->getComponents());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($Component, component, arr$->get(i$));
			if ($instanceOf($JButton, component) && !$equals(component, this->val$result)) {
				$$nc($cast($JButton, component)->getModel())->setRollover(false);
			}
		}
	}
	$DefaultButtonModel::setRollover(b);
}

void WindowsFileChooserUI$12::setSelected(bool b) {
	$DefaultButtonModel::setSelected(b);
	if (b) {
		this->stateMask |= $DefaultButtonModel::PRESSED | $DefaultButtonModel::ARMED;
	} else {
		this->stateMask &= (uint32_t)~($DefaultButtonModel::PRESSED | $DefaultButtonModel::ARMED);
	}
}

WindowsFileChooserUI$12::WindowsFileChooserUI$12() {
}

$Class* WindowsFileChooserUI$12::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$result", "Ljavax/swing/JButton;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsFileChooserUI$12, val$result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JButton;)V", nullptr, 0, $method(WindowsFileChooserUI$12, init$, void, $JButton*)},
		{"setPressed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$12, setPressed, void, bool)},
		{"setRollover", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$12, setRollover, void, bool)},
		{"setSelected", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WindowsFileChooserUI$12, setSelected, void, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI",
		"createToolButton",
		"(Ljavax/swing/Action;Ljavax/swing/Icon;Ljava/lang/String;Ljava/lang/String;)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI$12",
		"javax.swing.DefaultButtonModel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsFileChooserUI"
	};
	$loadClass(WindowsFileChooserUI$12, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsFileChooserUI$12));
	});
	return class$;
}

$Class* WindowsFileChooserUI$12::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com