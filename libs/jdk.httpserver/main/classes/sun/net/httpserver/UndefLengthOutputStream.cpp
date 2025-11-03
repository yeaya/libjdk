#include <sun/net/httpserver/UndefLengthOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <sun/net/httpserver/Event.h>
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
using $Event = ::sun::net::httpserver::Event;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $WriteFinishedEvent = ::sun::net::httpserver::WriteFinishedEvent;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _UndefLengthOutputStream_FieldInfo_[] = {
	{"closed", "Z", nullptr, $PRIVATE, $field(UndefLengthOutputStream, closed)},
	{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(UndefLengthOutputStream, t)},
	{}
};

$MethodInfo _UndefLengthOutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(UndefLengthOutputStream::*)($ExchangeImpl*,$OutputStream*)>(&UndefLengthOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UndefLengthOutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.UndefLengthOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_UndefLengthOutputStream_FieldInfo_,
	_UndefLengthOutputStream_MethodInfo_
};

$Object* allocate$UndefLengthOutputStream($Class* clazz) {
	return $of($alloc(UndefLengthOutputStream));
}

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
	$useLocalCurrentObjectStackCache();
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
	$nc($($nc($($nc(this->t)->getHttpContext()))->getServerImpl()))->addEvent(e);
}

UndefLengthOutputStream::UndefLengthOutputStream() {
}

$Class* UndefLengthOutputStream::load$($String* name, bool initialize) {
	$loadClass(UndefLengthOutputStream, name, initialize, &_UndefLengthOutputStream_ClassInfo_, allocate$UndefLengthOutputStream);
	return class$;
}

$Class* UndefLengthOutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun