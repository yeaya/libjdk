#include <DummySecureWebSocketServer.h>
#include <DummySecureWebSocketServer$Credentials.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InternalError.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetAddress.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/ServerSocket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/URI.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/channels/ClosedByInterruptException.h>
#include <java/nio/charset/CharacterCodingException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <java/util/function/BiFunction.h>
#include <java/util/function/Function.h>
#include <java/util/regex/Matcher.h>
#include <java/util/regex/Pattern.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <javax/net/ServerSocketFactory.h>
#include <javax/net/ssl/SSLServerSocketFactory.h>
#include <jcpp.h>

#undef TCP_NODELAY
#undef UTF_8

using $DummySecureWebSocketServer$Credentials = ::DummySecureWebSocketServer$Credentials;
using $DummySecureWebSocketServer$WebServerSocketChannel = ::DummySecureWebSocketServer$WebServerSocketChannel;
using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $AutoCloseableArray = $Array<::java::lang::AutoCloseable>;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $InterruptedException = ::java::lang::InterruptedException;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetAddress = ::java::net::InetAddress;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $URI = ::java::net::URI;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $ClosedByInterruptException = ::java::nio::channels::ClosedByInterruptException;
using $CharacterCodingException = ::java::nio::charset::CharacterCodingException;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Objects = ::java::util::Objects;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $BiFunction = ::java::util::function::BiFunction;
using $Function = ::java::util::function::Function;
using $Pattern = ::java::util::regex::Pattern;
using $Collectors = ::java::util::stream::Collectors;
using $ServerSocketFactory = ::javax::net::ServerSocketFactory;
using $SSLServerSocketFactory = ::javax::net::ssl::SSLServerSocketFactory;

class DummySecureWebSocketServer$$Lambda$lambda$new$0 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $BiFunction* mapping, $DummySecureWebSocketServer$Credentials* credentials) {
		$set(this, inst$, inst);
		$set(this, mapping, mapping);
		$set(this, credentials, credentials);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0(mapping, credentials);
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$BiFunction* mapping = nullptr;
	$DummySecureWebSocketServer$Credentials* credentials = nullptr;
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, inst$)},
		{"mapping", "Ljava/util/function/BiFunction;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, mapping)},
		{"credentials", "LDummySecureWebSocketServer$Credentials;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$new$0, credentials)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDummySecureWebSocketServer;Ljava/util/function/BiFunction;LDummySecureWebSocketServer$Credentials;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$$Lambda$lambda$new$0, init$, void, DummySecureWebSocketServer*, $BiFunction*, $DummySecureWebSocketServer$Credentials*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$new$0::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$serve$1$1 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $DummySecureWebSocketServer$WebSocketChannel* channel) {
		$set(this, inst$, inst);
		$set(this, channel, channel);
	}
	virtual void run() override {
		$nc(inst$)->lambda$serve$1(channel);
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$DummySecureWebSocketServer$WebSocketChannel* channel = nullptr;
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, inst$)},
		{"channel", "LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDummySecureWebSocketServer;LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, init$, void, DummySecureWebSocketServer*, $DummySecureWebSocketServer$WebSocketChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$$Lambda$lambda$serve$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$serve$2$2 : public $Runnable {
	$class(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DummySecureWebSocketServer* inst, $DummySecureWebSocketServer$WebSocketChannel* channel) {
		$set(this, inst$, inst);
		$set(this, channel, channel);
	}
	virtual void run() override {
		$nc(inst$)->lambda$serve$2(channel);
	}
	DummySecureWebSocketServer* inst$ = nullptr;
	$DummySecureWebSocketServer$WebSocketChannel* channel = nullptr;
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, inst$)},
		{"channel", "LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDummySecureWebSocketServer;LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, init$, void, DummySecureWebSocketServer*, $DummySecureWebSocketServer$WebSocketChannel*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$$Lambda$lambda$serve$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3 : public $BiFunction {
	$class(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, $NO_CLASS_INIT, $BiFunction)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* request, Object$* credentials) override {
		return DummySecureWebSocketServer::lambda$defaultMapping$4($cast($List, request), $cast($DummySecureWebSocketServer$Credentials, credentials));
	}
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, init$, void)},
		{"apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, apply, $Object*, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3",
		"java.lang.Object",
		"java.util.function.BiFunction",
		nullptr,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::class$ = nullptr;

class DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4 : public $Function {
	$class(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* k) override {
		return DummySecureWebSocketServer::lambda$defaultMapping$3($cast($String, k));
	}
};
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::class$ = nullptr;

$DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer::openWSS() {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	return $DummySecureWebSocketServer$WebServerSocketChannel::of($($$nc($SSLServerSocketFactory::getDefault())->createServerSocket()));
}

$DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer::openWS() {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	return $DummySecureWebSocketServer$WebServerSocketChannel::of($($$nc($ServerSocketFactory::getDefault())->createServerSocket()));
}

int32_t DummySecureWebSocketServer::read($InputStream* str, $ByteBuffer* buffer) {
	$init(DummySecureWebSocketServer);
	int32_t len = $Math::min($nc(buffer)->remaining(), 1024);
	if (len <= 0) {
		return 0;
	}
	$var($bytes, bytes, $new($bytes, len));
	int32_t res = 0;
	if (buffer->hasRemaining()) {
		len = $Math::min(len, buffer->remaining());
		int32_t n = $nc(str)->read(bytes, 0, len);
		if (n > 0) {
			buffer->put(bytes, 0, n);
			res += n;
		} else if (res > 0) {
			return res;
		} else {
			return n;
		}
	}
	return res;
}

void DummySecureWebSocketServer::write($OutputStream* str, $ByteBuffer* buffer) {
	$init(DummySecureWebSocketServer);
	int32_t len = $Math::min($nc(buffer)->remaining(), 1024);
	if (len <= 0) {
		return;
	}
	$var($bytes, bytes, $new($bytes, len));
	int32_t res = 0;
	int32_t pos = buffer->position();
	while (buffer->hasRemaining()) {
		len = $Math::min(len, buffer->remaining());
		buffer->get(bytes, 0, len);
		$nc(str)->write(bytes, 0, len);
	}
}

void DummySecureWebSocketServer::init$() {
	DummySecureWebSocketServer::init$($(defaultMapping()), nullptr, nullptr);
}

void DummySecureWebSocketServer::init$($String* username, $String* password) {
	DummySecureWebSocketServer::init$($(defaultMapping()), username, password);
}

void DummySecureWebSocketServer::init$($BiFunction* mapping, $String* username, $String* password) {
	$useLocalObjectStack();
	$set(this, started, $new($AtomicBoolean));
	$set(this, read$, $ByteBuffer::allocate(16384));
	$set(this, readReady, $new($CountDownLatch, 1));
	$Objects::requireNonNull(mapping);
	$var($DummySecureWebSocketServer$Credentials, credentials, username != nullptr ? $new($DummySecureWebSocketServer$Credentials, username, password) : ($DummySecureWebSocketServer$Credentials*)nullptr);
	$set(this, thread, $new($Thread, $$new(DummySecureWebSocketServer$$Lambda$lambda$new$0, this, mapping, credentials)));
	this->thread->setName("DummySecureWebSocketServer"_s);
	this->thread->setDaemon(false);
}

DummySecureWebSocketServer* DummySecureWebSocketServer::secure() {
	this->secure$ = true;
	return this;
}

void DummySecureWebSocketServer::read($DummySecureWebSocketServer$WebSocketChannel* ch) {
	$useLocalObjectStack();
	$var($ByteBuffer, b, $ByteBuffer::allocate(0x00010000));
	while ($nc(ch)->read(b) != -1) {
		$nc(b)->flip();
		int32_t var$0 = $nc(this->read$)->remaining();
		if (var$0 < b->remaining()) {
			int32_t var$2 = $nc(this->read$)->capacity();
			int32_t var$1 = var$2 - this->read$->remaining();
			int32_t required = var$1 + b->remaining();
			int32_t log2required = 32 - $Integer::numberOfLeadingZeros(required - 1);
			$var($ByteBuffer, newBuffer, $ByteBuffer::allocate($sl(1, log2required)));
			$nc(newBuffer)->put($($nc(this->read$)->flip()));
			$set(this, read$, newBuffer);
		}
		$nc(this->read$)->put(b);
		b->clear();
	}
}

void DummySecureWebSocketServer::write($DummySecureWebSocketServer$WebSocketChannel* ch) {
}

void DummySecureWebSocketServer::serve($DummySecureWebSocketServer$WebSocketChannel* channel) {
	$useLocalObjectStack();
	$var($Thread, reader, $new($Thread, $$new(DummySecureWebSocketServer$$Lambda$lambda$serve$1$1, this, channel)));
	$var($Thread, writer, $new($Thread, $$new(DummySecureWebSocketServer$$Lambda$lambda$serve$2$2, this, channel)));
	reader->start();
	writer->start();
	$var($Throwable, var$0, nullptr);
	try {
		while (!this->done) {
			try {
				reader->join(500);
			} catch ($InterruptedException& x) {
				if (this->done) {
					close($$new($AutoCloseableArray, {channel}));
					break;
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		reader->interrupt();
		$var($Throwable, var$2, nullptr);
		try {
			while (!this->done) {
				try {
					writer->join(500);
				} catch ($InterruptedException& x) {
					if (this->done) {
						break;
					}
				}
			}
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			writer->interrupt();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

$ByteBuffer* DummySecureWebSocketServer::read() {
	$useLocalObjectStack();
	$nc(this->readReady)->await();
	return $$nc($$nc($nc(this->read$)->duplicate())->asReadOnlyBuffer())->flip();
}

void DummySecureWebSocketServer::open() {
	$useLocalObjectStack();
	$nc($System::err)->println("Starting"_s);
	if (!$nc(this->started)->compareAndSet(false, true)) {
		$throwNew($IllegalStateException, "Already started"_s);
	}
	$set(this, ss, this->secure$ ? openWSS() : openWS());
	try {
		$nc(this->ss)->bind($$new($InetSocketAddress, $($InetAddress::getLoopbackAddress()), 0));
		$set(this, address, $cast($InetSocketAddress, $nc(this->ss)->getLocalAddress()));
		$nc(this->thread)->start();
	} catch ($IOException& e) {
		this->done = true;
		close($$new($AutoCloseableArray, {this->ss}));
		$throw(e);
	}
	$System::err->println($$str({"Started at: "_s, $(getURI())}));
}

void DummySecureWebSocketServer::close() {
	$useLocalObjectStack();
	$nc($System::err)->println($$str({"Stopping: "_s, $(getURI())}));
	this->done = true;
	$nc(this->thread)->interrupt();
	close($$new($AutoCloseableArray, {this->ss}));
}

$URI* DummySecureWebSocketServer::getURI() {
	$useLocalObjectStack();
	if (!$nc(this->started)->get()) {
		$throwNew($IllegalStateException, "Not yet started"_s);
	}
	if (!this->secure$) {
		return $URI::create($$str({"ws://localhost:"_s, $$str($nc(this->address)->getPort())}));
	} else {
		return $URI::create($$str({"wss://localhost:"_s, $$str($nc(this->address)->getPort())}));
	}
}

bool DummySecureWebSocketServer::readRequest($DummySecureWebSocketServer$WebSocketChannel* channel, $StringBuilder* request) {
	$useLocalObjectStack();
	$var($ByteBuffer, buffer, $ByteBuffer::allocate(512));
	while ($nc(channel)->read(buffer) != -1) {
		$var($CharBuffer, decoded, nullptr);
		$nc(buffer)->flip();
		try {
			$init($StandardCharsets);
			$assign(decoded, $$nc($nc($StandardCharsets::ISO_8859_1)->newDecoder())->decode(buffer));
		} catch ($CharacterCodingException& e) {
			$throwNew($UncheckedIOException, e);
		}
		$nc(request)->append(decoded);
		if ($$nc($$nc($Pattern::compile("\r\n\r\n"_s))->matcher(request))->find()) {
			return true;
		}
		buffer->clear();
	}
	return false;
}

void DummySecureWebSocketServer::writeResponse($DummySecureWebSocketServer$WebSocketChannel* channel, $List* response) {
	$useLocalObjectStack();
	$var($String, s, $str({$$cast($String, $$nc($nc(response)->stream())->collect($($Collectors::joining("\r\n"_s)))), "\r\n\r\n"_s}));
	$var($ByteBuffer, encoded, nullptr);
	try {
		$init($StandardCharsets);
		$assign(encoded, $$nc($nc($StandardCharsets::ISO_8859_1)->newEncoder())->encode($($CharBuffer::wrap(s))));
	} catch ($CharacterCodingException& e) {
		$throwNew($UncheckedIOException, e);
	}
	while ($nc(encoded)->hasRemaining()) {
		$nc(channel)->write(encoded);
	}
}

$BiFunction* DummySecureWebSocketServer::defaultMapping() {
	$init(DummySecureWebSocketServer);
	return $new(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3);
}

bool DummySecureWebSocketServer::authorized($DummySecureWebSocketServer$Credentials* credentials, $Map* requestHeaders) {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	$var($List, authorization, $cast($List, $nc(requestHeaders)->get("Authorization"_s)));
	if (authorization == nullptr) {
		return false;
	}
	if ($nc(authorization)->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Authorization unexpected count:"_s, authorization}));
	}
	$var($String, header, $cast($String, authorization->get(0)));
	if (!$nc(header)->startsWith("Basic "_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization not Basic: "_s, header}));
	}
	$assign(header, header->substring("Basic "_s->length()));
	$init($StandardCharsets);
	$var($String, values, $new($String, $($$nc($Base64::getDecoder())->decode(header)), $StandardCharsets::UTF_8));
	int32_t sep = values->indexOf(u':');
	if (sep < 1) {
		$throwNew($IllegalStateException, $$str({"Authorization not colon: "_s, values}));
	}
	$var($String, name, values->substring(0, sep));
	$var($String, password, values->substring(sep + 1));
	bool var$0 = name->equals($($nc(credentials)->name()));
	if (var$0 && password->equals($(credentials->password()))) {
		return true;
	}
	return false;
}

$String* DummySecureWebSocketServer::expectHeader($Map* headers, $String* name, $String* value) {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	$var($List, v, $cast($List, $nc(headers)->get(name)));
	if (v == nullptr) {
		$throwNew($IllegalStateException, $($String::format("Expected \'%s\' header, not present in %s"_s, $$new($ObjectArray, {
			name,
			headers
		}))));
	}
	if (!$nc(v)->contains(value)) {
		$throwNew($IllegalStateException, $($String::format("Expected \'%s: %s\', actual: \'%s: %s\'"_s, $$new($ObjectArray, {
			name,
			value,
			name,
			v
		}))));
	}
	return value;
}

void DummySecureWebSocketServer::close($AutoCloseableArray* acs) {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	$var($AutoCloseableArray, arr$, acs);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($AutoCloseable, ac, arr$->get(i$));
		try {
			$nc(ac)->close();
		} catch ($Exception& ignored) {
		}
	}
}

$List* DummySecureWebSocketServer::lambda$defaultMapping$4($List* request, $DummySecureWebSocketServer$Credentials* credentials) {
	$init(DummySecureWebSocketServer);
	$useLocalObjectStack();
	$var($List, response, $new($LinkedList));
	$var($Iterator, iterator, $nc(request)->iterator());
	if (!$nc(iterator)->hasNext()) {
		$throwNew($IllegalStateException, "The request is empty"_s);
	}
	$var($String, statusLine, $cast($String, iterator->next()));
	bool var$0 = $nc(statusLine)->startsWith("GET /"_s);
	if (!(var$0 && statusLine->endsWith(" HTTP/1.1"_s))) {
		$throwNew($IllegalStateException, $$str({"Unexpected status line: "_s, $$cast($String, request->get(0))}));
	}
	response->add("HTTP/1.1 101 Switching Protocols"_s);
	$var($Map, requestHeaders, $new($HashMap));
	while (iterator->hasNext()) {
		$var($String, header, $cast($String, iterator->next()));
		$var($StringArray, split, $nc(header)->split(": "_s));
		if (split->length != 2) {
			$throwNew($IllegalStateException, $$str({"Unexpected header: "_s, header, ", split="_s, $($Arrays::toString(split))}));
		}
		$$sure($List, requestHeaders->computeIfAbsent(split->get(0), $$new(DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4)))->add(split->get(1));
	}
	if (requestHeaders->containsKey("Sec-WebSocket-Protocol"_s)) {
		$throwNew($IllegalStateException, "Subprotocols are not expected"_s);
	}
	if (requestHeaders->containsKey("Sec-WebSocket-Extensions"_s)) {
		$throwNew($IllegalStateException, "Extensions are not expected"_s);
	}
	expectHeader(requestHeaders, "Connection"_s, "Upgrade"_s);
	response->add("Connection: Upgrade"_s);
	expectHeader(requestHeaders, "Upgrade"_s, "websocket"_s);
	response->add("Upgrade: websocket"_s);
	expectHeader(requestHeaders, "Sec-WebSocket-Version"_s, "13"_s);
	$var($List, key, $cast($List, requestHeaders->get("Sec-WebSocket-Key"_s)));
	if (key == nullptr || key->isEmpty()) {
		$throwNew($IllegalStateException, "Sec-WebSocket-Key is missing"_s);
	}
	if ($nc(key)->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Sec-WebSocket-Key has too many values : "_s, key}));
	}
	$var($MessageDigest, sha1, nullptr);
	try {
		$assign(sha1, $MessageDigest::getInstance("SHA-1"_s));
	} catch ($NoSuchAlgorithmException& e) {
		$throwNew($InternalError, e);
	}
	$var($String, x, $str({$$cast($String, key->get(0)), "258EAFA5-E914-47DA-95CA-C5AB0DC85B11"_s}));
	$init($StandardCharsets);
	$nc(sha1)->update($(x->getBytes($StandardCharsets::ISO_8859_1)));
	$var($String, v, $$nc($Base64::getEncoder())->encodeToString($(sha1->digest())));
	response->add($$str({"Sec-WebSocket-Accept: "_s, v}));
	if (credentials != nullptr && !authorized(credentials, requestHeaders)) {
		response->clear();
		response->add("HTTP/1.1 401 Unauthorized"_s);
		response->add("Content-Length: 0"_s);
		response->add("WWW-Authenticate: Basic realm=\"dummy server realm\""_s);
	}
	return response;
}

$List* DummySecureWebSocketServer::lambda$defaultMapping$3($String* k) {
	$init(DummySecureWebSocketServer);
	return $new($ArrayList);
}

void DummySecureWebSocketServer::lambda$serve$2($DummySecureWebSocketServer$WebSocketChannel* channel) {
	try {
		write(channel);
	} catch ($IOException& ignored) {
	}
}

void DummySecureWebSocketServer::lambda$serve$1($DummySecureWebSocketServer$WebSocketChannel* channel) {
	try {
		read(channel);
	} catch ($IOException& ignored) {
	}
}

void DummySecureWebSocketServer::lambda$new$0($BiFunction* mapping, $DummySecureWebSocketServer$Credentials* credentials) {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		try {
			while (!$($Thread::currentThread())->isInterrupted() && !this->done) {
				$nc($System::err)->println($$str({"Accepting next connection at: "_s, this->ss}));
				$var($DummySecureWebSocketServer$WebSocketChannel, channel, $nc(this->ss)->accept());
				$System::err->println($$str({"Accepted: "_s, channel}));
				$var($Throwable, var$1, nullptr);
				try {
					try {
						$init($StandardSocketOptions);
						$nc(channel)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
						while (!this->done) {
							$var($StringBuilder, request, $new($StringBuilder));
							if (!readRequest(channel, request)) {
								$throwNew($IOException, $$str({"Bad request:["_s, request, "]"_s}));
							}
							$var($List, strings, $Arrays::asList($($(request->toString())->split("\r\n"_s))));
							$var($List, response, $cast($List, $nc(mapping)->apply(strings, credentials)));
							writeResponse(channel, response);
							if ($$sure($String, $nc(response)->get(0))->startsWith("HTTP/1.1 401"_s)) {
								$System::err->println($$str({"Sent 401 Authentication response "_s, channel}));
								continue;
							} else {
								serve(channel);
								break;
							}
						}
					} catch ($IOException& e) {
						if (!this->done) {
							$System::err->println($$str({"Error in connection: "_s, channel, ", "_s, e}));
						}
					}
				} catch ($Throwable& var$2) {
					$assign(var$1, var$2);
				} /*finally*/ {
					$System::err->println($$str({"Closed: "_s, channel}));
					close($$new($AutoCloseableArray, {channel}));
					$nc(this->readReady)->countDown();
				}
				if (var$1 != nullptr) {
					$throw(var$1);
				}
			}
		} catch ($ClosedByInterruptException& ignored) {
		} catch ($Throwable& e) {
			if (!this->done) {
				e->printStackTrace($System::err);
			}
		}
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} /*finally*/ {
		this->done = true;
		close($$new($AutoCloseableArray, {this->ss}));
		$nc($System::err)->println($$str({"Stopped at: "_s, $(getURI())}));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

DummySecureWebSocketServer::DummySecureWebSocketServer() {
}

$Class* DummySecureWebSocketServer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DummySecureWebSocketServer$$Lambda$lambda$new$0")) {
			return DummySecureWebSocketServer$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$$Lambda$lambda$serve$1$1")) {
			return DummySecureWebSocketServer$$Lambda$lambda$serve$1$1::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$$Lambda$lambda$serve$2$2")) {
			return DummySecureWebSocketServer$$Lambda$lambda$serve$2$2::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3")) {
			return DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$4$3::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4")) {
			return DummySecureWebSocketServer$$Lambda$lambda$defaultMapping$3$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"started", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, started)},
		{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, thread)},
		{"ss", "LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, ss)},
		{"address", "Ljava/net/InetSocketAddress;", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, address)},
		{"secure", "Z", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, secure$)},
		{"read", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(DummySecureWebSocketServer, read$)},
		{"readReady", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $FINAL, $field(DummySecureWebSocketServer, readReady)},
		{"done", "Z", nullptr, $PRIVATE | $VOLATILE, $field(DummySecureWebSocketServer, done)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer, init$, void)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer, init$, void, $String*, $String*)},
		{"<init>", "(Ljava/util/function/BiFunction;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/function/BiFunction<Ljava/util/List<Ljava/lang/String;>;LDummySecureWebSocketServer$Credentials;Ljava/util/List<Ljava/lang/String;>;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(DummySecureWebSocketServer, init$, void, $BiFunction*, $String*, $String*)},
		{"authorized", "(LDummySecureWebSocketServer$Credentials;Ljava/util/Map;)Z", "(LDummySecureWebSocketServer$Credentials;Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;)Z", $PRIVATE | $STATIC, $staticMethod(DummySecureWebSocketServer, authorized, bool, $DummySecureWebSocketServer$Credentials*, $Map*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer, close, void)},
		{"close", "([Ljava/lang/AutoCloseable;)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(DummySecureWebSocketServer, close, void, $AutoCloseableArray*)},
		{"defaultMapping", "()Ljava/util/function/BiFunction;", "()Ljava/util/function/BiFunction<Ljava/util/List<Ljava/lang/String;>;LDummySecureWebSocketServer$Credentials;Ljava/util/List<Ljava/lang/String;>;>;", $PRIVATE | $STATIC, $staticMethod(DummySecureWebSocketServer, defaultMapping, $BiFunction*)},
		{"expectHeader", "(Ljava/util/Map;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;>;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", $PROTECTED | $STATIC, $staticMethod(DummySecureWebSocketServer, expectHeader, $String*, $Map*, $String*, $String*)},
		{"getURI", "()Ljava/net/URI;", nullptr, 0, $virtualMethod(DummySecureWebSocketServer, getURI, $URI*)},
		{"lambda$defaultMapping$3", "(Ljava/lang/String;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DummySecureWebSocketServer, lambda$defaultMapping$3, $List*, $String*)},
		{"lambda$defaultMapping$4", "(Ljava/util/List;LDummySecureWebSocketServer$Credentials;)Ljava/util/List;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DummySecureWebSocketServer, lambda$defaultMapping$4, $List*, $List*, $DummySecureWebSocketServer$Credentials*)},
		{"lambda$new$0", "(Ljava/util/function/BiFunction;LDummySecureWebSocketServer$Credentials;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(DummySecureWebSocketServer, lambda$new$0, void, $BiFunction*, $DummySecureWebSocketServer$Credentials*)},
		{"lambda$serve$1", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(DummySecureWebSocketServer, lambda$serve$1, void, $DummySecureWebSocketServer$WebSocketChannel*)},
		{"lambda$serve$2", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(DummySecureWebSocketServer, lambda$serve$2, void, $DummySecureWebSocketServer$WebSocketChannel*)},
		{"open", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer, open, void), "java.io.IOException"},
		{"openWS", "()LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $STATIC, $staticMethod(DummySecureWebSocketServer, openWS, $DummySecureWebSocketServer$WebServerSocketChannel*), "java.io.IOException"},
		{"openWSS", "()LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $STATIC, $staticMethod(DummySecureWebSocketServer, openWSS, $DummySecureWebSocketServer$WebServerSocketChannel*), "java.io.IOException"},
		{"read", "(Ljava/io/InputStream;Ljava/nio/ByteBuffer;)I", nullptr, $STATIC, $staticMethod(DummySecureWebSocketServer, read, int32_t, $InputStream*, $ByteBuffer*), "java.io.IOException"},
		{"read", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED, $virtualMethod(DummySecureWebSocketServer, read, void, $DummySecureWebSocketServer$WebSocketChannel*), "java.io.IOException"},
		{"read", "()Ljava/nio/ByteBuffer;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer, read, $ByteBuffer*), "java.lang.InterruptedException"},
		{"readRequest", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/lang/StringBuilder;)Z", nullptr, $PRIVATE, $method(DummySecureWebSocketServer, readRequest, bool, $DummySecureWebSocketServer$WebSocketChannel*, $StringBuilder*), "java.io.IOException"},
		{"secure", "()LDummySecureWebSocketServer;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer, secure, DummySecureWebSocketServer*)},
		{"serve", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED | $FINAL, $method(DummySecureWebSocketServer, serve, void, $DummySecureWebSocketServer$WebSocketChannel*), "java.lang.InterruptedException"},
		{"write", "(Ljava/io/OutputStream;Ljava/nio/ByteBuffer;)V", nullptr, $STATIC, $staticMethod(DummySecureWebSocketServer, write, void, $OutputStream*, $ByteBuffer*), "java.io.IOException"},
		{"write", "(LDummySecureWebSocketServer$WebSocketChannel;)V", nullptr, $PROTECTED, $virtualMethod(DummySecureWebSocketServer, write, void, $DummySecureWebSocketServer$WebSocketChannel*), "java.io.IOException"},
		{"writeResponse", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/util/List;)V", "(LDummySecureWebSocketServer$WebSocketChannel;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(DummySecureWebSocketServer, writeResponse, void, $DummySecureWebSocketServer$WebSocketChannel*, $List*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$Credentials", "DummySecureWebSocketServer", "Credentials", $PRIVATE | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DummySecureWebSocketServer",
		"java.lang.Object",
		"java.io.Closeable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"DummySecureWebSocketServer$Credentials,DummySecureWebSocketServer$WebServerSocketChannel,DummySecureWebSocketServer$WebServerSocketChannel$Addressable,DummySecureWebSocketServer$WebServerSocketChannel$Closer,DummySecureWebSocketServer$WebServerSocketChannel$Config,DummySecureWebSocketServer$WebServerSocketChannel$Binder,DummySecureWebSocketServer$WebServerSocketChannel$Accepter,DummySecureWebSocketServer$WebSocketChannel,DummySecureWebSocketServer$WebSocketChannel$Closer,DummySecureWebSocketServer$WebSocketChannel$Config,DummySecureWebSocketServer$WebSocketChannel$Writer,DummySecureWebSocketServer$WebSocketChannel$Reader"
	};
	$loadClass(DummySecureWebSocketServer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer);
	});
	return class$;
}

$Class* DummySecureWebSocketServer::class$ = nullptr;