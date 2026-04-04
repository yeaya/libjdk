#include <bug8054543$1.h>
#include <bug8054543.h>
#include <jcpp.h>

using $bug8054543 = ::bug8054543;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug8054543$1::init$() {
}

void bug8054543$1::run() {
	$new($bug8054543);
}

bug8054543$1::bug8054543$1() {
}

$Class* bug8054543$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8054543$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8054543$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8054543",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8054543$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8054543$1",
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
		"bug8054543"
	};
	$loadClass(bug8054543$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8054543$1);
	});
	return class$;
}

$Class* bug8054543$1::class$ = nullptr;