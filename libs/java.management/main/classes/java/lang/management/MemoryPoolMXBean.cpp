#include <java/lang/management/MemoryPoolMXBean.h>

#include <java/lang/management/MemoryType.h>
#include <java/lang/management/MemoryUsage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MemoryType = ::java::lang::management::MemoryType;
using $MemoryUsage = ::java::lang::management::MemoryUsage;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _MemoryPoolMXBean_MethodInfo_[] = {
	{"getCollectionUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getCollectionUsage, $MemoryUsage*)},
	{"getCollectionUsageThreshold", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getCollectionUsageThreshold, int64_t)},
	{"getCollectionUsageThresholdCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getCollectionUsageThresholdCount, int64_t)},
	{"getMemoryManagerNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getMemoryManagerNames, $StringArray*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getName, $String*)},
	{"getPeakUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getPeakUsage, $MemoryUsage*)},
	{"getType", "()Ljava/lang/management/MemoryType;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getType, $MemoryType*)},
	{"getUsage", "()Ljava/lang/management/MemoryUsage;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getUsage, $MemoryUsage*)},
	{"getUsageThreshold", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getUsageThreshold, int64_t)},
	{"getUsageThresholdCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, getUsageThresholdCount, int64_t)},
	{"isCollectionUsageThresholdExceeded", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, isCollectionUsageThresholdExceeded, bool)},
	{"isCollectionUsageThresholdSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, isCollectionUsageThresholdSupported, bool)},
	{"isUsageThresholdExceeded", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, isUsageThresholdExceeded, bool)},
	{"isUsageThresholdSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, isUsageThresholdSupported, bool)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, isValid, bool)},
	{"resetPeakUsage", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, resetPeakUsage, void)},
	{"setCollectionUsageThreshold", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, setCollectionUsageThreshold, void, int64_t)},
	{"setUsageThreshold", "(J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryPoolMXBean, setUsageThreshold, void, int64_t)},
	{}
};

$ClassInfo _MemoryPoolMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.MemoryPoolMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_MemoryPoolMXBean_MethodInfo_
};

$Object* allocate$MemoryPoolMXBean($Class* clazz) {
	return $of($alloc(MemoryPoolMXBean));
}

$Class* MemoryPoolMXBean::load$($String* name, bool initialize) {
	$loadClass(MemoryPoolMXBean, name, initialize, &_MemoryPoolMXBean_ClassInfo_, allocate$MemoryPoolMXBean);
	return class$;
}

$Class* MemoryPoolMXBean::class$ = nullptr;

		} // management
	} // lang
} // java