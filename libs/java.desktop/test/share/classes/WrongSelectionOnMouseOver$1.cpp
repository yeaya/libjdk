#include <WrongSelectionOnMouseOver$1.h>
#include <WrongSelectionOnMouseOver.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $WrongSelectionOnMouseOver = ::WrongSelectionOnMouseOver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuEvent = ::javax::swing::event::MenuEvent;

void WrongSelectionOnMouseOver$1::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
}

void WrongSelectionOnMouseOver$1::menuSelected($MenuEvent* e) {
	$nc(this->this$0->firstMenuSelected)->countDown();
	$nc($System::out)->println("Menu1: menuSelected"_s);
}

void WrongSelectionOnMouseOver$1::menuDeselected($MenuEvent* e) {
	$nc($System::out)->println("Menu1: menuDeselected"_s);
}

void WrongSelectionOnMouseOver$1::menuCanceled($MenuEvent* e) {
	$nc($System::out)->println("Menu1: menuCanceled"_s);
}

WrongSelectionOnMouseOver$1::WrongSelectionOnMouseOver$1() {
}

$Class* WrongSelectionOnMouseOver$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(WrongSelectionOnMouseOver$1, init$, void, $WrongSelectionOnMouseOver*)},
		{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$1, menuCanceled, void, $MenuEvent*)},
		{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$1, menuDeselected, void, $MenuEvent*)},
		{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$1, menuSelected, void, $MenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WrongSelectionOnMouseOver",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongSelectionOnMouseOver$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WrongSelectionOnMouseOver$1",
		"java.lang.Object",
		"javax.swing.event.MenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"WrongSelectionOnMouseOver"
	};
	$loadClass(WrongSelectionOnMouseOver$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongSelectionOnMouseOver$1);
	});
	return class$;
}

$Class* WrongSelectionOnMouseOver$1::class$ = nullptr;