#include <sun/awt/AWTAccessor$PopupMenuAccessor.h>
#include <java/awt/PopupMenu.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $PopupMenu = ::java::awt::PopupMenu;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$PopupMenuAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isTrayIconPopup", "(Ljava/awt/PopupMenu;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$PopupMenuAccessor, isTrayIconPopup, bool, $PopupMenu*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$PopupMenuAccessor", "sun.awt.AWTAccessor", "PopupMenuAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$PopupMenuAccessor",
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
	$loadClass(AWTAccessor$PopupMenuAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$PopupMenuAccessor);
	});
	return class$;
}

$Class* AWTAccessor$PopupMenuAccessor::class$ = nullptr;

	} // awt
} // sun