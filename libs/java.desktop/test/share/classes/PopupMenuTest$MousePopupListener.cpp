#include <PopupMenuTest$MousePopupListener.h>
#include <PopupMenuTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $PopupMenuTest = ::PopupMenuTest;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void PopupMenuTest$MousePopupListener::init$($PopupMenuTest* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void PopupMenuTest$MousePopupListener::mousePressed($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::mouseClicked($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::mouseReleased($MouseEvent* e) {
	showPopup(e);
}

void PopupMenuTest$MousePopupListener::showPopup($MouseEvent* e) {
	$init($PopupMenuTest);
	$var($Component, var$0, $PopupMenuTest::panel);
	int32_t var$1 = $nc(e)->getX();
	$nc(this->this$0->jpopup)->show(var$0, var$1, e->getY());
}

PopupMenuTest$MousePopupListener::PopupMenuTest$MousePopupListener() {
}

$Class* PopupMenuTest$MousePopupListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LPopupMenuTest;", nullptr, $FINAL | $SYNTHETIC, $field(PopupMenuTest$MousePopupListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LPopupMenuTest;)V", nullptr, 0, $method(PopupMenuTest$MousePopupListener, init$, void, $PopupMenuTest*)},
		{"mouseClicked", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$MousePopupListener, mouseClicked, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$MousePopupListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(PopupMenuTest$MousePopupListener, mouseReleased, void, $MouseEvent*)},
		{"showPopup", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(PopupMenuTest$MousePopupListener, showPopup, void, $MouseEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"PopupMenuTest$MousePopupListener", "PopupMenuTest", "MousePopupListener", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"PopupMenuTest$MousePopupListener",
		"java.awt.event.MouseAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"PopupMenuTest"
	};
	$loadClass(PopupMenuTest$MousePopupListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(PopupMenuTest$MousePopupListener));
	});
	return class$;
}

$Class* PopupMenuTest$MousePopupListener::class$ = nullptr;