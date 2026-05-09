#include <java/lang/management/ManagementFactory.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/ClassLoadingMXBean.h>
#include <java/lang/management/CompilationMXBean.h>
#include <java/lang/management/GarbageCollectorMXBean.h>
#include <java/lang/management/ManagementFactory$PlatformMBeanFinder.h>
#include <java/lang/management/MemoryMXBean.h>
#include <java/lang/management/MemoryManagerMXBean.h>
#include <java/lang/management/MemoryPoolMXBean.h>
#include <java/lang/management/OperatingSystemMXBean.h>
#include <java/lang/management/PlatformLoggingMXBean.h>
#include <java/lang/management/PlatformManagedObject.h>
#include <java/lang/management/RuntimeMXBean.h>
#include <java/lang/management/ThreadMXBean.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/management/DynamicMBean.h>
#include <javax/management/InstanceNotFoundException.h>
#include <javax/management/JMX.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/MBeanServerFactory.h>
#include <javax/management/MBeanServerPermission.h>
#include <javax/management/MalformedObjectNameException.h>
#include <javax/management/NotificationEmitter.h>
#include <javax/management/ObjectInstance.h>
#include <javax/management/ObjectName.h>
#include <javax/management/OperationsException.h>
#include <javax/management/QueryExp.h>
#include <javax/management/StandardEmitterMBean.h>
#include <javax/management/StandardMBean.h>
#include <jdk/internal/misc/VM.h>
#include <sun/management/Util.h>
#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>
#include <jcpp.h>

#undef CLASS_LOADING_MXBEAN_NAME
#undef COMPILATION_MXBEAN_NAME
#undef GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE
#undef MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE
#undef MEMORY_MXBEAN_NAME
#undef MEMORY_POOL_MXBEAN_DOMAIN_TYPE
#undef NOTIF_EMITTER
#undef OPERATING_SYSTEM_MXBEAN_NAME
#undef RUNTIME_MXBEAN_NAME
#undef THREAD_MXBEAN_NAME

using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ClassLoadingMXBean = ::java::lang::management::ClassLoadingMXBean;
using $CompilationMXBean = ::java::lang::management::CompilationMXBean;
using $GarbageCollectorMXBean = ::java::lang::management::GarbageCollectorMXBean;
using $ManagementFactory$PlatformMBeanFinder = ::java::lang::management::ManagementFactory$PlatformMBeanFinder;
using $MemoryMXBean = ::java::lang::management::MemoryMXBean;
using $MemoryManagerMXBean = ::java::lang::management::MemoryManagerMXBean;
using $MemoryPoolMXBean = ::java::lang::management::MemoryPoolMXBean;
using $OperatingSystemMXBean = ::java::lang::management::OperatingSystemMXBean;
using $PlatformLoggingMXBean = ::java::lang::management::PlatformLoggingMXBean;
using $PlatformManagedObject = ::java::lang::management::PlatformManagedObject;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $ThreadMXBean = ::java::lang::management::ThreadMXBean;
using $AccessController = ::java::security::AccessController;
using $Permission = ::java::security::Permission;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $DynamicMBean = ::javax::management::DynamicMBean;
using $InstanceNotFoundException = ::javax::management::InstanceNotFoundException;
using $JMX = ::javax::management::JMX;
using $MBeanServer = ::javax::management::MBeanServer;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $MBeanServerFactory = ::javax::management::MBeanServerFactory;
using $MBeanServerPermission = ::javax::management::MBeanServerPermission;
using $MalformedObjectNameException = ::javax::management::MalformedObjectNameException;
using $NotificationEmitter = ::javax::management::NotificationEmitter;
using $ObjectName = ::javax::management::ObjectName;
using $QueryExp = ::javax::management::QueryExp;
using $StandardEmitterMBean = ::javax::management::StandardEmitterMBean;
using $StandardMBean = ::javax::management::StandardMBean;
using $VM = ::jdk::internal::misc::VM;
using $Util = ::sun::management::Util;
using $PlatformMBeanProvider$PlatformComponent = ::sun::management::spi::PlatformMBeanProvider$PlatformComponent;

namespace java {
	namespace lang {
		namespace management {

class ManagementFactory$$Lambda$shouldRegister : public $Predicate {
	$class(ManagementFactory$$Lambda$shouldRegister, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* inst$) override {
		return $sure($PlatformMBeanProvider$PlatformComponent, inst$)->shouldRegister();
	}
};
$Class* ManagementFactory$$Lambda$shouldRegister::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$shouldRegister, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$shouldRegister, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$shouldRegister",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$shouldRegister, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$shouldRegister);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$shouldRegister::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pc) override {
		return ManagementFactory::lambda$getPlatformMBeanServer$0($cast($PlatformMBeanProvider$PlatformComponent, pc));
	}
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2 : public $Consumer {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* entry) override {
		ManagementFactory::lambda$getPlatformMBeanServer$1($cast($Map$Entry, entry));
	}
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, init$, void)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2",
		"java.lang.Object",
		"java.util.function.Consumer",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3 : public $PrivilegedAction {
	$class(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Class* cls) {
		this->cls = cls;
	}
	virtual $Object* run() override {
		return ManagementFactory::lambda$newPlatformMXBeanProxy$2(cls);
	}
	$Class* cls = nullptr;
};
$Class* ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cls", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, cls)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, init$, void, $Class*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* mxbeanInterface) {
		this->mxbeanInterface = mxbeanInterface;
	}
	virtual $Object* apply(Object$* p) override {
		return ManagementFactory::lambda$getPlatformMXBeans$3(mxbeanInterface, $cast($PlatformMBeanProvider$PlatformComponent, p));
	}
	$Class* mxbeanInterface = nullptr;
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mxbeanInterface", "Ljava/lang/Class;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, mxbeanInterface)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, init$, void, $Class*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::class$ = nullptr;

class ManagementFactory$$Lambda$getCanonicalName$5 : public $Function {
	$class(ManagementFactory$$Lambda$getCanonicalName$5, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($ObjectName, inst$)->getCanonicalName());
	}
};
$Class* ManagementFactory$$Lambda$getCanonicalName$5::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$getCanonicalName$5, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$getCanonicalName$5, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$getCanonicalName$5",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$getCanonicalName$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$getCanonicalName$5);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$getCanonicalName$5::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* pc) override {
		return ManagementFactory::lambda$getPlatformManagementInterfaces$4($cast($PlatformMBeanProvider$PlatformComponent, pc));
	}
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7 : public $Predicate {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* clazz) override {
		return ManagementFactory::lambda$getPlatformManagementInterfaces$5($cast($Class, clazz));
	}
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8 : public $Function {
	$class(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* clazz) override {
		return $of(ManagementFactory::lambda$getPlatformManagementInterfaces$6($cast($Class, clazz)));
	}
};
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$addMXBean$7$9 : public $PrivilegedExceptionAction {
	$class(ManagementFactory$$Lambda$lambda$addMXBean$7$9, $NO_CLASS_INIT, $PrivilegedExceptionAction)
public:
	void init$(Object$* pmo, $MBeanServer* mbs, $ObjectName* oname) {
		$set(this, pmo, pmo);
		$set(this, mbs, mbs);
		$set(this, oname, oname);
	}
	virtual $Object* run() override {
		return ManagementFactory::lambda$addMXBean$7(pmo, mbs, oname);
	}
	$Object* pmo = nullptr;
	$MBeanServer* mbs = nullptr;
	$ObjectName* oname = nullptr;
};
$Class* ManagementFactory$$Lambda$lambda$addMXBean$7$9::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pmo", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, pmo)},
		{"mbs", "Ljavax/management/MBeanServer;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, mbs)},
		{"oname", "Ljavax/management/ObjectName;", nullptr, $PUBLIC, $field(ManagementFactory$$Lambda$lambda$addMXBean$7$9, oname)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$addMXBean$7$9, init$, void, Object$*, $MBeanServer*, $ObjectName*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$addMXBean$7$9, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$addMXBean$7$9",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$addMXBean$7$9, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$addMXBean$7$9);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$addMXBean$7$9::class$ = nullptr;

class ManagementFactory$$Lambda$lambda$static$8$10 : public $PrivilegedAction {
	$class(ManagementFactory$$Lambda$lambda$static$8$10, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		return ManagementFactory::lambda$static$8();
	}
};
$Class* ManagementFactory$$Lambda$lambda$static$8$10::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ManagementFactory$$Lambda$lambda$static$8$10, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ManagementFactory$$Lambda$lambda$static$8$10, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.ManagementFactory$$Lambda$lambda$static$8$10",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(ManagementFactory$$Lambda$lambda$static$8$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory$$Lambda$lambda$static$8$10);
	});
	return class$;
}
$Class* ManagementFactory$$Lambda$lambda$static$8$10::class$ = nullptr;

bool ManagementFactory::$assertionsDisabled = false;
$String* ManagementFactory::CLASS_LOADING_MXBEAN_NAME = nullptr;
$String* ManagementFactory::COMPILATION_MXBEAN_NAME = nullptr;
$String* ManagementFactory::MEMORY_MXBEAN_NAME = nullptr;
$String* ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME = nullptr;
$String* ManagementFactory::RUNTIME_MXBEAN_NAME = nullptr;
$String* ManagementFactory::THREAD_MXBEAN_NAME = nullptr;
$String* ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE = nullptr;
$String* ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE = nullptr;
$String* ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE = nullptr;
$MBeanServer* ManagementFactory::platformMBeanServer = nullptr;
$String* ManagementFactory::NOTIF_EMITTER = nullptr;

void ManagementFactory::init$() {
}

$ClassLoadingMXBean* ManagementFactory::getClassLoadingMXBean() {
	$init(ManagementFactory);
	$load($ClassLoadingMXBean);
	return $cast($ClassLoadingMXBean, getPlatformMXBean($ClassLoadingMXBean::class$));
}

$MemoryMXBean* ManagementFactory::getMemoryMXBean() {
	$init(ManagementFactory);
	$load($MemoryMXBean);
	return $cast($MemoryMXBean, getPlatformMXBean($MemoryMXBean::class$));
}

$ThreadMXBean* ManagementFactory::getThreadMXBean() {
	$init(ManagementFactory);
	$load($ThreadMXBean);
	return $cast($ThreadMXBean, getPlatformMXBean($ThreadMXBean::class$));
}

$RuntimeMXBean* ManagementFactory::getRuntimeMXBean() {
	$init(ManagementFactory);
	$load($RuntimeMXBean);
	return $cast($RuntimeMXBean, getPlatformMXBean($RuntimeMXBean::class$));
}

$CompilationMXBean* ManagementFactory::getCompilationMXBean() {
	$init(ManagementFactory);
	$load($CompilationMXBean);
	return $cast($CompilationMXBean, getPlatformMXBean($CompilationMXBean::class$));
}

$OperatingSystemMXBean* ManagementFactory::getOperatingSystemMXBean() {
	$init(ManagementFactory);
	$load($OperatingSystemMXBean);
	return $cast($OperatingSystemMXBean, getPlatformMXBean($OperatingSystemMXBean::class$));
}

$List* ManagementFactory::getMemoryPoolMXBeans() {
	$init(ManagementFactory);
	$load($MemoryPoolMXBean);
	return getPlatformMXBeans($MemoryPoolMXBean::class$);
}

$List* ManagementFactory::getMemoryManagerMXBeans() {
	$init(ManagementFactory);
	$load($MemoryManagerMXBean);
	return getPlatformMXBeans($MemoryManagerMXBean::class$);
}

$List* ManagementFactory::getGarbageCollectorMXBeans() {
	$init(ManagementFactory);
	$load($GarbageCollectorMXBean);
	return getPlatformMXBeans($GarbageCollectorMXBean::class$);
}

$MBeanServer* ManagementFactory::getPlatformMBeanServer() {
	$init(ManagementFactory);
	$synchronized(class$) {
		$useLocalObjectStack();
		$var($SecurityManager, sm, $System::getSecurityManager());
		if (sm != nullptr) {
			$var($Permission, perm, $new($MBeanServerPermission, "createMBeanServer"_s));
			sm->checkPermission(perm);
		}
		if (ManagementFactory::platformMBeanServer == nullptr) {
			$assignStatic(ManagementFactory::platformMBeanServer, $MBeanServerFactory::createMBeanServer());
			$$nc($$nc($$nc($$nc(platformComponents())->stream())->filter($$new(ManagementFactory$$Lambda$shouldRegister)))->flatMap($$new(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1)))->forEach($$new(ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2));
		}
		return ManagementFactory::platformMBeanServer;
	}
}

$Object* ManagementFactory::newPlatformMXBeanProxy($MBeanServerConnection* connection, $String* mxbeanName, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* cls = mxbeanInterface;
	$var($ClassLoader, loader, $cast($ClassLoader, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3, cls)))));
	if (!$VM::isSystemDomainLoader(loader)) {
		$throwNew($IllegalArgumentException, $$str({mxbeanName, " is not a platform MXBean"_s}));
	}
	try {
		$var($ObjectName, objName, $new($ObjectName, mxbeanName));
		$var($String, intfName, $nc(mxbeanInterface)->getName());
		if (!isInstanceOf(connection, objName, intfName)) {
			$throwNew($IllegalArgumentException, $$str({mxbeanName, " is not an instance of "_s, mxbeanInterface}));
		}
		bool emitter = $nc(connection)->isInstanceOf(objName, ManagementFactory::NOTIF_EMITTER);
		return $JMX::newMXBeanProxy(connection, objName, mxbeanInterface, emitter);
	} catch ($InstanceNotFoundException& e) {
		$throwNew($IllegalArgumentException, e);
	} catch ($MalformedObjectNameException& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$shouldNotReachHere();
}

bool ManagementFactory::isInstanceOf($MBeanServerConnection* connection, $ObjectName* objName, $String* intfName) {
	$init(ManagementFactory);
	if ("java.util.logging.LoggingMXBean"_s->equals(intfName)) {
		$load($PlatformLoggingMXBean);
		if ($nc(connection)->isInstanceOf(objName, $($PlatformLoggingMXBean::class$->getName()))) {
			return true;
		}
	}
	return $nc(connection)->isInstanceOf(objName, intfName);
}

$PlatformManagedObject* ManagementFactory::getPlatformMXBean($Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findSingleton(mxbeanInterface));
	$var($List, mbeans, $nc(pc)->getMBeans(mxbeanInterface));
	bool var$0 = !ManagementFactory::$assertionsDisabled;
	if (var$0) {
		bool var$1 = $nc(mbeans)->isEmpty();
		var$0 = !(var$1 || mbeans->size() == 1);
	}
	if (var$0) {
		$throwNew($AssertionError);
	}
	return $nc(mbeans)->isEmpty() ? ($PlatformManagedObject*)nullptr : $cast($PlatformManagedObject, mbeans->get(0));
}

$List* ManagementFactory::getPlatformMXBeans($Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findFirst(mxbeanInterface));
	if (pc == nullptr) {
		$throwNew($IllegalArgumentException, $$str({$($nc(mxbeanInterface)->getName()), " is not a platform management interface"_s}));
	}
	return $cast($List, $$nc($$nc($$nc(platformComponents())->stream())->flatMap($$new(ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4, mxbeanInterface)))->collect($($Collectors::toList())));
}

$PlatformManagedObject* ManagementFactory::getPlatformMXBean($MBeanServerConnection* connection, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findSingleton(mxbeanInterface));
	return $cast($PlatformManagedObject, newPlatformMXBeanProxy(connection, $($nc(pc)->getObjectNamePattern()), mxbeanInterface));
}

$List* ManagementFactory::getPlatformMXBeans($MBeanServerConnection* connection, $Class* mxbeanInterface) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($PlatformMBeanProvider$PlatformComponent, pc, $ManagementFactory$PlatformMBeanFinder::findFirst(mxbeanInterface));
	if (pc == nullptr) {
		$throwNew($IllegalArgumentException, $$str({$($nc(mxbeanInterface)->getName()), " is not a platform management interface"_s}));
	}
	$var($Stream, names, $Stream::empty());
	{
		$var($Iterator, i$, $$nc(platformComponents())->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($PlatformMBeanProvider$PlatformComponent, p, $cast($PlatformMBeanProvider$PlatformComponent, i$->next()));
			{
				$assign(names, $Stream::concat(names, $(getProxyNames(p, connection, mxbeanInterface))));
			}
		}
	}
	$var($Set, objectNames, $cast($Set, $nc(names)->collect($($Collectors::toSet()))));
	if ($nc(objectNames)->isEmpty()) {
		return $Collections::emptyList();
	}
	$var($List, proxies, $new($ArrayList));
	{
		$var($Iterator, i$, objectNames->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, name, $cast($String, i$->next()));
			{
				proxies->add($$cast($PlatformManagedObject, newPlatformMXBeanProxy(connection, name, mxbeanInterface)));
			}
		}
	}
	return proxies;
}

$Stream* ManagementFactory::getProxyNames($PlatformMBeanProvider$PlatformComponent* pc, $MBeanServerConnection* conn, $Class* intf) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	if ($$nc($nc(pc)->mbeanInterfaceNames())->contains($($nc(intf)->getName()))) {
		if (pc->isSingleton()) {
			return $Stream::of($(pc->getObjectNamePattern()));
		} else {
			return $$nc($$nc($nc(conn)->queryNames($($Util::newObjectName($(pc->getObjectNamePattern()))), nullptr))->stream())->map($$new(ManagementFactory$$Lambda$getCanonicalName$5));
		}
	}
	return $Stream::empty();
}

$Set* ManagementFactory::getPlatformManagementInterfaces() {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($Stream, pmos, $$nc($$nc($$nc($$nc(platformComponents())->stream())->flatMap($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6)))->filter($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7)))->map($$new(ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8)));
	return $cast($Set, $nc(pmos)->collect($($Collectors::toSet())));
}

void ManagementFactory::addMXBean($MBeanServer* mbs, $String* name, Object$* pmo) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$var($ObjectName, oname, $ObjectName::getInstance(name));
		$AccessController::doPrivileged($cast($PrivilegedExceptionAction, $$new(ManagementFactory$$Lambda$lambda$addMXBean$7$9, pmo, mbs, oname)));
	} catch ($MalformedObjectNameException& mone) {
		$throwNew($IllegalArgumentException, mone);
	} catch ($PrivilegedActionException& e) {
		$throwNew($RuntimeException, $(e->getException()));
	}
}

$Collection* ManagementFactory::platformComponents() {
	$init(ManagementFactory);
	return $$nc($ManagementFactory$PlatformMBeanFinder::getMap())->values();
}

$Void* ManagementFactory::lambda$static$8() {
	$init(ManagementFactory);
	$beforeCallerSensitive();
	$System::loadLibrary("management"_s);
	return nullptr;
}

$Void* ManagementFactory::lambda$addMXBean$7(Object$* pmo, $MBeanServer* mbs, $ObjectName* oname) {
	$init(ManagementFactory);
	$var($DynamicMBean, dmbean, nullptr);
	if ($instanceOf($DynamicMBean, pmo)) {
		$load($DynamicMBean);
		$assign(dmbean, $cast($DynamicMBean, $DynamicMBean::class$->cast(pmo)));
	} else if ($instanceOf($NotificationEmitter, pmo)) {
		$assign(dmbean, $new($StandardEmitterMBean, pmo, nullptr, true, $cast($NotificationEmitter, pmo)));
	} else {
		$assign(dmbean, $new($StandardMBean, pmo, nullptr, true));
	}
	$nc(mbs)->registerMBean(dmbean, oname);
	return nullptr;
}

$Class* ManagementFactory::lambda$getPlatformManagementInterfaces$6($Class* clazz) {
	$init(ManagementFactory);
	$load($PlatformManagedObject);
	return $nc(clazz)->asSubclass($PlatformManagedObject::class$);
}

bool ManagementFactory::lambda$getPlatformManagementInterfaces$5($Class* clazz) {
	$init(ManagementFactory);
	$load($PlatformManagedObject);
	return $PlatformManagedObject::class$->isAssignableFrom(clazz);
}

$Stream* ManagementFactory::lambda$getPlatformManagementInterfaces$4($PlatformMBeanProvider$PlatformComponent* pc) {
	$init(ManagementFactory);
	return $$nc($nc(pc)->mbeanInterfaces())->stream();
}

$Stream* ManagementFactory::lambda$getPlatformMXBeans$3($Class* mxbeanInterface, $PlatformMBeanProvider$PlatformComponent* p) {
	$init(ManagementFactory);
	return $$nc($nc(p)->getMBeans(mxbeanInterface))->stream();
}

$ClassLoader* ManagementFactory::lambda$newPlatformMXBeanProxy$2($Class* cls) {
	$init(ManagementFactory);
	$beforeCallerSensitive();
	return $nc(cls)->getClassLoader();
}

void ManagementFactory::lambda$getPlatformMBeanServer$1($Map$Entry* entry) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	$var($MBeanServer, var$0, ManagementFactory::platformMBeanServer);
	$var($String, var$1, $cast($String, $nc(entry)->getKey()));
	addMXBean(var$0, var$1, $(entry->getValue()));
}

$Stream* ManagementFactory::lambda$getPlatformMBeanServer$0($PlatformMBeanProvider$PlatformComponent* pc) {
	$init(ManagementFactory);
	$useLocalObjectStack();
	return $$nc($$nc($nc(pc)->nameToMBeanMap())->entrySet())->stream();
}

void ManagementFactory::clinit$($Class* clazz) {
	$assignStatic(ManagementFactory::CLASS_LOADING_MXBEAN_NAME, "java.lang:type=ClassLoading"_s);
	$assignStatic(ManagementFactory::COMPILATION_MXBEAN_NAME, "java.lang:type=Compilation"_s);
	$assignStatic(ManagementFactory::MEMORY_MXBEAN_NAME, "java.lang:type=Memory"_s);
	$assignStatic(ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME, "java.lang:type=OperatingSystem"_s);
	$assignStatic(ManagementFactory::RUNTIME_MXBEAN_NAME, "java.lang:type=Runtime"_s);
	$assignStatic(ManagementFactory::THREAD_MXBEAN_NAME, "java.lang:type=Threading"_s);
	$assignStatic(ManagementFactory::GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE, "java.lang:type=GarbageCollector"_s);
	$assignStatic(ManagementFactory::MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE, "java.lang:type=MemoryManager"_s);
	$assignStatic(ManagementFactory::MEMORY_POOL_MXBEAN_DOMAIN_TYPE, "java.lang:type=MemoryPool"_s);
	$assignStatic(ManagementFactory::NOTIF_EMITTER, "javax.management.NotificationEmitter"_s);
	$beforeCallerSensitive();
	ManagementFactory::$assertionsDisabled = !ManagementFactory::class$->desiredAssertionStatus();
	{
		$AccessController::doPrivileged($cast($PrivilegedAction, $$new(ManagementFactory$$Lambda$lambda$static$8$10)));
	}
}

ManagementFactory::ManagementFactory() {
}

$Class* ManagementFactory::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$shouldRegister")) {
			return ManagementFactory$$Lambda$shouldRegister::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1")) {
			return ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$0$1::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2")) {
			return ManagementFactory$$Lambda$lambda$getPlatformMBeanServer$1$2::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3")) {
			return ManagementFactory$$Lambda$lambda$newPlatformMXBeanProxy$2$3::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4")) {
			return ManagementFactory$$Lambda$lambda$getPlatformMXBeans$3$4::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$getCanonicalName$5")) {
			return ManagementFactory$$Lambda$getCanonicalName$5::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6")) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$4$6::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7")) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$5$7::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8")) {
			return ManagementFactory$$Lambda$lambda$getPlatformManagementInterfaces$6$8::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$addMXBean$7$9")) {
			return ManagementFactory$$Lambda$lambda$addMXBean$7$9::load$(name, initialize);
		}
		if (name->equals("java.lang.management.ManagementFactory$$Lambda$lambda$static$8$10")) {
			return ManagementFactory$$Lambda$lambda$static$8$10::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ManagementFactory, $assertionsDisabled)},
		{"CLASS_LOADING_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, CLASS_LOADING_MXBEAN_NAME)},
		{"COMPILATION_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, COMPILATION_MXBEAN_NAME)},
		{"MEMORY_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_MXBEAN_NAME)},
		{"OPERATING_SYSTEM_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, OPERATING_SYSTEM_MXBEAN_NAME)},
		{"RUNTIME_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, RUNTIME_MXBEAN_NAME)},
		{"THREAD_MXBEAN_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, THREAD_MXBEAN_NAME)},
		{"GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, GARBAGE_COLLECTOR_MXBEAN_DOMAIN_TYPE)},
		{"MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_MANAGER_MXBEAN_DOMAIN_TYPE)},
		{"MEMORY_POOL_MXBEAN_DOMAIN_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ManagementFactory, MEMORY_POOL_MXBEAN_DOMAIN_TYPE)},
		{"platformMBeanServer", "Ljavax/management/MBeanServer;", nullptr, $PRIVATE | $STATIC, $staticField(ManagementFactory, platformMBeanServer)},
		{"NOTIF_EMITTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ManagementFactory, NOTIF_EMITTER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ManagementFactory, init$, void)},
		{"addMXBean", "(Ljavax/management/MBeanServer;Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(ManagementFactory, addMXBean, void, $MBeanServer*, $String*, Object$*)},
		{"getClassLoadingMXBean", "()Ljava/lang/management/ClassLoadingMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getClassLoadingMXBean, $ClassLoadingMXBean*)},
		{"getCompilationMXBean", "()Ljava/lang/management/CompilationMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getCompilationMXBean, $CompilationMXBean*)},
		{"getGarbageCollectorMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/GarbageCollectorMXBean;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getGarbageCollectorMXBeans, $List*)},
		{"getMemoryMXBean", "()Ljava/lang/management/MemoryMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getMemoryMXBean, $MemoryMXBean*)},
		{"getMemoryManagerMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryManagerMXBean;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getMemoryManagerMXBeans, $List*)},
		{"getMemoryPoolMXBeans", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/management/MemoryPoolMXBean;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getMemoryPoolMXBeans, $List*)},
		{"getOperatingSystemMXBean", "()Ljava/lang/management/OperatingSystemMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getOperatingSystemMXBean, $OperatingSystemMXBean*)},
		{"getPlatformMBeanServer", "()Ljavax/management/MBeanServer;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ManagementFactory, getPlatformMBeanServer, $MBeanServer*)},
		{"getPlatformMXBean", "(Ljava/lang/Class;)Ljava/lang/management/PlatformManagedObject;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getPlatformMXBean, $PlatformManagedObject*, $Class*)},
		{"getPlatformMXBean", "(Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/lang/management/PlatformManagedObject;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljavax/management/MBeanServerConnection;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getPlatformMXBean, $PlatformManagedObject*, $MBeanServerConnection*, $Class*), "java.io.IOException"},
		{"getPlatformMXBeans", "(Ljava/lang/Class;)Ljava/util/List;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getPlatformMXBeans, $List*, $Class*)},
		{"getPlatformMXBeans", "(Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/util/List;", "<T::Ljava/lang/management/PlatformManagedObject;>(Ljavax/management/MBeanServerConnection;Ljava/lang/Class<TT;>;)Ljava/util/List<TT;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getPlatformMXBeans, $List*, $MBeanServerConnection*, $Class*), "java.io.IOException"},
		{"getPlatformManagementInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/PlatformManagedObject;>;>;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getPlatformManagementInterfaces, $Set*)},
		{"getProxyNames", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;Ljavax/management/MBeanServerConnection;Ljava/lang/Class;)Ljava/util/stream/Stream;", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;Ljavax/management/MBeanServerConnection;Ljava/lang/Class<*>;)Ljava/util/stream/Stream<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(ManagementFactory, getProxyNames, $Stream*, $PlatformMBeanProvider$PlatformComponent*, $MBeanServerConnection*, $Class*), "java.io.IOException"},
		{"getRuntimeMXBean", "()Ljava/lang/management/RuntimeMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getRuntimeMXBean, $RuntimeMXBean*)},
		{"getThreadMXBean", "()Ljava/lang/management/ThreadMXBean;", nullptr, $PUBLIC | $STATIC, $staticMethod(ManagementFactory, getThreadMXBean, $ThreadMXBean*)},
		{"isInstanceOf", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(ManagementFactory, isInstanceOf, bool, $MBeanServerConnection*, $ObjectName*, $String*), "javax.management.InstanceNotFoundException,java.io.IOException"},
		{"lambda$addMXBean$7", "(Ljava/lang/Object;Ljavax/management/MBeanServer;Ljavax/management/ObjectName;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$addMXBean$7, $Void*, Object$*, $MBeanServer*, $ObjectName*), "java.lang.Exception"},
		{"lambda$getPlatformMBeanServer$0", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformMBeanServer$0, $Stream*, $PlatformMBeanProvider$PlatformComponent*)},
		{"lambda$getPlatformMBeanServer$1", "(Ljava/util/Map$Entry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformMBeanServer$1, void, $Map$Entry*)},
		{"lambda$getPlatformMXBeans$3", "(Ljava/lang/Class;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformMXBeans$3, $Stream*, $Class*, $PlatformMBeanProvider$PlatformComponent*)},
		{"lambda$getPlatformManagementInterfaces$4", "(Lsun/management/spi/PlatformMBeanProvider$PlatformComponent;)Ljava/util/stream/Stream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformManagementInterfaces$4, $Stream*, $PlatformMBeanProvider$PlatformComponent*)},
		{"lambda$getPlatformManagementInterfaces$5", "(Ljava/lang/Class;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformManagementInterfaces$5, bool, $Class*)},
		{"lambda$getPlatformManagementInterfaces$6", "(Ljava/lang/Class;)Ljava/lang/Class;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$getPlatformManagementInterfaces$6, $Class*, $Class*)},
		{"lambda$newPlatformMXBeanProxy$2", "(Ljava/lang/Class;)Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$newPlatformMXBeanProxy$2, $ClassLoader*, $Class*)},
		{"lambda$static$8", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ManagementFactory, lambda$static$8, $Void*)},
		{"newPlatformMXBeanProxy", "(Ljavax/management/MBeanServerConnection;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljavax/management/MBeanServerConnection;Ljava/lang/String;Ljava/lang/Class<TT;>;)TT;", $PUBLIC | $STATIC, $staticMethod(ManagementFactory, newPlatformMXBeanProxy, $Object*, $MBeanServerConnection*, $String*, $Class*), "java.io.IOException"},
		{"platformComponents", "()Ljava/util/Collection;", "()Ljava/util/Collection<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PRIVATE | $STATIC, $staticMethod(ManagementFactory, platformComponents, $Collection*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.ManagementFactory$PlatformMBeanFinder", "java.lang.management.ManagementFactory", "PlatformMBeanFinder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.lang.management.ManagementFactory",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.lang.management.ManagementFactory$PlatformMBeanFinder,java.lang.management.ManagementFactory$PlatformMBeanFinder$1"
	};
	$loadClass(ManagementFactory, name, initialize, &classInfo$$, ManagementFactory::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactory);
	});
	return class$;
}

$Class* ManagementFactory::class$ = nullptr;

		} // management
	} // lang
} // java