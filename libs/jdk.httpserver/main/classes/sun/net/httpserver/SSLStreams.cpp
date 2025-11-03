#include <sun/net/httpserver/SSLStreams.h>

#include <com/sun/net/httpserver/HttpsConfigurator.h>
#include <com/sun/net/httpserver/HttpsParameters.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Runnable.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/util/concurrent/locks/Lock.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <javax/net/ssl/SSLContext.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <javax/net/ssl/SSLParameters.h>
#include <javax/net/ssl/SSLSession.h>
#include <sun/net/httpserver/SSLStreams$1.h>
#include <sun/net/httpserver/SSLStreams$BufType.h>
#include <sun/net/httpserver/SSLStreams$EngineWrapper.h>
#include <sun/net/httpserver/SSLStreams$InputStream.h>
#include <sun/net/httpserver/SSLStreams$OutputStream.h>
#include <sun/net/httpserver/SSLStreams$Parameters.h>
#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <sun/net/httpserver/TimeSource.h>
#include <jcpp.h>

#undef APPLICATION
#undef CLOSED
#undef FINISHED
#undef NOT_HANDSHAKING
#undef OK
#undef PACKET

using $HttpsConfigurator = ::com::sun::net::httpserver::HttpsConfigurator;
using $HttpsParameters = ::com::sun::net::httpserver::HttpsParameters;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Socket = ::java::net::Socket;
using $SocketAddress = ::java::net::SocketAddress;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $Lock = ::java::util::concurrent::locks::Lock;
using $ReentrantLock = ::java::util::concurrent::locks::ReentrantLock;
using $SSLContext = ::javax::net::ssl::SSLContext;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;
using $SSLParameters = ::javax::net::ssl::SSLParameters;
using $SSLSession = ::javax::net::ssl::SSLSession;
using $SSLStreams$1 = ::sun::net::httpserver::SSLStreams$1;
using $SSLStreams$BufType = ::sun::net::httpserver::SSLStreams$BufType;
using $SSLStreams$EngineWrapper = ::sun::net::httpserver::SSLStreams$EngineWrapper;
using $SSLStreams$InputStream = ::sun::net::httpserver::SSLStreams$InputStream;
using $SSLStreams$OutputStream = ::sun::net::httpserver::SSLStreams$OutputStream;
using $SSLStreams$Parameters = ::sun::net::httpserver::SSLStreams$Parameters;
using $SSLStreams$WrapperResult = ::sun::net::httpserver::SSLStreams$WrapperResult;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;
using $TimeSource = ::sun::net::httpserver::TimeSource;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams, $assertionsDisabled)},
	{"sslctx", "Ljavax/net/ssl/SSLContext;", nullptr, 0, $field(SSLStreams, sslctx)},
	{"chan", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(SSLStreams, chan)},
	{"time", "Lsun/net/httpserver/TimeSource;", nullptr, 0, $field(SSLStreams, time)},
	{"server", "Lsun/net/httpserver/ServerImpl;", nullptr, 0, $field(SSLStreams, server)},
	{"engine", "Ljavax/net/ssl/SSLEngine;", nullptr, 0, $field(SSLStreams, engine)},
	{"wrapper", "Lsun/net/httpserver/SSLStreams$EngineWrapper;", nullptr, 0, $field(SSLStreams, wrapper)},
	{"os", "Lsun/net/httpserver/SSLStreams$OutputStream;", nullptr, 0, $field(SSLStreams, os)},
	{"is", "Lsun/net/httpserver/SSLStreams$InputStream;", nullptr, 0, $field(SSLStreams, is)},
	{"handshaking", "Ljava/util/concurrent/locks/Lock;", nullptr, 0, $field(SSLStreams, handshaking)},
	{"app_buf_size", "I", nullptr, 0, $field(SSLStreams, app_buf_size)},
	{"packet_buf_size", "I", nullptr, 0, $field(SSLStreams, packet_buf_size)},
	{}
};

$MethodInfo _SSLStreams_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/ServerImpl;Ljavax/net/ssl/SSLContext;Ljava/nio/channels/SocketChannel;)V", nullptr, 0, $method(static_cast<void(SSLStreams::*)($ServerImpl*,$SSLContext*,$SocketChannel*)>(&SSLStreams::init$)), "java.io.IOException"},
	{"allocate", "(Lsun/net/httpserver/SSLStreams$BufType;)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(SSLStreams::*)($SSLStreams$BufType*)>(&SSLStreams::allocate))},
	{"allocate", "(Lsun/net/httpserver/SSLStreams$BufType;I)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(SSLStreams::*)($SSLStreams$BufType*,int32_t)>(&SSLStreams::allocate))},
	{"beginHandshake", "()V", nullptr, 0, nullptr, "javax.net.ssl.SSLException"},
	{"close", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"configureEngine", "(Lcom/sun/net/httpserver/HttpsConfigurator;Ljava/net/InetSocketAddress;)V", nullptr, $PRIVATE, $method(static_cast<void(SSLStreams::*)($HttpsConfigurator*,$InetSocketAddress*)>(&SSLStreams::configureEngine))},
	{"doClosure", "()V", nullptr, 0, nullptr, "java.io.IOException"},
	{"doHandshake", "(Ljavax/net/ssl/SSLEngineResult$HandshakeStatus;)V", nullptr, 0, nullptr, "java.io.IOException"},
	{"getInputStream", "()Lsun/net/httpserver/SSLStreams$InputStream;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getOutputStream", "()Lsun/net/httpserver/SSLStreams$OutputStream;", nullptr, 0, nullptr, "java.io.IOException"},
	{"getSSLEngine", "()Ljavax/net/ssl/SSLEngine;", nullptr, 0},
	{"realloc", "(Ljava/nio/ByteBuffer;ZLsun/net/httpserver/SSLStreams$BufType;)Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $method(static_cast<$ByteBuffer*(SSLStreams::*)($ByteBuffer*,bool,$SSLStreams$BufType*)>(&SSLStreams::realloc))},
	{"recvData", "(Ljava/nio/ByteBuffer;)Lsun/net/httpserver/SSLStreams$WrapperResult;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"sendData", "(Ljava/nio/ByteBuffer;)Lsun/net/httpserver/SSLStreams$WrapperResult;", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLStreams_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"sun.net.httpserver.SSLStreams$OutputStream", "sun.net.httpserver.SSLStreams", "OutputStream", 0},
	{"sun.net.httpserver.SSLStreams$InputStream", "sun.net.httpserver.SSLStreams", "InputStream", 0},
	{"sun.net.httpserver.SSLStreams$EngineWrapper", "sun.net.httpserver.SSLStreams", "EngineWrapper", 0},
	{"sun.net.httpserver.SSLStreams$BufType", "sun.net.httpserver.SSLStreams", "BufType", $STATIC | $FINAL | $ENUM},
	{"sun.net.httpserver.SSLStreams$WrapperResult", "sun.net.httpserver.SSLStreams", "WrapperResult", 0},
	{"sun.net.httpserver.SSLStreams$Parameters", "sun.net.httpserver.SSLStreams", "Parameters", 0},
	{}
};

$ClassInfo _SSLStreams_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.SSLStreams",
	"java.lang.Object",
	nullptr,
	_SSLStreams_FieldInfo_,
	_SSLStreams_MethodInfo_,
	nullptr,
	nullptr,
	_SSLStreams_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams$1,sun.net.httpserver.SSLStreams$OutputStream,sun.net.httpserver.SSLStreams$InputStream,sun.net.httpserver.SSLStreams$EngineWrapper,sun.net.httpserver.SSLStreams$BufType,sun.net.httpserver.SSLStreams$WrapperResult,sun.net.httpserver.SSLStreams$Parameters"
};

$Object* allocate$SSLStreams($Class* clazz) {
	return $of($alloc(SSLStreams));
}

bool SSLStreams::$assertionsDisabled = false;

void SSLStreams::init$($ServerImpl* server, $SSLContext* sslctx, $SocketChannel* chan) {
	$useLocalCurrentObjectStackCache();
	$set(this, handshaking, $new($ReentrantLock));
	$set(this, server, server);
	$set(this, time, static_cast<$TimeSource*>(server));
	$set(this, sslctx, sslctx);
	$set(this, chan, chan);
	$var($InetSocketAddress, addr, $cast($InetSocketAddress, $nc($($nc(chan)->socket()))->getRemoteSocketAddress()));
	$var($String, var$0, $nc(addr)->getHostName());
	$set(this, engine, $nc(sslctx)->createSSLEngine(var$0, addr->getPort()));
	$nc(this->engine)->setUseClientMode(false);
	$var($HttpsConfigurator, cfg, $nc(server)->getHttpsConfigurator());
	configureEngine(cfg, addr);
	$set(this, wrapper, $new($SSLStreams$EngineWrapper, this, chan, this->engine));
}

void SSLStreams::configureEngine($HttpsConfigurator* cfg, $InetSocketAddress* addr) {
	$useLocalCurrentObjectStackCache();
	if (cfg != nullptr) {
		$var($SSLStreams$Parameters, params, $new($SSLStreams$Parameters, this, cfg, addr));
		cfg->configure(params);
		$var($SSLParameters, sslParams, params->getSSLParameters());
		if (sslParams != nullptr) {
			$nc(this->engine)->setSSLParameters(sslParams);
		} else {
			if (params->getCipherSuites() != nullptr) {
				try {
					$nc(this->engine)->setEnabledCipherSuites($(params->getCipherSuites()));
				} catch ($IllegalArgumentException& e) {
				}
			}
			$nc(this->engine)->setNeedClientAuth(params->getNeedClientAuth());
			$nc(this->engine)->setWantClientAuth(params->getWantClientAuth());
			if (params->getProtocols() != nullptr) {
				try {
					$nc(this->engine)->setEnabledProtocols($(params->getProtocols()));
				} catch ($IllegalArgumentException& e) {
				}
			}
		}
	}
}

void SSLStreams::close() {
	$nc(this->wrapper)->close();
}

$SSLStreams$InputStream* SSLStreams::getInputStream() {
	if (this->is == nullptr) {
		$set(this, is, $new($SSLStreams$InputStream, this));
	}
	return this->is;
}

$SSLStreams$OutputStream* SSLStreams::getOutputStream() {
	if (this->os == nullptr) {
		$set(this, os, $new($SSLStreams$OutputStream, this));
	}
	return this->os;
}

$SSLEngine* SSLStreams::getSSLEngine() {
	return this->engine;
}

void SSLStreams::beginHandshake() {
	$nc(this->engine)->beginHandshake();
}

$ByteBuffer* SSLStreams::allocate($SSLStreams$BufType* type) {
	return allocate(type, -1);
}

$ByteBuffer* SSLStreams::allocate($SSLStreams$BufType* type, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (!SSLStreams::$assertionsDisabled && !(this->engine != nullptr)) {
		$throwNew($AssertionError);
	}
	$synchronized(this) {
		int32_t size = 0;
		$init($SSLStreams$BufType);
		if (type == $SSLStreams$BufType::PACKET) {
			if (this->packet_buf_size == 0) {
				$var($SSLSession, sess, $nc(this->engine)->getSession());
				this->packet_buf_size = $nc(sess)->getPacketBufferSize();
			}
			if (len > this->packet_buf_size) {
				this->packet_buf_size = len;
			}
			size = this->packet_buf_size;
		} else {
			if (this->app_buf_size == 0) {
				$var($SSLSession, sess, $nc(this->engine)->getSession());
				this->app_buf_size = $nc(sess)->getApplicationBufferSize();
			}
			if (len > this->app_buf_size) {
				this->app_buf_size = len;
			}
			size = this->app_buf_size;
		}
		return $ByteBuffer::allocate(size);
	}
}

$ByteBuffer* SSLStreams::realloc($ByteBuffer* b$renamed, bool flip, $SSLStreams$BufType* type) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, b, b$renamed);
	$synchronized(this) {
		int32_t nsize = 2 * $nc(b)->capacity();
		$var($ByteBuffer, n, allocate(type, nsize));
		if (flip) {
			b->flip();
		}
		$nc(n)->put(b);
		$assign(b, n);
	}
	return b;
}

$SSLStreams$WrapperResult* SSLStreams::sendData($ByteBuffer* src) {
	$var($SSLStreams$WrapperResult, r, nullptr);
	while ($nc(src)->remaining() > 0) {
		$assign(r, $nc(this->wrapper)->wrapAndSend(src));
		$SSLEngineResult$Status* status = $nc($nc(r)->result)->getStatus();
		$init($SSLEngineResult$Status);
		if (status == $SSLEngineResult$Status::CLOSED) {
			doClosure();
			return r;
		}
		$SSLEngineResult$HandshakeStatus* hs_status = $nc(r->result)->getHandshakeStatus();
		$init($SSLEngineResult$HandshakeStatus);
		if (hs_status != $SSLEngineResult$HandshakeStatus::FINISHED && hs_status != $SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING) {
			doHandshake(hs_status);
		}
	}
	return r;
}

$SSLStreams$WrapperResult* SSLStreams::recvData($ByteBuffer* dst$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($ByteBuffer, dst, dst$renamed);
	$var($SSLStreams$WrapperResult, r, nullptr);
	if (!SSLStreams::$assertionsDisabled && !($nc(dst)->position() == 0)) {
		$throwNew($AssertionError);
	}
	while ($nc(dst)->position() == 0) {
		$assign(r, $nc(this->wrapper)->recvAndUnwrap(dst));
		$assign(dst, ($nc(r)->buf != dst) ? $nc(r)->buf : dst);
		$SSLEngineResult$Status* status = $nc(r->result)->getStatus();
		$init($SSLEngineResult$Status);
		if (status == $SSLEngineResult$Status::CLOSED) {
			doClosure();
			return r;
		}
		$SSLEngineResult$HandshakeStatus* hs_status = $nc(r->result)->getHandshakeStatus();
		$init($SSLEngineResult$HandshakeStatus);
		if (hs_status != $SSLEngineResult$HandshakeStatus::FINISHED && hs_status != $SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING) {
			doHandshake(hs_status);
		}
	}
	$nc(dst)->flip();
	return r;
}

void SSLStreams::doClosure() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->handshaking)->lock();
			$init($SSLStreams$BufType);
			$var($ByteBuffer, tmp, allocate($SSLStreams$BufType::APPLICATION));
			$var($SSLStreams$WrapperResult, r, nullptr);
			$SSLEngineResult$Status* st = nullptr;
			$SSLEngineResult$HandshakeStatus* hs = nullptr;
			do {
				$nc(tmp)->clear();
				tmp->flip();
				$assign(r, $nc(this->wrapper)->wrapAndSendX(tmp, true));
				hs = $nc($nc(r)->result)->getHandshakeStatus();
				st = $nc(r->result)->getStatus();
			$init($SSLEngineResult$Status);
			$init($SSLEngineResult$HandshakeStatus);
			} while (st != $SSLEngineResult$Status::CLOSED && !(st == $SSLEngineResult$Status::OK && hs == $SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING));
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->handshaking)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void SSLStreams::doHandshake($SSLEngineResult$HandshakeStatus* hs_status$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($SSLEngineResult$HandshakeStatus, hs_status, hs_status$renamed);
	{
		$var($Throwable, var$0, nullptr);
		try {
			$nc(this->handshaking)->lock();
			$init($SSLStreams$BufType);
			$var($ByteBuffer, tmp, allocate($SSLStreams$BufType::APPLICATION));
			$init($SSLEngineResult$HandshakeStatus);
			while (hs_status != $SSLEngineResult$HandshakeStatus::FINISHED && hs_status != $SSLEngineResult$HandshakeStatus::NOT_HANDSHAKING) {
				$var($SSLStreams$WrapperResult, r, nullptr);
				$init($SSLStreams$1);
				{
					$var($Runnable, task, nullptr)
					switch ($nc($SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)->get($nc((hs_status))->ordinal())) {
					case 1:
						{
							while (($assign(task, $nc(this->engine)->getDelegatedTask())) != nullptr) {
								$nc(task)->run();
							}
						}
					case 2:
						{
							$nc(tmp)->clear();
							$nc(tmp)->flip();
							$assign(r, $nc(this->wrapper)->wrapAndSend(tmp));
							break;
						}
					case 3:
						{
							$nc(tmp)->clear();
							$assign(r, $nc(this->wrapper)->recvAndUnwrap(tmp));
							if ($nc(r)->buf != tmp) {
								$assign(tmp, r->buf);
							}
							if (!SSLStreams::$assertionsDisabled && !($nc(tmp)->position() == 0)) {
								$throwNew($AssertionError);
							}
							break;
						}
					}
				}
				hs_status = $nc($nc(r)->result)->getHandshakeStatus();
			}
		} catch ($Throwable& var$1) {
			$assign(var$0, var$1);
		} /*finally*/ {
			$nc(this->handshaking)->unlock();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
}

void clinit$SSLStreams($Class* class$) {
	SSLStreams::$assertionsDisabled = !SSLStreams::class$->desiredAssertionStatus();
}

SSLStreams::SSLStreams() {
}

$Class* SSLStreams::load$($String* name, bool initialize) {
	$loadClass(SSLStreams, name, initialize, &_SSLStreams_ClassInfo_, clinit$SSLStreams, allocate$SSLStreams);
	return class$;
}

$Class* SSLStreams::class$ = nullptr;

		} // httpserver
	} // net
} // sun