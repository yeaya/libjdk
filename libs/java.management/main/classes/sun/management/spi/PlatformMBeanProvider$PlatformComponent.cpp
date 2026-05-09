#include <sun/management/spi/PlatformMBeanProvider$PlatformComponent.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <sun/management/spi/PlatformMBeanProvider.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;

namespace sun {
	namespace management {
		namespace spi {

class PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance : public $Predicate {
	$class(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		return $nc(inst$)->isInstance(arg0);
	}
	$Class* inst$ = nullptr;
};
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, init$, void, $Class*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance);
	});
	return class$;
}
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::class$ = nullptr;

class PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1 : public $Function {
	$class(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, $NO_CLASS_INIT, $Function)
public:
	void init$($Class* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* arg0) override {
		return $nc(inst$)->cast(arg0);
	}
	$Class* inst$ = nullptr;
};
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", nullptr, $PUBLIC, $method(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, init$, void, $Class*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1);
	});
	return class$;
}
$Class* PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::class$ = nullptr;

bool PlatformMBeanProvider$PlatformComponent::isSingleton() {
	return true;
}

bool PlatformMBeanProvider$PlatformComponent::shouldRegister() {
	return true;
}

$List* PlatformMBeanProvider$PlatformComponent::getMBeans($Class* mbeanIntf) {
	$useLocalObjectStack();
	$var($List, list, nullptr);
	if (!$$nc(mbeanInterfaceNames())->contains($($nc(mbeanIntf)->getName()))) {
		$assign(list, $Collections::emptyList());
	} else {
		$assign(list, $cast($List, $$nc($$nc($$nc($$nc($$nc(nameToMBeanMap())->values())->stream())->filter($$new(PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance, mbeanIntf)))->map($$new(PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1, mbeanIntf)))->collect($($Collectors::toList()))));
	}
	return list;
}

$Class* PlatformMBeanProvider$PlatformComponent::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance")) {
			return PlatformMBeanProvider$PlatformComponent$$Lambda$isInstance::load$(name, initialize);
		}
		if (name->equals("sun.management.spi.PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1")) {
			return PlatformMBeanProvider$PlatformComponent$$Lambda$cast$1::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"getMBeans", "(Ljava/lang/Class;)Ljava/util/List;", "<I:Ljava/lang/Object;>(Ljava/lang/Class<TI;>;)Ljava/util/List<+TI;>;", $PUBLIC, $virtualMethod(PlatformMBeanProvider$PlatformComponent, getMBeans, $List*, $Class*)},
		{"getObjectNamePattern", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformMBeanProvider$PlatformComponent, getObjectNamePattern, $String*)},
		{"isSingleton", "()Z", nullptr, $PUBLIC, $virtualMethod(PlatformMBeanProvider$PlatformComponent, isSingleton, bool)},
		{"mbeanInterfaceNames", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformMBeanProvider$PlatformComponent, mbeanInterfaceNames, $Set*)},
		{"mbeanInterfaces", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/Class<+TT;>;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformMBeanProvider$PlatformComponent, mbeanInterfaces, $Set*)},
		{"nameToMBeanMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;TT;>;", $PUBLIC | $ABSTRACT, $virtualMethod(PlatformMBeanProvider$PlatformComponent, nameToMBeanMap, $Map*)},
		{"shouldRegister", "()Z", nullptr, $PUBLIC, $virtualMethod(PlatformMBeanProvider$PlatformComponent, shouldRegister, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.spi.PlatformMBeanProvider$PlatformComponent", "sun.management.spi.PlatformMBeanProvider", "PlatformComponent", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.management.spi.PlatformMBeanProvider$PlatformComponent",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/lang/Object;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.spi.PlatformMBeanProvider"
	};
	$loadClass(PlatformMBeanProvider$PlatformComponent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformMBeanProvider$PlatformComponent);
	});
	return class$;
}

$Class* PlatformMBeanProvider$PlatformComponent::class$ = nullptr;

		} // spi
	} // management
} // sun