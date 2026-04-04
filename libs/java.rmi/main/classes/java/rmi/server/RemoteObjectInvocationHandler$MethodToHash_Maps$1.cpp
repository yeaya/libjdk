#include <java/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps$1.h>
#include <java/lang/reflect/Method.h>
#include <java/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps.h>
#include <java/util/WeakHashMap.h>
#include <sun/rmi/server/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $RemoteObjectInvocationHandler$MethodToHash_Maps = ::java::rmi::server::RemoteObjectInvocationHandler$MethodToHash_Maps;
using $WeakHashMap = ::java::util::WeakHashMap;
using $Util = ::sun::rmi::server::Util;

namespace java {
	namespace rmi {
		namespace server {

void RemoteObjectInvocationHandler$MethodToHash_Maps$1::init$($RemoteObjectInvocationHandler$MethodToHash_Maps* this$0) {
	$set(this, this$0, this$0);
	$WeakHashMap::init$();
}

$Object* RemoteObjectInvocationHandler$MethodToHash_Maps$1::get(Object$* key) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Long, hash, $cast($Long, $WeakHashMap::get(key)));
		if (hash == nullptr) {
			$var($Method, method, $cast($Method, key));
			$assign(hash, $Long::valueOf($Util::computeMethodHash(method)));
			put(method, hash);
		}
		return $of(hash);
	}
}

RemoteObjectInvocationHandler$MethodToHash_Maps$1::RemoteObjectInvocationHandler$MethodToHash_Maps$1() {
}

$Class* RemoteObjectInvocationHandler$MethodToHash_Maps$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps;", nullptr, $FINAL | $SYNTHETIC, $field(RemoteObjectInvocationHandler$MethodToHash_Maps$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/server/RemoteObjectInvocationHandler$MethodToHash_Maps;)V", nullptr, 0, $method(RemoteObjectInvocationHandler$MethodToHash_Maps$1, init$, void, $RemoteObjectInvocationHandler$MethodToHash_Maps*)},
		{"get", "(Ljava/lang/Object;)Ljava/lang/Long;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(RemoteObjectInvocationHandler$MethodToHash_Maps$1, get, $Object*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps",
		"computeValue",
		"(Ljava/lang/Class;)Ljava/util/Map;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps", "java.rmi.server.RemoteObjectInvocationHandler", "MethodToHash_Maps", $PRIVATE | $STATIC},
		{"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.rmi.server.RemoteObjectInvocationHandler$MethodToHash_Maps$1",
		"java.util.WeakHashMap",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/util/WeakHashMap<Ljava/lang/reflect/Method;Ljava/lang/Long;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.rmi.server.RemoteObjectInvocationHandler"
	};
	$loadClass(RemoteObjectInvocationHandler$MethodToHash_Maps$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RemoteObjectInvocationHandler$MethodToHash_Maps$1);
	});
	return class$;
}

$Class* RemoteObjectInvocationHandler$MethodToHash_Maps$1::class$ = nullptr;

		} // server
	} // rmi
} // java