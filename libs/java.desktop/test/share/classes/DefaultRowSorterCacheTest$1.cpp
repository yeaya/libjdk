#include <DefaultRowSorterCacheTest$1.h>
#include <DefaultRowSorterCacheTest.h>
#include <jcpp.h>

using $DefaultRowSorterCacheTest = ::DefaultRowSorterCacheTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void DefaultRowSorterCacheTest$1::init$() {
}

void DefaultRowSorterCacheTest$1::run() {
	$$new($DefaultRowSorterCacheTest)->testSort();
}

DefaultRowSorterCacheTest$1::DefaultRowSorterCacheTest$1() {
}

$Class* DefaultRowSorterCacheTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(DefaultRowSorterCacheTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultRowSorterCacheTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"DefaultRowSorterCacheTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DefaultRowSorterCacheTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"DefaultRowSorterCacheTest$1",
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
		"DefaultRowSorterCacheTest"
	};
	$loadClass(DefaultRowSorterCacheTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultRowSorterCacheTest$1);
	});
	return class$;
}

$Class* DefaultRowSorterCacheTest$1::class$ = nullptr;