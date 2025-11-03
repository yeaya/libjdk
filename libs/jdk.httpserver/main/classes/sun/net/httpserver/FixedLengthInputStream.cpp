#include <sun/net/httpserver/FixedLengthInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _FixedLengthInputStream_FieldInfo_[] = {
	{"remaining", "J", nullptr, $PRIVATE, $field(FixedLengthInputStream, remaining)},
	{}
};

$MethodInfo _FixedLengthInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/InputStream;J)V", nullptr, 0, $method(static_cast<void(FixedLengthInputStream::*)($ExchangeImpl*,$InputStream*,int64_t)>(&FixedLengthInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"readImpl", "([BII)I", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _FixedLengthInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.FixedLengthInputStream",
	"sun.net.httpserver.LeftOverInputStream",
	nullptr,
	_FixedLengthInputStream_FieldInfo_,
	_FixedLengthInputStream_MethodInfo_
};

$Object* allocate$FixedLengthInputStream($Class* clazz) {
	return $of($alloc(FixedLengthInputStream));
}

void FixedLengthInputStream::init$($ExchangeImpl* t, $InputStream* src, int64_t len) {
	$LeftOverInputStream::init$(t, src);
	this->remaining = len;
}

int32_t FixedLengthInputStream::readImpl($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	this->eof = (this->remaining == (int64_t)0);
	if (this->eof) {
		return -1;
	}
	if (len > this->remaining) {
		len = (int32_t)this->remaining;
	}
	int32_t n = $nc(this->in)->read(b, off, len);
	if (n > -1) {
		this->remaining -= n;
		if (this->remaining == 0) {
			$nc($($nc(this->t)->getServerImpl()))->requestCompleted($($nc(this->t)->getConnection()));
		}
	}
	if (n < 0 && !this->eof) {
		$throwNew($IOException, "connection closed before all data received"_s);
	}
	return n;
}

int32_t FixedLengthInputStream::available() {
	if (this->eof) {
		return 0;
	}
	int32_t n = $nc(this->in)->available();
	return n < this->remaining ? n : (int32_t)this->remaining;
}

bool FixedLengthInputStream::markSupported() {
	return false;
}

void FixedLengthInputStream::mark(int32_t l) {
}

void FixedLengthInputStream::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

FixedLengthInputStream::FixedLengthInputStream() {
}

$Class* FixedLengthInputStream::load$($String* name, bool initialize) {
	$loadClass(FixedLengthInputStream, name, initialize, &_FixedLengthInputStream_ClassInfo_, allocate$FixedLengthInputStream);
	return class$;
}

$Class* FixedLengthInputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun