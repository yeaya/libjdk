#ifndef _sun_net_httpserver_ChunkedOutputStream_h_
#define _sun_net_httpserver_ChunkedOutputStream_h_
//$ class sun.net.httpserver.ChunkedOutputStream
//$ extends java.io.FilterOutputStream

#include <java/io/FilterOutputStream.h>
#include <java/lang/Array.h>

#pragma push_macro("CHUNK_SIZE")
#undef CHUNK_SIZE
#pragma push_macro("OFFSET")
#undef OFFSET

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace sun {
	namespace net {
		namespace httpserver {
			class ExchangeImpl;
		}
	}
}

namespace sun {
	namespace net {
		namespace httpserver {

class ChunkedOutputStream : public ::java::io::FilterOutputStream {
	$class(ChunkedOutputStream, 0, ::java::io::FilterOutputStream)
public:
	ChunkedOutputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::OutputStream* src);
	virtual void close() override;
	virtual void flush() override;
	using ::java::io::FilterOutputStream::write;
	virtual void write(int32_t b) override;
	virtual void write($bytes* b, int32_t off, int32_t len) override;
	void writeChunk();
	static bool $assertionsDisabled;
	bool closed = false;
	static const int32_t CHUNK_SIZE = 4096;
	static const int32_t OFFSET = 6;
	int32_t pos = 0;
	int32_t count = 0;
	$bytes* buf = nullptr;
	::sun::net::httpserver::ExchangeImpl* t = nullptr;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("CHUNK_SIZE")
#pragma pop_macro("OFFSET")

#endif // _sun_net_httpserver_ChunkedOutputStream_h_