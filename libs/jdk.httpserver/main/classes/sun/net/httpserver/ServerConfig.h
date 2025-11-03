#ifndef _sun_net_httpserver_ServerConfig_h_
#define _sun_net_httpserver_ServerConfig_h_
//$ class sun.net.httpserver.ServerConfig
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DEFAULT_CLOCK_TICK")
#undef DEFAULT_CLOCK_TICK
#pragma push_macro("DEFAULT_DRAIN_AMOUNT")
#undef DEFAULT_DRAIN_AMOUNT
#pragma push_macro("DEFAULT_IDLE_INTERVAL")
#undef DEFAULT_IDLE_INTERVAL
#pragma push_macro("DEFAULT_MAX_IDLE_CONNECTIONS")
#undef DEFAULT_MAX_IDLE_CONNECTIONS
#pragma push_macro("DEFAULT_MAX_REQ_HEADERS")
#undef DEFAULT_MAX_REQ_HEADERS
#pragma push_macro("DEFAULT_MAX_REQ_TIME")
#undef DEFAULT_MAX_REQ_TIME
#pragma push_macro("DEFAULT_MAX_RSP_TIME")
#undef DEFAULT_MAX_RSP_TIME
#pragma push_macro("DEFAULT_TIMER_MILLIS")
#undef DEFAULT_TIMER_MILLIS

namespace java {
	namespace lang {
		class System$Logger;
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ServerConfig : public ::java::lang::Object {
	$class(ServerConfig, 0, ::java::lang::Object)
public:
	ServerConfig();
	void init$();
	static void checkLegacyProperties(::java::lang::System$Logger* logger);
	static bool debugEnabled();
	static int32_t getClockTick();
	static int64_t getDrainAmount();
	static int64_t getIdleInterval();
	static int32_t getMaxIdleConnections();
	static int32_t getMaxReqHeaders();
	static int64_t getMaxReqTime();
	static int64_t getMaxRspTime();
	static int64_t getTimerMillis();
	static bool noDelay();
	static const int32_t DEFAULT_CLOCK_TICK = 10000;
	static const int64_t DEFAULT_IDLE_INTERVAL = 30;
	static const int32_t DEFAULT_MAX_IDLE_CONNECTIONS = 200;
	static const int64_t DEFAULT_MAX_REQ_TIME = (-1);
	static const int64_t DEFAULT_MAX_RSP_TIME = (-1);
	static const int64_t DEFAULT_TIMER_MILLIS = 1000;
	static const int32_t DEFAULT_MAX_REQ_HEADERS = 200;
	static const int64_t DEFAULT_DRAIN_AMOUNT = 65536; // 64 * 1024
	static int32_t clockTick;
	static int64_t idleInterval;
	static int64_t drainAmount;
	static int32_t maxIdleConnections;
	static int32_t maxReqHeaders;
	static int64_t maxReqTime;
	static int64_t maxRspTime;
	static int64_t timerMillis;
	static bool debug;
	static bool noDelay$;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("DEFAULT_CLOCK_TICK")
#pragma pop_macro("DEFAULT_DRAIN_AMOUNT")
#pragma pop_macro("DEFAULT_IDLE_INTERVAL")
#pragma pop_macro("DEFAULT_MAX_IDLE_CONNECTIONS")
#pragma pop_macro("DEFAULT_MAX_REQ_HEADERS")
#pragma pop_macro("DEFAULT_MAX_REQ_TIME")
#pragma pop_macro("DEFAULT_MAX_RSP_TIME")
#pragma pop_macro("DEFAULT_TIMER_MILLIS")

#endif // _sun_net_httpserver_ServerConfig_h_