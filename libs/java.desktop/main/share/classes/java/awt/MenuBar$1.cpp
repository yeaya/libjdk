#include <java/awt/MenuBar$1.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace java {
	namespace awt {

void MenuBar$1::init$() {
}

$Menu* MenuBar$1::getHelpMenu($MenuBar* menuBar) {
	return $nc(menuBar)->helpMenu;
}

$Vector* MenuBar$1::getMenus($MenuBar* menuBar) {
	return $nc(menuBar)->menus;
}

MenuBar$1::MenuBar$1() {
}

$Class* MenuBar$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MenuBar$1, init$, void)},
		{"getHelpMenu", "(Ljava/awt/MenuBar;)Ljava/awt/Menu;", nullptr, $PUBLIC, $virtualMethod(MenuBar$1, getHelpMenu, $Menu*, $MenuBar*)},
		{"getMenus", "(Ljava/awt/MenuBar;)Ljava/util/Vector;", "(Ljava/awt/MenuBar;)Ljava/util/Vector<Ljava/awt/Menu;>;", $PUBLIC, $virtualMethod(MenuBar$1, getMenus, $Vector*, $MenuBar*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.MenuBar",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MenuBar$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$MenuBarAccessor", "sun.awt.AWTAccessor", "MenuBarAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.MenuBar$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$MenuBarAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.MenuBar"
	};
	$loadClass(MenuBar$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuBar$1);
	});
	return class$;
}

$Class* MenuBar$1::class$ = nullptr;

	} // awt
} // java