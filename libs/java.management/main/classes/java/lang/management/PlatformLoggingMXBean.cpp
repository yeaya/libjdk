#include <java/lang/management/PlatformLoggingMXBean.h>

#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;

namespace java {
	namespace lang {
		namespace management {

$MethodInfo _PlatformLoggingMXBean_MethodInfo_[] = {
	{"getLoggerLevel", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLoggingMXBean, getLoggerLevel, $String*, $String*)},
	{"getLoggerNames", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLoggingMXBean, getLoggerNames, $List*)},
	{"getParentLoggerName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLoggingMXBean, getParentLoggerName, $String*, $String*)},
	{"setLoggerLevel", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformLoggingMXBean, setLoggerLevel, void, $String*, $String*)},
	{}
};

$ClassInfo _PlatformLoggingMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.PlatformLoggingMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_PlatformLoggingMXBean_MethodInfo_
};

$Object* allocate$PlatformLoggingMXBean($Class* clazz) {
	return $of($alloc(PlatformLoggingMXBean));
}

$Class* PlatformLoggingMXBean::load$($String* name, bool initialize) {
	$loadClass(PlatformLoggingMXBean, name, initialize, &_PlatformLoggingMXBean_ClassInfo_, allocate$PlatformLoggingMXBean);
	return class$;
}

$Class* PlatformLoggingMXBean::class$ = nullptr;

		} // management
	} // lang
} // java