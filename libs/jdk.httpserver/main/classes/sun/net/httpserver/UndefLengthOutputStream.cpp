#include <sun/net/httpserver/UndefLengthOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $WriteFinishedEvent = ::sun::net::httpserver::WriteFinishedEvent;

namespace sun {
	namespace net {
		namespace httpserver {

void UndefLengthOutputStream::init$($ExchangeImpl* t, $OutputStream* src) {
	$FilterOutputStream::init$(src);
	this->closed = false;
	$set(this, t, t);
}

void UndefLengthOutputStream::write(int32_t b) {
	if (this->closed) {
		$throwNew($IOException, "stream closed"_s);
	}
	$nc(this->out)->write(b);
}

void UndefLengthOutputStream::write($bytes* b, int32_t off, int32_t len) {
	if (this->closed) {
		$throwNew($IOException, "stream closed"_s);
	}
	$nc(this->out)->write(b, off, len);
}

void UndefLengthOutputStream::close() {
	$useLocalObjectStack();
	if (this->closed) {
		return;
	}
	this->closed = true;
	flush();
	$var($LeftOverInputStream, is, $nc(this->t)->getOriginalInputStream());
	if (!$nc(is)->isClosed()) {
		try {
			is->close();
		} catch ($IOException& e) {
		}
	}
	$var($WriteFinishedEvent, e, $new($WriteFinishedEvent, this->t));
	$$nc($$nc($nc(this->t)->getHttpContext())->getServerImpl())->addEvent(e);
}

UndefLengthOutputStream::UndefLengthOutputStream() {
}

$Class* UndefLengthOutputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"closed", "Z", nullptr, $PRIVATE, $field(UndefLengthOutputStream, closed)},
		{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(UndefLengthOutputStream, t)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/OutputStream;)V", nullptr, 0, $method(UndefLengthOutputStream, init$, void, $ExchangeImpl*, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(UndefLengthOutputStream, close, void), "java.io.IOException"},
		{"write", "(I)V", nullptr, $PUBLIC, $virtualMethod(UndefLengthOutputStream, write, void, int32_t), "java.io.IOException"},
		{"write", "([BII)V", nullptr, $PUBLIC, $virtualMethod(UndefLengthOutputStream, write, void, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.UndefLengthOutputStream",
		"java.io.FilterOutputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UndefLengthOutputStream, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UndefLengthOutputStream));
	});
	return class$;
}

$Class* UndefLengthOutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun