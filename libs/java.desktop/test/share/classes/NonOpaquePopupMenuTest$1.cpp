#include <NonOpaquePopupMenuTest$1.h>
#include <NonOpaquePopupMenuTest.h>
#include <jcpp.h>

using $NonOpaquePopupMenuTest = ::NonOpaquePopupMenuTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NonOpaquePopupMenuTest$1::init$() {
}

void NonOpaquePopupMenuTest$1::run() {
	$new($NonOpaquePopupMenuTest);
}

NonOpaquePopupMenuTest$1::NonOpaquePopupMenuTest$1() {
}

$Class* NonOpaquePopupMenuTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NonOpaquePopupMenuTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NonOpaquePopupMenuTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NonOpaquePopupMenuTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NonOpaquePopupMenuTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NonOpaquePopupMenuTest$1",
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
		"NonOpaquePopupMenuTest"
	};
	$loadClass(NonOpaquePopupMenuTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NonOpaquePopupMenuTest$1);
	});
	return class$;
}

$Class* NonOpaquePopupMenuTest$1::class$ = nullptr;