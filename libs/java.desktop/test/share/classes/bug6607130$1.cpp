#include <bug6607130$1.h>
#include <bug6607130.h>
#include <jcpp.h>

using $bug6607130 = ::bug6607130;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6607130$1::init$($bug6607130* val$test) {
	$set(this, val$test, val$test);
}

void bug6607130$1::run() {
	$nc(this->val$test)->setupUI();
}

bug6607130$1::bug6607130$1() {
}

$Class* bug6607130$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$test", "Lbug6607130;", nullptr, $FINAL | $SYNTHETIC, $field(bug6607130$1, val$test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6607130;)V", "()V", 0, $method(bug6607130$1, init$, void, $bug6607130*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6607130$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6607130",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6607130$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6607130$1",
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
		"bug6607130"
	};
	$loadClass(bug6607130$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6607130$1);
	});
	return class$;
}

$Class* bug6607130$1::class$ = nullptr;