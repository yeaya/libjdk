#include <bug4927934$2.h>
#include <bug4927934.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $bug4927934 = ::bug4927934;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4927934$2::init$() {
}

void bug4927934$2::run() {
	$init($bug4927934);
	$nc($bug4927934::tree)->requestFocus();
}

bug4927934$2::bug4927934$2() {
}

$Class* bug4927934$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4927934$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4927934$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4927934",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4927934$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4927934$2",
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
		"bug4927934"
	};
	$loadClass(bug4927934$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4927934$2);
	});
	return class$;
}

$Class* bug4927934$2::class$ = nullptr;