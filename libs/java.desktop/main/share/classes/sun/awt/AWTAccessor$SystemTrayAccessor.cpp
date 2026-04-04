#include <sun/awt/AWTAccessor$SystemTrayAccessor.h>
#include <java/awt/SystemTray.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $SystemTray = ::java::awt::SystemTray;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$SystemTrayAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"firePropertyChange", "(Ljava/awt/SystemTray;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$SystemTrayAccessor, firePropertyChange, void, $SystemTray*, $String*, Object$*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$SystemTrayAccessor", "sun.awt.AWTAccessor", "SystemTrayAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$SystemTrayAccessor",
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
	$loadClass(AWTAccessor$SystemTrayAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$SystemTrayAccessor);
	});
	return class$;
}

$Class* AWTAccessor$SystemTrayAccessor::class$ = nullptr;

	} // awt
} // sun