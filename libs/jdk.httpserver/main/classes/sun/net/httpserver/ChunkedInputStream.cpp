#include <sun/net/httpserver/ChunkedInputStream.h>

#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/AssertionError.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef CR
#undef LF
#undef MAX_CHUNK_HEADER_SIZE

using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $AssertionError = ::java::lang::AssertionError;
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

$FieldInfo _ChunkedInputStream_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ChunkedInputStream, $assertionsDisabled)},
	{"remaining", "I", nullptr, $PRIVATE, $field(ChunkedInputStream, remaining)},
	{"needToReadHeader", "Z", nullptr, $PRIVATE, $field(ChunkedInputStream, needToReadHeader)},
	{"CR", "C", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, CR)},
	{"LF", "C", nullptr, $STATIC | $FINAL, $constField(ChunkedInputStream, LF)},
	{"MAX_CHUNK_HEADER_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ChunkedInputStream, MAX_CHUNK_HEADER_SIZE)},
	{}
};

$MethodInfo _ChunkedInputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ExchangeImpl;Ljava/io/InputStream;)V", nullptr, 0, $method(static_cast<void(ChunkedInputStream::*)($ExchangeImpl*,$InputStream*)>(&ChunkedInputStream::init$))},
	{"available", "()I", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"consumeCRLF", "()V", nullptr, $PRIVATE, $method(static_cast<void(ChunkedInputStream::*)()>(&ChunkedInputStream::consumeCRLF)), "java.io.IOException"},
	{"isDataBuffered", "()Z", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"mark", "(I)V", nullptr, $PUBLIC},
	{"markSupported", "()Z", nullptr, $PUBLIC},
	{"numeric", "([CI)I", nullptr, $PRIVATE, $method(static_cast<int32_t(ChunkedInputStream::*)($chars*,int32_t)>(&ChunkedInputStream::numeric)), "java.io.IOException"},
	{"readChunkHeader", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(ChunkedInputStream::*)()>(&ChunkedInputStream::readChunkHeader)), "java.io.IOException"},
	{"readImpl", "([BII)I", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"reset", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ChunkedInputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ChunkedInputStream",
	"sun.net.httpserver.LeftOverInputStream",
	nullptr,
	_ChunkedInputStream_FieldInfo_,
	_ChunkedInputStream_MethodInfo_
};

$Object* allocate$ChunkedInputStream($Class* clazz) {
	return $of($alloc(ChunkedInputStream));
}

bool ChunkedInputStream::$assertionsDisabled = false;

void ChunkedInputStream::init$($ExchangeImpl* t, $InputStream* src) {
	$LeftOverInputStream::init$(t, src);
	this->needToReadHeader = true;
}

int32_t ChunkedInputStream::numeric($chars* arr, int32_t nchars) {
	if (!ChunkedInputStream::$assertionsDisabled && !($nc(arr)->length >= nchars)) {
		$throwNew($AssertionError);
	}
	int32_t len = 0;
	for (int32_t i = 0; i < nchars; ++i) {
		char16_t c = $nc(arr)->get(i);
		int32_t val = 0;
		if (c >= u'0' && c <= u'9') {
			val = c - u'0';
		} else if (c >= u'a' && c <= u'f') {
			val = c - u'a' + 10;
		} else if (c >= u'A' && c <= u'F') {
			val = c - u'A' + 10;
		} else {
			$throwNew($IOException, "invalid chunk length"_s);
		}
		len = len * 16 + val;
	}
	return len;
}

int32_t ChunkedInputStream::readChunkHeader() {
	bool gotCR = false;
	int32_t c = 0;
	$var($chars, len_arr, $new($chars, 16));
	int32_t len_size = 0;
	bool end_of_len = false;
	int32_t read = 0;
	while ((c = $nc(this->in)->read()) != -1) {
		char16_t ch = (char16_t)c;
		++read;
		if ((len_size == len_arr->length - 1) || (read > ChunkedInputStream::MAX_CHUNK_HEADER_SIZE)) {
			$throwNew($IOException, "invalid chunk header"_s);
		}
		if (gotCR) {
			if (ch == ChunkedInputStream::LF) {
				int32_t l = numeric(len_arr, len_size);
				return l;
			} else {
				gotCR = false;
			}
			if (!end_of_len) {
				len_arr->set(len_size++, ch);
			}
		} else if (ch == ChunkedInputStream::CR) {
			gotCR = true;
		} else if (ch == u';') {
			end_of_len = true;
		} else if (!end_of_len) {
			len_arr->set(len_size++, ch);
		}
	}
	$throwNew($IOException, "end of stream reading chunk header"_s);
}

int32_t ChunkedInputStream::readImpl($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->eof) {
		return -1;
	}
	if (this->needToReadHeader) {
		this->remaining = readChunkHeader();
		if (this->remaining == 0) {
			this->eof = true;
			consumeCRLF();
			$nc($($nc(this->t)->getServerImpl()))->requestCompleted($($nc(this->t)->getConnection()));
			return -1;
		}
		this->needToReadHeader = false;
	}
	if (len > this->remaining) {
		len = this->remaining;
	}
	int32_t n = $nc(this->in)->read(b, off, len);
	if (n > -1) {
		this->remaining -= n;
	}
	if (this->remaining == 0) {
		this->needToReadHeader = true;
		consumeCRLF();
	}
	if (n < 0 && !this->eof) {
		$throwNew($IOException, "connection closed before all data received"_s);
	}
	return n;
}

void ChunkedInputStream::consumeCRLF() {
	char16_t c = 0;
	c = (char16_t)$nc(this->in)->read();
	if (c != ChunkedInputStream::CR) {
		$throwNew($IOException, "invalid chunk end"_s);
	}
	c = (char16_t)$nc(this->in)->read();
	if (c != ChunkedInputStream::LF) {
		$throwNew($IOException, "invalid chunk end"_s);
	}
}

int32_t ChunkedInputStream::available() {
	if (this->eof || this->closed) {
		return 0;
	}
	int32_t n = $nc(this->in)->available();
	return n > this->remaining ? this->remaining : n;
}

bool ChunkedInputStream::isDataBuffered() {
	if (!ChunkedInputStream::$assertionsDisabled && !this->eof) {
		$throwNew($AssertionError);
	}
	return $nc(this->in)->available() > 0;
}

bool ChunkedInputStream::markSupported() {
	return false;
}

void ChunkedInputStream::mark(int32_t l) {
}

void ChunkedInputStream::reset() {
	$throwNew($IOException, "mark/reset not supported"_s);
}

void clinit$ChunkedInputStream($Class* class$) {
	ChunkedInputStream::$assertionsDisabled = !ChunkedInputStream::class$->desiredAssertionStatus();
}

ChunkedInputStream::ChunkedInputStream() {
}

$Class* ChunkedInputStream::load$($String* name, bool initialize) {
	$loadClass(ChunkedInputStream, name, initialize, &_ChunkedInputStream_ClassInfo_, clinit$ChunkedInputStream, allocate$ChunkedInputStream);
	return class$;
}

$Class* ChunkedInputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun