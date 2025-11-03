#ifndef _sun_net_httpserver_SSLStreams$BufType_h_
#define _sun_net_httpserver_SSLStreams$BufType_h_
//$ class sun.net.httpserver.SSLStreams$BufType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("APPLICATION")
#undef APPLICATION
#pragma push_macro("PACKET")
#undef PACKET

namespace sun {
	namespace net {
		namespace httpserver {

class SSLStreams$BufType : public ::java::lang::Enum {
	$class(SSLStreams$BufType, 0, ::java::lang::Enum)
public:
	SSLStreams$BufType();
	static $Array<::sun::net::httpserver::SSLStreams$BufType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::net::httpserver::SSLStreams$BufType* valueOf($String* name);
	static $Array<::sun::net::httpserver::SSLStreams$BufType>* values();
	static ::sun::net::httpserver::SSLStreams$BufType* PACKET;
	static ::sun::net::httpserver::SSLStreams$BufType* APPLICATION;
	static $Array<::sun::net::httpserver::SSLStreams$BufType>* $VALUES;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("APPLICATION")
#pragma pop_macro("PACKET")

#endif // _sun_net_httpserver_SSLStreams$BufType_h_