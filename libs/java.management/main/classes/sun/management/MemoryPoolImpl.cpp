#include <sun/management/MemoryPoolImpl.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/lang/management/MemoryType.h>
#include <java/lang/management/MemoryUsage.h>
#include <javax/management/ObjectName.h>
#include <sun/management/MemoryPoolImpl$CollectionSensor.h>
#include <sun/management/MemoryPoolImpl$PoolSensor.h>
#include <sun/management/Sensor.h>
#include <sun/management/Util.h>
#include <jcpp.h>

#undef HEAP
#undef MEMORY_POOL_MXBEAN_DOMAIN_TYPE
#undef NON_HEAP

using $MemoryManagerMXBeanArray = $Array<::java::lang::management::MemoryManagerMXBean>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $MemoryType = ::java::lang::management::MemoryType;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $ObjectName = ::javax::management::ObjectName;
using $MemoryPoolImpl$CollectionSensor = ::sun::management::MemoryPoolImpl$CollectionSensor;
using $MemoryPoolImpl$PoolSensor = ::sun::management::MemoryPoolImpl$PoolSensor;
using $Sensor = ::sun::management::Sensor;
using $Util = ::sun::management::Util;

namespace sun {
	namespace management {

$FieldInfo _MemoryPoolImpl_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, name)},
	{"isHeap", "Z", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, isHeap)},
	{"isValid", "Z", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, isValid$)},
	{"collectionThresholdSupported", "Z", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, collectionThresholdSupported)},
	{"usageThresholdSupported", "Z", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, usageThresholdSupported)},
	{"managers", "[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE, $field(MemoryPoolImpl, managers)},
	{"usageThreshold", "J", nullptr, $PRIVATE, $field(MemoryPoolImpl, usageThreshold)},
	{"collectionThreshold", "J", nullptr, $PRIVATE, $field(MemoryPoolImpl, collectionThreshold)},
	{"usageSensorRegistered", "Z", nullptr, $PRIVATE, $field(MemoryPoolImpl, usageSensorRegistered)},
	{"gcSensorRegistered", "Z", nullptr, $PRIVATE, $field(MemoryPoolImpl, gcSensorRegistered)},
	{"usageSensor", "Lsun/management/Sensor;", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, usageSensor)},
	{"gcSensor", "Lsun/management/Sensor;", nullptr, $PRIVATE | $FINAL, $field(MemoryPoolImpl, gcSensor)},
	{}
};

$MethodInfo _MemoryPoolImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;ZJJ)V", nullptr, 0, $method(MemoryPoolImpl, init$, void, $String*, bool, int64_t, int64_t)},
	{"getCollectionUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getCollectionUsage, $MemoryUsage*)},
	{"getCollectionUsage0", "()Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, getCollectionUsage0, $MemoryUsage*)},
	{"getCollectionUsageThreshold", "()J", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MemoryPoolImpl, getCollectionUsageThreshold, int64_t)},
	{"getCollectionUsageThresholdCount", "()J", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getCollectionUsageThresholdCount, int64_t)},
	{"getMemoryManagerNames", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getMemoryManagerNames, $StringArray*)},
	{"getMemoryManagers", "()[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE | $SYNCHRONIZED, $method(MemoryPoolImpl, getMemoryManagers, $MemoryManagerMXBeanArray*)},
	{"getMemoryManagers0", "()[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, getMemoryManagers0, $MemoryManagerMXBeanArray*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getName, $String*)},
	{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getObjectName, $ObjectName*)},
	{"getPeakUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MemoryPoolImpl, getPeakUsage, $MemoryUsage*)},
	{"getPeakUsage0", "()Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, getPeakUsage0, $MemoryUsage*)},
	{"getType", "()Ljava/lang/management/MemoryType;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getType, $MemoryType*)},
	{"getUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getUsage, $MemoryUsage*)},
	{"getUsage0", "()Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, getUsage0, $MemoryUsage*)},
	{"getUsageThreshold", "()J", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(MemoryPoolImpl, getUsageThreshold, int64_t)},
	{"getUsageThresholdCount", "()J", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, getUsageThresholdCount, int64_t)},
	{"isCollectionUsageThresholdExceeded", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, isCollectionUsageThresholdExceeded, bool)},
	{"isCollectionUsageThresholdSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, isCollectionUsageThresholdSupported, bool)},
	{"isUsageThresholdExceeded", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, isUsageThresholdExceeded, bool)},
	{"isUsageThresholdSupported", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, isUsageThresholdSupported, bool)},
	{"isValid", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, isValid, bool)},
	{"resetPeakUsage", "()V", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, resetPeakUsage, void)},
	{"resetPeakUsage0", "()V", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, resetPeakUsage0, void)},
	{"setCollectionThreshold0", "(JJ)V", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, setCollectionThreshold0, void, int64_t, int64_t)},
	{"setCollectionUsageThreshold", "(J)V", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, setCollectionUsageThreshold, void, int64_t)},
	{"setPoolCollectionSensor", "(Lsun/management/Sensor;)V", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, setPoolCollectionSensor, void, $Sensor*)},
	{"setPoolUsageSensor", "(Lsun/management/Sensor;)V", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, setPoolUsageSensor, void, $Sensor*)},
	{"setUsageThreshold", "(J)V", nullptr, $PUBLIC, $virtualMethod(MemoryPoolImpl, setUsageThreshold, void, int64_t)},
	{"setUsageThreshold0", "(JJ)V", nullptr, $PRIVATE | $NATIVE, $method(MemoryPoolImpl, setUsageThreshold0, void, int64_t, int64_t)},
	{}
};

#define _METHOD_INDEX_getCollectionUsage0 2
#define _METHOD_INDEX_getMemoryManagers0 7
#define _METHOD_INDEX_getPeakUsage0 11
#define _METHOD_INDEX_getUsage0 14
#define _METHOD_INDEX_resetPeakUsage0 23
#define _METHOD_INDEX_setCollectionThreshold0 24
#define _METHOD_INDEX_setPoolCollectionSensor 26
#define _METHOD_INDEX_setPoolUsageSensor 27
#define _METHOD_INDEX_setUsageThreshold0 29

$InnerClassInfo _MemoryPoolImpl_InnerClassesInfo_[] = {
	{"sun.management.MemoryPoolImpl$CollectionSensor", "sun.management.MemoryPoolImpl", "CollectionSensor", 0},
	{"sun.management.MemoryPoolImpl$PoolSensor", "sun.management.MemoryPoolImpl", "PoolSensor", 0},
	{}
};

$ClassInfo _MemoryPoolImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.management.MemoryPoolImpl",
	"java.lang.Object",
	"java.lang.management.MemoryPoolMXBean",
	_MemoryPoolImpl_FieldInfo_,
	_MemoryPoolImpl_MethodInfo_,
	nullptr,
	nullptr,
	_MemoryPoolImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.management.MemoryPoolImpl$CollectionSensor,sun.management.MemoryPoolImpl$PoolSensor"
};

$Object* allocate$MemoryPoolImpl($Class* clazz) {
	return $of($alloc(MemoryPoolImpl));
}

void MemoryPoolImpl::init$($String* name, bool isHeap, int64_t usageThreshold, int64_t gcThreshold) {
	$useLocalCurrentObjectStackCache();
	$set(this, name, name);
	this->isHeap = isHeap;
	this->isValid$ = true;
	$set(this, managers, nullptr);
	this->usageThreshold = usageThreshold;
	this->collectionThreshold = gcThreshold;
	this->usageThresholdSupported = (usageThreshold >= 0);
	this->collectionThresholdSupported = (gcThreshold >= 0);
	$set(this, usageSensor, $new($MemoryPoolImpl$PoolSensor, this, this, $$str({name, " usage sensor"_s})));
	$set(this, gcSensor, $new($MemoryPoolImpl$CollectionSensor, this, this, $$str({name, " collection sensor"_s})));
}

$String* MemoryPoolImpl::getName() {
	return this->name;
}

bool MemoryPoolImpl::isValid() {
	return this->isValid$;
}

$MemoryType* MemoryPoolImpl::getType() {
	if (this->isHeap) {
		$init($MemoryType);
		return $MemoryType::HEAP;
	} else {
		$init($MemoryType);
		return $MemoryType::NON_HEAP;
	}
}

$MemoryUsage* MemoryPoolImpl::getUsage() {
	return getUsage0();
}

$MemoryUsage* MemoryPoolImpl::getPeakUsage() {
	$synchronized(this) {
		return getPeakUsage0();
	}
}

int64_t MemoryPoolImpl::getUsageThreshold() {
	$synchronized(this) {
		if (!isUsageThresholdSupported()) {
			$throwNew($UnsupportedOperationException, "Usage threshold is not supported"_s);
		}
		return this->usageThreshold;
	}
}

void MemoryPoolImpl::setUsageThreshold(int64_t newThreshold) {
	$useLocalCurrentObjectStackCache();
	if (!isUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "Usage threshold is not supported"_s);
	}
	$Util::checkControlAccess();
	$var($MemoryUsage, usage, getUsage0());
	if (newThreshold < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid threshold: "_s, $$str(newThreshold)}));
	}
	bool var$0 = $nc(usage)->getMax() != -1;
	if (var$0 && newThreshold > usage->getMax()) {
		$var($String, var$1, $$str({"Invalid threshold: "_s, $$str(newThreshold), " must be <= maxSize. Committed = "_s, $$str(usage->getCommitted()), " Max = "_s}));
		$throwNew($IllegalArgumentException, $$concat(var$1, $$str(usage->getMax())));
	}
	$synchronized(this) {
		if (!this->usageSensorRegistered) {
			this->usageSensorRegistered = true;
			setPoolUsageSensor(this->usageSensor);
		}
		setUsageThreshold0(this->usageThreshold, newThreshold);
		this->usageThreshold = newThreshold;
	}
}

$MemoryManagerMXBeanArray* MemoryPoolImpl::getMemoryManagers() {
	$synchronized(this) {
		if (this->managers == nullptr) {
			$set(this, managers, getMemoryManagers0());
		}
		return this->managers;
	}
}

$StringArray* MemoryPoolImpl::getMemoryManagerNames() {
	$useLocalCurrentObjectStackCache();
	$var($MemoryManagerMXBeanArray, mgrs, getMemoryManagers());
	$var($StringArray, names, $new($StringArray, $nc(mgrs)->length));
	for (int32_t i = 0; i < mgrs->length; ++i) {
		names->set(i, $($nc(mgrs->get(i))->getName()));
	}
	return names;
}

void MemoryPoolImpl::resetPeakUsage() {
	$Util::checkControlAccess();
	$synchronized(this) {
		resetPeakUsage0();
	}
}

bool MemoryPoolImpl::isUsageThresholdExceeded() {
	if (!isUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "Usage threshold is not supported"_s);
	}
	if (this->usageThreshold == 0) {
		return false;
	}
	$var($MemoryUsage, u, getUsage0());
	bool var$0 = $nc(u)->getUsed() >= this->usageThreshold;
	return (var$0 || $nc(this->usageSensor)->isOn());
}

int64_t MemoryPoolImpl::getUsageThresholdCount() {
	if (!isUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "Usage threshold is not supported"_s);
	}
	return $nc(this->usageSensor)->getCount();
}

bool MemoryPoolImpl::isUsageThresholdSupported() {
	return this->usageThresholdSupported;
}

int64_t MemoryPoolImpl::getCollectionUsageThreshold() {
	$synchronized(this) {
		if (!isCollectionUsageThresholdSupported()) {
			$throwNew($UnsupportedOperationException, "CollectionUsage threshold is not supported"_s);
		}
		return this->collectionThreshold;
	}
}

void MemoryPoolImpl::setCollectionUsageThreshold(int64_t newThreshold) {
	$useLocalCurrentObjectStackCache();
	if (!isCollectionUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "CollectionUsage threshold is not supported"_s);
	}
	$Util::checkControlAccess();
	$var($MemoryUsage, usage, getUsage0());
	if (newThreshold < 0) {
		$throwNew($IllegalArgumentException, $$str({"Invalid threshold: "_s, $$str(newThreshold)}));
	}
	bool var$0 = $nc(usage)->getMax() != -1;
	if (var$0 && newThreshold > usage->getMax()) {
		$throwNew($IllegalArgumentException, $$str({"Invalid threshold: "_s, $$str(newThreshold), " > max ("_s, $$str(usage->getMax()), ")."_s}));
	}
	$synchronized(this) {
		if (!this->gcSensorRegistered) {
			this->gcSensorRegistered = true;
			setPoolCollectionSensor(this->gcSensor);
		}
		setCollectionThreshold0(this->collectionThreshold, newThreshold);
		this->collectionThreshold = newThreshold;
	}
}

bool MemoryPoolImpl::isCollectionUsageThresholdExceeded() {
	if (!isCollectionUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "CollectionUsage threshold is not supported"_s);
	}
	if (this->collectionThreshold == 0) {
		return false;
	}
	$var($MemoryUsage, u, getCollectionUsage0());
	bool var$0 = $nc(this->gcSensor)->isOn();
	return (var$0 || (u != nullptr && u->getUsed() >= this->collectionThreshold));
}

int64_t MemoryPoolImpl::getCollectionUsageThresholdCount() {
	if (!isCollectionUsageThresholdSupported()) {
		$throwNew($UnsupportedOperationException, "CollectionUsage threshold is not supported"_s);
	}
	return $nc(this->gcSensor)->getCount();
}

$MemoryUsage* MemoryPoolImpl::getCollectionUsage() {
	return getCollectionUsage0();
}

bool MemoryPoolImpl::isCollectionUsageThresholdSupported() {
	return this->collectionThresholdSupported;
}

$MemoryUsage* MemoryPoolImpl::getUsage0() {
	$var($MemoryUsage, $ret, nullptr);
	$prepareNative(MemoryPoolImpl, getUsage0, $MemoryUsage*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$MemoryUsage* MemoryPoolImpl::getPeakUsage0() {
	$var($MemoryUsage, $ret, nullptr);
	$prepareNative(MemoryPoolImpl, getPeakUsage0, $MemoryUsage*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

$MemoryUsage* MemoryPoolImpl::getCollectionUsage0() {
	$var($MemoryUsage, $ret, nullptr);
	$prepareNative(MemoryPoolImpl, getCollectionUsage0, $MemoryUsage*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

void MemoryPoolImpl::setUsageThreshold0(int64_t current, int64_t newThreshold) {
	$prepareNative(MemoryPoolImpl, setUsageThreshold0, void, int64_t current, int64_t newThreshold);
	$invokeNative(current, newThreshold);
	$finishNative();
}

void MemoryPoolImpl::setCollectionThreshold0(int64_t current, int64_t newThreshold) {
	$prepareNative(MemoryPoolImpl, setCollectionThreshold0, void, int64_t current, int64_t newThreshold);
	$invokeNative(current, newThreshold);
	$finishNative();
}

void MemoryPoolImpl::resetPeakUsage0() {
	$prepareNative(MemoryPoolImpl, resetPeakUsage0, void);
	$invokeNative();
	$finishNative();
}

$MemoryManagerMXBeanArray* MemoryPoolImpl::getMemoryManagers0() {
	$var($MemoryManagerMXBeanArray, $ret, nullptr);
	$prepareNative(MemoryPoolImpl, getMemoryManagers0, $MemoryManagerMXBeanArray*);
	$assign($ret, $invokeNativeObject());
	$finishNative();
	return $ret;
}

void MemoryPoolImpl::setPoolUsageSensor($Sensor* s) {
	$prepareNative(MemoryPoolImpl, setPoolUsageSensor, void, $Sensor* s);
	$invokeNative(s);
	$finishNative();
}

void MemoryPoolImpl::setPoolCollectionSensor($Sensor* s) {
	$prepareNative(MemoryPoolImpl, setPoolCollectionSensor, void, $Sensor* s);
	$invokeNative(s);
	$finishNative();
}

$ObjectName* MemoryPoolImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE, $(getName()));
}

MemoryPoolImpl::MemoryPoolImpl() {
}

$Class* MemoryPoolImpl::load$($String* name, bool initialize) {
	$loadClass(MemoryPoolImpl, name, initialize, &_MemoryPoolImpl_ClassInfo_, allocate$MemoryPoolImpl);
	return class$;
}

$Class* MemoryPoolImpl::class$ = nullptr;

	} // management
} // sun