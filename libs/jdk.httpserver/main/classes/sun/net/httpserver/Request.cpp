#include <sun/net/httpserver/Request.h>

#include <com/sun/net/httpserver/Headers.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/StringBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <jcpp.h>

#undef BUF_LEN
#undef CR
#undef LF

using $Headers = ::com::sun::net::httpserver::Headers;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _Request_FieldInfo_[] = {
	{"BUF_LEN", "I", nullptr, $STATIC | $FINAL, $constField(Request, BUF_LEN)},
	{"CR", "B", nullptr, $STATIC | $FINAL, $constField(Request, CR)},
	{"LF", "B", nullptr, $STATIC | $FINAL, $constField(Request, LF)},
	{"startLine", "Ljava/lang/String;", nullptr, $PRIVATE, $field(Request, startLine)},
	{"chan", "Ljava/nio/channels/SocketChannel;", nullptr, $PRIVATE, $field(Request, chan)},
	{"is", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(Request, is)},
	{"os", "Ljava/io/OutputStream;", nullptr, $PRIVATE, $field(Request, os)},
	{"buf", "[C", nullptr, 0, $field(Request, buf)},
	{"pos", "I", nullptr, 0, $field(Request, pos)},
	{"lineBuf", "Ljava/lang/StringBuffer;", nullptr, 0, $field(Request, lineBuf)},
	{"hdrs", "Lcom/sun/net/httpserver/Headers;", nullptr, 0, $field(Request, hdrs)},
	{}
};

$MethodInfo _Request_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, 0, $method(static_cast<void(Request::*)($InputStream*,$OutputStream*)>(&Request::init$)), "java.io.IOException"},
	{"consume", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(Request::*)(int32_t)>(&Request::consume))},
	{"headers", "()Lcom/sun/net/httpserver/Headers;", nullptr, 0, nullptr, "java.io.IOException"},
	{"inputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"outputStream", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"readLine", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"requestLine", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Request_InnerClassesInfo_[] = {
	{"sun.net.httpserver.Request$WriteStream", "sun.net.httpserver.Request", "WriteStream", $STATIC},
	{"sun.net.httpserver.Request$ReadStream", "sun.net.httpserver.Request", "ReadStream", $STATIC},
	{}
};

$ClassInfo _Request_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.Request",
	"java.lang.Object",
	nullptr,
	_Request_FieldInfo_,
	_Request_MethodInfo_,
	nullptr,
	nullptr,
	_Request_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.httpserver.Request$WriteStream,sun.net.httpserver.Request$ReadStream"
};

$Object* allocate$Request($Class* clazz) {
	return $of($alloc(Request));
}

void Request::init$($InputStream* rawInputStream, $OutputStream* rawout) {
	$set(this, buf, $new($chars, Request::BUF_LEN));
	$set(this, hdrs, nullptr);
	$set(this, is, rawInputStream);
	$set(this, os, rawout);
	do {
		$set(this, startLine, readLine());
		if (this->startLine == nullptr) {
			return;
		}
	} while (this->startLine == nullptr ? false : $nc(this->startLine)->equals(""_s));
}

$InputStream* Request::inputStream() {
	return this->is;
}

$OutputStream* Request::outputStream() {
	return this->os;
}

$String* Request::readLine() {
	bool gotCR = false;
	bool gotLF = false;
	this->pos = 0;
	$set(this, lineBuf, $new($StringBuffer));
	while (!gotLF) {
		int32_t c = $nc(this->is)->read();
		if (c == -1) {
			return nullptr;
		}
		if (gotCR) {
			if (c == Request::LF) {
				gotLF = true;
			} else {
				gotCR = false;
				consume(Request::CR);
				consume(c);
			}
		} else if (c == Request::CR) {
			gotCR = true;
		} else {
			consume(c);
		}
	}
	$nc(this->lineBuf)->append(this->buf, 0, this->pos);
	return $new($String, this->lineBuf);
}

void Request::consume(int32_t c) {
	if (this->pos == Request::BUF_LEN) {
		$nc(this->lineBuf)->append(this->buf);
		this->pos = 0;
	}
	$nc(this->buf)->set(this->pos++, (char16_t)c);
}

$String* Request::requestLine() {
	return this->startLine;
}

$Headers* Request::headers() {
	$useLocalCurrentObjectStackCache();
	if (this->hdrs != nullptr) {
		return this->hdrs;
	}
	$set(this, hdrs, $new($Headers));
	$var($chars, s, $new($chars, 10));
	int32_t len = 0;
	int32_t firstc = $nc(this->is)->read();
	if (firstc == Request::CR || firstc == Request::LF) {
		int32_t c = $nc(this->is)->read();
		if (c == Request::CR || c == Request::LF) {
			return this->hdrs;
		}
		s->set(0, (char16_t)firstc);
		len = 1;
		firstc = c;
	}
	while (firstc != Request::LF && firstc != Request::CR && firstc >= 0) {
		int32_t keyend = -1;
		int32_t c = 0;
		bool inKey = firstc > u' ';
		$nc(s)->set(len++, (char16_t)firstc);
		bool parseloop$break = false;
		for (;;) {
			{
				while ((c = $nc(this->is)->read()) >= 0) {
					switch (c) {
					case u':':
						{
							if (inKey && len > 0) {
								keyend = len;
							}
							inKey = false;
							break;
						}
					case u'\t':
						{
							c = u' ';
						}
					case u' ':
						{
							inKey = false;
							break;
						}
					case Request::CR:
						{}
					case Request::LF:
						{
							firstc = $nc(this->is)->read();
							if (c == Request::CR && firstc == Request::LF) {
								firstc = $nc(this->is)->read();
								if (firstc == Request::CR) {
									firstc = $nc(this->is)->read();
								}
							}
							if (firstc == Request::LF || firstc == Request::CR || firstc > u' ') {
								parseloop$break = true;
								break;
							}
							c = u' ';
							break;
						}
					}

					if (parseloop$break) {
						break;
					}					if (len >= $nc(s)->length) {
						$var($chars, ns, $new($chars, s->length * 2));
						$System::arraycopy(s, 0, ns, 0, len);
						$assign(s, ns);
					}
					$nc(s)->set(len++, (char16_t)c);
				}
				if (parseloop$break) {
					break;
				}
				firstc = -1;
			}
			break;
		}
		while (len > 0 && s->get(len - 1) <= u' ') {
			--len;
		}
		$var($String, k, nullptr);
		if (keyend <= 0) {
			$assign(k, nullptr);
			keyend = 0;
		} else {
			$assign(k, $String::copyValueOf(s, 0, keyend));
			if (keyend < len && s->get(keyend) == u':') {
				++keyend;
			}
			while (keyend < len && s->get(keyend) <= u' ') {
				++keyend;
			}
		}
		$var($String, v, nullptr);
		if (keyend >= len) {
			$assign(v, $new($String));
		} else {
			$assign(v, $String::copyValueOf(s, keyend, len - keyend));
		}
		int32_t var$0 = $nc(this->hdrs)->size();
		if (var$0 >= $ServerConfig::getMaxReqHeaders()) {
			$throwNew($IOException, $$str({"Maximum number of request headers (sun.net.httpserver.maxReqHeaders) exceeded, "_s, $$str($ServerConfig::getMaxReqHeaders()), "."_s}));
		}
		$nc(this->hdrs)->add(k, v);
		len = 0;
	}
	return this->hdrs;
}

Request::Request() {
}

$Class* Request::load$($String* name, bool initialize) {
	$loadClass(Request, name, initialize, &_Request_ClassInfo_, allocate$Request);
	return class$;
}

$Class* Request::class$ = nullptr;

		} // httpserver
	} // net
} // sun