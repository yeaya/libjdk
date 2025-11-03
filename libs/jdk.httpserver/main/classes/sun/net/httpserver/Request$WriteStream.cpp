#include <sun/net/httpserver/Request$WriteStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <sun/net/httpserver/Request.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Request = ::sun::net::httpserver::Request;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _Request$WriteStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Request$WriteStream, $assertionsDisabled)},
	{"channel", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(Request$WriteStream, channel)},
	{"buf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(Request$WriteStream, buf)},
	{"key", "Ljava/nio/channels/SelectionKey;", nullptr, 0, $field(Request$WriteStream, key)},
	{"closed", "Z", nullptr, 0, $field(Request$WriteStream, closed)},
	{"one", "[B", nullptr, 0, $field(Request$WriteStream, one)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(Request$WriteStream, server)},
	{}
};

$MethodInfo _Request$WriteStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;Ljava/nio/channels/SocketChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(Request$WriteStream::*)($ServerImpl*,$SocketChannel*)>(&Request$WriteStream::init$)), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Request$WriteStream_InnerClassesInfo_[] = {
	{"sun.net.httpserver.Request$WriteStream", "sun.net.httpserver.Request", "WriteStream", $STATIC},
	{}
};

$ClassInfo _Request$WriteStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.Request$WriteStream",
	"java.io.OutputStream",
	nullptr,
	_Request$WriteStream_FieldInfo_,
	_Request$WriteStream_MethodInfo_,
	nullptr,
	nullptr,
	_Request$WriteStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.Request"
};

$Object* allocate$Request$WriteStream($Class* clazz) {
	return $of($alloc(Request$WriteStream));
}

bool Request$WriteStream::$assertionsDisabled = false;

void Request$WriteStream::init$($ServerImpl* server, $SocketChannel* channel) {
	$OutputStream::init$();
	$set(this, channel, channel);
	$set(this, server, server);
	if (!Request$WriteStream::$assertionsDisabled && !$nc(channel)->isBlocking()) {
		$throwNew($AssertionError);
	}
	this->closed = false;
	$set(this, one, $new($bytes, 1));
	$set(this, buf, $ByteBuffer::allocate(4096));
}

void Request$WriteStream::write(int32_t b) {
	$synchronized(this) {
		$nc(this->one)->set(0, (int8_t)b);
		write(this->one, 0, 1);
	}
}

void Request$WriteStream::write($bytes* b) {
	$synchronized(this) {
		write(b, 0, $nc(b)->length);
	}
}

void Request$WriteStream::write($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		int32_t l = len;
		if (this->closed) {
			$throwNew($IOException, "stream is closed"_s);
		}
		int32_t cap = $nc(this->buf)->capacity();
		if (cap < len) {
			int32_t diff = len - cap;
			$set(this, buf, $ByteBuffer::allocate(2 * (cap + diff)));
		}
		$nc(this->buf)->clear();
		$nc(this->buf)->put(b, off, len);
		$nc(this->buf)->flip();
		int32_t n = 0;
		while ((n = $nc(this->channel)->write(this->buf)) < l) {
			l -= n;
			if (l == 0) {
				return;
			}
		}
	}
}

void Request$WriteStream::close() {
	if (this->closed) {
		return;
	}
	$nc(this->channel)->close();
	this->closed = true;
}

void clinit$Request$WriteStream($Class* class$) {
	$load($Request);
	Request$WriteStream::$assertionsDisabled = !$Request::class$->desiredAssertionStatus();
}

Request$WriteStream::Request$WriteStream() {
}

$Class* Request$WriteStream::load$($String* name, bool initialize) {
	$loadClass(Request$WriteStream, name, initialize, &_Request$WriteStream_ClassInfo_, clinit$Request$WriteStream, allocate$Request$WriteStream);
	return class$;
}

$Class* Request$WriteStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun