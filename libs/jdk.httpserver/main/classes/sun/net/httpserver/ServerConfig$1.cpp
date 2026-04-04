#include <sun/net/httpserver/ServerConfig$1.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;

namespace sun {
	namespace net {
		namespace httpserver {

void ServerConfig$1::init$() {
}

$Object* ServerConfig$1::run() {
	$useLocalObjectStack();
	$init($ServerConfig);
	$ServerConfig::idleInterval = $$nc($Long::getLong("sun.net.httpserver.idleInterval"_s, 30))->longValue() * 1000;
	$ServerConfig::clockTick = $$nc($Integer::getInteger("sun.net.httpserver.clockTick"_s, 10000))->intValue();
	$ServerConfig::maxIdleConnections = $$nc($Integer::getInteger("sun.net.httpserver.maxIdleConnections"_s, 200))->intValue();
	$ServerConfig::drainAmount = $$nc($Long::getLong("sun.net.httpserver.drainAmount"_s, 65536))->longValue();
	$ServerConfig::maxReqHeaders = $$nc($Integer::getInteger("sun.net.httpserver.maxReqHeaders"_s, 200))->intValue();
	$ServerConfig::maxReqTime = $$nc($Long::getLong("sun.net.httpserver.maxReqTime"_s, -1))->longValue();
	$ServerConfig::maxRspTime = $$nc($Long::getLong("sun.net.httpserver.maxRspTime"_s, -1))->longValue();
	$ServerConfig::timerMillis = $$nc($Long::getLong("sun.net.httpserver.timerMillis"_s, 1000))->longValue();
	$ServerConfig::debug = $Boolean::getBoolean("sun.net.httpserver.debug"_s);
	$ServerConfig::noDelay$ = $Boolean::getBoolean("sun.net.httpserver.nodelay"_s);
	return nullptr;
}

ServerConfig$1::ServerConfig$1() {
}

$Class* ServerConfig$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ServerConfig$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ServerConfig$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.httpserver.ServerConfig",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.ServerConfig$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.ServerConfig$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.ServerConfig"
	};
	$loadClass(ServerConfig$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerConfig$1);
	});
	return class$;
}

$Class* ServerConfig$1::class$ = nullptr;

		} // httpserver
	} // net
} // sun