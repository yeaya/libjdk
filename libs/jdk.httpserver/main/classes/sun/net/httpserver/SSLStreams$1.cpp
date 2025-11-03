#include <sun/net/httpserver/SSLStreams$1.h>

#include <java/lang/NoSuchFieldError.h>
#include <javax/net/ssl/SSLEngineResult$HandshakeStatus.h>
#include <sun/net/httpserver/SSLStreams.h>
#include <jcpp.h>

#undef NEED_TASK
#undef NEED_UNWRAP
#undef NEED_WRAP

using $SSLEngineResult$HandshakeStatusArray = $Array<::javax::net::ssl::SSLEngineResult$HandshakeStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $SSLEngineResult$HandshakeStatus = ::javax::net::ssl::SSLEngineResult$HandshakeStatus;
using $SSLStreams = ::sun::net::httpserver::SSLStreams;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _SSLStreams$1_FieldInfo_[] = {
	{"$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SSLStreams$1, $SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)},
	{}
};

$EnclosingMethodInfo _SSLStreams$1_EnclosingMethodInfo_ = {
	"sun.net.httpserver.SSLStreams",
	nullptr,
	nullptr
};

$InnerClassInfo _SSLStreams$1_InnerClassesInfo_[] = {
	{"sun.net.httpserver.SSLStreams$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _SSLStreams$1_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.net.httpserver.SSLStreams$1",
	"java.lang.Object",
	nullptr,
	_SSLStreams$1_FieldInfo_,
	nullptr,
	nullptr,
	&_SSLStreams$1_EnclosingMethodInfo_,
	_SSLStreams$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.SSLStreams"
};

$Object* allocate$SSLStreams$1($Class* clazz) {
	return $of($alloc(SSLStreams$1));
}

$ints* SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus = nullptr;

void clinit$SSLStreams$1($Class* class$) {
	$assignStatic(SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus, $new($ints, $($SSLEngineResult$HandshakeStatus::values())->length));
	{
		try {
			$nc(SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)->set($SSLEngineResult$HandshakeStatus::NEED_TASK->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)->set($SSLEngineResult$HandshakeStatus::NEED_WRAP->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(SSLStreams$1::$SwitchMap$javax$net$ssl$SSLEngineResult$HandshakeStatus)->set($SSLEngineResult$HandshakeStatus::NEED_UNWRAP->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

SSLStreams$1::SSLStreams$1() {
}

$Class* SSLStreams$1::load$($String* name, bool initialize) {
	$loadClass(SSLStreams$1, name, initialize, &_SSLStreams$1_ClassInfo_, clinit$SSLStreams$1, allocate$SSLStreams$1);
	return class$;
}

$Class* SSLStreams$1::class$ = nullptr;

		} // httpserver
	} // net
} // sun