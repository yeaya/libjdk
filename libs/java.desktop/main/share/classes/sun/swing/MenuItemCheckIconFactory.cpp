#include <sun/swing/MenuItemCheckIconFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JMenuItem.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JMenuItem = ::javax::swing::JMenuItem;

namespace sun {
	namespace swing {

$Class* MenuItemCheckIconFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getIcon", "(Ljavax/swing/JMenuItem;)Ljavax/swing/Icon;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuItemCheckIconFactory, getIcon, $Icon*, $JMenuItem*)},
		{"isCompatible", "(Ljava/lang/Object;Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MenuItemCheckIconFactory, isCompatible, bool, Object$*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.MenuItemCheckIconFactory",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(MenuItemCheckIconFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuItemCheckIconFactory);
	});
	return class$;
}

$Class* MenuItemCheckIconFactory::class$ = nullptr;

	} // swing
} // sun