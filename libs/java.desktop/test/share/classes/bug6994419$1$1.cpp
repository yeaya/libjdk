#include <bug6994419$1$1.h>
#include <bug6994419$1.h>
#include <java/beans/PropertyChangeEvent.h>
#include <jcpp.h>

using $bug6994419$1 = ::bug6994419$1;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6994419$1$1::init$($bug6994419$1* this$0) {
	$set(this, this$0, this$0);
}

void bug6994419$1$1::propertyChange($PropertyChangeEvent* evt) {
	$throwNew($RuntimeException, "Property change event was unexpectedly fired"_s);
}

bug6994419$1$1::bug6994419$1$1() {
}

$Class* bug6994419$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6994419$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6994419$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6994419$1;)V", nullptr, 0, $method(bug6994419$1$1, init$, void, $bug6994419$1*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6994419$1$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6994419$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6994419$1", nullptr, nullptr, 0},
		{"bug6994419$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6994419$1$1",
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
		"bug6994419"
	};
	$loadClass(bug6994419$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6994419$1$1);
	});
	return class$;
}

$Class* bug6994419$1$1::class$ = nullptr;