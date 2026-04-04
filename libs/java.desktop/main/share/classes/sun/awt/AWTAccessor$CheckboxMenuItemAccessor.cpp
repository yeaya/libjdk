#include <sun/awt/AWTAccessor$CheckboxMenuItemAccessor.h>
#include <java/awt/CheckboxMenuItem.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $CheckboxMenuItem = ::java::awt::CheckboxMenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$CheckboxMenuItemAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getState", "(Ljava/awt/CheckboxMenuItem;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$CheckboxMenuItemAccessor, getState, bool, $CheckboxMenuItem*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$CheckboxMenuItemAccessor", "sun.awt.AWTAccessor", "CheckboxMenuItemAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$CheckboxMenuItemAccessor",
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
	$loadClass(AWTAccessor$CheckboxMenuItemAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$CheckboxMenuItemAccessor);
	});
	return class$;
}

$Class* AWTAccessor$CheckboxMenuItemAccessor::class$ = nullptr;

	} // awt
} // sun