#include <java/lang/management/DefaultPlatformMBeanProvider$10.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/management/BufferPoolMXBean.h>
#include <java/lang/management/DefaultPlatformMBeanProvider.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Consumer.h>
#include <java/util/stream/Stream.h>
#include <javax/management/ObjectName.h>
#include <sun/management/ManagementFactoryHelper.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $BufferPoolMXBean = ::java::lang::management::BufferPoolMXBean;
using $DefaultPlatformMBeanProvider = ::java::lang::management::DefaultPlatformMBeanProvider;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Consumer = ::java::util::function::Consumer;
using $ManagementFactoryHelper = ::sun::management::ManagementFactoryHelper;

namespace java {
	namespace lang {
		namespace management {

class DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0 : public $Consumer {
	$class(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, $NO_CLASS_INIT, $Consumer)
public:
	void init$($Map* map) {
		$set(this, map, map);
	}
	virtual void accept(Object$* mbean) override {
		DefaultPlatformMBeanProvider$10::lambda$nameToMBeanMap$0(map, $cast($BufferPoolMXBean, mbean));
	}
	$Map* map = nullptr;
};
$Class* DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"map", "Ljava/util/Map;", nullptr, $PUBLIC, $field(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, map)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Map;)V", nullptr, $PUBLIC, $method(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, init$, void, $Map*)},
		{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, accept, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.lang.management.DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0",
		"java.lang.Object",
		"java.util.function.Consumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0);
	});
	return class$;
}
$Class* DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::class$ = nullptr;

void DefaultPlatformMBeanProvider$10::init$($DefaultPlatformMBeanProvider* this$0) {
	$set(this, this$0, this$0);
	$set(this, bufferPoolMXBeanInterfaceNames, $Collections::singleton("java.lang.management.BufferPoolMXBean"_s));
}

$Set* DefaultPlatformMBeanProvider$10::mbeanInterfaces() {
	$load($BufferPoolMXBean);
	return $Collections::singleton($BufferPoolMXBean::class$);
}

$Set* DefaultPlatformMBeanProvider$10::mbeanInterfaceNames() {
	return this->bufferPoolMXBeanInterfaceNames;
}

$String* DefaultPlatformMBeanProvider$10::getObjectNamePattern() {
	return "java.nio:type=BufferPool,name=*"_s;
}

bool DefaultPlatformMBeanProvider$10::isSingleton() {
	return false;
}

$Map* DefaultPlatformMBeanProvider$10::nameToMBeanMap() {
	$useLocalObjectStack();
	$var($List, list, $ManagementFactoryHelper::getBufferPoolMXBeans());
	$var($Map, map, nullptr);
	if ($nc(list)->isEmpty()) {
		$assign(map, $Collections::emptyMap());
	} else {
		$assign(map, $new($HashMap, list->size()));
		$$nc(list->stream())->forEach($$new(DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0, map));
	}
	return map;
}

void DefaultPlatformMBeanProvider$10::lambda$nameToMBeanMap$0($Map* map, $BufferPoolMXBean* mbean) {
	$init(DefaultPlatformMBeanProvider$10);
	$useLocalObjectStack();
	$nc(map)->put($($$nc($nc(mbean)->getObjectName())->getCanonicalName()), mbean);
}

DefaultPlatformMBeanProvider$10::DefaultPlatformMBeanProvider$10() {
}

$Class* DefaultPlatformMBeanProvider$10::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.lang.management.DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0")) {
			return DefaultPlatformMBeanProvider$10$$Lambda$lambda$nameToMBeanMap$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/lang/management/DefaultPlatformMBeanProvider;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultPlatformMBeanProvider$10, this$0)},
		{"bufferPoolMXBeanInterfaceNames", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(DefaultPlatformMBeanProvider$10, bufferPoolMXBeanInterfaceNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/management/DefaultPlatformMBeanProvider;)V", nullptr, 0, $method(DefaultPlatformMBeanProvider$10, init$, void, $DefaultPlatformMBeanProvider*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10, getObjectNamePattern, $String*)},
		{"isSingleton", "()Z", nullptr, $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10, isSingleton, bool)},
		{"lambda$nameToMBeanMap$0", "(Ljava/util/Map;Ljava/lang/management/BufferPoolMXBean;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DefaultPlatformMBeanProvider$10, lambda$nameToMBeanMap$0, void, $Map*, $BufferPoolMXBean*)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+Ljava/lang/management/BufferPoolMXBean;>;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/management/BufferPoolMXBean;>;", $PUBLIC, $virtualMethod(DefaultPlatformMBeanProvider$10, nameToMBeanMap, $Map*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.lang.management.DefaultPlatformMBeanProvider",
		"init",
		"()Ljava/util/List;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.lang.management.DefaultPlatformMBeanProvider$10", nullptr, nullptr, 0},
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.lang.management.DefaultPlatformMBeanProvider$10",
		"java.lang.Object",
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lsun/management/spi/PlatformMBeanProvider$PlatformComponent<Ljava/lang/management/BufferPoolMXBean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.lang.management.DefaultPlatformMBeanProvider"
	};
	$loadClass(DefaultPlatformMBeanProvider$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultPlatformMBeanProvider$10);
	});
	return class$;
}

$Class* DefaultPlatformMBeanProvider$10::class$ = nullptr;

		} // management
	} // lang
} // java