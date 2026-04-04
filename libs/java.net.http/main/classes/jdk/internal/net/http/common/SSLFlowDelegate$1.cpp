#include <jdk/internal/net/http/common/SSLFlowDelegate$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <javax/net/ssl/SSLEngineResult$Status.h>
#include <jdk/internal/net/http/common/SSLFlowDelegate.h>
#include <jcpp.h>

#undef BUFFER_OVERFLOW
#undef BUFFER_UNDERFLOW
#undef CLOSED
#undef NEED_TASK
#undef NEED_UNWRAP
#undef NEED_UNWRAP_AGAIN
#undef NEED_WRAP
#undef OK

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLEngineResult$Status = ::javax::net::ssl::SSLEngineResult$Status;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

$ints* SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus = nullptr;
$ints* SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status = nullptr;

void SSLFlowDelegate$1::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus, $new($ints, $($SSLEngineResult$HandshakeStatus::values())->length));
	{
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_TASK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_WRAP->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_UNWRAP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus->set($SSLEngineResult$HandshakeStatus::NEED_UNWRAP_AGAIN->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
	$assignStatic(SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status, $new($ints, $($SSLEngineResult$Status::values())->length));
	{
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status->set($SSLEngineResult$Status::BUFFER_OVERFLOW->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status->set($SSLEngineResult$Status::CLOSED->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status->set($SSLEngineResult$Status::BUFFER_UNDERFLOW->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			SSLFlowDelegate$1::$SwitchMap$javax$net$ssl$SSLEngineResult$Status->set($SSLEngineResult$Status::OK->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLFlowDelegate$1::SSLFlowDelegate$1() {
}

$Class* SSLFlowDelegate$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLFlowDelegate$1, $SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)},
		{"$SwitchMap$javax$net$ssl$SSLEngineResult$Status", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLFlowDelegate$1, $SwitchMap$javax$net$ssl$SSLEngineResult$Status)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.common.SSLFlowDelegate",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.SSLFlowDelegate$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.common.SSLFlowDelegate$1",
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
		"jdk.internal.net.http.common.SSLFlowDelegate"
	};
	$loadClass(SSLFlowDelegate$1, name, initialize, &classInfo$$, SSLFlowDelegate$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SSLFlowDelegate$1);
	});
	return class$;
}

$Class* SSLFlowDelegate$1::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk