#include <java/awt/SystemTray$1.h>
#include <java/awt/SystemTray.h>
#include <jcpp.h>

using $SystemTray = ::java::awt::SystemTray;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void SystemTray$1::init$() {
}

void SystemTray$1::firePropertyChange($SystemTray* tray, $String* propertyName, Object$* oldValue, Object$* newValue) {
	$nc(tray)->firePropertyChange(propertyName, oldValue, newValue);
}

SystemTray$1::SystemTray$1() {
}

$Class* SystemTray$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SystemTray$1, init$, void)},
		{"firePropertyChange", "(Ljava/awt/SystemTray;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SystemTray$1, firePropertyChange, void, $SystemTray*, $String*, Object$*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.SystemTray",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.SystemTray$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$SystemTrayAccessor", "sun.awt.AWTAccessor", "SystemTrayAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.SystemTray$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$SystemTrayAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.SystemTray"
	};
	$loadClass(SystemTray$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemTray$1);
	});
	return class$;
}

$Class* SystemTray$1::class$ = nullptr;

	} // awt
} // java