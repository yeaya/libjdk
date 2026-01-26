#include <java/lang/management/MemoryManagerMXBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _MemoryManagerMXBean_MethodInfo_[] = {
	{"getMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, getMemoryPoolNames, $StringArray*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, getName, $String*)},
	{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, isValid, bool)},
	{}
};

$ClassInfo _MemoryManagerMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.MemoryManagerMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_MemoryManagerMXBean_MethodInfo_
};

$Object* allocate$MemoryManagerMXBean($Class* clazz) {
	return $of($alloc(MemoryManagerMXBean));
}

$Class* MemoryManagerMXBean::load$($String* name, bool initialize) {
	$loadClass(MemoryManagerMXBean, name, initialize, &_MemoryManagerMXBean_ClassInfo_, allocate$MemoryManagerMXBean);
	return class$;
}

$Class* MemoryManagerMXBean::class$ = nullptr;

		} // management
	} // lang
} // java