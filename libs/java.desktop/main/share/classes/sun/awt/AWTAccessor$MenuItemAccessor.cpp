#include <sun/awt/AWTAccessor$MenuItemAccessor.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$MenuItemAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getActionCommandImpl", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuItemAccessor, getActionCommandImpl, $String*, $MenuItem*)},
		{"getLabel", "(Ljava/awt/MenuItem;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuItemAccessor, getLabel, $String*, $MenuItem*)},
		{"getShortcut", "(Ljava/awt/MenuItem;)Ljava/awt/MenuShortcut;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuItemAccessor, getShortcut, $MenuShortcut*, $MenuItem*)},
		{"isEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuItemAccessor, isEnabled, bool, $MenuItem*)},
		{"isItemEnabled", "(Ljava/awt/MenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$MenuItemAccessor, isItemEnabled, bool, $MenuItem*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$MenuItemAccessor", "sun.awt.AWTAccessor", "MenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$MenuItemAccessor",
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
	$loadClass(AWTAccessor$MenuItemAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$MenuItemAccessor);
	});
	return class$;
}

$Class* AWTAccessor$MenuItemAccessor::class$ = nullptr;

	} // awt
} // sun