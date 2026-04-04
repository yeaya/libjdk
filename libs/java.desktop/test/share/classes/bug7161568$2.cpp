#include <bug7161568$2.h>
#include <bug7161568.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug7161568 = ::bug7161568;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7161568$2::init$() {
}

void bug7161568$2::run() {
	$init($bug7161568);
	$nc($bug7161568::tabbedPane)->requestFocus();
}

bug7161568$2::bug7161568$2() {
}

$Class* bug7161568$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7161568$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7161568$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7161568",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7161568$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7161568$2",
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
		"bug7161568"
	};
	$loadClass(bug7161568$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7161568$2);
	});
	return class$;
}

$Class* bug7161568$2::class$ = nullptr;