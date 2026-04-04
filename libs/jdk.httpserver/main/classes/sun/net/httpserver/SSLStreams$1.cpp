#include <sun/net/httpserver/SSLStreams$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef NEED_TASK
#undef NEED_UNWRAP
#undef NEED_WRAP

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;

namespace sun {
	namespace net {
		namespace httpserver {

$ints* SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus = nullptr;

void SSLStreams$1::clinit$($Class* clazz) {
	$assignStatic(SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus, $new($ints, $($SSLEngineResult$HandshakeStatus::values())->length));
	{
		try {
			SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_TASK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_WRAP->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_UNWRAP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLStreams$1::SSLStreams$1() {
}

$Class* SSLStreams$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams$1, $SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.net.httpserver.SSLStreams",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.net.httpserver.SSLStreams$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"sun.net.httpserver.SSLStreams$1",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		nullptr,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.net.httpserver.SSLStreams"
	};
	$loadClass(SSLStreams$1, name, initialize, &classInfo$$, SSLStreams$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLStreams$1);
	});
	return class$;
}

$Class* SSLStreams$1::class$ = nullptr;

		} // httpserver
	} // net
} // sun