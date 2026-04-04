#include <java/lang/management/DefaultPlatformMBeanProvider$2.h>
#include <java/lang/management/CompilationMXBean.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/lang/management/ManagementFactory.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

#undef COMPILATION_MXBEAN_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompilationMXBean = ::java::lang::management::CompilationMXBean;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $ManagementFactory = ::java::lang::management::ManagementFactory;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace java {
	namespace lang {
		namespace management {

void DefaultPlatformMBeanProvider$2::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, compilationMXBeanInterfaceNames, $Collections::singleton("java.lang.management.CompilationMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$2::mbeanInterfaces() {
	$load($CompilationMXBean);
	return $Collections::singleton($CompilationMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$2::mbeanInterfaceNames() {
	return this->compilationMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$2::getObjectNamePattern() {
	$init($ManagementFactory);
	return $ManagementFactory::COMPILATION_MXBEAN_NAME;
}

$Map* DefaultPlatformMBeanProvider$2::nameToMBeanMap() {
	$useLocalObjectStack();
	$var($CompilationMXBean, m, $ManagementFactoryHelper::getCompilationMXBean());
	if (m == nullptr) {
		return $Collections::emptyMap();
	} else {
		$init($ManagementFactory);
		return $Collections::singletonMap($ManagementFactory::COMPILATION_MXBEAN_NAME, $($ManagementFactoryHelper::getCompilationMXBean()));
	}
}

DefaultPlatformMBeanProvider$2::DefaultPlatformMBeanProvider$2() {
}

$Class* DefaultPlatformMBeanProvider$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$2, this$0)},
		{"compilationMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$2, compilationMXBeanInterfaceNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(DefaultPlatformMBeanProvider$2, init$, void, $DefaultPlatformMBeanProvider*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$2, getObjectNamePattern, $String*)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$2, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/CompilationMXBean;>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$2, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/CompilationMXBean;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$2, nameToMBeanMap, $Map*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.DefaultPlatformMBeanProvider",
		"init",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$2", nullptr, nullptr, 0},
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider$2",
		"java.lang.Object",
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/CompilationMXBean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider"
	};
	$loadClass(DefaultPlatformMBeanProvider$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$2);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider$2::class$ = nullptr;

		} // management
	} // lang
} // java