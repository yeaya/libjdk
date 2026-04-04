#include <sun/lwawt/LWListPeer$ScrollableJList$JListDelegate.h>
#include <java/awt/Component.h>
#include <java/awt/List.h>
#include <java/awt/Point.h>
#include <java/awt/event/ActionEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/DefaultListModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JList.h>
#include <javax/swing/ListModel.h>
#include <sun/lwawt/LWComponentPeer.h>
#include <sun/lwawt/LWListPeer$ScrollableJList.h>
#include <sun/lwawt/LWListPeer.h>
#include <jcpp.h>

#undef ACTION_PERFORMED
#undef KEY_PRESSED
#undef MOUSE_CLICKED
#undef VK_ENTER

using $List = ::java::awt::List;
using $Point = ::java::awt::Point;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JList = ::javax::swing::JList;
using $LWListPeer$ScrollableJList = ::sun::lwawt::LWListPeer$ScrollableJList;

namespace sun {
	namespace lwawt {

void LWListPeer$ScrollableJList$JListDelegate::init$($LWListPeer$ScrollableJList* this$1) {
	$set(this, this$1, this$1);
	$JList::init$(this$1->model);
}

bool LWListPeer$ScrollableJList$JListDelegate::hasFocus() {
	return $$sure($List, $nc(this->this$1->this$0)->getTarget())->hasFocus();
}

void LWListPeer$ScrollableJList$JListDelegate::processMouseEvent($MouseEvent* e) {
	$useLocalObjectStack();
	$JList::processMouseEvent(e);
	bool var$0 = $nc(e)->getID() == $MouseEvent::MOUSE_CLICKED;
	if (var$0 && e->getClickCount() == 2) {
		int32_t index = locationToIndex($(e->getPoint()));
		if (0 <= index && index < $$nc(getModel())->getSize()) {
			$var($Object, var$1, $nc(this->this$1->this$0)->getTarget());
			$var($String, var$2, $cast($String, $$nc(getModel())->getElementAt(index)));
			int64_t var$3 = e->getWhen();
			$nc(this->this$1->this$0)->postEvent($$new($ActionEvent, var$1, $ActionEvent::ACTION_PERFORMED, var$2, var$3, e->getModifiers()));
		}
	}
}

void LWListPeer$ScrollableJList$JListDelegate::processKeyEvent($KeyEvent* e) {
	$useLocalObjectStack();
	$JList::processKeyEvent(e);
	bool var$0 = $nc(e)->getID() == $KeyEvent::KEY_PRESSED;
	if (var$0 && e->getKeyCode() == $KeyEvent::VK_ENTER) {
		$var($String, selectedValue, $cast($String, getSelectedValue()));
		if (selectedValue != nullptr) {
			$var($Object, var$1, $nc(this->this$1->this$0)->getTarget());
			int64_t var$2 = e->getWhen();
			$nc(this->this$1->this$0)->postEvent($$new($ActionEvent, var$1, $ActionEvent::ACTION_PERFORMED, selectedValue, var$2, e->getModifiers()));
		}
	}
}

$Point* LWListPeer$ScrollableJList$JListDelegate::getLocationOnScreen() {
	return $nc(this->this$1->this$0)->getLocationOnScreen();
}

LWListPeer$ScrollableJList$JListDelegate::LWListPeer$ScrollableJList$JListDelegate() {
}

$Class* LWListPeer$ScrollableJList$JListDelegate::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Lsun/lwawt/LWListPeer$ScrollableJList;", nullptr, $FINAL | $SYNTHETIC, $field(LWListPeer$ScrollableJList$JListDelegate, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/lwawt/LWListPeer$ScrollableJList;)V", nullptr, 0, $method(LWListPeer$ScrollableJList$JListDelegate, init$, void, $LWListPeer$ScrollableJList*)},
		{"getLocationOnScreen", "()Ljava/awt/Point;", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList$JListDelegate, getLocationOnScreen, $Point*)},
		{"hasFocus", "()Z", nullptr, $PUBLIC, $virtualMethod(LWListPeer$ScrollableJList$JListDelegate, hasFocus, bool)},
		{"processKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PROTECTED, $virtualMethod(LWListPeer$ScrollableJList$JListDelegate, processKeyEvent, void, $KeyEvent*)},
		{"processMouseEvent", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PROTECTED, $virtualMethod(LWListPeer$ScrollableJList$JListDelegate, processMouseEvent, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.lwawt.LWListPeer$ScrollableJList", "sun.lwawt.LWListPeer", "ScrollableJList", $FINAL},
		{"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate", "sun.lwawt.LWListPeer$ScrollableJList", "JListDelegate", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.lwawt.LWListPeer$ScrollableJList$JListDelegate",
		"javax.swing.JList",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/JList<Ljava/lang/String;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.lwawt.LWListPeer"
	};
	$loadClass(LWListPeer$ScrollableJList$JListDelegate, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LWListPeer$ScrollableJList$JListDelegate));
	});
	return class$;
}

$Class* LWListPeer$ScrollableJList$JListDelegate::class$ = nullptr;

	} // lwawt
} // sun