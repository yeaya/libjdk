#include <sun/net/httpserver/HttpConnection.h>

#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/System$Logger$Level.h>
#include <java/lang/System$Logger.h>
#include <java/nio/channels/SelectionKey.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/channels/spi/AbstractInterruptibleChannel.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLEngine.h>
#include <sun/net/httpserver/HttpConnection$State.h>
#include <sun/net/httpserver/HttpContextImpl.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef TRACE

using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $System$Logger = ::java::lang::System$Logger;
using $System$Logger$Level = ::java::lang::System$Logger$Level;
using $SelectionKey = ::java::nio::channels::SelectionKey;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $AbstractInterruptibleChannel = ::java::nio::channels::spi::AbstractInterruptibleChannel;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $HttpConnection$State = ::sun::net::httpserver::HttpConnection$State;
using $HttpContextImpl = ::sun::net::httpserver::HttpContextImpl;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpConnection_FieldInfo_[] = {
	{"context", "Lsun/net/httpserver/HttpContextImpl;", nullptr, 0, $field(HttpConnection, context)},
	{"engine", "Ljavax/net/ssl/SSLEngine;", nullptr, 0, $field(HttpConnection, engine)},
	{"sslContext", "Ljavax/net/ssl/SSLContext;", nullptr, 0, $field(HttpConnection, sslContext)},
	{"sslStreams", "Lsun/net/httpserver/SSLStreams;", nullptr, 0, $field(HttpConnection, sslStreams)},
	{"i", "Ljava/io/InputStream;", nullptr, 0, $field(HttpConnection, i)},
	{"raw", "Ljava/io/InputStream;", nullptr, 0, $field(HttpConnection, raw)},
	{"rawout", "Ljava/io/OutputStream;", nullptr, 0, $field(HttpConnection, rawout)},
	{"chan", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(HttpConnection, chan)},
	{"selectionKey", "Ljava/nio/channels/SelectionKey;", nullptr, 0, $field(HttpConnection, selectionKey)},
	{"protocol", "Ljava/lang/String;", nullptr, 0, $field(HttpConnection, protocol)},
	{"time", "J", nullptr, 0, $field(HttpConnection, time)},
	{"creationTime", "J", nullptr, $VOLATILE, $field(HttpConnection, creationTime)},
	{"rspStartedTime", "J", nullptr, $VOLATILE, $field(HttpConnection, rspStartedTime)},
	{"remaining", "I", nullptr, 0, $field(HttpConnection, remaining)},
	{"closed", "Z", nullptr, 0, $field(HttpConnection, closed)},
	{"logger", "Ljava/lang/System$Logger;", nullptr, 0, $field(HttpConnection, logger)},
	{"state", "Lsun/net/httpserver/HttpConnection$State;", nullptr, $VOLATILE, $field(HttpConnection, state)},
	{}
};

$MethodInfo _HttpConnection_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(HttpConnection::*)()>(&HttpConnection::init$))},
	{"close", "()V", nullptr, $SYNCHRONIZED},
	{"getChannel", "()Ljava/nio/channels/SocketChannel;", nullptr, 0},
	{"getHttpContext", "()Lsun/net/httpserver/HttpContextImpl;", nullptr, 0},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, 0},
	{"getProtocol", "()Ljava/lang/String;", nullptr, 0},
	{"getRawOutputStream", "()Ljava/io/OutputStream;", nullptr, 0},
	{"getRemaining", "()I", nullptr, 0},
	{"getSSLContext", "()Ljavax/net/ssl/SSLContext;", nullptr, 0},
	{"getSSLEngine", "()Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"getSelectionKey", "()Ljava/nio/channels/SelectionKey;", nullptr, 0},
	{"getState", "()Lsun/net/httpserver/HttpConnection$State;", nullptr, 0},
	{"setChannel", "(Ljava/nio/channels/SocketChannel;)V", nullptr, 0},
	{"setContext", "(Lsun/net/httpserver/HttpContextImpl;)V", nullptr, 0},
	{"setParameters", "(Ljava/io/InputStream;Ljava/io/OutputStream;Ljava/nio/channels/SocketChannel;Ljavax/net/ssl/SSLEngine;Lsun/net/httpserver/SSLStreams;Ljavax/net/ssl/SSLContext;Ljava/lang/String;Lsun/net/httpserver/HttpContextImpl;Ljava/io/InputStream;)V", nullptr, 0},
	{"setRemaining", "(I)V", nullptr, 0},
	{"setState", "(Lsun/net/httpserver/HttpConnection$State;)V", nullptr, 0},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _HttpConnection_InnerClassesInfo_[] = {
	{"sun.net.httpserver.HttpConnection$State", "sun.net.httpserver.HttpConnection", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HttpConnection_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.HttpConnection",
	"java.lang.Object",
	nullptr,
	_HttpConnection_FieldInfo_,
	_HttpConnection_MethodInfo_,
	nullptr,
	nullptr,
	_HttpConnection_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.httpserver.HttpConnection$State"
};

$Object* allocate$HttpConnection($Class* clazz) {
	return $of($alloc(HttpConnection));
}

$String* HttpConnection::toString() {
	$var($String, s, nullptr);
	if (this->chan != nullptr) {
		$assign(s, $nc($of(this->chan))->toString());
	}
	return s;
}

void HttpConnection::init$() {
	this->closed = false;
}

void HttpConnection::setChannel($SocketChannel* c) {
	$set(this, chan, c);
}

void HttpConnection::setContext($HttpContextImpl* ctx) {
	$set(this, context, ctx);
}

$HttpConnection$State* HttpConnection::getState() {
	return this->state;
}

void HttpConnection::setState($HttpConnection$State* s) {
	$set(this, state, s);
}

void HttpConnection::setParameters($InputStream* in, $OutputStream* rawout, $SocketChannel* chan, $SSLEngine* engine, $SSLStreams* sslStreams, $SSLContext* sslContext, $String* protocol, $HttpContextImpl* context, $InputStream* raw) {
	$set(this, context, context);
	$set(this, i, in);
	$set(this, rawout, rawout);
	$set(this, raw, raw);
	$set(this, protocol, protocol);
	$set(this, engine, engine);
	$set(this, chan, chan);
	$set(this, sslContext, sslContext);
	$set(this, sslStreams, sslStreams);
	$set(this, logger, $nc(context)->getLogger());
}

$SocketChannel* HttpConnection::getChannel() {
	return this->chan;
}

void HttpConnection::close() {
	$synchronized(this) {
		$useLocalCurrentObjectStackCache();
		if (this->closed) {
			return;
		}
		this->closed = true;
		if (this->logger != nullptr && this->chan != nullptr) {
			$init($System$Logger$Level);
			$nc(this->logger)->log($System$Logger$Level::TRACE, $$str({"Closing connection: "_s, $($nc($of(this->chan))->toString())}));
		}
		if (!$nc(this->chan)->isOpen()) {
			$ServerImpl::dprint("Channel already closed"_s);
			return;
		}
		try {
			if (this->raw != nullptr) {
				$nc(this->raw)->close();
			}
		} catch ($IOException& e) {
			$ServerImpl::dprint(static_cast<$Exception*>(e));
		}
		try {
			if (this->rawout != nullptr) {
				$nc(this->rawout)->close();
			}
		} catch ($IOException& e) {
			$ServerImpl::dprint(static_cast<$Exception*>(e));
		}
		try {
			if (this->sslStreams != nullptr) {
				$nc(this->sslStreams)->close();
			}
		} catch ($IOException& e) {
			$ServerImpl::dprint(static_cast<$Exception*>(e));
		}
		try {
			$nc(this->chan)->close();
		} catch ($IOException& e) {
			$ServerImpl::dprint(static_cast<$Exception*>(e));
		}
	}
}

void HttpConnection::setRemaining(int32_t r) {
	this->remaining = r;
}

int32_t HttpConnection::getRemaining() {
	return this->remaining;
}

$SelectionKey* HttpConnection::getSelectionKey() {
	return this->selectionKey;
}

$InputStream* HttpConnection::getInputStream() {
	return this->i;
}

$OutputStream* HttpConnection::getRawOutputStream() {
	return this->rawout;
}

$String* HttpConnection::getProtocol() {
	return this->protocol;
}

$SSLEngine* HttpConnection::getSSLEngine() {
	return this->engine;
}

$SSLContext* HttpConnection::getSSLContext() {
	return this->sslContext;
}

$HttpContextImpl* HttpConnection::getHttpContext() {
	return this->context;
}

HttpConnection::HttpConnection() {
}

$Class* HttpConnection::load$($String* name, bool initialize) {
	$loadClass(HttpConnection, name, initialize, &_HttpConnection_ClassInfo_, allocate$HttpConnection);
	return class$;
}

$Class* HttpConnection::class$ = nullptr;

		} // httpserver
	} // net
} // sun