#ifndef _java_net_http_HttpTimeoutException_h_
#define _java_net_http_HttpTimeoutException_h_
//$ class java.net.http.HttpTimeoutException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace java {
	namespace net {
		namespace http {

class $import HttpTimeoutException : public ::java::io::IOException {
	$class(HttpTimeoutException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	HttpTimeoutException();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x0d9e6f6a686e75f7;
	HttpTimeoutException(const HttpTimeoutException& e);
	virtual void throw$() override;
	inline HttpTimeoutException* operator ->() const {
		return (HttpTimeoutException*)throwing$;
	}
	inline operator HttpTimeoutException*() const {
		return (HttpTimeoutException*)throwing$;
	}
};

		} // http
	} // net
} // java

#endif // _java_net_http_HttpTimeoutException_h_