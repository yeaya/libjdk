#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$Mappings.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <java/util/WeakHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakHashMap = ::java::util::WeakHashMap;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$Mappings::init$() {
	$WeakHashMap::init$();
}

DefaultMXBeanMappingFactory$Mappings::DefaultMXBeanMappingFactory$Mappings() {
}

$Class* DefaultMXBeanMappingFactory$Mappings::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DefaultMXBeanMappingFactory$Mappings, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "Mappings", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$Mappings",
		"java.util.WeakHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/WeakHashMap<Ljava/lang/reflect/Type;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/MXBeanMapping;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$Mappings, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$Mappings);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$Mappings::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com