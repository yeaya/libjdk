#include <java/lang/management/ClassLoadingMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _ClassLoadingMXBean_MethodInfo_[] = {
	{"getLoadedClassCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getLoadedClassCount, int32_t)},
	{"getTotalLoadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getTotalLoadedClassCount, int64_t)},
	{"getUnloadedClassCount", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, getUnloadedClassCount, int64_t)},
	{"isVerbose", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, isVerbose, bool)},
	{"setVerbose", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ClassLoadingMXBean, setVerbose, void, bool)},
	{}
};

$ClassInfo _ClassLoadingMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.ClassLoadingMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_ClassLoadingMXBean_MethodInfo_
};

$Object* allocate$ClassLoadingMXBean($Class* clazz) {
	return $of($alloc(ClassLoadingMXBean));
}

$Class* ClassLoadingMXBean::load$($String* name, bool initialize) {
	$loadClass(ClassLoadingMXBean, name, initialize, &_ClassLoadingMXBean_ClassInfo_, allocate$ClassLoadingMXBean);
	return class$;
}

$Class* ClassLoadingMXBean::class$ = nullptr;

		} // management
	} // lang
} // java