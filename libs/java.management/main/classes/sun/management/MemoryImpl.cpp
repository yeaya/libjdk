#include <sun/management/MemoryImpl.h>
#include <java/lang/Runtime.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/MemoryMXBean.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/lang/management/MemoryNotificationInfo.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <java/lang/management/MemoryUsage.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jdk/internal/misc/VM.h>
#include <sun/management/MemoryNotifInfoCompositeData.h>
#include <sun/management/NotificationEmitterSupport.h>
#include <sun/management/Util.h>
#include <sun/management/VMManagement.h>
#include <jcpp.h>

#undef MEMORY_COLLECTION_THRESHOLD_EXCEEDED
#undef MEMORY_MXBEAN_NAME
#undef MEMORY_THRESHOLD_EXCEEDED

using $MemoryManagerMXBeanArray = $Array<::java::lang::management::MemoryManagerMXBean>;
using $MemoryPoolMXBeanArray = $Array<::java::lang::management::MemoryPoolMXBean>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runtime = ::java::lang::Runtime;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $MemoryNotificationInfo = ::java::lang::management::MemoryNotificationInfo;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $MBeanNotificationInfo = ::javax::management::MBeanNotificationInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $VM = ::jdk::internal::misc::VM;
using $MemoryNotifInfoCompositeData = ::sun::management::MemoryNotifInfoCompositeData;
using $NotificationEmitterSupport = ::sun::management::NotificationEmitterSupport;
using $Util = ::sun::management::Util;
using $VMManagement = ::sun::management::VMManagement;

namespace sun {
	namespace management {

int32_t MemoryImpl::hashCode() {
	 return this->$NotificationEmitterSupport::hashCode();
}

bool MemoryImpl::equals(Object$* arg0) {
	 return this->$NotificationEmitterSupport::equals(arg0);
}

$Object* MemoryImpl::clone() {
	 return this->$NotificationEmitterSupport::clone();
}

$String* MemoryImpl::toString() {
	 return this->$NotificationEmitterSupport::toString();
}

void MemoryImpl::finalize() {
	this->$NotificationEmitterSupport::finalize();
}

$MemoryPoolMXBeanArray* MemoryImpl::pools = nullptr;
$MemoryManagerMXBeanArray* MemoryImpl::mgrs = nullptr;
$String* MemoryImpl::notifName = nullptr;
$StringArray* MemoryImpl::notifTypes = nullptr;
$StringArray* MemoryImpl::notifMsgs = nullptr;
int64_t MemoryImpl::seqNumber = 0;

void MemoryImpl::init$($VMManagement* vm) {
	$NotificationEmitterSupport::init$();
	$set(this, jvm, vm);
}

int32_t MemoryImpl::getObjectPendingFinalizationCount() {
	return $VM::getFinalRefCount();
}

void MemoryImpl::gc() {
	$$nc($Runtime::getRuntime())->gc();
}

$MemoryUsage* MemoryImpl::getHeapMemoryUsage() {
	return getMemoryUsage0(true);
}

$MemoryUsage* MemoryImpl::getNonHeapMemoryUsage() {
	return getMemoryUsage0(false);
}

bool MemoryImpl::isVerbose() {
	return $nc(this->jvm)->getVerboseGC();
}

void MemoryImpl::setVerbose(bool value) {
	$Util::checkControlAccess();
	setVerboseGC(value);
}

$MemoryPoolMXBeanArray* MemoryImpl::getMemoryPools() {
	$init(MemoryImpl);
	$synchronized(class$) {
		if (MemoryImpl::pools == nullptr) {
			$assignStatic(MemoryImpl::pools, getMemoryPools0());
		}
		return MemoryImpl::pools;
	}
}

$MemoryManagerMXBeanArray* MemoryImpl::getMemoryManagers() {
	$init(MemoryImpl);
	$synchronized(class$) {
		if (MemoryImpl::mgrs == nullptr) {
			$assignStatic(MemoryImpl::mgrs, getMemoryManagers0());
		}
		return MemoryImpl::mgrs;
	}
}

$MemoryPoolMXBeanArray* MemoryImpl::getMemoryPools0() {
	$init(MemoryImpl);
	$prepareNativeStatic(getMemoryPools0, $MemoryPoolMXBeanArray*);
	$var($MemoryPoolMXBeanArray, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$MemoryManagerMXBeanArray* MemoryImpl::getMemoryManagers0() {
	$init(MemoryImpl);
	$prepareNativeStatic(getMemoryManagers0, $MemoryManagerMXBeanArray*);
	$var($MemoryManagerMXBeanArray, $ret, $invokeNativeStaticObject());
	$finishNativeStatic();
	return $ret;
}

$MemoryUsage* MemoryImpl::getMemoryUsage0(bool heap) {
	$prepareNative(getMemoryUsage0, $MemoryUsage*, bool heap);
	$var($MemoryUsage, $ret, $invokeNativeObject(heap));
	$finishNative();
	return $ret;
}

void MemoryImpl::setVerboseGC(bool value) {
	$prepareNative(setVerboseGC, void, bool value);
	$invokeNative(value);
	$finishNative();
}

$MBeanNotificationInfoArray* MemoryImpl::getNotificationInfo() {
	return $new($MBeanNotificationInfoArray, {$$new($MBeanNotificationInfo, MemoryImpl::notifTypes, MemoryImpl::notifName, "Memory Notification"_s)});
}

$String* MemoryImpl::getNotifMsg($String* notifType) {
	$init(MemoryImpl);
	for (int32_t i = 0; i < MemoryImpl::notifTypes->length; ++i) {
		if (notifType == MemoryImpl::notifTypes->get(i)) {
			return MemoryImpl::notifMsgs->get(i);
		}
	}
	return "Unknown message"_s;
}

int64_t MemoryImpl::getNextSeqNumber() {
	$init(MemoryImpl);
	return ++MemoryImpl::seqNumber;
}

void MemoryImpl::createNotification($String* notifType, $String* poolName, $MemoryUsage* usage, int64_t count) {
	$init(MemoryImpl);
	$useLocalObjectStack();
	$var(MemoryImpl, mbean, $cast(MemoryImpl, $ManagementFactory::getMemoryMXBean()));
	if (!$nc(mbean)->hasListeners()) {
		return;
	}
	int64_t timestamp = $System::currentTimeMillis();
	$var($String, msg, getNotifMsg(notifType));
	$var($Object, var$0, mbean->getObjectName());
	$var($Notification, notif, $new($Notification, notifType, var$0, getNextSeqNumber(), timestamp, msg));
	$var($MemoryNotificationInfo, info, $new($MemoryNotificationInfo, poolName, usage, count));
	$var($CompositeData, cd, $MemoryNotifInfoCompositeData::toCompositeData(info));
	notif->setUserData(cd);
	mbean->sendNotification(notif);
}

$ObjectName* MemoryImpl::getObjectName() {
	$init($ManagementFactory);
	return $Util::newObjectName($ManagementFactory::MEMORY_MXBEAN_NAME);
}

void MemoryImpl::clinit$($Class* clazz) {
	$assignStatic(MemoryImpl::notifName, "javax.management.Notification"_s);
	$assignStatic(MemoryImpl::pools, nullptr);
	$assignStatic(MemoryImpl::mgrs, nullptr);
	$init($MemoryNotificationInfo);
	$assignStatic(MemoryImpl::notifTypes, $new($StringArray, {
		$MemoryNotificationInfo::MEMORY_THRESHOLD_EXCEEDED,
		$MemoryNotificationInfo::MEMORY_COLLECTION_THRESHOLD_EXCEEDED
	}));
	$assignStatic(MemoryImpl::notifMsgs, $new($StringArray, {
		"Memory usage exceeds usage threshold"_s,
		"Memory usage exceeds collection usage threshold"_s
	}));
	MemoryImpl::seqNumber = 0;
}

MemoryImpl::MemoryImpl() {
}

$Class* MemoryImpl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jvm", "Lsun/management/VMManagement;", nullptr, $PRIVATE | $FINAL, $field(MemoryImpl, jvm)},
		{"pools", "[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $PRIVATE | $STATIC, $staticField(MemoryImpl, pools)},
		{"mgrs", "[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE | $STATIC, $staticField(MemoryImpl, mgrs)},
		{"notifName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryImpl, notifName)},
		{"notifTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryImpl, notifTypes)},
		{"notifMsgs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MemoryImpl, notifMsgs)},
		{"seqNumber", "J", nullptr, $PRIVATE | $STATIC, $staticField(MemoryImpl, seqNumber)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/management/VMManagement;)V", nullptr, 0, $method(MemoryImpl, init$, void, $VMManagement*)},
		{"createNotification", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/management/MemoryUsage;J)V", nullptr, $STATIC, $staticMethod(MemoryImpl, createNotification, void, $String*, $String*, $MemoryUsage*, int64_t)},
		{"gc", "()V", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, gc, void)},
		{"getHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, getHeapMemoryUsage, $MemoryUsage*)},
		{"getMemoryManagers", "()[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(MemoryImpl, getMemoryManagers, $MemoryManagerMXBeanArray*)},
		{"getMemoryManagers0", "()[Ljava/lang/management/MemoryManagerMXBean;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MemoryImpl, getMemoryManagers0, $MemoryManagerMXBeanArray*)},
		{"getMemoryPools", "()[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(MemoryImpl, getMemoryPools, $MemoryPoolMXBeanArray*)},
		{"getMemoryPools0", "()[Ljava/lang/management/MemoryPoolMXBean;", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MemoryImpl, getMemoryPools0, $MemoryPoolMXBeanArray*)},
		{"getMemoryUsage0", "(Z)Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $NATIVE, $method(MemoryImpl, getMemoryUsage0, $MemoryUsage*, bool)},
		{"getNextSeqNumber", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(MemoryImpl, getNextSeqNumber, int64_t)},
		{"getNonHeapMemoryUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, getNonHeapMemoryUsage, $MemoryUsage*)},
		{"getNotifMsg", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(MemoryImpl, getNotifMsg, $String*, $String*)},
		{"getNotificationInfo", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, getNotificationInfo, $MBeanNotificationInfoArray*)},
		{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, getObjectName, $ObjectName*)},
		{"getObjectPendingFinalizationCount", "()I", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, getObjectPendingFinalizationCount, int32_t)},
		{"isVerbose", "()Z", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, isVerbose, bool)},
		{"setVerbose", "(Z)V", nullptr, $PUBLIC, $virtualMethod(MemoryImpl, setVerbose, void, bool)},
		{"setVerboseGC", "(Z)V", nullptr, $PRIVATE | $NATIVE, $method(MemoryImpl, setVerboseGC, void, bool)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MemoryImpl",
		"sun.management.NotificationEmitterSupport",
		"java.lang.management.MemoryMXBean",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MemoryImpl, name, initialize, &classInfo$$, MemoryImpl::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MemoryImpl));
	});
	return class$;
}

$Class* MemoryImpl::class$ = nullptr;

	} // management
} // sun