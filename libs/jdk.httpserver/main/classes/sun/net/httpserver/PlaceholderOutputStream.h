#ifndef _sun_net_httpserver_PlaceholderOutputStream_h_
#define _sun_net_httpserver_PlaceholderOutputStream_h_
//$ class sun.net.httpserver.PlaceholderOutputStream
//$ extends java.io.OutputStream

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>

namespace sun {
	namespace net {
		namespace httpserver {

class PlaceholderOutputStream : public ::java::io::OutputStream {
	$class(PlaceholderOutputStream, $NO_CLASS_INIT, ::java::io::OutputStream)
public:
	PlaceholderOutputStream();
	void init$(::java::io::OutputStream* os);
	void checkWrap();
	virtual void close() override;
	virtual void flush() override;
	virtual bool isWrapped();
	virtual void setWrappedStream(::java::io::OutputStream* os);
	virtual void write(int32_t b) override;
	virtual void write($bytes* b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	::java::io::OutputStream* wrapped = nullptr;
};

		} // httpserver
	} // net
} // sun

#endif // _sun_net_httpserver_PlaceholderOutputStream_h_