#include <javax/management/monitor/StringMonitor$StringMonitorObservedObject.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/monitor/StringMonitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

void StringMonitor$StringMonitorObservedObject::init$($ObjectName* observedObject) {
	$Monitor$ObservedObject::init$(observedObject);
}

int32_t StringMonitor$StringMonitorObservedObject::getStatus() {
	$synchronized(this) {
		return this->status;
	}
}

void StringMonitor$StringMonitorObservedObject::setStatus(int32_t status) {
	$synchronized(this) {
		this->status = status;
	}
}

StringMonitor$StringMonitorObservedObject::StringMonitor$StringMonitorObservedObject() {
}

$Class* StringMonitor$StringMonitorObservedObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"status", "I", nullptr, $PRIVATE, $field(StringMonitor$StringMonitorObservedObject, status)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(StringMonitor$StringMonitorObservedObject, init$, void, $ObjectName*)},
		{"getStatus", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(StringMonitor$StringMonitorObservedObject, getStatus, int32_t)},
		{"setStatus", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(StringMonitor$StringMonitorObservedObject, setStatus, void, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.StringMonitor$StringMonitorObservedObject", "javax.management.monitor.StringMonitor", "StringMonitorObservedObject", $STATIC},
		{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.StringMonitor$StringMonitorObservedObject",
		"javax.management.monitor.Monitor$ObservedObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.monitor.StringMonitor"
	};
	$loadClass(StringMonitor$StringMonitorObservedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(StringMonitor$StringMonitorObservedObject);
	});
	return class$;
}

$Class* StringMonitor$StringMonitorObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax