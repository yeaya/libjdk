#include <ProxyServer$1.h>
#include <ProxyServer.h>
#include <jcpp.h>

using $ProxyServer = ::ProxyServer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void ProxyServer$1::init$($ProxyServer* this$0) {
	$set(this, this$0, this$0);
}

$Object* ProxyServer$1::run() {
	this->this$0->execute();
	return nullptr;
}

ProxyServer$1::ProxyServer$1() {
}

$Class* ProxyServer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LProxyServer;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyServer$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LProxyServer;)V", nullptr, 0, $method(ProxyServer$1, init$, void, $ProxyServer*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ProxyServer",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProxyServer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ProxyServer$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ProxyServer"
	};
	$loadClass(ProxyServer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$1);
	});
	return class$;
}

$Class* ProxyServer$1::class$ = nullptr;