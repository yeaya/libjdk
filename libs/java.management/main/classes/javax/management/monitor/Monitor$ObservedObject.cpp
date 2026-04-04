#include <javax/management/monitor/Monitor$ObservedObject.h>
#include <javax/management/ObjectName.h>
#include <javax/management/monitor/Monitor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

void Monitor$ObservedObject::init$($ObjectName* observedObject) {
	$set(this, observedObject, observedObject);
}

$ObjectName* Monitor$ObservedObject::getObservedObject() {
	return this->observedObject;
}

int32_t Monitor$ObservedObject::getAlreadyNotified() {
	$synchronized(this) {
		return this->alreadyNotified;
	}
}

void Monitor$ObservedObject::setAlreadyNotified(int32_t alreadyNotified) {
	$synchronized(this) {
		this->alreadyNotified = alreadyNotified;
	}
}

$Object* Monitor$ObservedObject::getDerivedGauge() {
	$synchronized(this) {
		return this->derivedGauge;
	}
}

void Monitor$ObservedObject::setDerivedGauge(Object$* derivedGauge) {
	$synchronized(this) {
		$set(this, derivedGauge, derivedGauge);
	}
}

int64_t Monitor$ObservedObject::getDerivedGaugeTimeStamp() {
	$synchronized(this) {
		return this->derivedGaugeTimeStamp;
	}
}

void Monitor$ObservedObject::setDerivedGaugeTimeStamp(int64_t derivedGaugeTimeStamp) {
	$synchronized(this) {
		this->derivedGaugeTimeStamp = derivedGaugeTimeStamp;
	}
}

Monitor$ObservedObject::Monitor$ObservedObject() {
}

$Class* Monitor$ObservedObject::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"observedObject", "Ljavax/management/ObjectName;", nullptr, $PRIVATE | $FINAL, $field(Monitor$ObservedObject, observedObject)},
		{"alreadyNotified", "I", nullptr, $PRIVATE, $field(Monitor$ObservedObject, alreadyNotified)},
		{"derivedGauge", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(Monitor$ObservedObject, derivedGauge)},
		{"derivedGaugeTimeStamp", "J", nullptr, $PRIVATE, $field(Monitor$ObservedObject, derivedGaugeTimeStamp)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(Monitor$ObservedObject, init$, void, $ObjectName*)},
		{"getAlreadyNotified", "()I", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, getAlreadyNotified, int32_t)},
		{"getDerivedGauge", "()Ljava/lang/Object;", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, getDerivedGauge, $Object*)},
		{"getDerivedGaugeTimeStamp", "()J", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, getDerivedGaugeTimeStamp, int64_t)},
		{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $FINAL, $method(Monitor$ObservedObject, getObservedObject, $ObjectName*)},
		{"setAlreadyNotified", "(I)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, setAlreadyNotified, void, int32_t)},
		{"setDerivedGauge", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, setDerivedGauge, void, Object$*)},
		{"setDerivedGaugeTimeStamp", "(J)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $method(Monitor$ObservedObject, setDerivedGaugeTimeStamp, void, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.monitor.Monitor$ObservedObject", "javax.management.monitor.Monitor", "ObservedObject", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.monitor.Monitor$ObservedObject",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.monitor.Monitor"
	};
	$loadClass(Monitor$ObservedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Monitor$ObservedObject);
	});
	return class$;
}

$Class* Monitor$ObservedObject::class$ = nullptr;

		} // monitor
	} // management
} // javax