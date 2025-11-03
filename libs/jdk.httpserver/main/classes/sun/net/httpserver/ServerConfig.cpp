#include <sun/net/httpserver/ServerConfig.h>

#include <java/lang/System$Logger.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/net/httpserver/ServerConfig$1.h>
#include <sun/net/httpserver/ServerConfig$2.h>
#include <jcpp.h>

#undef DEFAULT_CLOCK_TICK
#undef DEFAULT_DRAIN_AMOUNT
#undef DEFAULT_IDLE_INTERVAL
#undef DEFAULT_MAX_IDLE_CONNECTIONS
#undef DEFAULT_MAX_REQ_HEADERS
#undef DEFAULT_MAX_REQ_TIME
#undef DEFAULT_MAX_RSP_TIME
#undef DEFAULT_TIMER_MILLIS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ServerConfig$1 = ::sun::net::httpserver::ServerConfig$1;
using $ServerConfig$2 = ::sun::net::httpserver::ServerConfig$2;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerConfig_FieldInfo_[] = {
	{"DEFAULT_CLOCK_TICK", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_CLOCK_TICK)},
	{"DEFAULT_IDLE_INTERVAL", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_IDLE_INTERVAL)},
	{"DEFAULT_MAX_IDLE_CONNECTIONS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_MAX_IDLE_CONNECTIONS)},
	{"DEFAULT_MAX_REQ_TIME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_MAX_REQ_TIME)},
	{"DEFAULT_MAX_RSP_TIME", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_MAX_RSP_TIME)},
	{"DEFAULT_TIMER_MILLIS", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_TIMER_MILLIS)},
	{"DEFAULT_MAX_REQ_HEADERS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_MAX_REQ_HEADERS)},
	{"DEFAULT_DRAIN_AMOUNT", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ServerConfig, DEFAULT_DRAIN_AMOUNT)},
	{"clockTick", "I", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, clockTick)},
	{"idleInterval", "J", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, idleInterval)},
	{"drainAmount", "J", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, drainAmount)},
	{"maxIdleConnections", "I", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, maxIdleConnections)},
	{"maxReqHeaders", "I", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, maxReqHeaders)},
	{"maxReqTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, maxReqTime)},
	{"maxRspTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, maxRspTime)},
	{"timerMillis", "J", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, timerMillis)},
	{"debug", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, debug)},
	{"noDelay", "Z", nullptr, $PRIVATE | $STATIC, $staticField(ServerConfig, noDelay$)},
	{}
};

$MethodInfo _ServerConfig_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServerConfig::*)()>(&ServerConfig::init$))},
	{"checkLegacyProperties", "(Ljava/lang/System$Logger;)V", nullptr, $STATIC, $method(static_cast<void(*)($System$Logger*)>(&ServerConfig::checkLegacyProperties))},
	{"debugEnabled", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&ServerConfig::debugEnabled))},
	{"getClockTick", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&ServerConfig::getClockTick))},
	{"getDrainAmount", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ServerConfig::getDrainAmount))},
	{"getIdleInterval", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ServerConfig::getIdleInterval))},
	{"getMaxIdleConnections", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&ServerConfig::getMaxIdleConnections))},
	{"getMaxReqHeaders", "()I", nullptr, $STATIC, $method(static_cast<int32_t(*)()>(&ServerConfig::getMaxReqHeaders))},
	{"getMaxReqTime", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ServerConfig::getMaxReqTime))},
	{"getMaxRspTime", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ServerConfig::getMaxRspTime))},
	{"getTimerMillis", "()J", nullptr, $STATIC, $method(static_cast<int64_t(*)()>(&ServerConfig::getTimerMillis))},
	{"noDelay", "()Z", nullptr, $STATIC, $method(static_cast<bool(*)()>(&ServerConfig::noDelay))},
	{}
};

$InnerClassInfo _ServerConfig_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerConfig$2", nullptr, nullptr, 0},
	{"sun.net.httpserver.ServerConfig$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServerConfig_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerConfig",
	"java.lang.Object",
	nullptr,
	_ServerConfig_FieldInfo_,
	_ServerConfig_MethodInfo_,
	nullptr,
	nullptr,
	_ServerConfig_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerConfig$2,sun.net.httpserver.ServerConfig$1"
};

$Object* allocate$ServerConfig($Class* clazz) {
	return $of($alloc(ServerConfig));
}

int32_t ServerConfig::clockTick = 0;
int64_t ServerConfig::idleInterval = 0;
int64_t ServerConfig::drainAmount = 0;
int32_t ServerConfig::maxIdleConnections = 0;
int32_t ServerConfig::maxReqHeaders = 0;
int64_t ServerConfig::maxReqTime = 0;
int64_t ServerConfig::maxRspTime = 0;
int64_t ServerConfig::timerMillis = 0;
bool ServerConfig::debug = false;
bool ServerConfig::noDelay$ = false;

void ServerConfig::init$() {
}

void ServerConfig::checkLegacyProperties($System$Logger* logger) {
	$init(ServerConfig);
	$beforeCallerSensitive();
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServerConfig$2, logger)));
}

bool ServerConfig::debugEnabled() {
	$init(ServerConfig);
	return ServerConfig::debug;
}

int64_t ServerConfig::getIdleInterval() {
	$init(ServerConfig);
	return ServerConfig::idleInterval;
}

int32_t ServerConfig::getClockTick() {
	$init(ServerConfig);
	return ServerConfig::clockTick;
}

int32_t ServerConfig::getMaxIdleConnections() {
	$init(ServerConfig);
	return ServerConfig::maxIdleConnections;
}

int64_t ServerConfig::getDrainAmount() {
	$init(ServerConfig);
	return ServerConfig::drainAmount;
}

int32_t ServerConfig::getMaxReqHeaders() {
	$init(ServerConfig);
	return ServerConfig::maxReqHeaders;
}

int64_t ServerConfig::getMaxReqTime() {
	$init(ServerConfig);
	return ServerConfig::maxReqTime;
}

int64_t ServerConfig::getMaxRspTime() {
	$init(ServerConfig);
	return ServerConfig::maxRspTime;
}

int64_t ServerConfig::getTimerMillis() {
	$init(ServerConfig);
	return ServerConfig::timerMillis;
}

bool ServerConfig::noDelay() {
	$init(ServerConfig);
	return ServerConfig::noDelay$;
}

void clinit$ServerConfig($Class* class$) {
	$beforeCallerSensitive();
	{
		$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($ServerConfig$1)));
	}
}

ServerConfig::ServerConfig() {
}

$Class* ServerConfig::load$($String* name, bool initialize) {
	$loadClass(ServerConfig, name, initialize, &_ServerConfig_ClassInfo_, clinit$ServerConfig, allocate$ServerConfig);
	return class$;
}

$Class* ServerConfig::class$ = nullptr;

		} // httpserver
	} // net
} // sun