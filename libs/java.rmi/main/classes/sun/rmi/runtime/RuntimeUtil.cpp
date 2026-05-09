#include <sun/rmi/runtime/RuntimeUtil.h>
#include <java/io/Serializable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/ScheduledThreadPoolExecutor.h>
#include <sun/rmi/runtime/Log.h>
#include <sun/rmi/runtime/RuntimeUtil$1.h>
#include <jcpp.h>

#undef GET_INSTANCE_PERMISSION

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ScheduledThreadPoolExecutor = ::java::util::concurrent::ScheduledThreadPoolExecutor;
using $Log = ::sun::rmi::runtime::Log;
using $RuntimeUtil$1 = ::sun::rmi::runtime::RuntimeUtil$1;

namespace sun {
	namespace rmi {
		namespace runtime {

class RuntimeUtil$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(RuntimeUtil$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return $of(RuntimeUtil::lambda$static$0());
	}
};
$Class* RuntimeUtil$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(RuntimeUtil$$Lambda$lambda$static$0, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RuntimeUtil$$Lambda$lambda$static$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.rmi.runtime.RuntimeUtil$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(RuntimeUtil$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeUtil$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* RuntimeUtil$$Lambda$lambda$static$0::class$ = nullptr;

$Log* RuntimeUtil::runtimeLog = nullptr;
int32_t RuntimeUtil::schedulerThreads = 0;
$Permission* RuntimeUtil::GET_INSTANCE_PERMISSION = nullptr;
RuntimeUtil* RuntimeUtil::instance = nullptr;

void RuntimeUtil::init$() {
	$set(this, scheduler, $new($ScheduledThreadPoolExecutor, RuntimeUtil::schedulerThreads, $$new($RuntimeUtil$1, this)));
}

RuntimeUtil* RuntimeUtil::getInstance() {
	$init(RuntimeUtil);
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPermission(RuntimeUtil::GET_INSTANCE_PERMISSION);
	}
	return RuntimeUtil::instance;
}

$ScheduledThreadPoolExecutor* RuntimeUtil::getScheduler() {
	return this->scheduler;
}

$Integer* RuntimeUtil::lambda$static$0() {
	$init(RuntimeUtil);
	return $Integer::getInteger("sun.rmi.runtime.schedulerThreads"_s, 1);
}

void RuntimeUtil::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(RuntimeUtil::runtimeLog, $Log::getLog("sun.rmi.runtime"_s, nullptr, false));
	RuntimeUtil::schedulerThreads = $$sure($Integer, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(RuntimeUtil$$Lambda$lambda$static$0))))->intValue();
	$assignStatic(RuntimeUtil::GET_INSTANCE_PERMISSION, $new($RuntimePermission, "sun.rmi.runtime.RuntimeUtil.getInstance"_s));
	$assignStatic(RuntimeUtil::instance, $new(RuntimeUtil));
}

RuntimeUtil::RuntimeUtil() {
}

$Class* RuntimeUtil::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.rmi.runtime.RuntimeUtil$$Lambda$lambda$static$0")) {
			return RuntimeUtil$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"runtimeLog", "Lsun/rmi/runtime/Log;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RuntimeUtil, runtimeLog)},
		{"schedulerThreads", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RuntimeUtil, schedulerThreads)},
		{"GET_INSTANCE_PERMISSION", "Ljava/security/Permission;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RuntimeUtil, GET_INSTANCE_PERMISSION)},
		{"instance", "Lsun/rmi/runtime/RuntimeUtil;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RuntimeUtil, instance)},
		{"scheduler", "Ljava/util/concurrent/ScheduledThreadPoolExecutor;", nullptr, $PRIVATE | $FINAL, $field(RuntimeUtil, scheduler)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RuntimeUtil, init$, void)},
		{"getInstance", "()Lsun/rmi/runtime/RuntimeUtil;", nullptr, $PRIVATE | $STATIC, $staticMethod(RuntimeUtil, getInstance, RuntimeUtil*)},
		{"getScheduler", "()Ljava/util/concurrent/ScheduledThreadPoolExecutor;", nullptr, $PUBLIC, $method(RuntimeUtil, getScheduler, $ScheduledThreadPoolExecutor*)},
		{"lambda$static$0", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(RuntimeUtil, lambda$static$0, $Integer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.RuntimeUtil$GetInstanceAction", "sun.rmi.runtime.RuntimeUtil", "GetInstanceAction", $PUBLIC | $STATIC},
		{"sun.rmi.runtime.RuntimeUtil$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.rmi.runtime.RuntimeUtil",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.rmi.runtime.RuntimeUtil$GetInstanceAction,sun.rmi.runtime.RuntimeUtil$1"
	};
	$loadClass(RuntimeUtil, name, initialize, &classInfo$$, RuntimeUtil::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RuntimeUtil);
	});
	return class$;
}

$Class* RuntimeUtil::class$ = nullptr;

		} // runtime
	} // rmi
} // sun