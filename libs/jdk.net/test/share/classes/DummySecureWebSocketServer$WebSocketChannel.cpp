#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Reader.h>
#include <DummySecureWebSocketServer$WebSocketChannel$Writer.h>
#include <DummySecureWebSocketServer.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/nio/ByteBuffer.h>
#include <jcpp.h>

using $DummySecureWebSocketServer = ::DummySecureWebSocketServer;
using $DummySecureWebSocketServer$WebSocketChannel$Closer = ::DummySecureWebSocketServer$WebSocketChannel$Closer;
using $DummySecureWebSocketServer$WebSocketChannel$Config = ::DummySecureWebSocketServer$WebSocketChannel$Config;
using $DummySecureWebSocketServer$WebSocketChannel$Reader = ::DummySecureWebSocketServer$WebSocketChannel$Reader;
using $DummySecureWebSocketServer$WebSocketChannel$Writer = ::DummySecureWebSocketServer$WebSocketChannel$Writer;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $ByteBuffer = ::java::nio::ByteBuffer;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0 : public $DummySecureWebSocketServer$WebSocketChannel$Reader {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Reader)
public:
	void init$($Socket* s) {
		$set(this, s, s);
	}
	virtual int32_t read($ByteBuffer* bb) override {
		 return DummySecureWebSocketServer$WebSocketChannel::lambda$of$0(s, bb);
	}
	$Socket* s = nullptr;
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljava/net/Socket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, init$, void, $Socket*)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, read, int32_t, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebSocketChannel$Reader",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1 : public $DummySecureWebSocketServer$WebSocketChannel$Writer {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Writer)
public:
	void init$($Socket* s) {
		$set(this, s, s);
	}
	virtual void write($ByteBuffer* bb) override {
		DummySecureWebSocketServer$WebSocketChannel::lambda$of$1(s, bb);
	}
	$Socket* s = nullptr;
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"s", "Ljava/net/Socket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, s)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, init$, void, $Socket*)},
		{"write", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, write, void, $ByteBuffer*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebSocketChannel$Writer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2 : public $DummySecureWebSocketServer$WebSocketChannel$Config {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Config)
public:
	void init$($Socket* inst) {
		$set(this, inst$, inst);
	}
	virtual void setOption($SocketOption* arg0, Object$* arg1) override {
		$nc(inst$)->setOption(arg0, arg1);
	}
	$Socket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, init$, void, $Socket*)},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, setOption, void, $SocketOption*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebSocketChannel$Config",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::class$ = nullptr;

class DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3 : public $DummySecureWebSocketServer$WebSocketChannel$Closer {
	$class(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebSocketChannel$Closer)
public:
	void init$($Socket* inst) {
		$set(this, inst$, inst);
	}
	virtual void close() override {
		$nc(inst$)->close();
	}
	$Socket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/Socket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, init$, void, $Socket*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, close, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebSocketChannel$Closer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::class$ = nullptr;

void DummySecureWebSocketServer$WebSocketChannel::init$($AutoCloseable* channel, $DummySecureWebSocketServer$WebSocketChannel$Reader* reader, $DummySecureWebSocketServer$WebSocketChannel$Writer* writer, $DummySecureWebSocketServer$WebSocketChannel$Config* config, $DummySecureWebSocketServer$WebSocketChannel$Closer* closer) {
	$set(this, channel, channel);
	$set(this, reader, reader);
	$set(this, writer, writer);
	$set(this, config, config);
	$set(this, closer, closer);
}

void DummySecureWebSocketServer$WebSocketChannel::close() {
	$nc(this->closer)->close();
}

$String* DummySecureWebSocketServer$WebSocketChannel::toString() {
	return $nc(this->channel)->toString();
}

int32_t DummySecureWebSocketServer$WebSocketChannel::read($ByteBuffer* bb) {
	return $nc(this->reader)->read(bb);
}

void DummySecureWebSocketServer$WebSocketChannel::write($ByteBuffer* bb) {
	$nc(this->writer)->write(bb);
}

void DummySecureWebSocketServer$WebSocketChannel::setOption($SocketOption* option, Object$* value) {
	$nc(this->config)->setOption(option, value);
}

DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebSocketChannel::of($Socket* s) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	$useLocalObjectStack();
	$var($DummySecureWebSocketServer$WebSocketChannel$Reader, reader, $new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0, s));
	$var($DummySecureWebSocketServer$WebSocketChannel$Writer, writer, $new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1, s));
	$var($DummySecureWebSocketServer$WebSocketChannel$Config, var$0, $new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2, $nc(s)));
	return $new(DummySecureWebSocketServer$WebSocketChannel, s, reader, writer, var$0, $$new(DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3, s));
}

void DummySecureWebSocketServer$WebSocketChannel::lambda$of$1($Socket* s, $ByteBuffer* bb) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	$DummySecureWebSocketServer::write($($nc(s)->getOutputStream()), bb);
}

int32_t DummySecureWebSocketServer$WebSocketChannel::lambda$of$0($Socket* s, $ByteBuffer* bb) {
	$init(DummySecureWebSocketServer$WebSocketChannel);
	return $DummySecureWebSocketServer::read($($nc(s)->getInputStream()), bb);
}

DummySecureWebSocketServer$WebSocketChannel::DummySecureWebSocketServer$WebSocketChannel() {
}

$Class* DummySecureWebSocketServer$WebSocketChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0")) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$0::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1")) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$lambda$of$1$1::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2")) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$setOption$2::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3")) {
			return DummySecureWebSocketServer$WebSocketChannel$$Lambda$close$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"channel", "Ljava/lang/AutoCloseable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, channel)},
		{"reader", "LDummySecureWebSocketServer$WebSocketChannel$Reader;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, reader)},
		{"writer", "LDummySecureWebSocketServer$WebSocketChannel$Writer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, writer)},
		{"config", "LDummySecureWebSocketServer$WebSocketChannel$Config;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, config)},
		{"closer", "LDummySecureWebSocketServer$WebSocketChannel$Closer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebSocketChannel, closer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/AutoCloseable;LDummySecureWebSocketServer$WebSocketChannel$Reader;LDummySecureWebSocketServer$WebSocketChannel$Writer;LDummySecureWebSocketServer$WebSocketChannel$Config;LDummySecureWebSocketServer$WebSocketChannel$Closer;)V", nullptr, 0, $method(DummySecureWebSocketServer$WebSocketChannel, init$, void, $AutoCloseable*, $DummySecureWebSocketServer$WebSocketChannel$Reader*, $DummySecureWebSocketServer$WebSocketChannel$Writer*, $DummySecureWebSocketServer$WebSocketChannel$Config*, $DummySecureWebSocketServer$WebSocketChannel$Closer*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel, close, void), "java.io.IOException"},
		{"lambda$of$0", "(Ljava/net/Socket;Ljava/nio/ByteBuffer;)I", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DummySecureWebSocketServer$WebSocketChannel, lambda$of$0, int32_t, $Socket*, $ByteBuffer*), "java.io.IOException"},
		{"lambda$of$1", "(Ljava/net/Socket;Ljava/nio/ByteBuffer;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DummySecureWebSocketServer$WebSocketChannel, lambda$of$1, void, $Socket*, $ByteBuffer*), "java.io.IOException"},
		{"of", "(Ljava/net/Socket;)LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC | $STATIC, $staticMethod(DummySecureWebSocketServer$WebSocketChannel, of, DummySecureWebSocketServer$WebSocketChannel*, $Socket*)},
		{"read", "(Ljava/nio/ByteBuffer;)I", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel, read, int32_t, $ByteBuffer*), "java.io.IOException"},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel, toString, $String*)},
		{"write", "(Ljava/nio/ByteBuffer;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebSocketChannel, write, void, $ByteBuffer*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebSocketChannel", "DummySecureWebSocketServer", "WebSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebSocketChannel$Closer", "DummySecureWebSocketServer$WebSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebSocketChannel$Config", "DummySecureWebSocketServer$WebSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebSocketChannel$Writer", "DummySecureWebSocketServer$WebSocketChannel", "Writer", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebSocketChannel$Reader", "DummySecureWebSocketServer$WebSocketChannel", "Reader", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DummySecureWebSocketServer$WebSocketChannel",
		"java.lang.Object",
		"java.lang.AutoCloseable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"DummySecureWebSocketServer"
	};
	$loadClass(DummySecureWebSocketServer$WebSocketChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebSocketChannel);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebSocketChannel::class$ = nullptr;