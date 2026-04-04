#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess$1.h>
#include <java/lang/Module.h>
#include <java/lang/ModuleLayer.h>
#include <java/util/Optional.h>
#include <sun/management/ManagementFactoryHelper$LoggingMXBeanAccess.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $ModuleLayer = ::java::lang::ModuleLayer;
using $Optional = ::java::util::Optional;

namespace sun {
	namespace management {

void ManagementFactoryHelper$LoggingMXBeanAccess$1::init$($String* val$className) {
	$set(this, val$className, val$className);
}

$Object* ManagementFactoryHelper$LoggingMXBeanAccess$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Optional, logging, $$nc($ModuleLayer::boot())->findModule("java.logging"_s));
	if ($nc(logging)->isPresent()) {
		return $of($Class::forName($$cast($Module, logging->get()), this->val$className));
	}
	return nullptr;
}

ManagementFactoryHelper$LoggingMXBeanAccess$1::ManagementFactoryHelper$LoggingMXBeanAccess$1() {
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$className", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ManagementFactoryHelper$LoggingMXBeanAccess$1, val$className)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(ManagementFactoryHelper$LoggingMXBeanAccess$1, init$, void, $String*)},
		{"run", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC, $virtualMethod(ManagementFactoryHelper$LoggingMXBeanAccess$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess",
		"loadLoggingClass",
		"(Ljava/lang/String;)Ljava/lang/Class;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess", "sun.management.ManagementFactoryHelper", "LoggingMXBeanAccess", $STATIC | $FINAL},
		{"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.ManagementFactoryHelper$LoggingMXBeanAccess$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Class<*>;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.ManagementFactoryHelper"
	};
	$loadClass(ManagementFactoryHelper$LoggingMXBeanAccess$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ManagementFactoryHelper$LoggingMXBeanAccess$1);
	});
	return class$;
}

$Class* ManagementFactoryHelper$LoggingMXBeanAccess$1::class$ = nullptr;

	} // management
} // sun