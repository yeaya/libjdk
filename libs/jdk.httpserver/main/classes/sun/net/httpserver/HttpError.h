#ifndef _sun_net_httpserver_HttpError_h_
#define _sun_net_httpserver_HttpError_h_
//$ class sun.net.httpserver.HttpError
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace net {
		namespace httpserver {

class HttpError : public ::java::lang::RuntimeException {
	$class(HttpError, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	HttpError();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x79B3DD6FB9863C03;
	HttpError(const HttpError& e);
	virtual void throw$() override;
	inline HttpError* operator ->() {
		return (HttpError*)throwing$;
	}
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_HttpError_h_