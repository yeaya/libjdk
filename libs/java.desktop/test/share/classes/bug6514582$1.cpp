#include <bug6514582$1.h>
#include <bug6514582.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <jcpp.h>

using $bug6514582 = ::bug6514582;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;

void bug6514582$1::init$() {
}

void bug6514582$1::run() {
	$init($bug6514582);
	$assignStatic($bug6514582::popup, $new($JPopupMenu));
	$bug6514582::popup->add($$new($JMenuItem, "item"_s));
	$nc($bug6514582::popup)->setVisible(true);
}

bug6514582$1::bug6514582$1() {
}

$Class* bug6514582$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6514582$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6514582$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6514582",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6514582$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6514582$1",
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
	$loadClass(bug6514582$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6514582$1);
	});
	return class$;
}

$Class* bug6514582$1::class$ = nullptr;