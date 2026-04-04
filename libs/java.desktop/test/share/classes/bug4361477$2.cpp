#include <bug4361477$2.h>
#include <bug4361477.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

using $bug4361477 = ::bug4361477;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

void bug4361477$2::init$() {
}

void bug4361477$2::run() {
	$init($bug4361477);
	$assignStatic($bug4361477::bounds, $$sure($TabbedPaneUI, $nc($bug4361477::tabbedPane)->getUI())->getTabBounds($bug4361477::tabbedPane, 0));
}

bug4361477$2::bug4361477$2() {
}

$Class* bug4361477$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4361477$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4361477$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4361477",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4361477$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4361477$2",
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
		"bug4361477"
	};
	$loadClass(bug4361477$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4361477$2);
	});
	return class$;
}

$Class* bug4361477$2::class$ = nullptr;