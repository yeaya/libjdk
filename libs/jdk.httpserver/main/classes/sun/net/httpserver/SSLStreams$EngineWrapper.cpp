#include <sun/net/httpserver/SSLStreams$EngineWrapper.h>
#include <java/io/IOException.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <sun/net/httpserver/SSLStreams$BufType.h>
#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef APPLICATION
#undef BUFFER_OVERFLOW
#undef BUFFER_UNDERFLOW
#undef CLOSED
#undef OK
#undef PACKET

using $IOException = ::java::io::IOException;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;
using $SSLStreams$BufType = ::sun::net::httpserver::SSLStreams$BufType;
using $SSLStreams$WrapperResult = ::sun::net::httpserver::SSLStreams$WrapperResult;

namespace sun {
	namespace net {
		namespace httpserver {

bool SSLStreams$EngineWrapper::$assertionsDisabled = false;

void SSLStreams$EngineWrapper::init$($SSLStreams* this$0, $SocketChannel* chan, $SSLEngine* engine) {
	$set(this, this$0, this$0);
	this->closed = false;
	$set(this, chan, chan);
	$set(this, engine, engine);
	$set(this, wrapLock, $new($Object));
	$set(this, unwrapLock, $new($Object));
	$init($SSLStreams$BufType);
	$set(this, unwrap_src, this$0->allocate($SSLStreams$BufType::PACKET));
	$set(this, wrap_dst, this$0->allocate($SSLStreams$BufType::PACKET));
}

void SSLStreams$EngineWrapper::close() {
}

$SSLStreams$WrapperResult* SSLStreams$EngineWrapper::wrapAndSend($ByteBuffer* src) {
	return wrapAndSendX(src, false);
}

$SSLStreams$WrapperResult* SSLStreams$EngineWrapper::wrapAndSendX($ByteBuffer* src, bool ignoreClose) {
	if (this->closed && !ignoreClose) {
		$throwNew($IOException, "Engine is closed"_s);
	}
	$SSLEngineResult$Status* status = nullptr;
	$var($SSLStreams$WrapperResult, r, $new($SSLStreams$WrapperResult, this->this$0));
	$synchronized(this->wrapLock) {
		$nc(this->wrap_dst)->clear();
		$init($SSLEngineResult$Status);
		do {
			$set(r, result, $nc(this->engine)->wrap(src, this->wrap_dst));
			status = $nc(r->result)->getStatus();
			$init($SSLEngineResult$Status);
			if (status == $SSLEngineResult$Status::BUFFER_OVERFLOW) {
				$init($SSLStreams$BufType);
				$set(this, wrap_dst, this->this$0->realloc(this->wrap_dst, true, $SSLStreams$BufType::PACKET));
			}
		} while (status == $SSLEngineResult$Status::BUFFER_OVERFLOW);
		if (status == $SSLEngineResult$Status::CLOSED && !ignoreClose) {
			this->closed = true;
			return r;
		}
		if ($nc(r->result)->bytesProduced() > 0) {
			$nc(this->wrap_dst)->flip();
			int32_t l = $nc(this->wrap_dst)->remaining();
			if (!SSLStreams$EngineWrapper::$assertionsDisabled && !(l == $nc(r->result)->bytesProduced())) {
				$throwNew($AssertionError);
			}
			while (l > 0) {
				l -= $nc(this->chan)->write(this->wrap_dst);
			}
		}
	}
	return r;
}

$SSLStreams$WrapperResult* SSLStreams$EngineWrapper::recvAndUnwrap($ByteBuffer* dst) {
	$init($SSLEngineResult$Status);
	$SSLEngineResult$Status* status = $SSLEngineResult$Status::OK;
	$var($SSLStreams$WrapperResult, r, $new($SSLStreams$WrapperResult, this->this$0));
	$set(r, buf, dst);
	if (this->closed) {
		$throwNew($IOException, "Engine is closed"_s);
	}
	bool needData = false;
	if (this->u_remaining > 0) {
		$nc(this->unwrap_src)->compact();
		$nc(this->unwrap_src)->flip();
		needData = false;
	} else {
		$nc(this->unwrap_src)->clear();
		needData = true;
	}
	$synchronized(this->unwrapLock) {
		int32_t x = 0;
		do {
			if (needData) {
				do {
					x = $nc(this->chan)->read(this->unwrap_src);
				} while (x == 0);
				if (x == -1) {
					$throwNew($IOException, "connection closed for reading"_s);
				}
				$nc(this->unwrap_src)->flip();
			}
			$set(r, result, $nc(this->engine)->unwrap(this->unwrap_src, r->buf));
			status = $nc(r->result)->getStatus();
			if (status == $SSLEngineResult$Status::BUFFER_UNDERFLOW) {
				int32_t var$0 = $nc(this->unwrap_src)->limit();
				if (var$0 == this->unwrap_src->capacity()) {
					$init($SSLStreams$BufType);
					$set(this, unwrap_src, this->this$0->realloc(this->unwrap_src, false, $SSLStreams$BufType::PACKET));
				} else {
					$nc(this->unwrap_src)->position($nc(this->unwrap_src)->limit());
					$nc(this->unwrap_src)->limit($nc(this->unwrap_src)->capacity());
				}
				needData = true;
			} else if (status == $SSLEngineResult$Status::BUFFER_OVERFLOW) {
				$init($SSLStreams$BufType);
				$set(r, buf, this->this$0->realloc(r->buf, true, $SSLStreams$BufType::APPLICATION));
				needData = false;
			} else if (status == $SSLEngineResult$Status::CLOSED) {
				this->closed = true;
				$nc(r->buf)->flip();
				return r;
			}
		} while (status != $SSLEngineResult$Status::OK);
	}
	this->u_remaining = $nc(this->unwrap_src)->remaining();
	return r;
}

void SSLStreams$EngineWrapper::clinit$($Class* clazz) {
	$load($SSLStreams);
	SSLStreams$EngineWrapper::$assertionsDisabled = !$SSLStreams::class$->desiredAssertionStatus();
}

SSLStreams$EngineWrapper::SSLStreams$EngineWrapper() {
}

$Class* SSLStreams$EngineWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$EngineWrapper, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams$EngineWrapper, $assertionsDisabled)},
		{"chan", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(SSLStreams$EngineWrapper, chan)},
		{"engine", "Ljavax/net/ssl/SSLEngine;", nullptr, 0, $field(SSLStreams$EngineWrapper, engine)},
		{"wrapLock", "Ljava/lang/Object;", nullptr, 0, $field(SSLStreams$EngineWrapper, wrapLock)},
		{"unwrapLock", "Ljava/lang/Object;", nullptr, 0, $field(SSLStreams$EngineWrapper, unwrapLock)},
		{"unwrap_src", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$EngineWrapper, unwrap_src)},
		{"wrap_dst", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$EngineWrapper, wrap_dst)},
		{"closed", "Z", nullptr, 0, $field(SSLStreams$EngineWrapper, closed)},
		{"u_remaining", "I", nullptr, 0, $field(SSLStreams$EngineWrapper, u_remaining)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/net/httpserver/SSLStreams;Ljava/nio/channels/SocketChannel;Ljavax/net/ssl/SSLEngine;)V", nullptr, 0, $method(SSLStreams$EngineWrapper, init$, void, $SSLStreams*, $SocketChannel*, $SSLEngine*), "java.io.IOException"},
		{"close", "()V", nullptr, 0, $virtualMethod(SSLStreams$EngineWrapper, close, void), "java.io.IOException"},
		{"recvAndUnwrap", "(Ljava/nio/ByteBuffer;)Lsun/net/httpserver/SSLStreams$WrapperResult;", nullptr, 0, $virtualMethod(SSLStreams$EngineWrapper, recvAndUnwrap, $SSLStreams$WrapperResult*, $ByteBuffer*), "java.io.IOException"},
		{"wrapAndSend", "(Ljava/nio/ByteBuffer;)Lsun/net/httpserver/SSLStreams$WrapperResult;", nullptr, 0, $virtualMethod(SSLStreams$EngineWrapper, wrapAndSend, $SSLStreams$WrapperResult*, $ByteBuffer*), "java.io.IOException"},
		{"wrapAndSendX", "(Ljava/nio/ByteBuffer;Z)Lsun/net/httpserver/SSLStreams$WrapperResult;", nullptr, 0, $virtualMethod(SSLStreams$EngineWrapper, wrapAndSendX, $SSLStreams$WrapperResult*, $ByteBuffer*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.SSLStreams$EngineWrapper", "sun.net.httpserver.SSLStreams", "EngineWrapper", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.net.httpserver.SSLStreams$EngineWrapper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.SSLStreams"
	};
	$loadClass(SSLStreams$EngineWrapper, name, initialize, &classInfo$$, SSLStreams$EngineWrapper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLStreams$EngineWrapper);
	});
	return class$;
}

$Class* SSLStreams$EngineWrapper::class$ = nullptr;

		} // httpserver
	} // net
} // sun