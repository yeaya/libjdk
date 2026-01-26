#include <java/lang/management/OperatingSystemMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _OperatingSystemMXBean_MethodInfo_[] = {
	{"getArch", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getArch, $String*)},
	{"getAvailableProcessors", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getAvailableProcessors, int32_t)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getName, $String*)},
	{"getSystemLoadAverage", "()D", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getSystemLoadAverage, double)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OperatingSystemMXBean, getVersion, $String*)},
	{}
};

$ClassInfo _OperatingSystemMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.OperatingSystemMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_OperatingSystemMXBean_MethodInfo_
};

$Object* allocate$OperatingSystemMXBean($Class* clazz) {
	return $of($alloc(OperatingSystemMXBean));
}

$Class* OperatingSystemMXBean::load$($String* name, bool initialize) {
	$loadClass(OperatingSystemMXBean, name, initialize, &_OperatingSystemMXBean_ClassInfo_, allocate$OperatingSystemMXBean);
	return class$;
}

$Class* OperatingSystemMXBean::class$ = nullptr;

		} // management
	} // lang
} // java