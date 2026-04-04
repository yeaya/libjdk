#include <bug8075314$2.h>
#include <bug8075314.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/JInternalFrame.h>
#include <jcpp.h>

using $bug8075314 = ::bug8075314;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug8075314$2::init$() {
}

void bug8075314$2::run() {
	try {
		$init($bug8075314);
		$nc($bug8075314::frame1)->setMaximum(true);
		$nc($bug8075314::frame1)->setClosed(true);
		if ($nc($bug8075314::frame2)->isMaximum()) {
			$throwNew($RuntimeException, "Frame2 is maximized!"_s);
		}
	} catch ($PropertyVetoException& e) {
		$throwNew($RuntimeException, e);
	}
}

bug8075314$2::bug8075314$2() {
}

$Class* bug8075314$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug8075314$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8075314$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8075314",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8075314$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8075314$2",
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
		"bug8075314"
	};
	$loadClass(bug8075314$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8075314$2);
	});
	return class$;
}

$Class* bug8075314$2::class$ = nullptr;