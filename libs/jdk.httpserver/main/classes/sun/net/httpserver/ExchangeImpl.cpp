#include <sun/net/httpserver/ExchangeImpl.h>

#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpPrincipal.h>
#include <java/io/BufferedOutputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AssertionError.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/URI.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/time/Instant.h>
#include <java/time/ZoneId.h>
#include <java/time/format/DateTimeFormatter.h>
#include <java/time/temporal/Temporal.h>
#include <java/time/temporal/TemporalAccessor.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/net/httpserver/ChunkedInputStream.h>
#include <sun/net/httpserver/ChunkedOutputStream.h>
#include <sun/net/httpserver/Code.h>
#include <sun/net/httpserver/Event.h>
#include <sun/net/httpserver/FixedLengthInputStream.h>
#include <sun/net/httpserver/FixedLengthOutputStream.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/HttpExchangeImpl.h>
#include <sun/net/httpserver/HttpsExchangeImpl.h>
#include <sun/net/httpserver/LeftOverInputStream.h>
#include <sun/net/httpserver/PlaceholderOutputStream.h>
#include <sun/net/httpserver/Request.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/UndefLengthOutputStream.h>
#include <sun/net/httpserver/UnmodifiableHeaders.h>
#include <sun/net/httpserver/WriteFinishedEvent.h>
#include <jcpp.h>

#undef DEBUG
#undef FORMATTER
#undef HEAD
#undef TRACE
#undef US
#undef WARNING

using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpPrincipal = ::com::sun::net::httpserver::HttpPrincipal;
using $BufferedOutputStream = ::java::io::BufferedOutputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $URI = ::java::net::URI;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Instant = ::java::time::Instant;
using $ZoneId = ::java::time::ZoneId;
using $DateTimeFormatter = ::java::time::format::DateTimeFormatter;
using $Temporal = ::java::time::temporal::Temporal;
using $TemporalAccessor = ::java::time::temporal::TemporalAccessor;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $ChunkedInputStream = ::sun::net::httpserver::ChunkedInputStream;
using $ChunkedOutputStream = ::sun::net::httpserver::ChunkedOutputStream;
using $Code = ::sun::net::httpserver::Code;
using $Event = ::sun::net::httpserver::Event;
using $FixedLengthInputStream = ::sun::net::httpserver::FixedLengthInputStream;
using $FixedLengthOutputStream = ::sun::net::httpserver::FixedLengthOutputStream;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $HttpExchangeImpl = ::sun::net::httpserver::HttpExchangeImpl;
using $HttpsExchangeImpl = ::sun::net::httpserver::HttpsExchangeImpl;
using $LeftOverInputStream = ::sun::net::httpserver::LeftOverInputStream;
using $PlaceholderOutputStream = ::sun::net::httpserver::PlaceholderOutputStream;
using $Request = ::sun::net::httpserver::Request;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $UndefLengthOutputStream = ::sun::net::httpserver::UndefLengthOutputStream;
using $UnmodifiableHeaders = ::sun::net::httpserver::UnmodifiableHeaders;
using $WriteFinishedEvent = ::sun::net::httpserver::WriteFinishedEvent;

namespace sun {
	namespace net {
		namespace httpserver {

class ExchangeImpl$$Lambda$stream : public $Function {
	$class(ExchangeImpl$$Lambda$stream, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		 return $of($sure($Collection, inst$)->stream());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ExchangeImpl$$Lambda$stream>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo ExchangeImpl$$Lambda$stream::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExchangeImpl$$Lambda$stream::*)()>(&ExchangeImpl$$Lambda$stream::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo ExchangeImpl$$Lambda$stream::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.httpserver.ExchangeImpl$$Lambda$stream",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* ExchangeImpl$$Lambda$stream::load$($String* name, bool initialize) {
	$loadClass(ExchangeImpl$$Lambda$stream, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ExchangeImpl$$Lambda$stream::class$ = nullptr;

class ExchangeImpl$$Lambda$equalsIgnoreCase$1 : public $Predicate {
	$class(ExchangeImpl$$Lambda$equalsIgnoreCase$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* inst) {
		$set(this, inst$, inst);
	}
	virtual bool test(Object$* arg0) override {
		 return $nc(inst$)->equalsIgnoreCase($cast($String, arg0));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<ExchangeImpl$$Lambda$equalsIgnoreCase$1>());
	}
	$String* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo ExchangeImpl$$Lambda$equalsIgnoreCase$1::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ExchangeImpl$$Lambda$equalsIgnoreCase$1, inst$)},
	{}
};
$MethodInfo ExchangeImpl$$Lambda$equalsIgnoreCase$1::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ExchangeImpl$$Lambda$equalsIgnoreCase$1::*)($String*)>(&ExchangeImpl$$Lambda$equalsIgnoreCase$1::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo ExchangeImpl$$Lambda$equalsIgnoreCase$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.net.httpserver.ExchangeImpl$$Lambda$equalsIgnoreCase$1",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* ExchangeImpl$$Lambda$equalsIgnoreCase$1::load$($String* name, bool initialize) {
	$loadClass(ExchangeImpl$$Lambda$equalsIgnoreCase$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* ExchangeImpl$$Lambda$equalsIgnoreCase$1::class$ = nullptr;

$FieldInfo _ExchangeImpl_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ExchangeImpl, $assertionsDisabled)},
	{"reqHdrs", "Lcom/sun/net/httpserver/Headers;", nullptr, 0, $field(ExchangeImpl, reqHdrs)},
	{"rspHdrs", "Lcom/sun/net/httpserver/Headers;", nullptr, 0, $field(ExchangeImpl, rspHdrs)},
	{"req", "Lsun/net/httpserver/Request;", nullptr, 0, $field(ExchangeImpl, req)},
	{"method", "Ljava/lang/String;", nullptr, 0, $field(ExchangeImpl, method)},
	{"writefinished", "Z", nullptr, 0, $field(ExchangeImpl, writefinished)},
	{"uri", "Ljava/net/URI;", nullptr, 0, $field(ExchangeImpl, uri)},
	{"connection", "Lsun/net/httpserver/HttpConnection;", nullptr, 0, $field(ExchangeImpl, connection)},
	{"reqContentLen", "J", nullptr, 0, $field(ExchangeImpl, reqContentLen)},
	{"rspContentLen", "J", nullptr, 0, $field(ExchangeImpl, rspContentLen)},
	{"ris", "Ljava/io/InputStream;", nullptr, 0, $field(ExchangeImpl, ris)},
	{"ros", "Ljava/io/OutputStream;", nullptr, 0, $field(ExchangeImpl, ros)},
	{"thread", "Ljava/lang/Thread;", nullptr, 0, $field(ExchangeImpl, thread)},
	{"close", "Z", nullptr, 0, $field(ExchangeImpl, close$)},
	{"closed", "Z", nullptr, 0, $field(ExchangeImpl, closed)},
	{"http10", "Z", nullptr, 0, $field(ExchangeImpl, http10)},
	{"FORMATTER", "Ljava/time/format/DateTimeFormatter;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExchangeImpl, FORMATTER)},
	{"HEAD", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ExchangeImpl, HEAD)},
	{"uis", "Ljava/io/InputStream;", nullptr, 0, $field(ExchangeImpl, uis)},
	{"uos", "Ljava/io/OutputStream;", nullptr, 0, $field(ExchangeImpl, uos)},
	{"uis_orig", "Lsun/net/httpserver/LeftOverInputStream;", nullptr, 0, $field(ExchangeImpl, uis_orig)},
	{"uos_orig", "Lsun/net/httpserver/PlaceholderOutputStream;", nullptr, 0, $field(ExchangeImpl, uos_orig)},
	{"sentHeaders", "Z", nullptr, 0, $field(ExchangeImpl, sentHeaders)},
	{"attributes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Object;>;", 0, $field(ExchangeImpl, attributes)},
	{"rcode", "I", nullptr, 0, $field(ExchangeImpl, rcode)},
	{"principal", "Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, 0, $field(ExchangeImpl, principal)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(ExchangeImpl, server)},
	{"rspbuf", "[B", nullptr, $PRIVATE, $field(ExchangeImpl, rspbuf)},
	{}
};

$MethodInfo _ExchangeImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/net/URI;Lsun/net/httpserver/Request;JLsun/net/httpserver/HttpConnection;)V", nullptr, 0, $method(static_cast<void(ExchangeImpl::*)($String*,$URI*,$Request*,int64_t,$HttpConnection*)>(&ExchangeImpl::init$)), "java.io.IOException"},
	{"bytes", "(Ljava/lang/String;I)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ExchangeImpl::*)($String*,int32_t)>(&ExchangeImpl::bytes))},
	{"close", "()V", nullptr, $PUBLIC},
	{"get", "(Lcom/sun/net/httpserver/HttpExchange;)Lsun/net/httpserver/ExchangeImpl;", nullptr, $STATIC, $method(static_cast<ExchangeImpl*(*)($HttpExchange*)>(&ExchangeImpl::get))},
	{"getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getConnection", "()Lsun/net/httpserver/HttpConnection;", nullptr, 0},
	{"getHttpContext", "()Lsun/net/httpserver/HttpContextImpl;", nullptr, $PUBLIC},
	{"getLocalAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getOriginalInputStream", "()Lsun/net/httpserver/LeftOverInputStream;", nullptr, 0},
	{"getPlaceholderResponseBody", "()Lsun/net/httpserver/PlaceholderOutputStream;", nullptr, 0},
	{"getPrincipal", "()Lcom/sun/net/httpserver/HttpPrincipal;", nullptr, $PUBLIC},
	{"getProtocol", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRemoteAddress", "()Ljava/net/InetSocketAddress;", nullptr, $PUBLIC},
	{"getRequestBody", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getRequestHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC},
	{"getRequestMethod", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getRequestURI", "()Ljava/net/URI;", nullptr, $PUBLIC},
	{"getResponseBody", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{"getResponseCode", "()I", nullptr, $PUBLIC},
	{"getResponseHeaders", "()Lcom/sun/net/httpserver/Headers;", nullptr, $PUBLIC},
	{"getSSLSession", "()Ljavax/net/ssl/SSLSession;", nullptr, $PUBLIC},
	{"getServerImpl", "()Lsun/net/httpserver/ServerImpl;", nullptr, 0},
	{"isHeadRequest", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(ExchangeImpl::*)()>(&ExchangeImpl::isHeadRequest))},
	{"sendResponseHeaders", "(IJ)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"setAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{"setPrincipal", "(Lcom/sun/net/httpserver/HttpPrincipal;)V", nullptr, 0},
	{"setStreams", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC},
	{"write", "(Lcom/sun/net/httpserver/Headers;Ljava/io/OutputStream;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _ExchangeImpl_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ExchangeImpl",
	"java.lang.Object",
	nullptr,
	_ExchangeImpl_FieldInfo_,
	_ExchangeImpl_MethodInfo_
};

$Object* allocate$ExchangeImpl($Class* clazz) {
	return $of($alloc(ExchangeImpl));
}

bool ExchangeImpl::$assertionsDisabled = false;
$DateTimeFormatter* ExchangeImpl::FORMATTER = nullptr;
$String* ExchangeImpl::HEAD = nullptr;

void ExchangeImpl::init$($String* m, $URI* u, $Request* req, int64_t len, $HttpConnection* connection) {
	this->http10 = false;
	this->rcode = -1;
	$set(this, rspbuf, $new($bytes, 128));
	$set(this, req, req);
	$set(this, reqHdrs, $new($UnmodifiableHeaders, $($nc(req)->headers())));
	$set(this, rspHdrs, $new($Headers));
	$set(this, method, m);
	$set(this, uri, u);
	$set(this, connection, connection);
	this->reqContentLen = len;
	$set(this, ros, $nc(req)->outputStream());
	$set(this, ris, req->inputStream());
	$set(this, server, getServerImpl());
	$nc(this->server)->startExchange();
}

$Headers* ExchangeImpl::getRequestHeaders() {
	return this->reqHdrs;
}

$Headers* ExchangeImpl::getResponseHeaders() {
	return this->rspHdrs;
}

$URI* ExchangeImpl::getRequestURI() {
	return this->uri;
}

$String* ExchangeImpl::getRequestMethod() {
	return this->method;
}

$HttpContextImpl* ExchangeImpl::getHttpContext() {
	return $nc(this->connection)->getHttpContext();
}

bool ExchangeImpl::isHeadRequest() {
	return $nc(ExchangeImpl::HEAD)->equals($(getRequestMethod()));
}

void ExchangeImpl::close() {
	if (this->closed) {
		return;
	}
	this->closed = true;
	try {
		if (this->uis_orig == nullptr || this->uos == nullptr) {
			$nc(this->connection)->close();
			return;
		}
		if (!$nc(this->uos_orig)->isWrapped()) {
			$nc(this->connection)->close();
			return;
		}
		if (!$nc(this->uis_orig)->isClosed()) {
			$nc(this->uis_orig)->close();
		}
		$nc(this->uos)->close();
	} catch ($IOException& e) {
		$nc(this->connection)->close();
	}
}

$InputStream* ExchangeImpl::getRequestBody() {
	if (this->uis != nullptr) {
		return this->uis;
	}
	if (this->reqContentLen == (int64_t)-1) {
		$set(this, uis_orig, $new($ChunkedInputStream, this, this->ris));
		$set(this, uis, this->uis_orig);
	} else {
		$set(this, uis_orig, $new($FixedLengthInputStream, this, this->ris, this->reqContentLen));
		$set(this, uis, this->uis_orig);
	}
	return this->uis;
}

$LeftOverInputStream* ExchangeImpl::getOriginalInputStream() {
	return this->uis_orig;
}

int32_t ExchangeImpl::getResponseCode() {
	return this->rcode;
}

$OutputStream* ExchangeImpl::getResponseBody() {
	if (this->uos == nullptr) {
		$set(this, uos_orig, $new($PlaceholderOutputStream, nullptr));
		$set(this, uos, this->uos_orig);
	}
	return this->uos;
}

$PlaceholderOutputStream* ExchangeImpl::getPlaceholderResponseBody() {
	getResponseBody();
	return this->uos_orig;
}

void ExchangeImpl::sendResponseHeaders(int32_t rCode, int64_t contentLen) {
	$useLocalCurrentObjectStackCache();
	$var($System$Logger, logger, $nc(this->server)->getLogger());
	if (this->sentHeaders) {
		$throwNew($IOException, "headers already sent"_s);
	}
	this->rcode = rCode;
	$var($String, statusLine, $str({"HTTP/1.1 "_s, $$str(rCode), $($Code::msg(rCode)), "\r\n"_s}));
	$var($OutputStream, tmpout, $new($BufferedOutputStream, this->ros));
	$var($PlaceholderOutputStream, o, getPlaceholderResponseBody());
	$var($bytes, var$0, bytes(statusLine, 0));
	tmpout->write(var$0, 0, $nc(statusLine)->length());
	bool noContentToSend = false;
	bool noContentLengthHeader = false;
	$nc(this->rspHdrs)->set("Date"_s, $($nc(ExchangeImpl::FORMATTER)->format($($Instant::now()))));
	if ((rCode >= 100 && rCode < 200) || (rCode == 204) || (rCode == 304)) {
		if (contentLen != -1) {
			$var($String, msg, $str({"sendResponseHeaders: rCode = "_s, $$str(rCode), ": forcing contentLen = -1"_s}));
			$init($System$Logger$Level);
			$nc(logger)->log($System$Logger$Level::WARNING, msg);
		}
		contentLen = -1;
		noContentLengthHeader = (rCode != 304);
	}
	if (isHeadRequest() || rCode == 304) {
		if (contentLen >= 0) {
			$var($String, msg, "sendResponseHeaders: being invoked with a content length for a HEAD request"_s);
			$init($System$Logger$Level);
			$nc(logger)->log($System$Logger$Level::WARNING, msg);
		}
		noContentToSend = true;
		contentLen = 0;
	} else if (contentLen == 0) {
		if (this->http10) {
			$nc(o)->setWrappedStream($$new($UndefLengthOutputStream, this, this->ros));
			this->close$ = true;
		} else {
			$nc(this->rspHdrs)->set("Transfer-encoding"_s, "chunked"_s);
			$nc(o)->setWrappedStream($$new($ChunkedOutputStream, this, this->ros));
		}
	} else {
		if (contentLen == -1) {
			noContentToSend = true;
			contentLen = 0;
		}
		if (!noContentLengthHeader) {
			$nc(this->rspHdrs)->set("Content-length"_s, $($Long::toString(contentLen)));
		}
		$nc(o)->setWrappedStream($$new($FixedLengthOutputStream, this, this->ros, contentLen));
	}
	if (!this->close$) {
		$var($Stream, conheader, $cast($Stream, $nc($($nc($($Optional::ofNullable($($nc(this->rspHdrs)->get("Connection"_s)))))->map(static_cast<$Function*>($$new(ExchangeImpl$$Lambda$stream)))))->orElse($($Stream::empty()))));
		if ($nc(conheader)->anyMatch(static_cast<$Predicate*>($$new(ExchangeImpl$$Lambda$equalsIgnoreCase$1, static_cast<$String*>("close"_s))))) {
			$init($System$Logger$Level);
			$nc(logger)->log($System$Logger$Level::DEBUG, "Connection: close requested by handler"_s);
			this->close$ = true;
		}
	}
	write(this->rspHdrs, tmpout);
	this->rspContentLen = contentLen;
	tmpout->flush();
	$assign(tmpout, nullptr);
	this->sentHeaders = true;
	$init($System$Logger$Level);
	$nc(logger)->log($System$Logger$Level::TRACE, $$str({"Sent headers: noContentToSend="_s, $$str(noContentToSend)}));
	if (noContentToSend) {
		$var($WriteFinishedEvent, e, $new($WriteFinishedEvent, this));
		$nc(this->server)->addEvent(e);
		this->closed = true;
	}
	$nc(this->server)->logReply(rCode, $($nc(this->req)->requestLine()), nullptr);
}

void ExchangeImpl::write($Headers* map, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	$var($Set, entries, $nc(map)->entrySet());
	{
		$var($Iterator, i$, $nc(entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, key, $cast($String, $nc(entry)->getKey()));
				$var($bytes, buf, nullptr);
				$var($List, values, $cast($List, entry->getValue()));
				{
					$var($Iterator, i$, $nc(values)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($String, val, $cast($String, i$->next()));
						{
							int32_t i = $nc(key)->length();
							$assign(buf, bytes(key, 2));
							$nc(buf)->set(i++, (int8_t)u':');
							buf->set(i++, (int8_t)u' ');
							$nc(os)->write(buf, 0, i);
							$assign(buf, bytes(val, 2));
							i = $nc(val)->length();
							buf->set(i++, (int8_t)u'\r');
							buf->set(i++, (int8_t)u'\n');
							os->write(buf, 0, i);
						}
					}
				}
			}
		}
	}
	$nc(os)->write((int32_t)u'\r');
	os->write((int32_t)u'\n');
}

$bytes* ExchangeImpl::bytes($String* s, int32_t extra) {
	int32_t slen = $nc(s)->length();
	if (slen + extra > $nc(this->rspbuf)->length) {
		int32_t diff = slen + extra - $nc(this->rspbuf)->length;
		$set(this, rspbuf, $new($bytes, 2 * ($nc(this->rspbuf)->length + diff)));
	}
	$var($chars, c, s->toCharArray());
	for (int32_t i = 0; i < c->length; ++i) {
		$nc(this->rspbuf)->set(i, (int8_t)c->get(i));
	}
	return this->rspbuf;
}

$InetSocketAddress* ExchangeImpl::getRemoteAddress() {
	$useLocalCurrentObjectStackCache();
	$var($Socket, s, $nc($($nc(this->connection)->getChannel()))->socket());
	$var($InetAddress, ia, $nc(s)->getInetAddress());
	int32_t port = s->getPort();
	return $new($InetSocketAddress, ia, port);
}

$InetSocketAddress* ExchangeImpl::getLocalAddress() {
	$useLocalCurrentObjectStackCache();
	$var($Socket, s, $nc($($nc(this->connection)->getChannel()))->socket());
	$var($InetAddress, ia, $nc(s)->getLocalAddress());
	int32_t port = s->getLocalPort();
	return $new($InetSocketAddress, ia, port);
}

$String* ExchangeImpl::getProtocol() {
	$var($String, reqline, $nc(this->req)->requestLine());
	int32_t index = $nc(reqline)->lastIndexOf((int32_t)u' ');
	return reqline->substring(index + 1);
}

$SSLSession* ExchangeImpl::getSSLSession() {
	$var($SSLEngine, e, $nc(this->connection)->getSSLEngine());
	if (e == nullptr) {
		return nullptr;
	}
	return $nc(e)->getSession();
}

$Object* ExchangeImpl::getAttribute($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "null name parameter"_s);
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $nc($(getHttpContext()))->getAttributes());
	}
	return $of($nc(this->attributes)->get(name));
}

void ExchangeImpl::setAttribute($String* name, Object$* value) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "null name parameter"_s);
	}
	if (this->attributes == nullptr) {
		$set(this, attributes, $nc($(getHttpContext()))->getAttributes());
	}
	$nc(this->attributes)->put(name, value);
}

void ExchangeImpl::setStreams($InputStream* i, $OutputStream* o) {
	if (!ExchangeImpl::$assertionsDisabled && !(this->uis != nullptr)) {
		$throwNew($AssertionError);
	}
	if (i != nullptr) {
		$set(this, uis, i);
	}
	if (o != nullptr) {
		$set(this, uos, o);
	}
}

$HttpConnection* ExchangeImpl::getConnection() {
	return this->connection;
}

$ServerImpl* ExchangeImpl::getServerImpl() {
	return $nc($(getHttpContext()))->getServerImpl();
}

$HttpPrincipal* ExchangeImpl::getPrincipal() {
	return this->principal;
}

void ExchangeImpl::setPrincipal($HttpPrincipal* principal) {
	$set(this, principal, principal);
}

ExchangeImpl* ExchangeImpl::get($HttpExchange* t) {
	$init(ExchangeImpl);
	if ($instanceOf($HttpExchangeImpl, t)) {
		return $nc(($cast($HttpExchangeImpl, t)))->getExchangeImpl();
	} else {
		if (!ExchangeImpl::$assertionsDisabled && !$instanceOf($HttpsExchangeImpl, t)) {
			$throwNew($AssertionError);
		}
		return $nc(($cast($HttpsExchangeImpl, t)))->getExchangeImpl();
	}
}

void clinit$ExchangeImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ExchangeImpl::HEAD, "HEAD"_s);
	ExchangeImpl::$assertionsDisabled = !ExchangeImpl::class$->desiredAssertionStatus();
	{
		$var($String, pattern, "EEE, dd MMM yyyy HH:mm:ss zzz"_s);
		$init($Locale);
		$assignStatic(ExchangeImpl::FORMATTER, $nc($($DateTimeFormatter::ofPattern(pattern, $Locale::US)))->withZone($($ZoneId::of("GMT"_s))));
	}
}

ExchangeImpl::ExchangeImpl() {
}

$Class* ExchangeImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(ExchangeImpl$$Lambda$stream::classInfo$.name)) {
			return ExchangeImpl$$Lambda$stream::load$(name, initialize);
		}
		if (name->equals(ExchangeImpl$$Lambda$equalsIgnoreCase$1::classInfo$.name)) {
			return ExchangeImpl$$Lambda$equalsIgnoreCase$1::load$(name, initialize);
		}
	}
	$loadClass(ExchangeImpl, name, initialize, &_ExchangeImpl_ClassInfo_, clinit$ExchangeImpl, allocate$ExchangeImpl);
	return class$;
}

$Class* ExchangeImpl::class$ = nullptr;

		} // httpserver
	} // net
} // sun