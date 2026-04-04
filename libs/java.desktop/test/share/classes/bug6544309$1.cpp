#include <bug6544309$1.h>
#include <bug6544309.h>
#include <jcpp.h>

using $bug6544309 = ::bug6544309;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6544309$1::init$($bug6544309* val$test) {
	$set(this, val$test, val$test);
}

void bug6544309$1::run() {
	$nc(this->val$test)->setupUI();
}

bug6544309$1::bug6544309$1() {
}

$Class* bug6544309$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "Lbug6544309;", nullptr, $FINAL | $SYNTHETIC, $field(bug6544309$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6544309;)V", "()V", 0, $method(bug6544309$1, init$, void, $bug6544309*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6544309$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6544309",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6544309$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6544309$1",
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
		"bug6544309"
	};
	$loadClass(bug6544309$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6544309$1);
	});
	return class$;
}

$Class* bug6544309$1::class$ = nullptr;