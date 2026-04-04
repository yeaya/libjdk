#include <bug4708809$3.h>
#include <bug4708809$3$1.h>
#include <bug4708809.h>
#include <javax/swing/JScrollBar.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $bug4708809$3$1 = ::bug4708809$3$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4708809$3::init$() {
}

void bug4708809$3::run() {
	$init($bug4708809);
	int32_t oldValue = $nc($bug4708809::sbar)->getValue();
	$nc($bug4708809::sbar)->addAdjustmentListener($$new($bug4708809$3$1, this, oldValue));
}

bug4708809$3::bug4708809$3() {
}

$Class* bug4708809$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4708809$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4708809$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4708809",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4708809$3", nullptr, nullptr, 0},
		{"bug4708809$3$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4708809$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4708809"
	};
	$loadClass(bug4708809$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809$3);
	});
	return class$;
}

$Class* bug4708809$3::class$ = nullptr;