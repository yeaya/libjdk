#include <sun/net/httpserver/SSLStreams$InputStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLEngine.h>
#include <sun/net/httpserver/SSLStreams$BufType.h>
#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef APPLICATION

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;
using $SSLStreams$BufType = ::sun::net::httpserver::SSLStreams$BufType;
using $SSLStreams$WrapperResult = ::sun::net::httpserver::SSLStreams$WrapperResult;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams$InputStream_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$InputStream, this$0)},
	{"bbuf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$InputStream, bbuf)},
	{"closed", "Z", nullptr, 0, $field(SSLStreams$InputStream, closed)},
	{"eof", "Z", nullptr, 0, $field(SSLStreams$InputStream, eof)},
	{"needData", "Z", nullptr, 0, $field(SSLStreams$InputStream, needData)},
	{"single", "[B", nullptr, 0, $field(SSLStreams$InputStream, single)},
	{}
};

$MethodInfo _SSLStreams$InputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/SSLStreams;)V", nullptr, 0, $method(static_cast<void(SSLStreams$InputStream::*)($SSLStreams*)>(&SSLStreams$InputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([BII)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "([B)I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"skip", "(J)J", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLStreams$InputStream_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$InputStream", "sun.net.httpserver.SSLStreams", "InputStream", 0},
	{}
};

$ClassInfo _SSLStreams$InputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.SSLStreams$InputStream",
	"java.io.InputStream",
	nullptr,
	_SSLStreams$InputStream_FieldInfo_,
	_SSLStreams$InputStream_MethodInfo_,
	nullptr,
	nullptr,
	_SSLStreams$InputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$InputStream($Class* clazz) {
	return $of($alloc(SSLStreams$InputStream));
}

void SSLStreams$InputStream::init$($SSLStreams* this$0) {
	$set(this, this$0, this$0);
	$InputStream::init$();
	this->closed = false;
	this->eof = false;
	this->needData = true;
	$set(this, single, $new($bytes, 1));
	$init($SSLStreams$BufType);
	$set(this, bbuf, this$0->allocate($SSLStreams$BufType::APPLICATION));
}

int32_t SSLStreams$InputStream::read($bytes* buf, int32_t off, int32_t len) {
	if (this->closed) {
		$throwNew($IOException, "SSL stream is closed"_s);
	}
	if (this->eof) {
		return 0;
	}
	int32_t available = 0;
	if (!this->needData) {
		available = $nc(this->bbuf)->remaining();
		this->needData = (available == 0);
	}
	if (this->needData) {
		$nc(this->bbuf)->clear();
		$var($SSLStreams$WrapperResult, r, this->this$0->recvData(this->bbuf));
		$set(this, bbuf, $nc(r)->buf == this->bbuf ? this->bbuf : $nc(r)->buf);
		if ((available = $nc(this->bbuf)->remaining()) == 0) {
			this->eof = true;
			return 0;
		} else {
			this->needData = false;
		}
	}
	if (len > available) {
		len = available;
	}
	$nc(this->bbuf)->get(buf, off, len);
	return len;
}

int32_t SSLStreams$InputStream::available() {
	return $nc(this->bbuf)->remaining();
}

bool SSLStreams$InputStream::markSupported() {
	return false;
}

void SSLStreams$InputStream::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

int64_t SSLStreams$InputStream::skip(int64_t s) {
	$useLocalCurrentObjectStackCache();
	int32_t n = (int32_t)s;
	if (this->closed) {
		$throwNew($IOException, "SSL stream is closed"_s);
	}
	if (this->eof) {
		return 0;
	}
	int32_t ret = n;
	while (n > 0) {
		if ($nc(this->bbuf)->remaining() >= n) {
			$nc(this->bbuf)->position($nc(this->bbuf)->position() + n);
			return ret;
		} else {
			n -= $nc(this->bbuf)->remaining();
			$nc(this->bbuf)->clear();
			$var($SSLStreams$WrapperResult, r, this->this$0->recvData(this->bbuf));
			$set(this, bbuf, $nc(r)->buf == this->bbuf ? this->bbuf : $nc(r)->buf);
		}
	}
	return ret;
}

void SSLStreams$InputStream::close() {
	this->eof = true;
	$nc(this->this$0->engine)->closeInbound();
}

int32_t SSLStreams$InputStream::read($bytes* buf) {
	return read(buf, 0, $nc(buf)->length);
}

int32_t SSLStreams$InputStream::read() {
	int32_t n = read(this->single, 0, 1);
	if (n == 0) {
		return -1;
	} else {
		return (int32_t)($nc(this->single)->get(0) & (uint32_t)255);
	}
}

SSLStreams$InputStream::SSLStreams$InputStream() {
}

$Class* SSLStreams$InputStream::load$($String* name, bool initialize) {
	$loadClass(SSLStreams$InputStream, name, initialize, &_SSLStreams$InputStream_ClassInfo_, allocate$SSLStreams$InputStream);
	return class$;
}

$Class* SSLStreams$InputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun