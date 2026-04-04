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

namespace sun {
	namespace net {
		namespace httpserver {

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
			return $nc(this->one)->get(0) & 0xff;
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

void LeftOverInputStream::clinit$($Class* clazz) {
	LeftOverInputStream::$assertionsDisabled = !LeftOverInputStream::class$->desiredAssertionStatus();
}

LeftOverInputStream::LeftOverInputStream() {
}

$Class* LeftOverInputStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LeftOverInputStream, $assertionsDisabled)},
		{"t", "Lsun/net/httpserver/ExchangeImpl;", nullptr, $FINAL, $field(LeftOverInputStream, t)},
		{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL, $field(LeftOverInputStream, server)},
		{"closed", "Z", nullptr, $PROTECTED, $field(LeftOverInputStream, closed)},
		{"eof", "Z", nullptr, $PROTECTED, $field(LeftOverInputStream, eof)},
		{"one", "[B", nullptr, 0, $field(LeftOverInputStream, one)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(LeftOverInputStream, init$, void, $ExchangeImpl*, $InputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(LeftOverInputStream, close, void), "java.io.IOException"},
		{"drain", "(J)Z", nullptr, $PUBLIC, $virtualMethod(LeftOverInputStream, drain, bool, int64_t), "java.io.IOException"},
		{"isClosed", "()Z", nullptr, $PUBLIC, $virtualMethod(LeftOverInputStream, isClosed, bool)},
		{"isDataBuffered", "()Z", nullptr, $PUBLIC, $virtualMethod(LeftOverInputStream, isDataBuffered, bool), "java.io.IOException"},
		{"isEOF", "()Z", nullptr, $PUBLIC, $virtualMethod(LeftOverInputStream, isEOF, bool)},
		{"read", "()I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LeftOverInputStream, read, int32_t), "java.io.IOException"},
		{"read", "([BII)I", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LeftOverInputStream, read, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{"readImpl", "([BII)I", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(LeftOverInputStream, readImpl, int32_t, $bytes*, int32_t, int32_t), "java.io.IOException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"sun.net.httpserver.LeftOverInputStream",
		"java.io.FilterInputStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LeftOverInputStream, name, initialize, &classInfo$$, LeftOverInputStream::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LeftOverInputStream);
	});
	return class$;
}

$Class* LeftOverInputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun