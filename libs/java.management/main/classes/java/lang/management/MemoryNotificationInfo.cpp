#include <java/lang/management/MemoryNotificationInfo.h>

#include <java/lang/management/MemoryUsage.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/management/MemoryNotifInfoCompositeData.h>
#include <jcpp.h>

#undef MEMORY_COLLECTION_THRESHOLD_EXCEEDED
#undef MEMORY_THRESHOLD_EXCEEDED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MemoryUsage = ::java::lang::management::MemoryUsage;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MemoryNotifInfoCompositeData = ::sun::management::MemoryNotifInfoCompositeData;

namespace java {
	namespace lang {
		namespace management {

$FieldInfo _MemoryNotificationInfo_FieldInfo_[] = {
	{"poolName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(MemoryNotificationInfo, poolName)},
	{"usage", "Ljava/lang/management/MemoryUsage;", nullptr, $PRIVATE | $FINAL, $field(MemoryNotificationInfo, usage)},
	{"count", "J", nullptr, $PRIVATE | $FINAL, $field(MemoryNotificationInfo, count)},
	{"MEMORY_THRESHOLD_EXCEEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MemoryNotificationInfo, MEMORY_THRESHOLD_EXCEEDED)},
	{"MEMORY_COLLECTION_THRESHOLD_EXCEEDED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MemoryNotificationInfo, MEMORY_COLLECTION_THRESHOLD_EXCEEDED)},
	{}
};

$MethodInfo _MemoryNotificationInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/management/MemoryUsage;J)V", nullptr, $PUBLIC, $method(MemoryNotificationInfo, init$, void, $String*, $MemoryUsage*, int64_t)},
	{"<init>", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, 0, $method(MemoryNotificationInfo, init$, void, $CompositeData*)},
	{"from", "(Ljavax/management/openmbean/CompositeData;)Ljava/lang/management/MemoryNotificationInfo;", nullptr, $PUBLIC | $STATIC, $staticMethod(MemoryNotificationInfo, from, MemoryNotificationInfo*, $CompositeData*)},
	{"getCount", "()J", nullptr, $PUBLIC, $virtualMethod(MemoryNotificationInfo, getCount, int64_t)},
	{"getPoolName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MemoryNotificationInfo, getPoolName, $String*)},
	{"getUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC, $virtualMethod(MemoryNotificationInfo, getUsage, $MemoryUsage*)},
	{}
};

$ClassInfo _MemoryNotificationInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.lang.management.MemoryNotificationInfo",
	"java.lang.Object",
	nullptr,
	_MemoryNotificationInfo_FieldInfo_,
	_MemoryNotificationInfo_MethodInfo_
};

$Object* allocate$MemoryNotificationInfo($Class* clazz) {
	return $of($alloc(MemoryNotificationInfo));
}

$String* MemoryNotificationInfo::MEMORY_THRESHOLD_EXCEEDED = nullptr;
$String* MemoryNotificationInfo::MEMORY_COLLECTION_THRESHOLD_EXCEEDED = nullptr;

void MemoryNotificationInfo::init$($String* poolName, $MemoryUsage* usage, int64_t count) {
	if (poolName == nullptr) {
		$throwNew($NullPointerException, "Null poolName"_s);
	}
	if (usage == nullptr) {
		$throwNew($NullPointerException, "Null usage"_s);
	}
	$set(this, poolName, poolName);
	$set(this, usage, usage);
	this->count = count;
}

void MemoryNotificationInfo::init$($CompositeData* cd) {
	$MemoryNotifInfoCompositeData::validateCompositeData(cd);
	$set(this, poolName, $MemoryNotifInfoCompositeData::getPoolName(cd));
	$set(this, usage, $MemoryNotifInfoCompositeData::getUsage(cd));
	this->count = $MemoryNotifInfoCompositeData::getCount(cd);
}

$String* MemoryNotificationInfo::getPoolName() {
	return this->poolName;
}

$MemoryUsage* MemoryNotificationInfo::getUsage() {
	return this->usage;
}

int64_t MemoryNotificationInfo::getCount() {
	return this->count;
}

MemoryNotificationInfo* MemoryNotificationInfo::from($CompositeData* cd) {
	$init(MemoryNotificationInfo);
	if (cd == nullptr) {
		return nullptr;
	}
	if ($instanceOf($MemoryNotifInfoCompositeData, cd)) {
		return $nc(($cast($MemoryNotifInfoCompositeData, cd)))->getMemoryNotifInfo();
	} else {
		return $new(MemoryNotificationInfo, cd);
	}
}

MemoryNotificationInfo::MemoryNotificationInfo() {
}

void clinit$MemoryNotificationInfo($Class* class$) {
	$assignStatic(MemoryNotificationInfo::MEMORY_THRESHOLD_EXCEEDED, "java.management.memory.threshold.exceeded"_s);
	$assignStatic(MemoryNotificationInfo::MEMORY_COLLECTION_THRESHOLD_EXCEEDED, "java.management.memory.collection.threshold.exceeded"_s);
}

$Class* MemoryNotificationInfo::load$($String* name, bool initialize) {
	$loadClass(MemoryNotificationInfo, name, initialize, &_MemoryNotificationInfo_ClassInfo_, clinit$MemoryNotificationInfo, allocate$MemoryNotificationInfo);
	return class$;
}

$Class* MemoryNotificationInfo::class$ = nullptr;

		} // management
	} // lang
} // java