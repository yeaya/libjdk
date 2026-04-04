#include <java/beans/EventHandler$2.h>
#include <java/beans/EventHandler.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/reflect/Proxy.h>
#include <jcpp.h>

using $EventHandler = ::java::beans::EventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Proxy = ::java::lang::reflect::Proxy;

namespace java {
	namespace beans {

void EventHandler$2::init$($ClassLoader* val$loader, $ClassArray* val$interfaces, $EventHandler* val$handler) {
	$set(this, val$loader, val$loader);
	$set(this, val$interfaces, val$interfaces);
	$set(this, val$handler, val$handler);
}

$Object* EventHandler$2::run() {
	$beforeCallerSensitive();
	return $Proxy::newProxyInstance(this->val$loader, this->val$interfaces, this->val$handler);
}

EventHandler$2::EventHandler$2() {
}

$Class* EventHandler$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$handler", "Ljava/beans/EventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$handler)},
		{"val$interfaces", "[Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$interfaces)},
		{"val$loader", "Ljava/lang/ClassLoader;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$2, val$loader)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/ClassLoader;[Ljava/lang/Class;Ljava/beans/EventHandler;)V", "()V", 0, $method(EventHandler$2, init$, void, $ClassLoader*, $ClassArray*, $EventHandler*)},
		{"run", "()Ljava/lang/Object;", "()TT;", $PUBLIC, $virtualMethod(EventHandler$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.EventHandler",
		"create",
		"(Ljava/lang/Class;Ljava/lang/Object;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.EventHandler$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.EventHandler$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<TT;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.EventHandler"
	};
	$loadClass(EventHandler$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventHandler$2);
	});
	return class$;
}

$Class* EventHandler$2::class$ = nullptr;

	} // beans
} // java