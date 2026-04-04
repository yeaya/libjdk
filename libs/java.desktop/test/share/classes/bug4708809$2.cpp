#include <bug4708809$2.h>
#include <bug4708809.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/JScrollPane.h>
#include <jcpp.h>

using $bug4708809 = ::bug4708809;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug4708809$2::init$() {
}

void bug4708809$2::run() {
	$init($bug4708809);
	$nc($bug4708809::spane)->requestFocus();
	$nc($bug4708809::sbar)->setValue($nc($bug4708809::sbar)->getMaximum());
}

bug4708809$2::bug4708809$2() {
}

$Class* bug4708809$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4708809$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4708809$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4708809",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4708809$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4708809$2",
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
		"bug4708809"
	};
	$loadClass(bug4708809$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4708809$2);
	});
	return class$;
}

$Class* bug4708809$2::class$ = nullptr;