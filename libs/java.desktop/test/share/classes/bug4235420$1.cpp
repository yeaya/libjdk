#include <bug4235420$1.h>
#include <bug4235420$Table.h>
#include <bug4235420.h>
#include <jcpp.h>

using $bug4235420$Table = ::bug4235420$Table;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4235420$1::init$() {
}

void bug4235420$1::run() {
	$var($bug4235420$Table, table, $new($bug4235420$Table));
	table->test();
}

bug4235420$1::bug4235420$1() {
}

$Class* bug4235420$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4235420$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4235420$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4235420",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4235420$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4235420$1",
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
		"bug4235420"
	};
	$loadClass(bug4235420$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4235420$1);
	});
	return class$;
}

$Class* bug4235420$1::class$ = nullptr;