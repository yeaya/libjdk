#include <sun/net/httpserver/ServerImpl$Exchange.h>

#include <com/sun/net/httpserver/Filter$Chain.h>
#include <com/sun/net/httpserver/Headers.h>
#include <com/sun/net/httpserver/HttpExchange.h>
#include <com/sun/net/httpserver/HttpHandler.h>
#include <com/sun/net/httpserver/HttpsExchange.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLEngine.h>
#include <sun/net/httpserver/Code.h>
#include <sun/net/httpserver/ContextList.h>
#include <sun/net/httpserver/ExchangeImpl.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/HttpError.h>
#include <sun/net/httpserver/HttpExchangeImpl.h>
#include <sun/net/httpserver/HttpsExchangeImpl.h>
#include <sun/net/httpserver/Request$ReadStream.h>
#include <sun/net/httpserver/Request$WriteStream.h>
#include <sun/net/httpserver/Request.h>
#include <sun/net/httpserver/SSLStreams$InputStream.h>
#include <sun/net/httpserver/SSLStreams$OutputStream.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <sun/net/httpserver/ServerConfig.h>
#include <sun/net/httpserver/ServerImpl$Exchange$LinkHandler.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef DEBUG
#undef HTTP_BAD_REQUEST
#undef HTTP_CONTINUE
#undef HTTP_INTERNAL_ERROR
#undef HTTP_NOT_FOUND
#undef HTTP_NOT_IMPLEMENTED
#undef TRACE
#undef WARNING

using $Filter$Chain = ::com::sun::net::httpserver::Filter$Chain;
using $Headers = ::com::sun::net::httpserver::Headers;
using $HttpExchange = ::com::sun::net::httpserver::HttpExchange;
using $HttpHandler = ::com::sun::net::httpserver::HttpHandler;
using $HttpsExchange = ::com::sun::net::httpserver::HttpsExchange;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $Code = ::sun::net::httpserver::Code;
using $ContextList = ::sun::net::httpserver::ContextList;
using $ExchangeImpl = ::sun::net::httpserver::ExchangeImpl;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $HttpError = ::sun::net::httpserver::HttpError;
using $HttpExchangeImpl = ::sun::net::httpserver::HttpExchangeImpl;
using $HttpsExchangeImpl = ::sun::net::httpserver::HttpsExchangeImpl;
using $Request = ::sun::net::httpserver::Request;
using $Request$ReadStream = ::sun::net::httpserver::Request$ReadStream;
using $Request$WriteStream = ::sun::net::httpserver::Request$WriteStream;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;
using $SSLStreams$InputStream = ::sun::net::httpserver::SSLStreams$InputStream;
using $SSLStreams$OutputStream = ::sun::net::httpserver::SSLStreams$OutputStream;
using $ServerConfig = ::sun::net::httpserver::ServerConfig;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $ServerImpl$Exchange$LinkHandler = ::sun::net::httpserver::ServerImpl$Exchange$LinkHandler;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$Exchange_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/ServerImpl;", nullptr, $FINAL | $SYNTHETIC, $field(ServerImpl$Exchange, this$0)},
	{"chan", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(ServerImpl$Exchange, chan)},
	{"connection", "Lsun/net/httpserver/HttpConnection;", nullptr, 0, $field(ServerImpl$Exchange, connection)},
	{"context", "Lsun/net/httpserver/HttpContextImpl;", nullptr, 0, $field(ServerImpl$Exchange, context)},
	{"rawin", "Ljava/io/InputStream;", nullptr, 0, $field(ServerImpl$Exchange, rawin)},
	{"rawout", "Ljava/io/OutputStream;", nullptr, 0, $field(ServerImpl$Exchange, rawout)},
	{"protocol", "Ljava/lang/String;", nullptr, 0, $field(ServerImpl$Exchange, protocol)},
	{"tx", "Lsun/net/httpserver/ExchangeImpl;", nullptr, 0, $field(ServerImpl$Exchange, tx)},
	{"ctx", "Lsun/net/httpserver/HttpContextImpl;", nullptr, 0, $field(ServerImpl$Exchange, ctx)},
	{"rejected", "Z", nullptr, 0, $field(ServerImpl$Exchange, rejected)},
	{}
};

$MethodInfo _ServerImpl$Exchange_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;Ljava/nio/channels/SocketChannel;Ljava/lang/String;Lsun/net/httpserver/HttpConnection;)V", nullptr, 0, $method(static_cast<void(ServerImpl$Exchange::*)($ServerImpl*,$SocketChannel*,$String*,$HttpConnection*)>(&ServerImpl$Exchange::init$)), "java.io.IOException"},
	{"reject", "(ILjava/lang/String;Ljava/lang/String;)V", nullptr, 0},
	{"run", "()V", nullptr, $PUBLIC},
	{"sendReply", "(IZLjava/lang/String;)V", nullptr, 0},
	{}
};

$InnerClassInfo _ServerImpl$Exchange_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$Exchange", "sun.net.httpserver.ServerImpl", "Exchange", 0},
	{"sun.net.httpserver.ServerImpl$Exchange$LinkHandler", "sun.net.httpserver.ServerImpl$Exchange", "LinkHandler", 0},
	{}
};

$ClassInfo _ServerImpl$Exchange_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.ServerImpl$Exchange",
	"java.lang.Object",
	"java.lang.Runnable",
	_ServerImpl$Exchange_FieldInfo_,
	_ServerImpl$Exchange_MethodInfo_,
	nullptr,
	nullptr,
	_ServerImpl$Exchange_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$Exchange($Class* clazz) {
	return $of($alloc(ServerImpl$Exchange));
}

void ServerImpl$Exchange::init$($ServerImpl* this$0, $SocketChannel* chan, $String* protocol, $HttpConnection* conn) {
	$set(this, this$0, this$0);
	this->rejected = false;
	$set(this, chan, chan);
	$set(this, connection, conn);
	$set(this, protocol, protocol);
}

void ServerImpl$Exchange::run() {
	$useLocalCurrentObjectStackCache();
	$init($System$Logger$Level);
	$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "exchange started"_s);
	$set(this, context, $nc(this->connection)->getHttpContext());
	bool newconnection = false;
	$var($SSLEngine, engine, nullptr);
	$var($String, requestLine, nullptr);
	$var($SSLStreams, sslStreams, nullptr);
	try {
		if (this->context != nullptr) {
			$set(this, rawin, $nc(this->connection)->getInputStream());
			$set(this, rawout, $nc(this->connection)->getRawOutputStream());
			newconnection = false;
		} else {
			newconnection = true;
			if (this->this$0->https) {
				if (this->this$0->sslContext == nullptr) {
					$nc(this->this$0->logger)->log($System$Logger$Level::WARNING, "SSL connection received. No https context created"_s);
					$throwNew($HttpError, "No SSL context established"_s);
				}
				$assign(sslStreams, $new($SSLStreams, this->this$0, this->this$0->sslContext, this->chan));
				$set(this, rawin, sslStreams->getInputStream());
				$set(this, rawout, sslStreams->getOutputStream());
				$assign(engine, sslStreams->getSSLEngine());
				$set($nc(this->connection), sslStreams, sslStreams);
			} else {
				$set(this, rawin, $new($BufferedInputStream, $$new($Request$ReadStream, this->this$0, this->chan)));
				$set(this, rawout, $new($Request$WriteStream, this->this$0, this->chan));
			}
			$set($nc(this->connection), raw, this->rawin);
			$set($nc(this->connection), rawout, this->rawout);
		}
		$var($Request, req, $new($Request, this->rawin, this->rawout));
		$assign(requestLine, req->requestLine());
		if (requestLine == nullptr) {
			$nc(this->this$0->logger)->log($System$Logger$Level::DEBUG, "no request line: closing"_s);
			this->this$0->closeConnection(this->connection);
			return;
		}
		$nc(this->this$0->logger)->log($System$Logger$Level::DEBUG, "Exchange request line: {0}"_s, $$new($ObjectArray, {$of(requestLine)}));
		int32_t space = $nc(requestLine)->indexOf((int32_t)u' ');
		if (space == -1) {
			reject($Code::HTTP_BAD_REQUEST, requestLine, "Bad request line"_s);
			return;
		}
		$var($String, method, requestLine->substring(0, space));
		int32_t start = space + 1;
		space = requestLine->indexOf((int32_t)u' ', start);
		if (space == -1) {
			reject($Code::HTTP_BAD_REQUEST, requestLine, "Bad request line"_s);
			return;
		}
		$var($String, uriStr, requestLine->substring(start, space));
		$var($URI, uri, $new($URI, uriStr));
		start = space + 1;
		$var($String, version, requestLine->substring(start));
		$var($Headers, headers, req->headers());
		{
			$var($Iterator, i$, $nc($($nc(headers)->keySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($String, k, $cast($String, i$->next()));
				{
					if (!$ServerImpl::isValidHeaderKey(k)) {
						reject($Code::HTTP_BAD_REQUEST, requestLine, "Header key contains illegal characters"_s);
						return;
					}
				}
			}
		}
		bool var$0 = headers->containsKey("Content-Length"_s);
		if (var$0) {
			bool var$1 = headers->containsKey("Transfer-encoding"_s);
			var$0 = (var$1 || $nc($($cast($List, headers->get("Content-Length"_s))))->size() > 1);
		}
		if (var$0) {
			reject($Code::HTTP_BAD_REQUEST, requestLine, "Conflicting or malformed headers detected"_s);
			return;
		}
		int64_t clen = 0;
		$var($String, headerValue, nullptr);
		$var($List, teValueList, $cast($List, headers->get("Transfer-encoding"_s)));
		if (teValueList != nullptr && !teValueList->isEmpty()) {
			$assign(headerValue, $cast($String, teValueList->get(0)));
		}
		if (headerValue != nullptr) {
			bool var$2 = headerValue->equalsIgnoreCase("chunked"_s);
			if (var$2 && $nc(teValueList)->size() == 1) {
				clen = -1;
			} else {
				reject($Code::HTTP_NOT_IMPLEMENTED, requestLine, "Unsupported Transfer-Encoding value"_s);
				return;
			}
		} else {
			$assign(headerValue, headers->getFirst("Content-Length"_s));
			if (headerValue != nullptr) {
				clen = $Long::parseLong(headerValue);
			}
			if (clen == 0) {
				this->this$0->requestCompleted(this->connection);
			}
		}
		$set(this, ctx, $nc(this->this$0->contexts)->findContext(this->protocol, $(uri->getPath())));
		if (this->ctx == nullptr) {
			reject($Code::HTTP_NOT_FOUND, requestLine, "No context found for request"_s);
			return;
		}
		$nc(this->connection)->setContext(this->ctx);
		if ($nc(this->ctx)->getHandler() == nullptr) {
			reject($Code::HTTP_INTERNAL_ERROR, requestLine, "No handler for context"_s);
			return;
		}
		$set(this, tx, $new($ExchangeImpl, method, uri, req, clen, this->connection));
		$var($String, chdr, headers->getFirst("Connection"_s));
		$var($Headers, rheaders, $nc(this->tx)->getResponseHeaders());
		if (chdr != nullptr && chdr->equalsIgnoreCase("close"_s)) {
			$nc(this->tx)->close$ = true;
		}
		if (version->equalsIgnoreCase("http/1.0"_s)) {
			$nc(this->tx)->http10 = true;
			if (chdr == nullptr) {
				$nc(this->tx)->close$ = true;
				$nc(rheaders)->set("Connection"_s, "close"_s);
			} else if ($nc(chdr)->equalsIgnoreCase("keep-alive"_s)) {
				$nc(rheaders)->set("Connection"_s, "keep-alive"_s);
				int32_t idle = (int32_t)($ServerConfig::getIdleInterval() / 1000);
				int32_t max = $ServerConfig::getMaxIdleConnections();
				$var($String, val, $str({"timeout="_s, $$str(idle), ", max="_s, $$str(max)}));
				rheaders->set("Keep-Alive"_s, val);
			}
		}
		if (newconnection) {
			$nc(this->connection)->setParameters(this->rawin, this->rawout, this->chan, engine, sslStreams, this->this$0->sslContext, this->protocol, this->ctx, this->rawin);
		}
		$var($String, exp, headers->getFirst("Expect"_s));
		if (exp != nullptr && exp->equalsIgnoreCase("100-continue"_s)) {
			this->this$0->logReply(100, requestLine, nullptr);
			sendReply($Code::HTTP_CONTINUE, false, nullptr);
		}
		$var($List, sf, $nc(this->ctx)->getSystemFilters());
		$var($List, uf, $nc(this->ctx)->getFilters());
		$var($Filter$Chain, sc, $new($Filter$Chain, sf, $($nc(this->ctx)->getHandler())));
		$var($Filter$Chain, uc, $new($Filter$Chain, uf, $$new($ServerImpl$Exchange$LinkHandler, this, sc)));
		$nc(this->tx)->getRequestBody();
		$nc(this->tx)->getResponseBody();
		if (this->this$0->https) {
			uc->doFilter($$new($HttpsExchangeImpl, this->tx));
		} else {
			uc->doFilter($$new($HttpExchangeImpl, this->tx));
		}
	} catch ($IOException& e1) {
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.Exchange (1)"_s, static_cast<$Throwable*>(e1));
		this->this$0->closeConnection(this->connection);
	} catch ($NumberFormatException& e2) {
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.Exchange (2)"_s, static_cast<$Throwable*>(e2));
		reject($Code::HTTP_BAD_REQUEST, requestLine, "NumberFormatException thrown"_s);
	} catch ($URISyntaxException& e3) {
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.Exchange (3)"_s, static_cast<$Throwable*>(e3));
		reject($Code::HTTP_BAD_REQUEST, requestLine, "URISyntaxException thrown"_s);
	} catch ($Exception& e4) {
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.Exchange (4)"_s, static_cast<$Throwable*>(e4));
		this->this$0->closeConnection(this->connection);
	} catch ($Throwable& t) {
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.Exchange (5)"_s, t);
		$throw(t);
	}
}

void ServerImpl$Exchange::reject(int32_t code, $String* requestStr, $String* message) {
	$useLocalCurrentObjectStackCache();
	this->rejected = true;
	this->this$0->logReply(code, requestStr, message);
	sendReply(code, false, $$str({"<h1>"_s, $$str(code), $($Code::msg(code)), "</h1>"_s, message}));
	this->this$0->closeConnection(this->connection);
}

void ServerImpl$Exchange::sendReply(int32_t code, bool closeNow, $String* text$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, text, text$renamed);
	try {
		$var($StringBuilder, builder, $new($StringBuilder, 512));
		builder->append("HTTP/1.1 "_s)->append(code)->append($($Code::msg(code)))->append("\r\n"_s);
		if (text != nullptr && text->length() != 0) {
			builder->append("Content-Length: "_s)->append(text->length())->append("\r\n"_s)->append("Content-Type: text/html\r\n"_s);
		} else {
			builder->append("Content-Length: 0\r\n"_s);
			$assign(text, ""_s);
		}
		if (closeNow) {
			builder->append("Connection: close\r\n"_s);
		}
		builder->append("\r\n"_s)->append(text);
		$var($String, s, builder->toString());
		$var($bytes, b, $nc(s)->getBytes("ISO8859_1"_s));
		$nc(this->rawout)->write(b);
		$nc(this->rawout)->flush();
		if (closeNow) {
			this->this$0->closeConnection(this->connection);
		}
	} catch ($IOException& e) {
		$init($System$Logger$Level);
		$nc(this->this$0->logger)->log($System$Logger$Level::TRACE, "ServerImpl.sendReply"_s, static_cast<$Throwable*>(e));
		this->this$0->closeConnection(this->connection);
	}
}

ServerImpl$Exchange::ServerImpl$Exchange() {
}

$Class* ServerImpl$Exchange::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$Exchange, name, initialize, &_ServerImpl$Exchange_ClassInfo_, allocate$ServerImpl$Exchange);
	return class$;
}

$Class* ServerImpl$Exchange::class$ = nullptr;

		} // httpserver
	} // net
} // sun