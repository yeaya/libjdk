#include <RightAltKeyTest$1.h>
#include <RightAltKeyTest.h>
#include <javax/swing/event/MenuEvent.h>
#include <jcpp.h>

using $RightAltKeyTest = ::RightAltKeyTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MenuEvent = ::javax::swing::event::MenuEvent;

void RightAltKeyTest$1::init$($RightAltKeyTest* this$0) {
	$set(this, this$0, this$0);
}

void RightAltKeyTest$1::menuSelected($MenuEvent* e) {
	this->this$0->action = true;
	this->this$0->disposeUI();
}

void RightAltKeyTest$1::menuDeselected($MenuEvent* e) {
}

void RightAltKeyTest$1::menuCanceled($MenuEvent* e) {
}

RightAltKeyTest$1::RightAltKeyTest$1() {
}

$Class* RightAltKeyTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LRightAltKeyTest;", nullptr, $FINAL | $SYNTHETIC, $field(RightAltKeyTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LRightAltKeyTest;)V", nullptr, 0, $method(RightAltKeyTest$1, init$, void, $RightAltKeyTest*)},
		{"menuCanceled", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(RightAltKeyTest$1, menuCanceled, void, $MenuEvent*)},
		{"menuDeselected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(RightAltKeyTest$1, menuDeselected, void, $MenuEvent*)},
		{"menuSelected", "(Ljavax/swing/event/MenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(RightAltKeyTest$1, menuSelected, void, $MenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RightAltKeyTest",
		"testJMenu",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RightAltKeyTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RightAltKeyTest$1",
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
		"RightAltKeyTest"
	};
	$loadClass(RightAltKeyTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RightAltKeyTest$1);
	});
	return class$;
}

$Class* RightAltKeyTest$1::class$ = nullptr;