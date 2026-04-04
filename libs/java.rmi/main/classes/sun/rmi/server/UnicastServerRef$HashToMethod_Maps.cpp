#include <sun/rmi/server/UnicastServerRef$HashToMethod_Maps.h>
#include <java/lang/reflect/Method.h>
#include <java/rmi/Remote.h>
#include <java/security/AccessController.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/rmi/server/UnicastServerRef$HashToMethod_Maps$1.h>
#include <sun/rmi/server/UnicastServerRef.h>
#include <sun/rmi/server/Util.h>
#include <sun/rmi/server/WeakClassHashMap.h>
#include <jcpp.h>

using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Remote = ::java::rmi::Remote;
using $AccessController = ::java::security::AccessController;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $UnicastServerRef$HashToMethod_Maps$1 = ::sun::rmi::server::UnicastServerRef$HashToMethod_Maps$1;
using $Util = ::sun::rmi::server::Util;
using $WeakClassHashMap = ::sun::rmi::server::WeakClassHashMap;

namespace sun {
	namespace rmi {
		namespace server {

void UnicastServerRef$HashToMethod_Maps::init$() {
	$WeakClassHashMap::init$();
}

$Object* UnicastServerRef$HashToMethod_Maps::computeValue($Class* remoteClass) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($Map, map, $new($HashMap));
	{
		$Class* cl = remoteClass;
		for (; cl != nullptr; cl = cl->getSuperclass()) {
			$var($ClassArray, arr$, cl->getInterfaces());
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$Class* intf = arr$->get(i$);
				$load($Remote);
				if ($Remote::class$->isAssignableFrom(intf)) {
					$var($MethodArray, arr$, $nc(intf)->getMethods());
					for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
						$var($Method, method, arr$->get(i$));
						{
							$var($Method, m, method);
							$AccessController::doPrivileged($$new($UnicastServerRef$HashToMethod_Maps$1, this, m));
							map->put($($Long::valueOf($Util::computeMethodHash(m))), m);
						}
					}
				}
			}
		}
	}
	return map;
}

UnicastServerRef$HashToMethod_Maps::UnicastServerRef$HashToMethod_Maps() {
}

$Class* UnicastServerRef$HashToMethod_Maps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UnicastServerRef$HashToMethod_Maps, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/Long;Ljava/lang/reflect/Method;>;", $PROTECTED, $virtualMethod(UnicastServerRef$HashToMethod_Maps, computeValue, $Object*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.server.UnicastServerRef$HashToMethod_Maps", "sun.rmi.server.UnicastServerRef", "HashToMethod_Maps", $PRIVATE | $STATIC},
		{"sun.rmi.server.UnicastServerRef$HashToMethod_Maps$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.server.UnicastServerRef$HashToMethod_Maps",
		"sun.rmi.server.WeakClassHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/rmi/server/WeakClassHashMap<Ljava/util/Map<Ljava/lang/Long;Ljava/lang/reflect/Method;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.server.UnicastServerRef"
	};
	$loadClass(UnicastServerRef$HashToMethod_Maps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UnicastServerRef$HashToMethod_Maps);
	});
	return class$;
}

$Class* UnicastServerRef$HashToMethod_Maps::class$ = nullptr;

		} // server
	} // rmi
} // sun