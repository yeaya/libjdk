#include <bug6883341.h>
#include <bug6883341$1.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6883341$1 = ::bug6883341$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6883341::init$() {
}

void bug6883341::createGui() {
	$useLocalObjectStack();
	$var($JPopupMenu, menu, $new($JPopupMenu));
	menu->add($$new($JMenuItem));
	menu->setVisible(true);
	menu->setVisible(false);
}

void bug6883341::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6883341$1));
}

bug6883341::bug6883341() {
}

$Class* bug6883341::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6883341, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6883341, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6883341, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6883341$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6883341",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6883341$1"
	};
	$loadClass(bug6883341, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6883341);
	});
	return class$;
}

$Class* bug6883341::class$ = nullptr;