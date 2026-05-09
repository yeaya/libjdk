#include <ProxyServer$Connection.h>
#include <ProxyServer$Credentials.h>
#include <ProxyServer.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/channels/NetworkChannel.h>
#include <java/nio/channels/SelectableChannel.h>
#include <java/nio/channels/SocketChannel.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Arrays.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64.h>
#include <java/util/IllegalFormatException.h>
#include <java/util/List.h>
#include <java/util/Locale.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef CR
#undef CRLF
#undef LF
#undef ROOT
#undef SO_LINGER
#undef TCP_NODELAY
#undef US
#undef UTF_8

using $ProxyServer = ::ProxyServer;
using $ProxyServer$Credentials = ::ProxyServer$Credentials;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InterruptedException = ::java::lang::InterruptedException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $SocketChannel = ::java::nio::channels::SocketChannel;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Arrays = ::java::util::Arrays;
using $Base64 = ::java::util::Base64;
using $IllegalFormatException = ::java::util::IllegalFormatException;
using $List = ::java::util::List;
using $Locale = ::java::util::Locale;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Collectors = ::java::util::stream::Collectors;

class ProxyServer$Connection$$Lambda$lambda$authorized$0 : public $Predicate {
	$class(ProxyServer$Connection$$Lambda$lambda$authorized$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* n) override {
		return ProxyServer$Connection::lambda$authorized$0($cast($String, n));
	}
};
$Class* ProxyServer$Connection$$Lambda$lambda$authorized$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$lambda$authorized$0, init$, void)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$lambda$authorized$0, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$lambda$authorized$0",
		"java.lang.Object",
		"java.util.function.Predicate",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$lambda$authorized$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$lambda$authorized$0);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$authorized$0::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$findFirst$1$1 : public $Predicate {
	$class(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, $NO_CLASS_INIT, $Predicate)
public:
	void init$($String* h) {
		$set(this, h, h);
	}
	virtual bool test(Object$* s) override {
		return ProxyServer$Connection::lambda$findFirst$1(h, $cast($String, s));
	}
	$String* h = nullptr;
};
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, init$, void, $String*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, test, bool, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$lambda$findFirst$1$1",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$findFirst$2$2 : public $Function {
	$class(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, $NO_CLASS_INIT, $Function)
public:
	void init$($String* h) {
		$set(this, h, h);
	}
	virtual $Object* apply(Object$* s) override {
		return $of(ProxyServer$Connection::lambda$findFirst$2(h, $cast($String, s)));
	}
	$String* h = nullptr;
};
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"h", "Ljava/lang/String;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, h)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, init$, void, $String*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$lambda$findFirst$2$2",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::class$ = nullptr;

class ProxyServer$Connection$$Lambda$trim$3 : public $Function {
	$class(ProxyServer$Connection$$Lambda$trim$3, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* inst$) override {
		return $of($sure($String, inst$)->trim());
	}
};
$Class* ProxyServer$Connection$$Lambda$trim$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$trim$3, init$, void)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$trim$3, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$trim$3",
		"java.lang.Object",
		"java.util.function.Function",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$trim$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$trim$3);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$trim$3::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4 : public $Runnable {
	$class(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ProxyServer$Connection* inst, bool log) {
		$set(this, inst$, inst);
		this->log = log;
	}
	virtual void run() override {
		$nc(inst$)->lambda$proxyCommon$3(log);
	}
	ProxyServer$Connection* inst$ = nullptr;
	bool log = false;
};
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, inst$)},
		{"log", "Z", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LProxyServer$Connection;Z)V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, init$, void, ProxyServer$Connection*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::class$ = nullptr;

class ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5 : public $Runnable {
	$class(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$(ProxyServer$Connection* inst, bool log) {
		$set(this, inst$, inst);
		this->log = log;
	}
	virtual void run() override {
		$nc(inst$)->lambda$proxyCommon$4(log);
	}
	ProxyServer$Connection* inst$ = nullptr;
	bool log = false;
};
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, inst$)},
		{"log", "Z", nullptr, $PUBLIC, $field(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, log)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LProxyServer$Connection;Z)V", nullptr, $PUBLIC, $method(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, init$, void, ProxyServer$Connection*, bool)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5);
	});
	return class$;
}
$Class* ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::class$ = nullptr;

void ProxyServer$Connection::init$($ProxyServer* this$0, $SocketChannel* s, int32_t id) {
	$useLocalObjectStack();
	$set(this, this$0, this$0);
	this->id = id;
	$set(this, clientSocket, s);
	$set(this, clientIn, $new($BufferedInputStream, $($$nc($nc(s)->socket())->getInputStream())));
	$set(this, clientOut, $$nc(s->socket())->getOutputStream());
}

$bytes* ProxyServer$Connection::readHeaders($InputStream* is) {
	$useLocalObjectStack();
	$var($bytes, outbuffer, $new($bytes, 8000));
	int32_t crlfcount = 0;
	int32_t bytecount = 0;
	int32_t c = 0;
	while ((c = $nc(is)->read()) != -1 && bytecount < outbuffer->length) {
		outbuffer->set(bytecount++, (int8_t)c);
		if (this->this$0->debug) {
			$nc($System::out)->write(c);
		}
		if (c == ProxyServer$Connection::CR || c == ProxyServer$Connection::LF) {
			switch (crlfcount) {
			case 0:
				if (c == ProxyServer$Connection::CR) {
					++crlfcount;
				}
				break;
			case 1:
				if (c == ProxyServer$Connection::LF) {
					++crlfcount;
				}
				break;
			case 2:
				if (c == ProxyServer$Connection::CR) {
					++crlfcount;
				}
				break;
			case 3:
				if (c == ProxyServer$Connection::LF) {
					++crlfcount;
				}
				break;
			}
		} else {
			crlfcount = 0;
		}
		if (crlfcount == 4) {
			break;
		}
	}
	$var($bytes, ret, $new($bytes, bytecount));
	$System::arraycopy(outbuffer, 0, ret, 0, bytecount);
	return ret;
}

bool ProxyServer$Connection::running() {
	bool var$0 = $nc(this->out)->isAlive();
	return var$0 || $nc(this->in)->isAlive();
}

void ProxyServer$Connection::close() {
	$synchronized(this) {
		this->closing = true;
		if (this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: closing connection {"_s, this, "}"_s}));
		}
		if (this->serverSocket != nullptr) {
			this->serverSocket->close();
		}
		if (this->clientSocket != nullptr) {
			this->clientSocket->close();
		}
	}
}

void ProxyServer$Connection::awaitCompletion() {
	try {
		if (this->in != nullptr) {
			this->in->join();
		}
		if (this->out != nullptr) {
			this->out->join();
		}
	} catch ($InterruptedException& e) {
	}
}

int32_t ProxyServer$Connection::findCRLF($bytes* b) {
	for (int32_t i = 0; i < $nc(b)->length - 1; ++i) {
		if (b->get(i) == ProxyServer$Connection::CR && b->get(i + 1) == ProxyServer$Connection::LF) {
			return i;
		}
	}
	return -1;
}

bool ProxyServer$Connection::authorized($ProxyServer$Credentials* credentials, $List* requestHeaders) {
	$useLocalObjectStack();
	$var($List, authorization, $cast($List, $$nc($$nc($nc(requestHeaders)->stream())->filter($$new(ProxyServer$Connection$$Lambda$lambda$authorized$0)))->collect($($Collectors::toList()))));
	if ($nc(authorization)->isEmpty()) {
		return false;
	}
	if (authorization->size() != 1) {
		$throwNew($IllegalStateException, $$str({"Authorization unexpected count:"_s, authorization}));
	}
	$var($String, value, $($$sure($String, authorization->get(0))->substring("proxy-authorization"_s->length()))->trim());
	if (!value->startsWith(":"_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization malformed: "_s, value}));
	}
	$assign(value, $(value->substring(1))->trim());
	if (!value->startsWith("Basic "_s)) {
		$throwNew($IllegalStateException, $$str({"Authorization not Basic: "_s, value}));
	}
	$assign(value, value->substring("Basic "_s->length()));
	$init($StandardCharsets);
	$var($String, values, $new($String, $($$nc($Base64::getDecoder())->decode(value)), $StandardCharsets::UTF_8));
	int32_t sep = values->indexOf(u':');
	if (sep < 1) {
		$throwNew($IllegalStateException, $$str({"Authorization no colon: "_s, values}));
	}
	$var($String, name, values->substring(0, sep));
	$var($String, password, values->substring(sep + 1));
	bool var$0 = name->equals($($nc(credentials)->name()));
	if (var$0 && password->equals($(credentials->password()))) {
		return true;
	}
	return false;
}

void ProxyServer$Connection::init() {
	$useLocalObjectStack();
	try {
		$var($bytes, buf, nullptr);
		$var($String, host, nullptr);
		$var($List, headers, nullptr);
		bool authorized = false;
		while (true) {
			$assign(buf, readHeaders(this->clientIn));
			if (findCRLF(buf) == -1) {
				if (this->this$0->debug) {
					$init($StandardCharsets);
					$nc($System::out)->println($$str({"Proxy: no CRLF closing, buf contains:["_s, $$new($String, buf, $StandardCharsets::ISO_8859_1), "]"_s}));
				}
				close();
				return;
			}
			$init($StandardCharsets);
			$assign(headers, $Arrays::asList($($$new($String, buf, $StandardCharsets::ISO_8859_1)->split("\r\n"_s))));
			$assign(host, findFirst(headers, "host"_s));
			if (this->this$0->credentials != nullptr) {
				if (!this->authorized(this->this$0->credentials, headers)) {
					$var($String, resp, "HTTP/1.1 407 Proxy Authentication Required\r\nContent-Length: 0\r\nProxy-Authenticate: Basic realm=\"proxy realm\"\r\n\r\n"_s);
					$init($StandardSocketOptions);
					$nc(this->clientSocket)->setOption($StandardSocketOptions::TCP_NODELAY, $($Boolean::valueOf(true)));
					this->clientSocket->setOption($StandardSocketOptions::SO_LINGER, $($Integer::valueOf(2)));
					$var($ByteBuffer, buffer, $ByteBuffer::wrap($(resp->getBytes($StandardCharsets::ISO_8859_1))));
					$nc(this->clientSocket)->write(buffer);
					if (this->this$0->debug) {
						$var($Integer, linger, $cast($Integer, this->clientSocket->getOption($StandardSocketOptions::SO_LINGER)));
						$var($Boolean, nodelay, $cast($Boolean, this->clientSocket->getOption($StandardSocketOptions::TCP_NODELAY)));
						int32_t var$0 = $nc(buffer)->position();
						$nc($System::out)->printf("Proxy: unauthorized; 407 sent (%s/%s), linger: %s, nodelay: %s%n"_s, $$new($ObjectArray, {
							$($Integer::valueOf($nc(buffer)->position())),
							$($Integer::valueOf(var$0 + buffer->remaining())),
							linger,
							nodelay
						}));
					}
					if (shouldCloseAfter407(headers)) {
						closeConnection();
						return;
					}
					continue;
				}
				authorized = true;
				break;
			} else {
				break;
			}
		}
		int32_t p = findCRLF(buf);
		$init($StandardCharsets);
		$var($String, cmd, $new($String, buf, 0, p, $StandardCharsets::ISO_8859_1));
		$var($StringArray, params, cmd->split(" "_s));
		if ($nc(params->get(0))->equals("CONNECT"_s)) {
			doTunnel(params->get(1));
		} else {
			doProxy(params->get(1), cmd, headers, host, authorized);
		}
	} catch ($Throwable& e) {
		if (this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
		try {
			close();
		} catch ($IOException& e1) {
		}
	}
}

$String* ProxyServer$Connection::findFirst($List* headers, $String* key) {
	$useLocalObjectStack();
	$init($Locale);
	$var($String, h, $str({$($nc(key)->toLowerCase($Locale::ROOT)), ": "_s}));
	return $cast($String, $$nc($$nc($$nc($$nc($$nc($nc(headers)->stream())->filter($$new(ProxyServer$Connection$$Lambda$lambda$findFirst$1$1, h)))->findFirst())->map($$new(ProxyServer$Connection$$Lambda$lambda$findFirst$2$2, h)))->map($$new(ProxyServer$Connection$$Lambda$trim$3)))->orElse(nullptr));
}

int64_t ProxyServer$Connection::drain($SocketChannel* socket) {
	$useLocalObjectStack();
	bool isBlocking = $nc(socket)->isBlocking();
	if (isBlocking) {
		socket->configureBlocking(false);
	}
	$var($Throwable, var$0, nullptr);
	int64_t var$2 = 0;
	bool return$1 = false;
	try {
		$var($ByteBuffer, buffer, $ByteBuffer::allocate(1024));
		int32_t read = 0;
		int64_t drained = 0;
		while ((read = socket->read(buffer)) > 0) {
			drained += read;
			$nc(buffer)->position(0);
			buffer->limit(buffer->capacity());
		}
		var$2 = drained;
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		if (isBlocking) {
			socket->configureBlocking(true);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

void ProxyServer$Connection::closeConnection() {
	$useLocalObjectStack();
	if (this->this$0->debug) {
		$init($StandardSocketOptions);
		$var($Integer, linger, $cast($Integer, $nc(this->clientSocket)->getOption($StandardSocketOptions::SO_LINGER)));
		$var($Boolean, nodelay, $cast($Boolean, this->clientSocket->getOption($StandardSocketOptions::TCP_NODELAY)));
		$nc($System::out)->printf("Proxy: closing connection id=%s, linger: %s, nodelay: %s%n"_s, $$new($ObjectArray, {
			$($Integer::valueOf(this->id)),
			linger,
			nodelay
		}));
	}
	int64_t drained = drain(this->clientSocket);
	if (this->this$0->debug) {
		$nc($System::out)->printf("Proxy: drained: %s%n"_s, $$new($ObjectArray, {$($Long::valueOf(drained))}));
	}
	$nc(this->clientSocket)->shutdownOutput();
	try {
		if ($ProxyServer::isWindows()) {
			$Thread::sleep(500);
		}
	} catch ($InterruptedException& x) {
	}
	$nc(this->clientSocket)->shutdownInput();
	close();
}

bool ProxyServer$Connection::shouldCloseAfter407($List* headers) {
	$useLocalObjectStack();
	$var($String, te, findFirst(headers, "transfer-encoding"_s));
	if (te != nullptr) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: transfer-encoding with 407, closing connection"_s);
		}
		return true;
	}
	$var($String, cl, findFirst(headers, "content-length"_s));
	int32_t n = -1;
	try {
		n = $Integer::parseInt(cl);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: content-length: %d%n"_s, $$new($ObjectArray, {cl}));
		}
	} catch ($IllegalFormatException& x) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: bad content-length, closing connection"_s);
		}
		return true;
	}
	if (n > 0 || n < -1) {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: request body with 407, closing connection"_s);
		}
		return true;
	}
	$var($String, cmdline, $cast($String, $nc(headers)->get(0)));
	int32_t m = $nc(cmdline)->indexOf(u' ');
	$var($String, method, (m > 0) ? cmdline->substring(0, m) : ($String*)nullptr);
	$var($List, nobody, $List::of("GET"_s, "HEAD"_s));
	if (n == 0 || $nc(nobody)->contains($($Integer::valueOf(m)))) {
		int32_t available = $nc(this->clientIn)->available();
		int64_t drained = drain(this->clientSocket);
		if (drained > 0 || available > 0) {
			if (this->this$0->debug) {
				$nc($System::out)->printf("Proxy: unexpected bytes (%d) with 407, closing connection%n"_s, $$new($ObjectArray, {$($Long::valueOf(drained + available))}));
			}
			return true;
		}
		return false;
	} else {
		if (this->this$0->debug) {
			$nc($System::out)->println("Proxy: possible body with 407, closing connection"_s);
		}
		return true;
	}
}

void ProxyServer$Connection::doProxy($String* dest$renamed, $String* cmdLine$renamed, $List* headers, $String* host, bool authorized) {
	$useLocalObjectStack();
	$var($String, cmdLine, cmdLine$renamed);
	$var($String, dest, dest$renamed);
	try {
		$var($URI, uri, $new($URI, dest));
		if (!uri->isAbsolute()) {
			if (host == nullptr) {
				$throwNew($IOException, "request URI not absolute"_s);
			} else {
				$assign(uri, $new($URI, $$str({"http://"_s, host, dest})));
			}
		}
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: uri=%s%n"_s, $$new($ObjectArray, {uri}));
		}
		$assign(dest, uri->getAuthority());
		int32_t sp = $nc(cmdLine)->indexOf(u' ');
		$var($String, method, cmdLine->substring(0, sp));
		$assign(cmdLine, $str({method, " "_s, $(uri->getPath()), " HTTP/1.1"_s}));
		commonInit(dest, 80);
		$var($OutputStream, sout, nullptr);
		$synchronized(this) {
			if (this->closing) {
				return;
			}
			$assign(sout, this->serverOut);
		}
		$var($bytes, CRLF, $new($bytes, {
			(int8_t)u'\r',
			(int8_t)u'\n'
		}));
		$init($StandardCharsets);
		$nc(sout)->write($(cmdLine->getBytes($StandardCharsets::ISO_8859_1)));
		sout->write(CRLF);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy Forwarding: %s%n"_s, $$new($ObjectArray, {cmdLine}));
		}
		for (int32_t l = 1; l < $nc(headers)->size(); ++l) {
			$var($String, s, $cast($String, headers->get(l)));
			$init($Locale);
			if (!authorized || !$($nc(s)->toLowerCase($Locale::ROOT))->startsWith("proxy-authorization"_s)) {
				sout->write($($nc(s)->getBytes($StandardCharsets::ISO_8859_1)));
				sout->write(CRLF);
				if (this->this$0->debug) {
					$nc($System::out)->printf("Proxy Forwarding: %s%n"_s, $$new($ObjectArray, {s}));
				}
			} else if (this->this$0->debug) {
				$nc($System::out)->printf("Proxy Skipping: %s%n"_s, $$new($ObjectArray, {s}));
			}
		}
		sout->write(CRLF);
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy Forwarding: %n"_s, $$new($ObjectArray, 0));
		}
		proxyCommon(this->this$0->debug);
	} catch ($URISyntaxException& e) {
		$throwNew($IOException, e);
	}
}

void ProxyServer$Connection::commonInit($String* dest, int32_t defaultPort) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->closing) {
			return;
		}
		int32_t port = 0;
		$var($StringArray, hostport, $nc(dest)->split(":"_s));
		if (hostport->length == 1) {
			port = defaultPort;
		} else {
			port = $Integer::parseInt(hostport->get(1));
		}
		if (this->this$0->debug) {
			$nc($System::out)->printf("Proxy: connecting to (%s/%d)\n"_s, $$new($ObjectArray, {
				hostport->get(0),
				$($Integer::valueOf(port))
			}));
		}
		$set(this, serverSocket, $SocketChannel::open());
		$nc(this->serverSocket)->connect($$new($InetSocketAddress, hostport->get(0), port));
		$set(this, serverOut, $$nc(this->serverSocket->socket())->getOutputStream());
		$set(this, serverIn, $new($BufferedInputStream, $($$nc(this->serverSocket->socket())->getInputStream())));
	}
}

void ProxyServer$Connection::proxyCommon(bool log) {
	$synchronized(this) {
		$useLocalObjectStack();
		if (this->closing) {
			return;
		}
		$set(this, out, $new($Thread, $$new(ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4, this, log)));
		$set(this, in, $new($Thread, $$new(ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5, this, log)));
		this->out->setName("Proxy-outbound"_s);
		this->out->setDaemon(true);
		this->in->setDaemon(true);
		this->in->setName("Proxy-inbound"_s);
		this->out->start();
		this->in->start();
	}
}

void ProxyServer$Connection::doTunnel($String* dest) {
	if (this->closing) {
		return;
	}
	commonInit(dest, 443);
	$nc(this->clientOut)->write($("HTTP/1.1 200 OK\r\n\r\n"_s->getBytes()));
	proxyCommon(false);
}

$String* ProxyServer$Connection::toString() {
	return $str({"Proxy connection "_s, $$str(this->id), ", client sock:"_s, this->clientSocket});
}

void ProxyServer$Connection::lambda$proxyCommon$4(bool log) {
	$useLocalObjectStack();
	try {
		$var($bytes, bb, $new($bytes, 8000));
		int32_t n = 0;
		int32_t resp = 0;
		while ((n = $nc(this->serverIn)->read(bb)) != -1) {
			$nc(this->clientOut)->write(bb, 0, n);
			resp += n;
			if (log) {
				$init($StandardCharsets);
				$nc($System::out)->printf("Proxy Forwarding [response]: %s%n"_s, $$new($ObjectArray, {$$new($String, bb, 0, n, $StandardCharsets::UTF_8)}));
			}
			if (log) {
				$nc($System::out)->printf("Proxy Forwarding [response]: total %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(resp))}));
			}
		}
		this->closing = true;
		$nc(this->serverSocket)->close();
		$nc(this->clientSocket)->close();
	} catch ($IOException& e) {
		if (!this->closing && this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
	}
}

void ProxyServer$Connection::lambda$proxyCommon$3(bool log) {
	$useLocalObjectStack();
	try {
		$var($bytes, bb, $new($bytes, 8000));
		int32_t n = 0;
		int32_t body = 0;
		while ((n = $nc(this->clientIn)->read(bb)) != -1) {
			$nc(this->serverOut)->write(bb, 0, n);
			body += n;
			if (log) {
				$nc($System::out)->printf("Proxy Forwarding [request body]: total %d%n"_s, $$new($ObjectArray, {$($Integer::valueOf(body))}));
			}
		}
		this->closing = true;
		$nc(this->serverSocket)->close();
		$nc(this->clientSocket)->close();
	} catch ($IOException& e) {
		if (!this->closing && this->this$0->debug) {
			$nc($System::out)->println($$str({"Proxy: "_s, e}));
			e->printStackTrace();
		}
	}
}

$String* ProxyServer$Connection::lambda$findFirst$2($String* h, $String* s) {
	return $nc(s)->substring($nc(h)->length());
}

bool ProxyServer$Connection::lambda$findFirst$1($String* h, $String* s) {
	$init($Locale);
	return $($nc(s)->toLowerCase($Locale::ROOT))->startsWith(h);
}

bool ProxyServer$Connection::lambda$authorized$0($String* n) {
	$init($Locale);
	return $($nc(n)->toLowerCase($Locale::US))->startsWith("proxy-authorization"_s);
}

ProxyServer$Connection::ProxyServer$Connection() {
}

$Class* ProxyServer$Connection::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ProxyServer$Connection$$Lambda$lambda$authorized$0")) {
			return ProxyServer$Connection$$Lambda$lambda$authorized$0::load$(name, initialize);
		}
		if (name->equals("ProxyServer$Connection$$Lambda$lambda$findFirst$1$1")) {
			return ProxyServer$Connection$$Lambda$lambda$findFirst$1$1::load$(name, initialize);
		}
		if (name->equals("ProxyServer$Connection$$Lambda$lambda$findFirst$2$2")) {
			return ProxyServer$Connection$$Lambda$lambda$findFirst$2$2::load$(name, initialize);
		}
		if (name->equals("ProxyServer$Connection$$Lambda$trim$3")) {
			return ProxyServer$Connection$$Lambda$trim$3::load$(name, initialize);
		}
		if (name->equals("ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4")) {
			return ProxyServer$Connection$$Lambda$lambda$proxyCommon$3$4::load$(name, initialize);
		}
		if (name->equals("ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5")) {
			return ProxyServer$Connection$$Lambda$lambda$proxyCommon$4$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LProxyServer;", nullptr, $FINAL | $SYNTHETIC, $field(ProxyServer$Connection, this$0)},
		{"id", "I", nullptr, $PRIVATE | $FINAL, $field(ProxyServer$Connection, id)},
		{"clientSocket", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(ProxyServer$Connection, clientSocket)},
		{"serverSocket", "Ljava/nio/channels/SocketChannel;", nullptr, 0, $field(ProxyServer$Connection, serverSocket)},
		{"out", "Ljava/lang/Thread;", nullptr, 0, $field(ProxyServer$Connection, out)},
		{"in", "Ljava/lang/Thread;", nullptr, 0, $field(ProxyServer$Connection, in)},
		{"clientIn", "Ljava/io/InputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, clientIn)},
		{"serverIn", "Ljava/io/InputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, serverIn)},
		{"clientOut", "Ljava/io/OutputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, clientOut)},
		{"serverOut", "Ljava/io/OutputStream;", nullptr, $VOLATILE, $field(ProxyServer$Connection, serverOut)},
		{"CR", "I", nullptr, $STATIC | $FINAL, $constField(ProxyServer$Connection, CR)},
		{"LF", "I", nullptr, $STATIC | $FINAL, $constField(ProxyServer$Connection, LF)},
		{"closing", "Z", nullptr, $PRIVATE | $VOLATILE, $field(ProxyServer$Connection, closing)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LProxyServer;Ljava/nio/channels/SocketChannel;I)V", nullptr, 0, $method(ProxyServer$Connection, init$, void, $ProxyServer*, $SocketChannel*, int32_t), "java.io.IOException"},
		{"authorized", "(LProxyServer$Credentials;Ljava/util/List;)Z", "(LProxyServer$Credentials;Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE, $method(ProxyServer$Connection, authorized, bool, $ProxyServer$Credentials*, $List*)},
		{"awaitCompletion", "()V", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection, awaitCompletion, void)},
		{"close", "()V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(ProxyServer$Connection, close, void), "java.io.IOException"},
		{"closeConnection", "()V", nullptr, 0, $virtualMethod(ProxyServer$Connection, closeConnection, void), "java.io.IOException"},
		{"commonInit", "(Ljava/lang/String;I)V", nullptr, $SYNCHRONIZED, $virtualMethod(ProxyServer$Connection, commonInit, void, $String*, int32_t), "java.io.IOException"},
		{"doProxy", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/lang/String;Z)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;Z)V", 0, $virtualMethod(ProxyServer$Connection, doProxy, void, $String*, $String*, $List*, $String*, bool), "java.io.IOException"},
		{"doTunnel", "(Ljava/lang/String;)V", nullptr, 0, $virtualMethod(ProxyServer$Connection, doTunnel, void, $String*), "java.io.IOException"},
		{"drain", "(Ljava/nio/channels/SocketChannel;)J", nullptr, $PRIVATE, $method(ProxyServer$Connection, drain, int64_t, $SocketChannel*), "java.io.IOException"},
		{"findCRLF", "([B)I", nullptr, 0, $virtualMethod(ProxyServer$Connection, findCRLF, int32_t, $bytes*)},
		{"findFirst", "(Ljava/util/List;Ljava/lang/String;)Ljava/lang/String;", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;)Ljava/lang/String;", 0, $virtualMethod(ProxyServer$Connection, findFirst, $String*, $List*, $String*)},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection, init, void)},
		{"lambda$authorized$0", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProxyServer$Connection, lambda$authorized$0, bool, $String*)},
		{"lambda$findFirst$1", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProxyServer$Connection, lambda$findFirst$1, bool, $String*, $String*)},
		{"lambda$findFirst$2", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProxyServer$Connection, lambda$findFirst$2, $String*, $String*, $String*)},
		{"lambda$proxyCommon$3", "(Z)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ProxyServer$Connection, lambda$proxyCommon$3, void, bool)},
		{"lambda$proxyCommon$4", "(Z)V", nullptr, $PRIVATE | $SYNTHETIC, $method(ProxyServer$Connection, lambda$proxyCommon$4, void, bool)},
		{"proxyCommon", "(Z)V", nullptr, $SYNCHRONIZED, $virtualMethod(ProxyServer$Connection, proxyCommon, void, bool), "java.io.IOException"},
		{"readHeaders", "(Ljava/io/InputStream;)[B", nullptr, 0, $virtualMethod(ProxyServer$Connection, readHeaders, $bytes*, $InputStream*), "java.io.IOException"},
		{"running", "()Z", nullptr, 0, $virtualMethod(ProxyServer$Connection, running, bool)},
		{"shouldCloseAfter407", "(Ljava/util/List;)Z", "(Ljava/util/List<Ljava/lang/String;>;)Z", $PRIVATE, $method(ProxyServer$Connection, shouldCloseAfter407, bool, $List*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ProxyServer$Connection, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProxyServer$Connection", "ProxyServer", "Connection", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ProxyServer$Connection",
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
		"ProxyServer"
	};
	$loadClass(ProxyServer$Connection, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProxyServer$Connection);
	});
	return class$;
}

$Class* ProxyServer$Connection::class$ = nullptr;