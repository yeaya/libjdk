#ifndef _sun_net_httpserver_ChunkedInputStream_h_
#define _sun_net_httpserver_ChunkedInputStream_h_
//$ class sun.net.httpserver.ChunkedInputStream
//$ extends sun.net.httpserver.LeftOverInputStream

#include <java/lang/Array.h>
#include <sun/net/httpserver/LeftOverInputStream.h>

#pragma push_macro("CR")
#undef CR
#pragma push_macro("LF")
#undef LF
#pragma push_macro("MAX_CHUNK_HEADER_SIZE")
#undef MAX_CHUNK_HEADER_SIZE

namespace java {
	namespace io {
		class InputStream;
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

class ChunkedInputStream : public ::sun::net::httpserver::LeftOverInputStream {
	$class(ChunkedInputStream, 0, ::sun::net::httpserver::LeftOverInputStream)
public:
	ChunkedInputStream();
	void init$(::sun::net::httpserver::ExchangeImpl* t, ::java::io::InputStream* src);
	virtual int32_t available() override;
	void consumeCRLF();
	virtual bool isDataBuffered() override;
	virtual void mark(int32_t l) override;
	virtual bool markSupported() override;
	int32_t numeric($chars* arr, int32_t nchars);
	using ::sun::net::httpserver::LeftOverInputStream::read;
	int32_t readChunkHeader();
	virtual int32_t readImpl($bytes* b, int32_t off, int32_t len) override;
	virtual void reset() override;
	static bool $assertionsDisabled;
	int32_t remaining = 0;
	bool needToReadHeader = false;
	static const char16_t CR = ((char16_t)13);
	static const char16_t LF = ((char16_t)10);
	static const int32_t MAX_CHUNK_HEADER_SIZE = 2050;
};

		} // httpserver
	} // net
} // sun

#pragma pop_macro("CR")
#pragma pop_macro("LF")
#pragma pop_macro("MAX_CHUNK_HEADER_SIZE")

#endif // _sun_net_httpserver_ChunkedInputStream_h_