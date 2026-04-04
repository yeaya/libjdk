#include <bug4275046$1.h>
#include <bug4275046.h>
#include <jcpp.h>

using $bug4275046 = ::bug4275046;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4275046$1::init$($bug4275046* this$0) {
	$set(this, this$0, this$0);
}

void bug4275046$1::run() {
	this->this$0->createGUI();
}

bug4275046$1::bug4275046$1() {
}

$Class* bug4275046$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4275046;", nullptr, $FINAL | $SYNTHETIC, $field(bug4275046$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4275046;)V", nullptr, 0, $method(bug4275046$1, init$, void, $bug4275046*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4275046$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4275046",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4275046$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4275046$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4275046"
	};
	$loadClass(bug4275046$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4275046$1);
	});
	return class$;
}

$Class* bug4275046$1::class$ = nullptr;