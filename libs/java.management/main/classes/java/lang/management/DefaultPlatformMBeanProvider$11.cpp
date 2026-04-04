#include <java/lang/management/DefaultPlatformMBeanProvider$11.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/OperatingSystemMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef OPERATING_SYSTEM_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $OperatingSystemMXBean = ::java::lang::management::OperatingSystemMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace java {
	namespace lang {
		namespace management {

void DefaultPlatformMBeanProvider$11::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, operatingSystemMXBeanInterfaceNames, $Collections::singleton("java.lang.management.OperatingSystemMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$11::mbeanInterfaces() {
	$load($OperatingSystemMXBean);
	return $Collections::singleton($OperatingSystemMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$11::mbeanInterfaceNames() {
	return this->operatingSystemMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$11::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$11::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::OPERATING_SYSTEM_MXBEAN_NAME, $($ManagementFactoryHelper::getOperatingSystemMXBean()));
}

DefaultPlatformMBeanProvider$11::DefaultPlatformMBeanProvider$11() {
}

$Class* DefaultPlatformMBeanProvider$11::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$11, this$0)},
		{"operatingSystemMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$11, operatingSystemMXBeanInterfaceNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(DefaultPlatformMBeanProvider$11, init$, void, $DefaultPlatformMBeanProvider*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$11, getObjectNamePattern, $String*)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$11, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/OperatingSystemMXBean;>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$11, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/OperatingSystemMXBean;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$11, nameToMBeanMap, $Map*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.DefaultPlatformMBeanProvider",
		"init",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$11", nullptr, nullptr, 0},
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider$11",
		"java.lang.Object",
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/OperatingSystemMXBean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider"
	};
	$loadClass(DefaultPlatformMBeanProvider$11, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$11);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider$11::class$ = nullptr;

		} // management
	} // lang
} // java