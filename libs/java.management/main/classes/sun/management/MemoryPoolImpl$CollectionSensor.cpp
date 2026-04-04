#include <sun/management/MemoryPoolImpl$CollectionSensor.h>
#include <java/lang/management/MemoryUsage.h>
#include <sun/management/MemoryImpl.h>
#include <sun/management/MemoryPoolImpl.h>
#include <sun/management/Sensor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $MemoryImpl = ::sun::management::MemoryImpl;
using $MemoryPoolImpl = ::sun::management::MemoryPoolImpl;
using $Sensor = ::sun::management::Sensor;

namespace sun {
	namespace management {

void MemoryPoolImpl$CollectionSensor::init$($MemoryPoolImpl* this$0, $MemoryPoolImpl* pool, $String* name) {
	$set(this, this$0, this$0);
	$Sensor::init$(name);
	$set(this, pool, pool);
}

void MemoryPoolImpl$CollectionSensor::triggerAction($MemoryUsage* usage) {
	$useLocalObjectStack();
	$var($String, var$0, "java.management.memory.collection.threshold.exceeded"_s);
	$var($String, var$1, $nc(this->pool)->getName());
	$MemoryImpl::createNotification(var$0, var$1, usage, $nc(this->this$0->gcSensor)->getCount());
}

void MemoryPoolImpl$CollectionSensor::triggerAction() {
}

void MemoryPoolImpl$CollectionSensor::clearAction() {
}

MemoryPoolImpl$CollectionSensor::MemoryPoolImpl$CollectionSensor() {
}

$Class* MemoryPoolImpl$CollectionSensor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL | $SYNTHETIC, $field(MemoryPoolImpl$CollectionSensor, this$0)},
		{"pool", "Lsun/management/MemoryPoolImpl;", nullptr, $FINAL, $field(MemoryPoolImpl$CollectionSensor, pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/management/MemoryPoolImpl;Lsun/management/MemoryPoolImpl;Ljava/lang/String;)V", nullptr, 0, $method(MemoryPoolImpl$CollectionSensor, init$, void, $MemoryPoolImpl*, $MemoryPoolImpl*, $String*)},
		{"clearAction", "()V", nullptr, 0, $virtualMethod(MemoryPoolImpl$CollectionSensor, clearAction, void)},
		{"triggerAction", "(Ljava/lang/management/MemoryUsage;)V", nullptr, 0, $virtualMethod(MemoryPoolImpl$CollectionSensor, triggerAction, void, $MemoryUsage*)},
		{"triggerAction", "()V", nullptr, 0, $virtualMethod(MemoryPoolImpl$CollectionSensor, triggerAction, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MemoryPoolImpl$CollectionSensor", "sun.management.MemoryPoolImpl", "CollectionSensor", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MemoryPoolImpl$CollectionSensor",
		"sun.management.Sensor",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MemoryPoolImpl"
	};
	$loadClass(MemoryPoolImpl$CollectionSensor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryPoolImpl$CollectionSensor);
	});
	return class$;
}

$Class* MemoryPoolImpl$CollectionSensor::class$ = nullptr;

	} // management
} // sun