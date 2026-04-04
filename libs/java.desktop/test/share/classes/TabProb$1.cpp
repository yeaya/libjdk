#include <TabProb$1.h>
#include <TabProb.h>
#include <java/awt/Window.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef SCROLL_TAB_LAYOUT
#undef WRAP_TAB_LAYOUT

using $TabProb = ::TabProb;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTabbedPane = ::javax::swing::JTabbedPane;

void TabProb$1::init$() {
}

void TabProb$1::run() {
	$init($TabProb);
	$assignStatic($TabProb::tb1, $new($TabProb, $JTabbedPane::SCROLL_TAB_LAYOUT));
	$TabProb::tb1->pack();
	$nc($TabProb::tb1)->setVisible(true);
	$assignStatic($TabProb::tb2, $new($TabProb, $JTabbedPane::WRAP_TAB_LAYOUT));
	$TabProb::tb2->pack();
	$nc($TabProb::tb2)->setVisible(true);
}

TabProb$1::TabProb$1() {
}

$Class* TabProb$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TabProb$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TabProb$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TabProb",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TabProb$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TabProb$1",
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
		"TabProb"
	};
	$loadClass(TabProb$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TabProb$1);
	});
	return class$;
}

$Class* TabProb$1::class$ = nullptr;