#include <bug4708809$3$1.h>
#include <bug4708809$3.h>
#include <bug4708809.h>
#include <java/awt/event/AdjustmentEvent.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $bug4708809$3 = ::bug4708809$3;
using $AdjustmentEvent = ::java::awt::event::AdjustmentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4708809$3$1::init$($bug4708809$3* this$0, int32_t val$oldValue) {
	$set(this, this$0, this$0);
	this->val$oldValue = val$oldValue;
}

void bug4708809$3$1::adjustmentValueChanged($AdjustmentEvent* e) {
	if ($nc(e)->getValue() >= this->val$oldValue) {
		$init($bug4708809);
		$bug4708809::passed = false;
	}
	$init($bug4708809);
	$bug4708809::do_test = true;
}

bug4708809$3$1::bug4708809$3$1() {
}

$Class* bug4708809$3$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4708809$3;", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$3$1, this$0)},
		{"val$oldValue", "I", nullptr, $FINAL | $SYNTHETIC, $field(bug4708809$3$1, val$oldValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4708809$3;I)V", "()V", 0, $method(bug4708809$3$1, init$, void, $bug4708809$3*, int32_t)},
		{"adjustmentValueChanged", "(Ljava/awt/event/AdjustmentEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4708809$3$1, adjustmentValueChanged, void, $AdjustmentEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4708809$3",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4708809$3", nullptr, nullptr, 0},
		{"bug4708809$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4708809$3$1",
		"java.lang.Object",
		"java.awt.event.AdjustmentListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4708809"
	};
	$loadClass(bug4708809$3$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809$3$1);
	});
	return class$;
}

$Class* bug4708809$3$1::class$ = nullptr;