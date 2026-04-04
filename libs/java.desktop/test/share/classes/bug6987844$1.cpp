#include <bug6987844$1.h>
#include <bug6987844.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE

using $bug6987844 = ::bug6987844;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;

void bug6987844$1::init$() {
}

void bug6987844$1::run() {
	$useLocalObjectStack();
	$init($bug6987844);
	$assignStatic($bug6987844::frame, $new($JFrame));
	$bug6987844::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JMenuBar, bar, $new($JMenuBar));
	$assignStatic($bug6987844::menu1, $new($JMenu, "Menu1"_s));
	$bug6987844::menu1->add($$new($JMenuItem, "item"_s));
	bar->add($bug6987844::menu1);
	$assignStatic($bug6987844::menu2, $new($JMenu, "Menu2"_s));
	$bug6987844::menu2->add($$new($JMenuItem, "item"_s));
	$nc($bug6987844::menu2)->add($$new($JMenuItem, "item"_s));
	bar->add($bug6987844::menu2);
	$nc($bug6987844::frame)->setJMenuBar(bar);
	$nc($bug6987844::frame)->pack();
	$nc($bug6987844::frame)->setVisible(true);
}

bug6987844$1::bug6987844$1() {
}

$Class* bug6987844$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6987844$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6987844$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6987844",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6987844$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6987844$1",
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
		"bug6987844"
	};
	$loadClass(bug6987844$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6987844$1);
	});
	return class$;
}

$Class* bug6987844$1::class$ = nullptr;