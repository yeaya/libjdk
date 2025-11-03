#include <sun/net/httpserver/ChunkedOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/StreamClosedException.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <jcpp.h>

#undef CHUNK_SIZE
#undef OFFSET

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Event = ::sun::net::httpserver::Event;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $StreamClosedException = ::sun::net::httpserver::StreamClosedException;
using $WriteFinishedEvent = ::sun::net::httpserver::WriteFinishedEvent;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ChunkedOutputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChunkedOutputStream, $assertionsDisabled)},
	{"closed", "Z", nullptr, $PRIVATE, $field(ChunkedOutputStream, closed)},
	{"CHUNK_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedOutputStream, CHUNK_SIZE)},
	{"OFFSET", "I", nullptr, $STATIC | $FINAL, $constField(ChunkedOutputStream, OFFSET)},
	{"pos", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, pos)},
	{"count", "I", nullptr, $PRIVATE, $field(ChunkedOutputStream, count)},
	{"buf", "[B", nullptr, $PRIVATE, $field(ChunkedOutputStream, buf)},
	{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(ChunkedOutputStream, t)},
	{}
};

$MethodInfo _ChunkedOutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(ChunkedOutputStream::*)($ExchangeImpl*,$OutputStream*)>(&ChunkedOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"writeChunk", "()V", nullptr, $PRIVATE, $method(static_cast<void(ChunkedOutputStream::*)()>(&ChunkedOutputStream::writeChunk)), "java.io.IOException"},
	{}
};

$ClassInfo _ChunkedOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ChunkedOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_ChunkedOutputStream_FieldInfo_,
	_ChunkedOutputStream_MethodInfo_
};

$Object* allocate$ChunkedOutputStream($Class* clazz) {
	return $of($alloc(ChunkedOutputStream));
}

bool ChunkedOutputStream::$assertionsDisabled = false;

void ChunkedOutputStream::init$($ExchangeImpl* t, $OutputStream* src) {
	$FilterOutputStream::init$(src);
	this->closed = false;
	this->pos = ChunkedOutputStream::OFFSET;
	this->count = 0;
	$set(this, buf, $new($bytes, ChunkedOutputStream::CHUNK_SIZE + ChunkedOutputStream::OFFSET + 2));
	$set(this, t, t);
}

void ChunkedOutputStream::write(int32_t b) {
	if (this->closed) {
		$throwNew($StreamClosedException);
	}
	$nc(this->buf)->set(this->pos++, (int8_t)b);
	++this->count;
	if (this->count == ChunkedOutputStream::CHUNK_SIZE) {
		writeChunk();
	}
	if (!ChunkedOutputStream::$assertionsDisabled && !(this->count < ChunkedOutputStream::CHUNK_SIZE)) {
		$throwNew($AssertionError);
	}
}

void ChunkedOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (this->closed) {
		$throwNew($StreamClosedException);
	}
	int32_t remain = ChunkedOutputStream::CHUNK_SIZE - this->count;
	if (len > remain) {
		$System::arraycopy(b, off, this->buf, this->pos, remain);
		this->count = ChunkedOutputStream::CHUNK_SIZE;
		writeChunk();
		len -= remain;
		off += remain;
		while (len >= ChunkedOutputStream::CHUNK_SIZE) {
			$System::arraycopy(b, off, this->buf, ChunkedOutputStream::OFFSET, ChunkedOutputStream::CHUNK_SIZE);
			len -= ChunkedOutputStream::CHUNK_SIZE;
			off += ChunkedOutputStream::CHUNK_SIZE;
			this->count = ChunkedOutputStream::CHUNK_SIZE;
			writeChunk();
		}
	}
	if (len > 0) {
		$System::arraycopy(b, off, this->buf, this->pos, len);
		this->count += len;
		this->pos += len;
	}
	if (this->count == ChunkedOutputStream::CHUNK_SIZE) {
		writeChunk();
	}
}

void ChunkedOutputStream::writeChunk() {
	$useLocalCurrentObjectStackCache();
	$var($chars, c, $nc($($Integer::toHexString(this->count)))->toCharArray());
	int32_t clen = c->length;
	int32_t startByte = 4 - clen;
	int32_t i = 0;
	for (i = 0; i < clen; ++i) {
		$nc(this->buf)->set(startByte + i, (int8_t)c->get(i));
	}
	$nc(this->buf)->set(startByte + (i++), (int8_t)u'\r');
	$nc(this->buf)->set(startByte + (i++), (int8_t)u'\n');
	$nc(this->buf)->set(startByte + (i++) + this->count, (int8_t)u'\r');
	$nc(this->buf)->set(startByte + (i++) + this->count, (int8_t)u'\n');
	$nc(this->out)->write(this->buf, startByte, i + this->count);
	this->count = 0;
	this->pos = ChunkedOutputStream::OFFSET;
}

void ChunkedOutputStream::close() {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		return;
	}
	flush();
	{
		$var($Throwable, var$0, nullptr);
		try {
			try {
				writeChunk();
				$nc(this->out)->flush();
				$var($LeftOverInputStream, is, $nc(this->t)->getOriginalInputStream());
				if (!$nc(is)->isClosed()) {
					is->close();
				}
			} catch ($IOException& e) {
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			this->closed = true;
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	$var($WriteFinishedEvent, e, $new($WriteFinishedEvent, this->t));
	$nc($($nc($($nc(this->t)->getHttpContext()))->getServerImpl()))->addEvent(e);
}

void ChunkedOutputStream::flush() {
	if (this->closed) {
		$throwNew($StreamClosedException);
	}
	if (this->count > 0) {
		writeChunk();
	}
	$nc(this->out)->flush();
}

void clinit$ChunkedOutputStream($Class* class$) {
	ChunkedOutputStream::$assertionsDisabled = !ChunkedOutputStream::class$->desiredAssertionStatus();
}

ChunkedOutputStream::ChunkedOutputStream() {
}

$Class* ChunkedOutputStream::load$($String* name, bool initialize) {
	$loadClass(ChunkedOutputStream, name, initialize, &_ChunkedOutputStream_ClassInfo_, clinit$ChunkedOutputStream, allocate$ChunkedOutputStream);
	return class$;
}

$Class* ChunkedOutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun