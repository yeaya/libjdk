#include <sun/net/httpserver/Request$ReadStream.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/nio/BufferOverflowException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <sun/net/httpserver/Request.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef BUFSIZE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $BufferOverflowException = ::java::nio::BufferOverflowException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $AbstractSelectableChannel = ::java::nio::channels::spi::AbstractSelectableChannel;
using $Request = ::sun::net::httpserver::Request;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _Request$ReadStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Request$ReadStream, $assertionsDisabled)},
	{"channel", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(Request$ReadStream, channel)},
	{"chanbuf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(Request$ReadStream, chanbuf)},
	{"one", "[B", nullptr, 0, $field(Request$ReadStream, one)},
	{"closed", "Z", nullptr, $PRIVATE, $field(Request$ReadStream, closed)},
	{"eof", "Z", nullptr, $PRIVATE, $field(Request$ReadStream, eof)},
	{"markBuf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(Request$ReadStream, markBuf)},
	{"marked", "Z", nullptr, 0, $field(Request$ReadStream, marked)},
	{"reset", "Z", nullptr, 0, $field(Request$ReadStream, reset$)},
	{"readlimit", "I", nullptr, 0, $field(Request$ReadStream, readlimit)},
	{"readTimeout", "J", nullptr, $STATIC, $staticField(Request$ReadStream, readTimeout)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(Request$ReadStream, server)},
	{"BUFSIZE", "I", nullptr, $STATIC | $FINAL, $constField(Request$ReadStream, BUFSIZE)},
	{}
};

$MethodInfo _Request$ReadStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;Ljava/nio/channels/SocketChannel;)V", nullptr, $PUBLIC, $method(static_cast<void(Request$ReadStream::*)($ServerImpl*,$SocketChannel*)>(&Request$ReadStream::init$)), "java.io.IOException"},
	{"available", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"read", "([B)I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _Request$ReadStream_InnerClassesInfo_[] = {
	{"sun.net.httpserver.Request$ReadStream", "sun.net.httpserver.Request", "ReadStream", $STATIC},
	{}
};

$ClassInfo _Request$ReadStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.Request$ReadStream",
	"java.io.InputStream",
	nullptr,
	_Request$ReadStream_FieldInfo_,
	_Request$ReadStream_MethodInfo_,
	nullptr,
	nullptr,
	_Request$ReadStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.Request"
};

$Object* allocate$Request$ReadStream($Class* clazz) {
	return $of($alloc(Request$ReadStream));
}

bool Request$ReadStream::$assertionsDisabled = false;
int64_t Request$ReadStream::readTimeout = 0;

void Request$ReadStream::init$($ServerImpl* server, $SocketChannel* chan) {
	$InputStream::init$();
	this->closed = false;
	this->eof = false;
	$set(this, channel, chan);
	$set(this, server, server);
	$set(this, chanbuf, $ByteBuffer::allocate(Request$ReadStream::BUFSIZE));
	$nc(this->chanbuf)->clear();
	$set(this, one, $new($bytes, 1));
	this->closed = (this->marked = (this->reset$ = false));
}

int32_t Request$ReadStream::read($bytes* b) {
	$synchronized(this) {
		return read(b, 0, $nc(b)->length);
	}
}

int32_t Request$ReadStream::read() {
	$synchronized(this) {
		int32_t result = read(this->one, 0, 1);
		if (result == 1) {
			return (int32_t)($nc(this->one)->get(0) & (uint32_t)255);
		} else {
			return -1;
		}
	}
}

int32_t Request$ReadStream::read($bytes* b, int32_t off, int32_t srclen) {
	$synchronized(this) {
		int32_t canreturn = 0;
		int32_t willreturn = 0;
		if (this->closed) {
			$throwNew($IOException, "Stream closed"_s);
		}
		if (this->eof) {
			return -1;
		}
		if (!Request$ReadStream::$assertionsDisabled && !$nc(this->channel)->isBlocking()) {
			$throwNew($AssertionError);
		}
		if (off < 0 || srclen < 0 || srclen > ($nc(b)->length - off)) {
			$throwNew($IndexOutOfBoundsException);
		}
		if (this->reset$) {
			canreturn = $nc(this->markBuf)->remaining();
			willreturn = canreturn > srclen ? srclen : canreturn;
			$nc(this->markBuf)->get(b, off, willreturn);
			if (canreturn == willreturn) {
				this->reset$ = false;
			}
		} else {
			$nc(this->chanbuf)->clear();
			if (srclen < Request$ReadStream::BUFSIZE) {
				$nc(this->chanbuf)->limit(srclen);
			}
			do {
				willreturn = $nc(this->channel)->read(this->chanbuf);
			} while (willreturn == 0);
			if (willreturn == -1) {
				this->eof = true;
				return -1;
			}
			$nc(this->chanbuf)->flip();
			$nc(this->chanbuf)->get(b, off, willreturn);
			if (this->marked) {
				try {
					$nc(this->markBuf)->put(b, off, willreturn);
				} catch ($BufferOverflowException& e) {
					this->marked = false;
				}
			}
		}
		return willreturn;
	}
}

bool Request$ReadStream::markSupported() {
	return true;
}

int32_t Request$ReadStream::available() {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($IOException, "Stream is closed"_s);
		}
		if (this->eof) {
			return -1;
		}
		if (this->reset$) {
			return $nc(this->markBuf)->remaining();
		}
		return $nc(this->chanbuf)->remaining();
	}
}

void Request$ReadStream::close() {
	if (this->closed) {
		return;
	}
	$nc(this->channel)->close();
	this->closed = true;
}

void Request$ReadStream::mark(int32_t readlimit) {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		this->readlimit = readlimit;
		$set(this, markBuf, $ByteBuffer::allocate(readlimit));
		this->marked = true;
		this->reset$ = false;
	}
}

void Request$ReadStream::reset() {
	$synchronized(this) {
		if (this->closed) {
			return;
		}
		if (!this->marked) {
			$throwNew($IOException, "Stream not marked"_s);
		}
		this->marked = false;
		this->reset$ = true;
		$nc(this->markBuf)->flip();
	}
}

void clinit$Request$ReadStream($Class* class$) {
	$load($Request);
	Request$ReadStream::$assertionsDisabled = !$Request::class$->desiredAssertionStatus();
}

Request$ReadStream::Request$ReadStream() {
}

$Class* Request$ReadStream::load$($String* name, bool initialize) {
	$loadClass(Request$ReadStream, name, initialize, &_Request$ReadStream_ClassInfo_, clinit$Request$ReadStream, allocate$Request$ReadStream);
	return class$;
}

$Class* Request$ReadStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun