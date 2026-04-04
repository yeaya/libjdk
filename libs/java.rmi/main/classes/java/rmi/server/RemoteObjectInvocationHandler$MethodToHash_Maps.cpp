#include <java/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps.h>
#include <java/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps$1.h>
#include <java/rmi/server/RemoteObjectInvocationHandler.h>
#include <sun/rmi/server/WeakClassHashMap.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RemoteObjectInvocationHandler$MethodToHash_Maps$1 = ::java::rmi::server::RemoteObjectInvocationHandler$MethodToHash_Maps$1;
using $WeakClassHashMap = ::sun::rmi::server::WeakClassHashMap;

namespace java {
	namespace rmi {
		namespace server {

void RemoteObjectInvocationHandler$MethodToHash_Maps::init$() {
	$WeakClassHashMap::init$();
}

$Object* RemoteObjectInvocationHandler$MethodToHash_Maps::computeValue($Class* remoteClass) {
	return $new($RemoteObjectInvocationHandler$MethodToHash_Maps$1, this);
}

RemoteObjectInvocationHandler$MethodToHash_Maps::RemoteObjectInvocationHandler$MethodToHash_Maps() {
}

$Class* RemoteObjectInvocationHandler$MethodToHash_Maps::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RemoteObjectInvocationHandler$MethodToHash_Maps, init$, void)},
		{"computeValue", "(Ljava/lang/Class;)Ljava/util/Map;", "(Ljava/lang/Class<*>;)Ljava/util/Map<Ljava/lang/reflect/Method;Ljava/lang/Long;>;", $PROTECTED, $virtualMethod(RemoteObjectInvocationHandler$MethodToHash_Maps, computeValue, $Object*, $Class*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps", "java.rmi.server.RemoteObjectInvocationHandler", "MethodToHash_Maps", $PRIVATE | $STATIC},
		{"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps",
		"sun.rmi.server.WeakClassHashMap",
		nullptr,
		nullptr,
		methodInfos$$,
		"Lsun/rmi/server/WeakClassHashMap<Ljava/util/Map<Ljava/lang/reflect/Method;Ljava/lang/Long;>;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.rmi.server.RemoteObjectInvocationHandler"
	};
	$loadClass(RemoteObjectInvocationHandler$MethodToHash_Maps, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RemoteObjectInvocationHandler$MethodToHash_Maps);
	});
	return class$;
}

$Class* RemoteObjectInvocationHandler$MethodToHash_Maps::class$ = nullptr;

		} // server
	} // rmi
} // java