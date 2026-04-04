#include <jdk/net/Sockets.h>
#include <java/net/DatagramSocket.h>
#include <java/net/MulticastSocket.h>
#include <java/net/ServerSocket.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/net/StandardSocketOptions.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions$PlatformSocketOptions.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets$KeepAliveOptions.h>
#include <jdk/net/Sockets$QuickAck.h>
#include <jcpp.h>

#undef AVAILABLE
#undef IP_MULTICAST_IF
#undef IP_MULTICAST_LOOP
#undef IP_MULTICAST_TTL
#undef IP_TOS
#undef SO_INCOMING_NAPI_ID
#undef SO_KEEPALIVE
#undef SO_LINGER
#undef SO_RCVBUF
#undef SO_REUSEADDR
#undef SO_REUSEPORT
#undef SO_SNDBUF
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL
#undef TCP_NODELAY
#undef TCP_QUICKACK

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $DatagramSocket = ::java::net::DatagramSocket;
using $MulticastSocket = ::java::net::MulticastSocket;
using $ServerSocket = ::java::net::ServerSocket;
using $Socket = ::java::net::Socket;
using $SocketOption = ::java::net::SocketOption;
using $StandardSocketOptions = ::java::net::StandardSocketOptions;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;
using $ExtendedSocketOptions$PlatformSocketOptions = ::jdk::net::ExtendedSocketOptions$PlatformSocketOptions;
using $Sockets$KeepAliveOptions = ::jdk::net::Sockets$KeepAliveOptions;
using $Sockets$QuickAck = ::jdk::net::Sockets$QuickAck;

namespace jdk {
	namespace net {

$Map* Sockets::options = nullptr;
$volatile(bool) Sockets::checkedReusePort = false;
$volatile(bool) Sockets::isReusePortAvailable$ = false;

void Sockets::init$() {
}

void Sockets::setOption($Socket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($Socket* s, $SocketOption* name) {
	$init(Sockets);
	return $nc(s)->getOption(name);
}

void Sockets::setOption($ServerSocket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($ServerSocket* s, $SocketOption* name) {
	$init(Sockets);
	return $nc(s)->getOption(name);
}

void Sockets::setOption($DatagramSocket* s, $SocketOption* name, Object$* value) {
	$init(Sockets);
	$nc(s)->setOption(name, value);
}

$Object* Sockets::getOption($DatagramSocket* s, $SocketOption* name) {
	$init(Sockets);
	return $nc(s)->getOption(name);
}

$Set* Sockets::supportedOptions($Class* socketType) {
	$init(Sockets);
	$var($Set, set, $cast($Set, $nc(Sockets::options)->get(socketType)));
	if (set == nullptr) {
		$throwNew($IllegalArgumentException, "unknown socket type"_s);
	}
	return set;
}

void Sockets::checkValueType(Object$* value, $Class* type) {
	$init(Sockets);
	$useLocalObjectStack();
	if (!$nc(type)->isAssignableFrom($nc($of(value))->getClass())) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append("Found: "_s);
		var$0->append($($of(value)->getClass()->toString()));
		var$0->append(" Expected: "_s);
		var$0->append($(type->toString()));
		$var($String, s, $str(var$0));
		$throwNew($IllegalArgumentException, s);
	}
}

bool Sockets::isReusePortAvailable() {
	$init(Sockets);
	$useLocalObjectStack();
	if (!Sockets::checkedReusePort) {
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($StandardSocketOptions);
		Sockets::isReusePortAvailable$ = $nc(s)->contains($StandardSocketOptions::SO_REUSEPORT);
		Sockets::checkedReusePort = true;
	}
	return Sockets::isReusePortAvailable$;
}

$Map* Sockets::optionSets() {
	$init(Sockets);
	$useLocalObjectStack();
	$var($Map, options, $new($HashMap));
	bool incomingNapiIdsupported = $$nc($ExtendedSocketOptions$PlatformSocketOptions::get())->incomingNapiIdSupported();
	bool reuseportsupported = isReusePortAvailable();
	$var($Set, set, $new($HashSet));
	$init($StandardSocketOptions);
	set->add($StandardSocketOptions::SO_KEEPALIVE);
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::SO_LINGER);
	set->add($StandardSocketOptions::IP_TOS);
	set->add($StandardSocketOptions::TCP_NODELAY);
	$init($Sockets$QuickAck);
	if ($Sockets$QuickAck::available) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::TCP_QUICKACK);
	}
	$init($Sockets$KeepAliveOptions);
	if ($Sockets$KeepAliveOptions::AVAILABLE) {
		$init($ExtendedSocketOptions);
		set->addAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($Socket);
	options->put($Socket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	if ($Sockets$QuickAck::available) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::TCP_QUICKACK);
	}
	if ($Sockets$KeepAliveOptions::AVAILABLE) {
		$init($ExtendedSocketOptions);
		set->addAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
	set->add($StandardSocketOptions::IP_TOS);
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($ServerSocket);
	options->put($ServerSocket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::IP_TOS);
	if (incomingNapiIdsupported) {
		$init($ExtendedSocketOptions);
		set->add($ExtendedSocketOptions::SO_INCOMING_NAPI_ID);
	}
	$assign(set, $Collections::unmodifiableSet(set));
	$load($DatagramSocket);
	options->put($DatagramSocket::class$, set);
	$assign(set, $new($HashSet));
	set->add($StandardSocketOptions::SO_SNDBUF);
	set->add($StandardSocketOptions::SO_RCVBUF);
	set->add($StandardSocketOptions::SO_REUSEADDR);
	if (reuseportsupported) {
		set->add($StandardSocketOptions::SO_REUSEPORT);
	}
	set->add($StandardSocketOptions::IP_TOS);
	set->add($StandardSocketOptions::IP_MULTICAST_IF);
	set->add($StandardSocketOptions::IP_MULTICAST_TTL);
	set->add($StandardSocketOptions::IP_MULTICAST_LOOP);
	$assign(set, $Collections::unmodifiableSet(set));
	$load($MulticastSocket);
	options->put($MulticastSocket::class$, set);
	return $Collections::unmodifiableMap(options);
}

void Sockets::clinit$($Class* clazz) {
	$assignStatic(Sockets::options, Sockets::optionSets());
}

Sockets::Sockets() {
}

$Class* Sockets::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"options", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/net/SocketOption<*>;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Sockets, options)},
		{"checkedReusePort", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Sockets, checkedReusePort)},
		{"isReusePortAvailable", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Sockets, isReusePortAvailable$)},
		{}
	};
	$NamedAttribute getOptionmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute getOptionmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", getOptionmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute getOptionmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute getOptionmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", getOptionmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute getOptionmethodAnnotations$$$2$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute getOptionmethodAnnotations$$$2[] = {
		{"Ljava/lang/Deprecated;", getOptionmethodAnnotations$$$2$namedAttribute},
		{}
	};
	$NamedAttribute setOptionmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute setOptionmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", setOptionmethodAnnotations$$$namedAttribute},
		{}
	};
	$NamedAttribute setOptionmethodAnnotations$$$1$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute setOptionmethodAnnotations$$$1[] = {
		{"Ljava/lang/Deprecated;", setOptionmethodAnnotations$$$1$namedAttribute},
		{}
	};
	$NamedAttribute setOptionmethodAnnotations$$$2$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute setOptionmethodAnnotations$$$2[] = {
		{"Ljava/lang/Deprecated;", setOptionmethodAnnotations$$$2$namedAttribute},
		{}
	};
	$NamedAttribute supportedOptionsmethodAnnotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute supportedOptionsmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", supportedOptionsmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Sockets, init$, void)},
		{"checkValueType", "(Ljava/lang/Object;Ljava/lang/Class;)V", "(Ljava/lang/Object;Ljava/lang/Class<*>;)V", $PRIVATE | $STATIC, $staticMethod(Sockets, checkValueType, void, Object$*, $Class*)},
		{"getOption", "(Ljava/net/Socket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/Socket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, getOption, $Object*, $Socket*, $SocketOption*), "java.io.IOException", nullptr, getOptionmethodAnnotations$$},
		{"getOption", "(Ljava/net/ServerSocket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/ServerSocket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, getOption, $Object*, $ServerSocket*, $SocketOption*), "java.io.IOException", nullptr, getOptionmethodAnnotations$$$1},
		{"getOption", "(Ljava/net/DatagramSocket;Ljava/net/SocketOption;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/net/DatagramSocket;Ljava/net/SocketOption<TT;>;)TT;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, getOption, $Object*, $DatagramSocket*, $SocketOption*), "java.io.IOException", nullptr, getOptionmethodAnnotations$$$2},
		{"isReusePortAvailable", "()Z", nullptr, $STATIC, $staticMethod(Sockets, isReusePortAvailable, bool)},
		{"optionSets", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Class<*>;Ljava/util/Set<Ljava/net/SocketOption<*>;>;>;", $PRIVATE | $STATIC, $staticMethod(Sockets, optionSets, $Map*)},
		{"setOption", "(Ljava/net/Socket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/Socket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, setOption, void, $Socket*, $SocketOption*, Object$*), "java.io.IOException", nullptr, setOptionmethodAnnotations$$},
		{"setOption", "(Ljava/net/ServerSocket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/ServerSocket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, setOption, void, $ServerSocket*, $SocketOption*, Object$*), "java.io.IOException", nullptr, setOptionmethodAnnotations$$$1},
		{"setOption", "(Ljava/net/DatagramSocket;Ljava/net/SocketOption;Ljava/lang/Object;)V", "<T:Ljava/lang/Object;>(Ljava/net/DatagramSocket;Ljava/net/SocketOption<TT;>;TT;)V", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, setOption, void, $DatagramSocket*, $SocketOption*, Object$*), "java.io.IOException", nullptr, setOptionmethodAnnotations$$$2},
		{"supportedOptions", "(Ljava/lang/Class;)Ljava/util/Set;", "(Ljava/lang/Class<*>;)Ljava/util/Set<Ljava/net/SocketOption<*>;>;", $PUBLIC | $STATIC | $DEPRECATED, $staticMethod(Sockets, supportedOptions, $Set*, $Class*), nullptr, nullptr, supportedOptionsmethodAnnotations$$},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.Sockets$KeepAliveOptions", "jdk.net.Sockets", "KeepAliveOptions", $STATIC},
		{"jdk.net.Sockets$QuickAck", "jdk.net.Sockets", "QuickAck", $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/Deprecated;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"jdk.net.Sockets",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"jdk.net.Sockets$KeepAliveOptions,jdk.net.Sockets$QuickAck"
	};
	$loadClass(Sockets, name, initialize, &classInfo$$, Sockets::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Sockets);
	});
	return class$;
}

$Class* Sockets::class$ = nullptr;

	} // net
} // jdk