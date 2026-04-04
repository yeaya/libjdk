#include <bug6493680$Test$1.h>
#include <bug6493680$Test.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/util/concurrent/atomic/AtomicInteger.h>
#include <jcpp.h>

using $bug6493680$Test = ::bug6493680$Test;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6493680$Test$1::init$($bug6493680$Test* this$0) {
	$set(this, this$0, this$0);
}

void bug6493680$Test$1::propertyChange($PropertyChangeEvent* evt) {
	if ("progress"_s == $nc(evt)->getPropertyName()) {
		$nc(this->this$0->lastProgressValue)->set($$sure($Integer, evt->getNewValue())->intValue());
	}
}

bug6493680$Test$1::bug6493680$Test$1() {
}

$Class* bug6493680$Test$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6493680$Test;", nullptr, $FINAL | $SYNTHETIC, $field(bug6493680$Test$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6493680$Test;)V", nullptr, 0, $method(bug6493680$Test$1, init$, void, $bug6493680$Test*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6493680$Test$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6493680$Test",
		"test",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6493680$Test", "bug6493680", "Test", $PRIVATE | $STATIC},
		{"bug6493680$Test$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6493680$Test$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6493680"
	};
	$loadClass(bug6493680$Test$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6493680$Test$1);
	});
	return class$;
}

$Class* bug6493680$Test$1::class$ = nullptr;