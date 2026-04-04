#include <DummySecureWebSocketServer$WebServerSocketChannel.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Accepter.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Addressable.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Binder.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Closer.h>
#include <DummySecureWebSocketServer$WebServerSocketChannel$Config.h>
#include <DummySecureWebSocketServer$WebSocketChannel.h>
#include <DummySecureWebSocketServer.h>
#include <java/io/Serializable.h>
#include <java/lang/AutoCloseable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketAddress.h>
#include <java/net/SocketOption.h>
#include <jcpp.h>

using $DummySecureWebSocketServer$WebServerSocketChannel$Accepter = ::DummySecureWebSocketServer$WebServerSocketChannel$Accepter;
using $DummySecureWebSocketServer$WebServerSocketChannel$Addressable = ::DummySecureWebSocketServer$WebServerSocketChannel$Addressable;
using $DummySecureWebSocketServer$WebServerSocketChannel$Binder = ::DummySecureWebSocketServer$WebServerSocketChannel$Binder;
using $DummySecureWebSocketServer$WebServerSocketChannel$Closer = ::DummySecureWebSocketServer$WebServerSocketChannel$Closer;
using $DummySecureWebSocketServer$WebServerSocketChannel$Config = ::DummySecureWebSocketServer$WebServerSocketChannel$Config;
using $DummySecureWebSocketServer$WebSocketChannel = ::DummySecureWebSocketServer$WebSocketChannel;
using $Serializable = ::java::io::Serializable;
using $AutoCloseable = ::java::lang::AutoCloseable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ServerSocket = ::java::net::ServerSocket;
using $SocketAddress = ::java::net::SocketAddress;
using $SocketOption = ::java::net::SocketOption;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0 : public $DummySecureWebSocketServer$WebServerSocketChannel$Accepter {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Accepter)
public:
	void init$($ServerSocket* ss) {
		$set(this, ss, ss);
	}
	virtual $DummySecureWebSocketServer$WebSocketChannel* accept() override {
		 return DummySecureWebSocketServer$WebServerSocketChannel::lambda$of$0(ss);
	}
	$ServerSocket* ss = nullptr;
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ss", "Ljava/net/ServerSocket;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, ss)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, init$, void, $ServerSocket*)},
		{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, accept, $DummySecureWebSocketServer$WebSocketChannel*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebServerSocketChannel$Accepter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1 : public $DummySecureWebSocketServer$WebServerSocketChannel$Binder {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Binder)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void bind($SocketAddress* arg0) override {
		$nc(inst$)->bind(arg0);
	}
	$ServerSocket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, init$, void, $ServerSocket*)},
		{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, bind, void, $SocketAddress*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebServerSocketChannel$Binder",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2 : public $DummySecureWebSocketServer$WebServerSocketChannel$Addressable {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Addressable)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual $SocketAddress* getLocalAddress() override {
		 return $nc(inst$)->getLocalSocketAddress();
	}
	$ServerSocket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, init$, void, $ServerSocket*)},
		{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, getLocalAddress, $SocketAddress*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebServerSocketChannel$Addressable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3 : public $DummySecureWebSocketServer$WebServerSocketChannel$Config {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Config)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void setOption($SocketOption* arg0, Object$* arg1) override {
		$nc(inst$)->setOption(arg0, arg1);
	}
	$ServerSocket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, init$, void, $ServerSocket*)},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, setOption, void, $SocketOption*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebServerSocketChannel$Config",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::class$ = nullptr;

class DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4 : public $DummySecureWebSocketServer$WebServerSocketChannel$Closer {
	$class(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, $NO_CLASS_INIT, $DummySecureWebSocketServer$WebServerSocketChannel$Closer)
public:
	void init$($ServerSocket* inst) {
		$set(this, inst$, inst);
	}
	virtual void close() override {
		$nc(inst$)->close();
	}
	$ServerSocket* inst$ = nullptr;
};
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/net/ServerSocket;)V", nullptr, $PUBLIC, $method(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, init$, void, $ServerSocket*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, close, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4",
		"java.lang.Object",
		"DummySecureWebSocketServer$WebServerSocketChannel$Closer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4);
	});
	return class$;
}
$Class* DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::class$ = nullptr;

void DummySecureWebSocketServer$WebServerSocketChannel::init$($AutoCloseable* server, $DummySecureWebSocketServer$WebServerSocketChannel$Accepter* accepter, $DummySecureWebSocketServer$WebServerSocketChannel$Binder* binder, $DummySecureWebSocketServer$WebServerSocketChannel$Addressable* address, $DummySecureWebSocketServer$WebServerSocketChannel$Config* config, $DummySecureWebSocketServer$WebServerSocketChannel$Closer* closer) {
	$set(this, server, server);
	$set(this, accepter, accepter);
	$set(this, binder, binder);
	$set(this, address, address);
	$set(this, config, config);
	$set(this, closer, closer);
}

void DummySecureWebSocketServer$WebServerSocketChannel::close() {
	$nc(this->closer)->close();
}

$String* DummySecureWebSocketServer$WebServerSocketChannel::toString() {
	return $nc(this->server)->toString();
}

$DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::accept() {
	return $nc(this->accepter)->accept();
}

void DummySecureWebSocketServer$WebServerSocketChannel::bind($SocketAddress* address) {
	$nc(this->binder)->bind(address);
}

void DummySecureWebSocketServer$WebServerSocketChannel::setOption($SocketOption* option, Object$* value) {
	$nc(this->config)->setOption(option, value);
}

$SocketAddress* DummySecureWebSocketServer$WebServerSocketChannel::getLocalAddress() {
	return $nc(this->address)->getLocalAddress();
}

DummySecureWebSocketServer$WebServerSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::of($ServerSocket* ss) {
	$init(DummySecureWebSocketServer$WebServerSocketChannel);
	$useLocalObjectStack();
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Accepter, a, $new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0, ss));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Binder, var$0, $new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1, $nc(ss)));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Addressable, var$1, $new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2, ss));
	$var($DummySecureWebSocketServer$WebServerSocketChannel$Config, var$2, $new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3, ss));
	return $new(DummySecureWebSocketServer$WebServerSocketChannel, ss, a, var$0, var$1, var$2, $$new(DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4, ss));
}

$DummySecureWebSocketServer$WebSocketChannel* DummySecureWebSocketServer$WebServerSocketChannel::lambda$of$0($ServerSocket* ss) {
	$init(DummySecureWebSocketServer$WebServerSocketChannel);
	return $DummySecureWebSocketServer$WebSocketChannel::of($($nc(ss)->accept()));
}

DummySecureWebSocketServer$WebServerSocketChannel::DummySecureWebSocketServer$WebServerSocketChannel() {
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0")) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$lambda$of$0::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1")) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$bind$1::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2")) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$getLocalSocketAddress$2::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3")) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$setOption$3::load$(name, initialize);
		}
		if (name->equals("DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4")) {
			return DummySecureWebSocketServer$WebServerSocketChannel$$Lambda$close$4::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"server", "Ljava/lang/AutoCloseable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, server)},
		{"accepter", "LDummySecureWebSocketServer$WebServerSocketChannel$Accepter;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, accepter)},
		{"binder", "LDummySecureWebSocketServer$WebServerSocketChannel$Binder;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, binder)},
		{"address", "LDummySecureWebSocketServer$WebServerSocketChannel$Addressable;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, address)},
		{"config", "LDummySecureWebSocketServer$WebServerSocketChannel$Config;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, config)},
		{"closer", "LDummySecureWebSocketServer$WebServerSocketChannel$Closer;", nullptr, $FINAL, $field(DummySecureWebSocketServer$WebServerSocketChannel, closer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/AutoCloseable;LDummySecureWebSocketServer$WebServerSocketChannel$Accepter;LDummySecureWebSocketServer$WebServerSocketChannel$Binder;LDummySecureWebSocketServer$WebServerSocketChannel$Addressable;LDummySecureWebSocketServer$WebServerSocketChannel$Config;LDummySecureWebSocketServer$WebServerSocketChannel$Closer;)V", nullptr, 0, $method(DummySecureWebSocketServer$WebServerSocketChannel, init$, void, $AutoCloseable*, $DummySecureWebSocketServer$WebServerSocketChannel$Accepter*, $DummySecureWebSocketServer$WebServerSocketChannel$Binder*, $DummySecureWebSocketServer$WebServerSocketChannel$Addressable*, $DummySecureWebSocketServer$WebServerSocketChannel$Config*, $DummySecureWebSocketServer$WebServerSocketChannel$Closer*)},
		{"accept", "()LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, accept, $DummySecureWebSocketServer$WebSocketChannel*), "java.io.IOException"},
		{"bind", "(Ljava/net/SocketAddress;)V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, bind, void, $SocketAddress*), "java.io.IOException"},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, close, void), "java.io.IOException"},
		{"getLocalAddress", "()Ljava/net/SocketAddress;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, getLocalAddress, $SocketAddress*), "java.io.IOException"},
		{"lambda$of$0", "(Ljava/net/ServerSocket;)LDummySecureWebSocketServer$WebSocketChannel;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DummySecureWebSocketServer$WebServerSocketChannel, lambda$of$0, $DummySecureWebSocketServer$WebSocketChannel*, $ServerSocket*), "java.io.IOException"},
		{"of", "(Ljava/net/ServerSocket;)LDummySecureWebSocketServer$WebServerSocketChannel;", nullptr, $PUBLIC | $STATIC, $staticMethod(DummySecureWebSocketServer$WebServerSocketChannel, of, DummySecureWebSocketServer$WebServerSocketChannel*, $ServerSocket*)},
		{"setOption", "(Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, setOption, void, $SocketOption*, Object$*), "java.io.IOException"},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DummySecureWebSocketServer$WebServerSocketChannel, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"DummySecureWebSocketServer$WebServerSocketChannel", "DummySecureWebSocketServer", "WebServerSocketChannel", $PUBLIC | $STATIC},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Addressable", "DummySecureWebSocketServer$WebServerSocketChannel", "Addressable", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Closer", "DummySecureWebSocketServer$WebServerSocketChannel", "Closer", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Config", "DummySecureWebSocketServer$WebServerSocketChannel", "Config", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Binder", "DummySecureWebSocketServer$WebServerSocketChannel", "Binder", $STATIC | $INTERFACE | $ABSTRACT},
		{"DummySecureWebSocketServer$WebServerSocketChannel$Accepter", "DummySecureWebSocketServer$WebServerSocketChannel", "Accepter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DummySecureWebSocketServer$WebServerSocketChannel",
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
	$loadClass(DummySecureWebSocketServer$WebServerSocketChannel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DummySecureWebSocketServer$WebServerSocketChannel);
	});
	return class$;
}

$Class* DummySecureWebSocketServer$WebServerSocketChannel::class$ = nullptr;