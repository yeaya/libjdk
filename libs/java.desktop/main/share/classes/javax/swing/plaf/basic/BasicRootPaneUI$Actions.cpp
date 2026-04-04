#include <javax/swing/plaf/basic/BasicRootPaneUI$Actions.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/MenuElement.h>
#include <javax/swing/MenuSelectionManager.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicRootPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef POST_POPUP
#undef PRESS
#undef RELEASE

using $MenuElementArray = $Array<::javax::swing::MenuElement>;
using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JRootPane = ::javax::swing::JRootPane;
using $MenuSelectionManager = ::javax::swing::MenuSelectionManager;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicRootPaneUI$Actions::PRESS = nullptr;
$String* BasicRootPaneUI$Actions::RELEASE = nullptr;
$String* BasicRootPaneUI$Actions::POST_POPUP = nullptr;

void BasicRootPaneUI$Actions::init$($String* name) {
	$UIAction::init$(name);
}

void BasicRootPaneUI$Actions::actionPerformed($ActionEvent* evt) {
	$useLocalObjectStack();
	$var($JRootPane, root, $cast($JRootPane, $nc(evt)->getSource()));
	$var($JButton, owner, $nc(root)->getDefaultButton());
	$var($String, key, getName());
	if (key == BasicRootPaneUI$Actions::POST_POPUP) {
		$var($Component, c, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
		if ($instanceOf($JComponent, c)) {
			$var($JComponent, src, $cast($JComponent, c));
			$var($JPopupMenu, jpm, src->getComponentPopupMenu());
			if (jpm != nullptr) {
				$var($Point, pt, src->getPopupLocation(nullptr));
				if (pt == nullptr) {
					$var($Rectangle, vis, src->getVisibleRect());
					$assign(pt, $new($Point, $nc(vis)->x + $nc(vis)->width / 2, $nc(vis)->y + $nc(vis)->height / 2));
				}
				jpm->show(c, $nc(pt)->x, $nc(pt)->y);
			}
		}
	} else if (owner != nullptr && $SwingUtilities::getRootPane(owner) == root) {
		if (key == BasicRootPaneUI$Actions::PRESS) {
			owner->doClick(20);
		}
	}
}

bool BasicRootPaneUI$Actions::accept(Object$* sender) {
	$useLocalObjectStack();
	$var($String, key, getName());
	if (key == BasicRootPaneUI$Actions::POST_POPUP) {
		$var($MenuElementArray, elems, $$nc($MenuSelectionManager::defaultManager())->getSelectedPath());
		if (elems != nullptr && elems->length != 0) {
			return false;
		}
		$var($Component, c, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
		if ($instanceOf($JComponent, c)) {
			$var($JComponent, src, $cast($JComponent, c));
			return src->getComponentPopupMenu() != nullptr;
		}
		return false;
	}
	if ($instanceOf($JRootPane, sender)) {
		$var($JButton, owner, $cast($JRootPane, sender)->getDefaultButton());
		bool var$0 = owner != nullptr && $$nc(owner->getModel())->isEnabled();
		return (var$0 && owner->isShowing());
	}
	return true;
}

BasicRootPaneUI$Actions::BasicRootPaneUI$Actions() {
}

void BasicRootPaneUI$Actions::clinit$($Class* clazz) {
	$assignStatic(BasicRootPaneUI$Actions::PRESS, "press"_s);
	$assignStatic(BasicRootPaneUI$Actions::RELEASE, "release"_s);
	$assignStatic(BasicRootPaneUI$Actions::POST_POPUP, "postPopup"_s);
}

$Class* BasicRootPaneUI$Actions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PRESS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, PRESS)},
		{"RELEASE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, RELEASE)},
		{"POST_POPUP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(BasicRootPaneUI$Actions, POST_POPUP)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicRootPaneUI$Actions, init$, void, $String*)},
		{"accept", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(BasicRootPaneUI$Actions, accept, bool, Object$*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicRootPaneUI$Actions, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicRootPaneUI$Actions", "javax.swing.plaf.basic.BasicRootPaneUI", "Actions", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicRootPaneUI$Actions",
		"sun.swing.UIAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicRootPaneUI"
	};
	$loadClass(BasicRootPaneUI$Actions, name, initialize, &classInfo$$, BasicRootPaneUI$Actions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicRootPaneUI$Actions);
	});
	return class$;
}

$Class* BasicRootPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax