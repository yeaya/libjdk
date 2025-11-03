#include <sun/net/httpserver/FixedLengthOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/StreamClosedException.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _FixedLengthOutputStream_FieldInfo_[] = {
	{"remaining", "J", nullptr, $PRIVATE, $field(FixedLengthOutputStream, remaining)},
	{"eof", "Z", nullptr, $PRIVATE, $field(FixedLengthOutputStream, eof)},
	{"closed", "Z", nullptr, $PRIVATE, $field(FixedLengthOutputStream, closed)},
	{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(FixedLengthOutputStream, t)},
	{}
};

$MethodInfo _FixedLengthOutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/OutputStream;J)V", nullptr, 0, $method(static_cast<void(FixedLengthOutputStream::*)($ExchangeImpl*,$OutputStream*,int64_t)>(&FixedLengthOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FixedLengthOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.FixedLengthOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_FixedLengthOutputStream_FieldInfo_,
	_FixedLengthOutputStream_MethodInfo_
};

$Object* allocate$FixedLengthOutputStream($Class* clazz) {
	return $of($alloc(FixedLengthOutputStream));
}

void FixedLengthOutputStream::init$($ExchangeImpl* t, $OutputStream* src, int64_t len) {
	$FilterOutputStream::init$(src);
	this->eof = false;
	this->closed = false;
	$set(this, t, t);
	this->remaining = len;
}

void FixedLengthOutputStream::write(int32_t b) {
	if (this->closed) {
		$throwNew($IOException, "stream closed"_s);
	}
	this->eof = (this->remaining == 0);
	if (this->eof) {
		$throwNew($StreamClosedException);
	}
	$nc(this->out)->write(b);
	--this->remaining;
}

void FixedLengthOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (this->closed) {
		$throwNew($IOException, "stream closed"_s);
	}
	this->eof = (this->remaining == 0);
	if (this->eof) {
		$throwNew($StreamClosedException);
	}
	if (len > this->remaining) {
		$throwNew($IOException, "too many bytes to write to stream"_s);
	}
	$nc(this->out)->write(b, off, len);
	this->remaining -= len;
}

void FixedLengthOutputStream::close() {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		return;
	}
	this->closed = true;
	if (this->remaining > 0) {
		$nc(this->t)->close();
		$throwNew($IOException, "insufficient bytes written to stream"_s);
	}
	flush();
	this->eof = true;
	$var($LeftOverInputStream, is, $nc(this->t)->getOriginalInputStream());
	if (!$nc(is)->isClosed()) {
		try {
			is->close();
		} catch ($IOException& e) {
		}
	}
	$var($WriteFinishedEvent, e, $new($WriteFinishedEvent, this->t));
	$nc($($nc($($nc(this->t)->getHttpContext()))->getServerImpl()))->addEvent(e);
}

FixedLengthOutputStream::FixedLengthOutputStream() {
}

$Class* FixedLengthOutputStream::load$($String* name, bool initialize) {
	$loadClass(FixedLengthOutputStream, name, initialize, &_FixedLengthOutputStream_ClassInfo_, allocate$FixedLengthOutputStream);
	return class$;
}

$Class* FixedLengthOutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun