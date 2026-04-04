#include <RightAltKeyTest$2.h>
#include <RightAltKeyTest.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $RightAltKeyTest = ::RightAltKeyTest;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void RightAltKeyTest$2::init$($RightAltKeyTest* this$0) {
	$set(this, this$0, this$0);
}

void RightAltKeyTest$2::focusGained($FocusEvent* e) {
	this->this$0->action = true;
	this->this$0->disposeUI();
}

void RightAltKeyTest$2::focusLost($FocusEvent* e) {
}

RightAltKeyTest$2::RightAltKeyTest$2() {
}

$Class* RightAltKeyTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LRightAltKeyTest;", nullptr, $FINAL | $SYNTHETIC, $field(RightAltKeyTest$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LRightAltKeyTest;)V", nullptr, 0, $method(RightAltKeyTest$2, init$, void, $RightAltKeyTest*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(RightAltKeyTest$2, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(RightAltKeyTest$2, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"RightAltKeyTest",
		"testJTextArea",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"RightAltKeyTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"RightAltKeyTest$2",
		"java.lang.Object",
		"java.awt.event.FocusListener",
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
	$loadClass(RightAltKeyTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RightAltKeyTest$2);
	});
	return class$;
}

$Class* RightAltKeyTest$2::class$ = nullptr;