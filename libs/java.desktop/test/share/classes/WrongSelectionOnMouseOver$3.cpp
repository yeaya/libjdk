#include <WrongSelectionOnMouseOver$3.h>
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

void WrongSelectionOnMouseOver$3::init$($WrongSelectionOnMouseOver* this$0) {
	$set(this, this$0, this$0);
}

void WrongSelectionOnMouseOver$3::menuSelected($MenuEvent* e) {
	$nc(this->this$0->secondMenuSelected)->countDown();
	$nc($System::out)->println("Menu2: menuSelected"_s);
}

void WrongSelectionOnMouseOver$3::menuDeselected($MenuEvent* e) {
	$nc($System::out)->println("Menu2: menuDeselected"_s);
}

void WrongSelectionOnMouseOver$3::menuCanceled($MenuEvent* e) {
	$nc($System::out)->println("Menu2: menuCanceled"_s);
}

WrongSelectionOnMouseOver$3::WrongSelectionOnMouseOver$3() {
}

$Class* WrongSelectionOnMouseOver$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LWrongSelectionOnMouseOver;", nullptr, $FINAL | $SYNTHETIC, $field(WrongSelectionOnMouseOver$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LWrongSelectionOnMouseOver;)V", nullptr, 0, $method(WrongSelectionOnMouseOver$3, init$, void, $WrongSelectionOnMouseOver*)},
		{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$3, menuCanceled, void, $MenuEvent*)},
		{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$3, menuDeselected, void, $MenuEvent*)},
		{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(WrongSelectionOnMouseOver$3, menuSelected, void, $MenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"WrongSelectionOnMouseOver",
		"createUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"WrongSelectionOnMouseOver$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"WrongSelectionOnMouseOver$3",
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
	$loadClass(WrongSelectionOnMouseOver$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WrongSelectionOnMouseOver$3);
	});
	return class$;
}

$Class* WrongSelectionOnMouseOver$3::class$ = nullptr;