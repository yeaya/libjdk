#include <jdk/net/Sockets$KeepAliveOptions.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets.h>
#include <jcpp.h>

#undef AVAILABLE
#undef TCP_KEEPCOUNT
#undef TCP_KEEPIDLE
#undef TCP_KEEPINTERVAL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;

namespace jdk {
	namespace net {

bool Sockets$KeepAliveOptions::AVAILABLE = false;

void Sockets$KeepAliveOptions::init$() {
}

void Sockets$KeepAliveOptions::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($ExtendedSocketOptions);
		Sockets$KeepAliveOptions::AVAILABLE = $nc(s)->containsAll($($Set::of($ExtendedSocketOptions::TCP_KEEPCOUNT, $ExtendedSocketOptions::TCP_KEEPIDLE, $ExtendedSocketOptions::TCP_KEEPINTERVAL)));
	}
}

Sockets$KeepAliveOptions::Sockets$KeepAliveOptions() {
}

$Class* Sockets$KeepAliveOptions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"AVAILABLE", "Z", nullptr, $STATIC | $FINAL, $staticField(Sockets$KeepAliveOptions, AVAILABLE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sockets$KeepAliveOptions, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.Sockets$KeepAliveOptions", "jdk.net.Sockets", "KeepAliveOptions", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.Sockets$KeepAliveOptions",
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
		"jdk.net.Sockets"
	};
	$loadClass(Sockets$KeepAliveOptions, name, initialize, &classInfo$$, Sockets$KeepAliveOptions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Sockets$KeepAliveOptions);
	});
	return class$;
}

$Class* Sockets$KeepAliveOptions::class$ = nullptr;

	} // net
} // jdk