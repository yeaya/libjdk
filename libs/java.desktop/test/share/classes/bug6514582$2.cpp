#include <bug6514582$2.h>
#include <bug6514582.h>
#include <java/awt/Container.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6514582 = ::bug6514582;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6514582$2::init$() {
}

void bug6514582$2::run() {
	$init($bug6514582);
	$nc($bug6514582::popup)->setVisible(false);
	$nc($bug6514582::popup)->removeAll();
	$nc($bug6514582::popup)->setVisible(true);
}

bug6514582$2::bug6514582$2() {
}

$Class* bug6514582$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6514582$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6514582$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6514582",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6514582$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6514582$2",
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
		"bug6514582"
	};
	$loadClass(bug6514582$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6514582$2);
	});
	return class$;
}

$Class* bug6514582$2::class$ = nullptr;