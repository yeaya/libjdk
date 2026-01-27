#include <java/awt/desktop/SystemSleepListener.h>

#include <java/awt/desktop/SystemSleepEvent.h>
#include <jcpp.h>

using $SystemSleepEvent = ::java::awt::desktop::SystemSleepEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$MethodInfo _SystemSleepListener_MethodInfo_[] = {
	{"systemAboutToSleep", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemSleepListener, systemAboutToSleep, void, $SystemSleepEvent*)},
	{"systemAwoke", "(Ljava/awt/desktop/SystemSleepEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SystemSleepListener, systemAwoke, void, $SystemSleepEvent*)},
	{}
};

$ClassInfo _SystemSleepListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.awt.desktop.SystemSleepListener",
	nullptr,
	"java.awt.desktop.SystemEventListener",
	nullptr,
	_SystemSleepListener_MethodInfo_
};

$Object* allocate$SystemSleepListener($Class* clazz) {
	return $of($alloc(SystemSleepListener));
}

$Class* SystemSleepListener::load$($String* name, bool initialize) {
	$loadClass(SystemSleepListener, name, initialize, &_SystemSleepListener_ClassInfo_, allocate$SystemSleepListener);
	return class$;
}

$Class* SystemSleepListener::class$ = nullptr;

		} // desktop
	} // awt
} // java