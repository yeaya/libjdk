#include <UpdateUIRecursionTest$1.h>
#include <UpdateUIRecursionTest.h>
#include <jcpp.h>

using $UpdateUIRecursionTest = ::UpdateUIRecursionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void UpdateUIRecursionTest$1::init$() {
}

void UpdateUIRecursionTest$1::run() {
	$var($UpdateUIRecursionTest, obj, $new($UpdateUIRecursionTest));
	obj->test();
	obj->disposeUI();
}

UpdateUIRecursionTest$1::UpdateUIRecursionTest$1() {
}

$Class* UpdateUIRecursionTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UpdateUIRecursionTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(UpdateUIRecursionTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"UpdateUIRecursionTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UpdateUIRecursionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"UpdateUIRecursionTest$1",
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
		"UpdateUIRecursionTest"
	};
	$loadClass(UpdateUIRecursionTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UpdateUIRecursionTest$1);
	});
	return class$;
}

$Class* UpdateUIRecursionTest$1::class$ = nullptr;