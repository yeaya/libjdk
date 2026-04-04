#include <JTreeFocusTest$1.h>
#include <JTreeFocusTest.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <jcpp.h>

using $JTreeFocusTest = ::JTreeFocusTest;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void JTreeFocusTest$1::init$($JTreeFocusTest* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void JTreeFocusTest$1::focusGained($FocusEvent* e) {
	this->this$0->setPassed(true);
}

JTreeFocusTest$1::JTreeFocusTest$1() {
}

$Class* JTreeFocusTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJTreeFocusTest;", nullptr, $FINAL | $SYNTHETIC, $field(JTreeFocusTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJTreeFocusTest;)V", nullptr, 0, $method(JTreeFocusTest$1, init$, void, $JTreeFocusTest*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(JTreeFocusTest$1, focusGained, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JTreeFocusTest",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JTreeFocusTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JTreeFocusTest$1",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"JTreeFocusTest"
	};
	$loadClass(JTreeFocusTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JTreeFocusTest$1);
	});
	return class$;
}

$Class* JTreeFocusTest$1::class$ = nullptr;