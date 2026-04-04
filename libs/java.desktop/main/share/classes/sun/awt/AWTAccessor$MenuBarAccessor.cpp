#include <sun/awt/AWTAccessor$MenuBarAccessor.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/util/Vector.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Vector = ::java::util::Vector;

namespace sun {
	namespace awt {

$Class* AWTAccessor$MenuBarAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHelpMenu", "(Ljava/awt/MenuBar;)Ljava/awt/Menu;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuBarAccessor, getHelpMenu, $Menu*, $MenuBar*)},
		{"getMenus", "(Ljava/awt/MenuBar;)Ljava/util/Vector;", "(Ljava/awt/MenuBar;)Ljava/util/Vector<Ljava/awt/Menu;>;", $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuBarAccessor, getMenus, $Vector*, $MenuBar*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$MenuBarAccessor", "sun.awt.AWTAccessor", "MenuBarAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$MenuBarAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.AWTAccessor"
	};
	$loadClass(AWTAccessor$MenuBarAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$MenuBarAccessor);
	});
	return class$;
}

$Class* AWTAccessor$MenuBarAccessor::class$ = nullptr;

	} // awt
} // sun