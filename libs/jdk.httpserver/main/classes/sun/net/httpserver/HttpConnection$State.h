#ifndef _sun_net_httpserver_HttpConnection$State_h_
#define _sun_net_httpserver_HttpConnection$State_h_
//$ class sun.net.httpserver.HttpConnection$State
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("IDLE")
#undef IDLE
#pragma push_macro("REQUEST")
#undef REQUEST
#pragma push_macro("RESPONSE")
#undef RESPONSE

namespace sun {
	namespace net {
		namespace httpserver {

class HttpConnection$State : public ::java::lang::Enum {
	$class(HttpConnection$State, 0, ::java::lang::Enum)
public:
	HttpConnection$State();
	static $Array<::sun::net::httpserver::HttpConnection$State>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::httpserver::HttpConnection$State* valueOf($String* name);
	static $Array<::sun::net::httpserver::HttpConnection$State>* values();
	static ::sun::net::httpserver::HttpConnection$State* IDLE;
	static ::sun::net::httpserver::HttpConnection$State* REQUEST;
	static ::sun::net::httpserver::HttpConnection$State* RESPONSE;
	static $Array<::sun::net::httpserver::HttpConnection$State>* $VALUES;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("IDLE")
#pragma pop_macro("REQUEST")
#pragma pop_macro("RESPONSE")

#endif // _sun_net_httpserver_HttpConnection$State_h_