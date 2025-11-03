#include <sun/net/httpserver/SSLStreams$OutputStream.h>

#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/AssertionError.h>
#include <java/nio/ByteBuffer.h>
#include <javax/net/ssl/SSLEngine.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <javax/net/ssl/SSLEngineResult.h>
#include <sun/net/httpserver/SSLStreams$BufType.h>
#include <sun/net/httpserver/SSLStreams$EngineWrapper.h>
#include <sun/net/httpserver/SSLStreams$WrapperResult.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef APPLICATION
#undef CLOSED
#undef NEED_WRAP

using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Buffer = ::java::nio::Buffer;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SSLEngine = ::javax::net::ssl::SSLEngine;
using $SSLEngineResult = ::javax::net::ssl::SSLEngineResult;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;
using $SSLStreams$BufType = ::sun::net::httpserver::SSLStreams$BufType;
using $SSLStreams$EngineWrapper = ::sun::net::httpserver::SSLStreams$EngineWrapper;
using $SSLStreams$WrapperResult = ::sun::net::httpserver::SSLStreams$WrapperResult;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams$OutputStream_FieldInfo_[] = {
	{"this$0", "Lsun/net/httpserver/SSLStreams;", nullptr, $FINAL | $SYNTHETIC, $field(SSLStreams$OutputStream, this$0)},
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams$OutputStream, $assertionsDisabled)},
	{"buf", "Ljava/nio/ByteBuffer;", nullptr, 0, $field(SSLStreams$OutputStream, buf)},
	{"closed", "Z", nullptr, 0, $field(SSLStreams$OutputStream, closed)},
	{"single", "[B", nullptr, 0, $field(SSLStreams$OutputStream, single)},
	{}
};

$MethodInfo _SSLStreams$OutputStream_MethodInfo_[] = {
	{"<init>", "(Lsun/net/httpserver/SSLStreams;)V", nullptr, 0, $method(static_cast<void(SSLStreams$OutputStream::*)($SSLStreams*)>(&SSLStreams$OutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([B)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _SSLStreams$OutputStream_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$OutputStream", "sun.net.httpserver.SSLStreams", "OutputStream", 0},
	{}
};

$ClassInfo _SSLStreams$OutputStream_ClassInfo_ = {
	$ACC_SUPER,
	"sun.net.httpserver.SSLStreams$OutputStream",
	"java.io.OutputStream",
	nullptr,
	_SSLStreams$OutputStream_FieldInfo_,
	_SSLStreams$OutputStream_MethodInfo_,
	nullptr,
	nullptr,
	_SSLStreams$OutputStream_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$OutputStream($Class* clazz) {
	return $of($alloc(SSLStreams$OutputStream));
}

bool SSLStreams$OutputStream::$assertionsDisabled = false;

void SSLStreams$OutputStream::init$($SSLStreams* this$0) {
	$set(this, this$0, this$0);
	$OutputStream::init$();
	this->closed = false;
	$set(this, single, $new($bytes, 1));
	$init($SSLStreams$BufType);
	$set(this, buf, this$0->allocate($SSLStreams$BufType::APPLICATION));
}

void SSLStreams$OutputStream::write(int32_t b) {
	$nc(this->single)->set(0, (int8_t)b);
	write(this->single, 0, 1);
}

void SSLStreams$OutputStream::write($bytes* b) {
	write(b, 0, $nc(b)->length);
}

void SSLStreams$OutputStream::write($bytes* b, int32_t off, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->closed) {
		$throwNew($IOException, "output stream is closed"_s);
	}
	while (len > 0) {
		int32_t l = len > $nc(this->buf)->capacity() ? $nc(this->buf)->capacity() : len;
		$nc(this->buf)->clear();
		$nc(this->buf)->put(b, off, l);
		len -= l;
		off += l;
		$nc(this->buf)->flip();
		$var($SSLStreams$WrapperResult, r, this->this$0->sendData(this->buf));
		$init($SSLEngineResult$Status);
		if ($nc($nc(r)->result)->getStatus() == $SSLEngineResult$Status::CLOSED) {
			this->closed = true;
			if (len > 0) {
				$throwNew($IOException, "output stream is closed"_s);
			}
		}
	}
}

void SSLStreams$OutputStream::flush() {
}

void SSLStreams$OutputStream::close() {
	$useLocalCurrentObjectStackCache();
	$var($SSLStreams$WrapperResult, r, nullptr);
	$nc(this->this$0->engine)->closeOutbound();
	this->closed = true;
	$init($SSLEngineResult$HandshakeStatus);
	$SSLEngineResult$HandshakeStatus* stat = $SSLEngineResult$HandshakeStatus::NEED_WRAP;
	$nc(this->buf)->clear();
	while (stat == $SSLEngineResult$HandshakeStatus::NEED_WRAP) {
		$assign(r, $nc(this->this$0->wrapper)->wrapAndSend(this->buf));
		stat = $nc($nc(r)->result)->getHandshakeStatus();
	}
	$init($SSLEngineResult$Status);
	if (!SSLStreams$OutputStream::$assertionsDisabled && !($nc($nc(r)->result)->getStatus() == $SSLEngineResult$Status::CLOSED)) {
		$throwNew($AssertionError, $of($$str({"status is: "_s, $($nc(r->result)->getStatus()), ", handshakeStatus is: "_s, stat})));
	}
}

void clinit$SSLStreams$OutputStream($Class* class$) {
	$load($SSLStreams);
	SSLStreams$OutputStream::$assertionsDisabled = !$SSLStreams::class$->desiredAssertionStatus();
}

SSLStreams$OutputStream::SSLStreams$OutputStream() {
}

$Class* SSLStreams$OutputStream::load$($String* name, bool initialize) {
	$loadClass(SSLStreams$OutputStream, name, initialize, &_SSLStreams$OutputStream_ClassInfo_, clinit$SSLStreams$OutputStream, allocate$SSLStreams$OutputStream);
	return class$;
}

$Class* SSLStreams$OutputStream::class$ = nullptr;

		} // httpserver
	} // net
} // sun