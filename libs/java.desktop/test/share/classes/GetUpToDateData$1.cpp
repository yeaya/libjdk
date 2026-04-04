#include <GetUpToDateData$1.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void GetUpToDateData$1::init$() {
}

GetUpToDateData$1::GetUpToDateData$1() {
}

$Class* GetUpToDateData$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GetUpToDateData$1, init$, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"GetUpToDateData",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetUpToDateData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"GetUpToDateData$1",
		"java.lang.Object",
		"java.util.EventListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"GetUpToDateData"
	};
	$loadClass(GetUpToDateData$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$1);
	});
	return class$;
}

$Class* GetUpToDateData$1::class$ = nullptr;