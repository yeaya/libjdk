#include <java/lang/management/RuntimeMXBean.h>

#include <java/io/Serializable.h>
#include <java/lang/ProcessHandle.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ProcessHandle = ::java::lang::ProcessHandle;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $List = ::java::util::List;
using $Map = ::java::util::Map;

namespace java {
	namespace lang {
		namespace management {

class RuntimeMXBean$$Lambda$lambda$getPid$0 : public $PrivilegedAction {
	$class(RuntimeMXBean$$Lambda$lambda$getPid$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(RuntimeMXBean::lambda$getPid$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<RuntimeMXBean$$Lambda$lambda$getPid$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo RuntimeMXBean$$Lambda$lambda$getPid$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeMXBean$$Lambda$lambda$getPid$0, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeMXBean$$Lambda$lambda$getPid$0, run, $Object*)},
	{}
};
$ClassInfo RuntimeMXBean$$Lambda$lambda$getPid$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"java.lang.management.RuntimeMXBean$$Lambda$lambda$getPid$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* RuntimeMXBean$$Lambda$lambda$getPid$0::load$($String* name, bool initialize) {
	$loadClass(RuntimeMXBean$$Lambda$lambda$getPid$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* RuntimeMXBean$$Lambda$lambda$getPid$0::class$ = nullptr;

$MethodInfo _RuntimeMXBean_MethodInfo_[] = {
	{"getBootClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getBootClassPath, $String*)},
	{"getClassPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getClassPath, $String*)},
	{"getInputArguments", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getInputArguments, $List*)},
	{"getLibraryPath", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getLibraryPath, $String*)},
	{"getManagementSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getManagementSpecVersion, $String*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getName, $String*)},
	{"getPid", "()J", nullptr, $PUBLIC, $virtualMethod(RuntimeMXBean, getPid, int64_t)},
	{"getSpecName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getSpecName, $String*)},
	{"getSpecVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getSpecVendor, $String*)},
	{"getSpecVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getSpecVersion, $String*)},
	{"getStartTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getStartTime, int64_t)},
	{"getSystemProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getSystemProperties, $Map*)},
	{"getUptime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getUptime, int64_t)},
	{"getVmName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getVmName, $String*)},
	{"getVmVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getVmVendor, $String*)},
	{"getVmVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, getVmVersion, $String*)},
	{"isBootClassPathSupported", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RuntimeMXBean, isBootClassPathSupported, bool)},
	{"lambda$getPid$0", "()Ljava/lang/Long;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RuntimeMXBean, lambda$getPid$0, $Long*)},
	{}
};

$ClassInfo _RuntimeMXBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"java.lang.management.RuntimeMXBean",
	nullptr,
	"java.lang.management.PlatformManagedObject",
	nullptr,
	_RuntimeMXBean_MethodInfo_
};

$Object* allocate$RuntimeMXBean($Class* clazz) {
	return $of($alloc(RuntimeMXBean));
}

int64_t RuntimeMXBean::getPid() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Long, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(RuntimeMXBean$$Lambda$lambda$getPid$0)))))))->longValue();
}

$Long* RuntimeMXBean::lambda$getPid$0() {
	$init(RuntimeMXBean);
	return $Long::valueOf($nc($($ProcessHandle::current()))->pid());
}

$Class* RuntimeMXBean::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(RuntimeMXBean$$Lambda$lambda$getPid$0::classInfo$.name)) {
			return RuntimeMXBean$$Lambda$lambda$getPid$0::load$(name, initialize);
		}
	}
	$loadClass(RuntimeMXBean, name, initialize, &_RuntimeMXBean_ClassInfo_, allocate$RuntimeMXBean);
	return class$;
}

$Class* RuntimeMXBean::class$ = nullptr;

		} // management
	} // lang
} // java