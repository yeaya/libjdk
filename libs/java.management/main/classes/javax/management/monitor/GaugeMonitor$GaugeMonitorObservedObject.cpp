#include <javax/management/monitor/GaugeMonitor$GaugeMonitorObservedObject.h>
#include <java/lang/Number.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/GaugeMonitor.h>
#include <javax/management/monitor/Monitor$NumericalType.h>
#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $ObjectName = ::javax::management::ObjectName;
using $Monitor$NumericalType = ::javax::management::monitor::Monitor$NumericalType;
using $Monitor$ObservedObject = ::javax::management::monitor::Monitor$ObservedObject;

namespace javax {
	namespace management {
		namespace monitor {

void GaugeMonitor$GaugeMonitorObservedObject::init$($ObjectName* observedObject) {
	$Monitor$ObservedObject::init$(observedObject);
}

bool GaugeMonitor$GaugeMonitorObservedObject::getDerivedGaugeValid() {
	$synchronized(this) {
		return this->derivedGaugeValid;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setDerivedGaugeValid(bool derivedGaugeValid) {
	$synchronized(this) {
		this->derivedGaugeValid = derivedGaugeValid;
	}
}

$Monitor$NumericalType* GaugeMonitor$GaugeMonitorObservedObject::getType() {
	$synchronized(this) {
		return this->type;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setType($Monitor$NumericalType* type) {
	$synchronized(this) {
		$set(this, type, type);
	}
}

$Number* GaugeMonitor$GaugeMonitorObservedObject::getPreviousScanGauge() {
	$synchronized(this) {
		return this->previousScanGauge;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setPreviousScanGauge($Number* previousScanGauge) {
	$synchronized(this) {
		$set(this, previousScanGauge, previousScanGauge);
	}
}

int32_t GaugeMonitor$GaugeMonitorObservedObject::getStatus() {
	$synchronized(this) {
		return this->status;
	}
}

void GaugeMonitor$GaugeMonitorObservedObject::setStatus(int32_t status) {
	$synchronized(this) {
		this->status = status;
	}
}

GaugeMonitor$GaugeMonitorObservedObject::GaugeMonitor$GaugeMonitorObservedObject() {
}

$Class* GaugeMonitor$GaugeMonitorObservedObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"derivedGaugeValid", "Z", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, derivedGaugeValid)},
		{"type", "Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, type)},
		{"previousScanGauge", "Ljava/lang/Number;", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, previousScanGauge)},
		{"status", "I", nullptr, $PRIVATE, $field(GaugeMonitor$GaugeMonitorObservedObject, status)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(GaugeMonitor$GaugeMonitorObservedObject, init$, void, $ObjectName*)},
		{"getDerivedGaugeValid", "()Z", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, getDerivedGaugeValid, bool)},
		{"getPreviousScanGauge", "()Ljava/lang/Number;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, getPreviousScanGauge, $Number*)},
		{"getStatus", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, getStatus, int32_t)},
		{"getType", "()Ljavax/management/monitor/Monitor$NumericalType;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, getType, $Monitor$NumericalType*)},
		{"setDerivedGaugeValid", "(Z)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, setDerivedGaugeValid, void, bool)},
		{"setPreviousScanGauge", "(Ljava/lang/Number;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, setPreviousScanGauge, void, $Number*)},
		{"setStatus", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, setStatus, void, int32_t)},
		{"setType", "(Ljavax/management/monitor/Monitor$NumericalType;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(GaugeMonitor$GaugeMonitorObservedObject, setType, void, $Monitor$NumericalType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject", "javax.management.monitor.GaugeMonitor", "GaugeMonitorObservedObject", $STATIC},
		{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.GaugeMonitor$GaugeMonitorObservedObject",
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
		"javax.management.monitor.GaugeMonitor"
	};
	$loadClass(GaugeMonitor$GaugeMonitorObservedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GaugeMonitor$GaugeMonitorObservedObject);
	});
	return class$;
}

$Class* GaugeMonitor$GaugeMonitorObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax