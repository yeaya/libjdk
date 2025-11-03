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
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;

namespace sun {
	namespace net {
		namespace httpserver {

$MethodInfo _ServerConfig$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServerConfig$1::*)()>(&ServerConfig$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServerConfig$1_EnclosingMethodInfo_ = {
	"sun.net.httpserver.ServerConfig",
	nullptr,
	nullptr
};

$InnerClassInfo _ServerConfig$1_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerConfig$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerConfig$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ServerConfig$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_ServerConfig$1_EnclosingMethodInfo_,
	_ServerConfig$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerConfig"
};

$Object* allocate$ServerConfig$1($Class* clazz) {
	return $of($alloc(ServerConfig$1));
}

void ServerConfig$1::init$() {
}

$Object* ServerConfig$1::run() {
	$useLocalCurrentObjectStackCache();
	$init($ServerConfig);
	$ServerConfig::idleInterval = $nc($($Long::getLong("sun.net.httpserver.idleInterval"_s, (int64_t)30)))->longValue() * 1000;
	$ServerConfig::clockTick = $nc($($Integer::getInteger("sun.net.httpserver.clockTick"_s, 10000)))->intValue();
	$ServerConfig::maxIdleConnections = $nc($($Integer::getInteger("sun.net.httpserver.maxIdleConnections"_s, 200)))->intValue();
	$ServerConfig::drainAmount = $nc($($Long::getLong("sun.net.httpserver.drainAmount"_s, (int64_t)65536)))->longValue();
	$ServerConfig::maxReqHeaders = $nc($($Integer::getInteger("sun.net.httpserver.maxReqHeaders"_s, 200)))->intValue();
	$ServerConfig::maxReqTime = $nc($($Long::getLong("sun.net.httpserver.maxReqTime"_s, (int64_t)-1)))->longValue();
	$ServerConfig::maxRspTime = $nc($($Long::getLong("sun.net.httpserver.maxRspTime"_s, (int64_t)-1)))->longValue();
	$ServerConfig::timerMillis = $nc($($Long::getLong("sun.net.httpserver.timerMillis"_s, (int64_t)1000)))->longValue();
	$ServerConfig::debug = $Boolean::getBoolean("sun.net.httpserver.debug"_s);
	$ServerConfig::noDelay$ = $Boolean::getBoolean("sun.net.httpserver.nodelay"_s);
	return $of(nullptr);
}

ServerConfig$1::ServerConfig$1() {
}

$Class* ServerConfig$1::load$($String* name, bool initialize) {
	$loadClass(ServerConfig$1, name, initialize, &_ServerConfig$1_ClassInfo_, allocate$ServerConfig$1);
	return class$;
}

$Class* ServerConfig$1::class$ = nullptr;

		} // httpserver
	} // net
} // sun