#ifndef _sun_net_httpserver_TimeSource_h_
#define _sun_net_httpserver_TimeSource_h_
//$ interface sun.net.httpserver.TimeSource
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace net {
		namespace httpserver {

class TimeSource : public ::java::lang::Object {
	$interface(TimeSource, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int64_t getTime() {return 0;}
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_TimeSource_h_