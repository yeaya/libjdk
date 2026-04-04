#include <sun/management/spi/PlatformMBeanProvider.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $SecurityManager = ::java::lang::SecurityManager;
using $Void = ::java::lang::Void;
using $List = ::java::util::List;

namespace sun {
	namespace management {
		namespace spi {

void PlatformMBeanProvider::init$() {
	PlatformMBeanProvider::init$($(checkSubclassPermission()));
}

void PlatformMBeanProvider::init$($Void* unused) {
}

$Void* PlatformMBeanProvider::checkSubclassPermission() {
	$useLocalObjectStack();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		$load(PlatformMBeanProvider);
		sm->checkPermission($$new($RuntimePermission, $$str({$(PlatformMBeanProvider::class$->getName()), ".subclass"_s})));
	}
	return nullptr;
}

PlatformMBeanProvider::PlatformMBeanProvider() {
}

$Class* PlatformMBeanProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PROTECTED, $method(PlatformMBeanProvider, init$, void)},
		{"<init>", "(Ljava/lang/Void;)V", nullptr, $PRIVATE, $method(PlatformMBeanProvider, init$, void, $Void*)},
		{"checkSubclassPermission", "()Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC, $staticMethod(PlatformMBeanProvider, checkSubclassPermission, $Void*)},
		{"getPlatformComponentList", "()Ljava/util/List;", "()Ljava/util/List<Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<*>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformMBeanProvider, getPlatformComponentList, $List*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"sun.management.spi.PlatformMBeanProvider",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent"
	};
	$loadClass(PlatformMBeanProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformMBeanProvider);
	});
	return class$;
}

$Class* PlatformMBeanProvider::class$ = nullptr;

		} // spi
	} // management
} // sun