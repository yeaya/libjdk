#include <com/sun/jmx/mbeanserver/MBeanIntrospector$MBeanInfoMap.h>
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

void MBeanIntrospector$MBeanInfoMap::init$() {
	$WeakHashMap::init$();
}

MBeanIntrospector$MBeanInfoMap::MBeanIntrospector$MBeanInfoMap() {
}

$Class* MBeanIntrospector$MBeanInfoMap::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MBeanIntrospector$MBeanInfoMap, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap", "com.sun.jmx.mbeanserver.MBeanIntrospector", "MBeanInfoMap", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MBeanIntrospector$MBeanInfoMap",
		"java.util.WeakHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljava/util/WeakHashMap<Ljava/lang/Class<*>;Ljavax/management/MBeanInfo;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MBeanIntrospector"
	};
	$loadClass(MBeanIntrospector$MBeanInfoMap, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MBeanIntrospector$MBeanInfoMap);
	});
	return class$;
}

$Class* MBeanIntrospector$MBeanInfoMap::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com