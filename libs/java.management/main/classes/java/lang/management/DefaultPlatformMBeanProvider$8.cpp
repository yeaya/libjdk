#include <java/lang/management/DefaultPlatformMBeanProvider$8.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/lang/management/ThreadMXBean.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef THREAD_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $ThreadMXBean = ::java::lang::management::ThreadMXBean;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace java {
	namespace lang {
		namespace management {

void DefaultPlatformMBeanProvider$8::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, threadMXBeanInterfaceNames, $Collections::singleton("java.lang.management.ThreadMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$8::mbeanInterfaces() {
	$load($ThreadMXBean);
	return $Collections::singleton($ThreadMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$8::mbeanInterfaceNames() {
	return this->threadMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$8::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::THREAD_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$8::nameToMBeanMap() {
	$init($ManagementFactory);
	return $Collections::singletonMap($ManagementFactory::THREAD_MXBEAN_NAME, $($ManagementFactoryHelper::getThreadMXBean()));
}

DefaultPlatformMBeanProvider$8::DefaultPlatformMBeanProvider$8() {
}

$Class* DefaultPlatformMBeanProvider$8::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$8, this$0)},
		{"threadMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$8, threadMXBeanInterfaceNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(DefaultPlatformMBeanProvider$8, init$, void, $DefaultPlatformMBeanProvider*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$8, getObjectNamePattern, $String*)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$8, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/ThreadMXBean;>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$8, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/ThreadMXBean;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$8, nameToMBeanMap, $Map*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.DefaultPlatformMBeanProvider",
		"init",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$8", nullptr, nullptr, 0},
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider$8",
		"java.lang.Object",
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/ThreadMXBean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider"
	};
	$loadClass(DefaultPlatformMBeanProvider$8, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$8);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider$8::class$ = nullptr;

		} // management
	} // lang
} // java