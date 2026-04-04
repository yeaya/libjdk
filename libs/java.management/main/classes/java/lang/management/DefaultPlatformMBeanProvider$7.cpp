#include <java/lang/management/DefaultPlatformMBeanProvider$7.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/RuntimeMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef RUNTIME_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $RuntimeMXBean = ::java::lang::management::RuntimeMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace java {
	namespace lang {
		namespace management {

void DefaultPlatformMBeanProvider$7::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, runtimeMXBeanInterfaceNames, $Collections::singleton("java.lang.management.RuntimeMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$7::mbeanInterfaces() {
	$load($RuntimeMXBean);
	return $Collections::singleton($RuntimeMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$7::mbeanInterfaceNames() {
	return this->runtimeMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$7::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::RUNTIME_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$7::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::RUNTIME_MXBEAN_NAME, $($ManagementFactoryHelper::getRuntimeMXBean()));
}

DefaultPlatformMBeanProvider$7::DefaultPlatformMBeanProvider$7() {
}

$Class* DefaultPlatformMBeanProvider$7::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$7, this$0)},
		{"runtimeMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$7, runtimeMXBeanInterfaceNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(DefaultPlatformMBeanProvider$7, init$, void, $DefaultPlatformMBeanProvider*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$7, getObjectNamePattern, $String*)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$7, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/RuntimeMXBean;>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$7, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/RuntimeMXBean;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$7, nameToMBeanMap, $Map*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.DefaultPlatformMBeanProvider",
		"init",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$7", nullptr, nullptr, 0},
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider$7",
		"java.lang.Object",
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/RuntimeMXBean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider"
	};
	$loadClass(DefaultPlatformMBeanProvider$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$7);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider$7::class$ = nullptr;

		} // management
	} // lang
} // java