#include <java/lang/management/MemoryManagerMXBean.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace lang {
		namespace management {

$Class* MemoryManagerMXBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMemoryPoolNames", "()[Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, getMemoryPoolNames, $StringArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, getName, $String*)},
		{"isValid", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MemoryManagerMXBean, isValid, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.MemoryManagerMXBean",
		nullptr,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		methodInfos$$
	};
	$loadClass(MemoryManagerMXBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MemoryManagerMXBean);
	});
	return class$;
}

$Class* MemoryManagerMXBean::class$ = nullptr;

		} // management
	} // lang
} // java