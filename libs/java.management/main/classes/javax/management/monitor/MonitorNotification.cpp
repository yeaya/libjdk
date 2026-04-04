#include <javax/management/monitor/MonitorNotification.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

#undef OBSERVED_ATTRIBUTE_ERROR
#undef OBSERVED_ATTRIBUTE_TYPE_ERROR
#undef OBSERVED_OBJECT_ERROR
#undef RUNTIME_ERROR
#undef STRING_TO_COMPARE_VALUE_DIFFERED
#undef STRING_TO_COMPARE_VALUE_MATCHED
#undef THRESHOLD_ERROR
#undef THRESHOLD_HIGH_VALUE_EXCEEDED
#undef THRESHOLD_LOW_VALUE_EXCEEDED
#undef THRESHOLD_VALUE_EXCEEDED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace javax {
	namespace management {
		namespace monitor {

$String* MonitorNotification::OBSERVED_OBJECT_ERROR = nullptr;
$String* MonitorNotification::OBSERVED_ATTRIBUTE_ERROR = nullptr;
$String* MonitorNotification::OBSERVED_ATTRIBUTE_TYPE_ERROR = nullptr;
$String* MonitorNotification::THRESHOLD_ERROR = nullptr;
$String* MonitorNotification::RUNTIME_ERROR = nullptr;
$String* MonitorNotification::THRESHOLD_VALUE_EXCEEDED = nullptr;
$String* MonitorNotification::THRESHOLD_HIGH_VALUE_EXCEEDED = nullptr;
$String* MonitorNotification::THRESHOLD_LOW_VALUE_EXCEEDED = nullptr;
$String* MonitorNotification::STRING_TO_COMPARE_VALUE_MATCHED = nullptr;
$String* MonitorNotification::STRING_TO_COMPARE_VALUE_DIFFERED = nullptr;

void MonitorNotification::init$($String* type, Object$* source, int64_t sequenceNumber, int64_t timeStamp, $String* msg, $ObjectName* obsObj, $String* obsAtt, Object$* derGauge, Object$* trigger) {
	$Notification::init$(type, source, sequenceNumber, timeStamp, msg);
	$set(this, observedObject, nullptr);
	$set(this, observedAttribute, nullptr);
	$set(this, derivedGauge, nullptr);
	$set(this, trigger, nullptr);
	$set(this, observedObject, obsObj);
	$set(this, observedAttribute, obsAtt);
	$set(this, derivedGauge, derGauge);
	$set(this, trigger, trigger);
}

$ObjectName* MonitorNotification::getObservedObject() {
	return this->observedObject;
}

$String* MonitorNotification::getObservedAttribute() {
	return this->observedAttribute;
}

$Object* MonitorNotification::getDerivedGauge() {
	return this->derivedGauge;
}

$Object* MonitorNotification::getTrigger() {
	return this->trigger;
}

MonitorNotification::MonitorNotification() {
}

void MonitorNotification::clinit$($Class* clazz) {
	$assignStatic(MonitorNotification::OBSERVED_OBJECT_ERROR, "jmx.monitor.error.mbean"_s);
	$assignStatic(MonitorNotification::OBSERVED_ATTRIBUTE_ERROR, "jmx.monitor.error.attribute"_s);
	$assignStatic(MonitorNotification::OBSERVED_ATTRIBUTE_TYPE_ERROR, "jmx.monitor.error.type"_s);
	$assignStatic(MonitorNotification::THRESHOLD_ERROR, "jmx.monitor.error.threshold"_s);
	$assignStatic(MonitorNotification::RUNTIME_ERROR, "jmx.monitor.error.runtime"_s);
	$assignStatic(MonitorNotification::THRESHOLD_VALUE_EXCEEDED, "jmx.monitor.counter.threshold"_s);
	$assignStatic(MonitorNotification::THRESHOLD_HIGH_VALUE_EXCEEDED, "jmx.monitor.gauge.high"_s);
	$assignStatic(MonitorNotification::THRESHOLD_LOW_VALUE_EXCEEDED, "jmx.monitor.gauge.low"_s);
	$assignStatic(MonitorNotification::STRING_TO_COMPARE_VALUE_MATCHED, "jmx.monitor.string.matches"_s);
	$assignStatic(MonitorNotification::STRING_TO_COMPARE_VALUE_DIFFERED, "jmx.monitor.string.differs"_s);
}

$Class* MonitorNotification::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"OBSERVED_OBJECT_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, OBSERVED_OBJECT_ERROR)},
		{"OBSERVED_ATTRIBUTE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, OBSERVED_ATTRIBUTE_ERROR)},
		{"OBSERVED_ATTRIBUTE_TYPE_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, OBSERVED_ATTRIBUTE_TYPE_ERROR)},
		{"THRESHOLD_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, THRESHOLD_ERROR)},
		{"RUNTIME_ERROR", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, RUNTIME_ERROR)},
		{"THRESHOLD_VALUE_EXCEEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, THRESHOLD_VALUE_EXCEEDED)},
		{"THRESHOLD_HIGH_VALUE_EXCEEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, THRESHOLD_HIGH_VALUE_EXCEEDED)},
		{"THRESHOLD_LOW_VALUE_EXCEEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, THRESHOLD_LOW_VALUE_EXCEEDED)},
		{"STRING_TO_COMPARE_VALUE_MATCHED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, STRING_TO_COMPARE_VALUE_MATCHED)},
		{"STRING_TO_COMPARE_VALUE_DIFFERED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MonitorNotification, STRING_TO_COMPARE_VALUE_DIFFERED)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MonitorNotification, serialVersionUID)},
		{"observedObject", "Ljavax/management/ObjectName;", nullptr, $PRIVATE, $field(MonitorNotification, observedObject)},
		{"observedAttribute", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MonitorNotification, observedAttribute)},
		{"derivedGauge", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(MonitorNotification, derivedGauge)},
		{"trigger", "Ljava/lang/Object;", nullptr, $PRIVATE, $field(MonitorNotification, trigger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/Object;JJLjava/lang/String;Ljavax/management/ObjectName;Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, 0, $method(MonitorNotification, init$, void, $String*, Object$*, int64_t, int64_t, $String*, $ObjectName*, $String*, Object$*, Object$*)},
		{"getDerivedGauge", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MonitorNotification, getDerivedGauge, $Object*)},
		{"getObservedAttribute", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MonitorNotification, getObservedAttribute, $String*)},
		{"getObservedObject", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(MonitorNotification, getObservedObject, $ObjectName*)},
		{"getTrigger", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MonitorNotification, getTrigger, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.monitor.MonitorNotification",
		"javax.management.Notification",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MonitorNotification, name, initialize, &classInfo$$, MonitorNotification::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MonitorNotification);
	});
	return class$;
}

$Class* MonitorNotification::class$ = nullptr;

		} // monitor
	} // management
} // javax