#include <sun/net/httpserver/LeftOverInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _LeftOverInputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LeftOverInputStream, $assertionsDisabled)},
	{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, $FINAL, $field(LeftOverInputStream, t)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL, $field(LeftOverInputStream, server)},
	{"closed", "Z", nullptr, $PROTECTED, $field(LeftOverInputStream, closed)},
	{"eof", "Z", nullptr, $PROTECTED, $field(LeftOverInputStream, eof)},
	{"one", "[B", nullptr, 0, $field(LeftOverInputStream, one)},
	{}
};

$MethodInfo _LeftOverInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(LeftOverInputStream::*)($ExchangeImpl*,$InputStream*)>(&LeftOverInputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"drain", "(J)Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isClosed", "()Z", nullptr, $PUBLIC},
	{"isDataBuffered", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"isEOF", "()Z", nullptr, $PUBLIC},
	{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, nullptr, "java.io.IOException"},
	{"readImpl", "([BII)I", nullptr, $PROTECTED | $ABSTRACT, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _LeftOverInputStream_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"sun.net.httpserver.LeftOverInputStream",
	"java.io.FilterInputStream",
	nullptr,
	_LeftOverInputStream_FieldInfo_,
	_LeftOverInputStream_MethodInfo_
};

$Object* allocate$LeftOverInputStream($Class* clazz) {
	return $of($alloc(LeftOverInputStream));
}

bool LeftOverInputStream::$assertionsDisabled = false;

void LeftOverInputStream::init$($ExchangeImpl* t, $InputStream* src) {
	$FilterInputStream::init$(src);
	this->closed = false;
	this->eof = false;
	$set(this, one, $new($bytes, 1));
	$set(this, t, t);
	$set(this, server, $nc(t)->getServerImpl());
}

bool LeftOverInputStream::isDataBuffered() {
	if (!LeftOverInputStream::$assertionsDisabled && !this->eof) {
		$throwNew($AssertionError);
	}
	return $FilterInputStream::available() > 0;
}

void LeftOverInputStream::close() {
	if (this->closed) {
		return;
	}
	this->closed = true;
	if (!this->eof) {
		this->eof = drain($ServerConfig::getDrainAmount());
	}
}

bool LeftOverInputStream::isClosed() {
	return this->closed;
}

bool LeftOverInputStream::isEOF() {
	return this->eof;
}

int32_t LeftOverInputStream::read() {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($IOException, "Stream is closed"_s);
		}
		int32_t c = readImpl(this->one, 0, 1);
		if (c == -1 || c == 0) {
			return c;
		} else {
			return (int32_t)($nc(this->one)->get(0) & (uint32_t)255);
		}
	}
}

int32_t LeftOverInputStream::read($bytes* b, int32_t off, int32_t len) {
	$synchronized(this) {
		if (this->closed) {
			$throwNew($IOException, "Stream is closed"_s);
		}
		return readImpl(b, off, len);
	}
}

bool LeftOverInputStream::drain(int64_t l) {
	int32_t bufSize = 2048;
	$var($bytes, db, $new($bytes, bufSize));
	while (l > 0) {
		if ($nc(this->server)->isFinishing()) {
			break;
		}
		int64_t len = readImpl(db, 0, bufSize);
		if (len == -1) {
			this->eof = true;
			return true;
		} else {
			l = l - len;
		}
	}
	return false;
}

void clinit$LeftOverInputStream($Class* class$) {
	LeftOverInputStream::$assertionsDisabled = !LeftOverInputStream::class$->desiredAssertionStatus();
}

LeftOverInputStream::LeftOverInputStream() {
}

$Class* LeftOverInputStream::load$($String* name, bool initialize) {
	$loadClass(LeftOverInputStream, name, initialize, &_LeftOverInputStream_ClassInfo_, clinit$LeftOverInputStream, allocate$LeftOverInputStream);
	return class$;
}

$Class* LeftOverInputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun