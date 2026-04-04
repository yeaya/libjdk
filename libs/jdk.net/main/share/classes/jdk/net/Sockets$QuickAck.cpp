#include <jdk/net/Sockets$QuickAck.h>
#include <java/net/Socket.h>
#include <java/net/SocketOption.h>
#include <java/util/Set.h>
#include <jdk/net/ExtendedSocketOptions.h>
#include <jdk/net/Sockets.h>
#include <jcpp.h>

#undef TCP_QUICKACK

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Socket = ::java::net::Socket;
using $Set = ::java::util::Set;
using $ExtendedSocketOptions = ::jdk::net::ExtendedSocketOptions;

namespace jdk {
	namespace net {

bool Sockets$QuickAck::available = false;

void Sockets$QuickAck::init$() {
}

void Sockets$QuickAck::clinit$($Class* clazz) {
	$useLocalObjectStack();
	{
		$var($Set, s, $$new($Socket)->supportedOptions());
		$init($ExtendedSocketOptions);
		Sockets$QuickAck::available = $nc(s)->contains($ExtendedSocketOptions::TCP_QUICKACK);
	}
}

Sockets$QuickAck::Sockets$QuickAck() {
}

$Class* Sockets$QuickAck::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"available", "Z", nullptr, $STATIC | $FINAL, $staticField(Sockets$QuickAck, available)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Sockets$QuickAck, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.net.Sockets$QuickAck", "jdk.net.Sockets", "QuickAck", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.net.Sockets$QuickAck",
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
	$loadClass(Sockets$QuickAck, name, initialize, &classInfo$$, Sockets$QuickAck::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Sockets$QuickAck);
	});
	return class$;
}

$Class* Sockets$QuickAck::class$ = nullptr;

	} // net
} // jdk