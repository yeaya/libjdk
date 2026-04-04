#include <ContextualMenuClearsTextSelectionTest$1.h>
#include <ContextualMenuClearsTextSelectionTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $ContextualMenuClearsTextSelectionTest = ::ContextualMenuClearsTextSelectionTest;
using $Component = ::java::awt::Component;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ContextualMenuClearsTextSelectionTest$1::init$() {
	$MouseAdapter::init$();
}

void ContextualMenuClearsTextSelectionTest$1::mousePressed($MouseEvent* e) {
	if ($nc(e)->isPopupTrigger()) {
		showPopupMenu(e);
	}
}

void ContextualMenuClearsTextSelectionTest$1::mouseReleased($MouseEvent* e) {
	if ($nc(e)->isPopupTrigger()) {
		showPopupMenu(e);
	}
}

void ContextualMenuClearsTextSelectionTest$1::showPopupMenu($MouseEvent* e) {
	$init($ContextualMenuClearsTextSelectionTest);
	$var($Component, var$0, $cast($Component, $nc(e)->getSource()));
	int32_t var$1 = e->getX();
	$nc($ContextualMenuClearsTextSelectionTest::popupMenu)->show(var$0, var$1, e->getY());
}

ContextualMenuClearsTextSelectionTest$1::ContextualMenuClearsTextSelectionTest$1() {
}

$Class* ContextualMenuClearsTextSelectionTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ContextualMenuClearsTextSelectionTest$1, init$, void)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextualMenuClearsTextSelectionTest$1, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(ContextualMenuClearsTextSelectionTest$1, mouseReleased, void, $MouseEvent*)},
		{"showPopupMenu", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PRIVATE, $method(ContextualMenuClearsTextSelectionTest$1, showPopupMenu, void, $MouseEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ContextualMenuClearsTextSelectionTest",
		"createPopup",
		"(Ljavax/swing/JTextField;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ContextualMenuClearsTextSelectionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ContextualMenuClearsTextSelectionTest$1",
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
		"ContextualMenuClearsTextSelectionTest"
	};
	$loadClass(ContextualMenuClearsTextSelectionTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ContextualMenuClearsTextSelectionTest$1));
	});
	return class$;
}

$Class* ContextualMenuClearsTextSelectionTest$1::class$ = nullptr;