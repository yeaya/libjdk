#include <sun/awt/AWTAccessor$TrayIconAccessor.h>
#include <java/awt/TrayIcon.h>
#include <sun/awt/AWTAccessor.h>
#include <jcpp.h>

using $TrayIcon = ::java::awt::TrayIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace awt {

$Class* AWTAccessor$TrayIconAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$TrayIconAccessor, addNotify, void, $TrayIcon*), "java.awt.AWTException"},
		{"removeNotify", "(Ljava/awt/TrayIcon;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AWTAccessor$TrayIconAccessor, removeNotify, void, $TrayIcon*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.AWTAccessor$TrayIconAccessor", "sun.awt.AWTAccessor", "TrayIconAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.AWTAccessor$TrayIconAccessor",
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
	$loadClass(AWTAccessor$TrayIconAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AWTAccessor$TrayIconAccessor);
	});
	return class$;
}

$Class* AWTAccessor$TrayIconAccessor::class$ = nullptr;

	} // awt
} // sun