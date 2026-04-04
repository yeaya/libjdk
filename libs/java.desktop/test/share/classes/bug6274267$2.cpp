#include <bug6274267$2.h>
#include <bug6274267.h>
#include <jcpp.h>

using $bug6274267 = ::bug6274267;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6274267$2::init$($bug6274267* val$test) {
	$set(this, val$test, val$test);
}

void bug6274267$2::run() {
	$nc(this->val$test)->setupUI2();
}

bug6274267$2::bug6274267$2() {
}

$Class* bug6274267$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "Lbug6274267;", nullptr, $FINAL | $SYNTHETIC, $field(bug6274267$2, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6274267;)V", "()V", 0, $method(bug6274267$2, init$, void, $bug6274267*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6274267$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6274267",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6274267$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6274267$2",
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
		"bug6274267"
	};
	$loadClass(bug6274267$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6274267$2);
	});
	return class$;
}

$Class* bug6274267$2::class$ = nullptr;