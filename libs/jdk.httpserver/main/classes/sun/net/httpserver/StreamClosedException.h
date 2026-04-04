#ifndef _sun_net_httpserver_StreamClosedException_h_
#define _sun_net_httpserver_StreamClosedException_h_
//$ class sun.net.httpserver.StreamClosedException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace net {
		namespace httpserver {

class StreamClosedException : public ::java::io::IOException {
	$class(StreamClosedException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	StreamClosedException();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xc1bece29ec940fff;
	StreamClosedException(const StreamClosedException& e);
	virtual void throw$() override;
	inline StreamClosedException* operator ->() const {
		return (StreamClosedException*)throwing$;
	}
	inline operator StreamClosedException*() const {
		return (StreamClosedException*)throwing$;
	}
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_StreamClosedException_h_