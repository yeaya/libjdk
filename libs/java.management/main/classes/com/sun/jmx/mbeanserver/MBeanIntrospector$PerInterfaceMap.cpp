#include <com/sun/jmx/mbeanserver/MBeanIntrospector$PerInterfaceMap.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
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

void MBeanIntrospector$PerInterfaceMap::init$() {
	$WeakHashMap::init$();
}

MBeanIntrospector$PerInterfaceMap::MBeanIntrospector$PerInterfaceMap() {
}

$Class* MBeanIntrospector$PerInterfaceMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MBeanIntrospector$PerInterfaceMap, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "PerInterfaceMap", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.MBeanIntrospector$PerInterfaceMap",
		"java.util.WeakHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"<M:Ljava/lang/Object;>Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/lang/ref/WeakReference<Lcom/sun/jmx/mbeanserver/PerInterface<TM;>;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MBeanIntrospector"
	};
	$loadClass(MBeanIntrospector$PerInterfaceMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanIntrospector$PerInterfaceMap);
	});
	return class$;
}

$Class* MBeanIntrospector$PerInterfaceMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com