#include <sun/net/httpserver/ServerImpl$2.h>

#include <java/lang/NoSuchFieldError.h>
#include <sun/net/httpserver/HttpConnection$State.h>
#include <sun/net/httpserver/ServerImpl.h>
#include <jcpp.h>

#undef IDLE
#undef REQUEST
#undef RESPONSE

using $HttpConnection$StateArray = $Array<::sun::net::httpserver::HttpConnection$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $HttpConnection$State = ::sun::net::httpserver::HttpConnection$State;
using $ServerImpl = ::sun::net::httpserver::ServerImpl;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _ServerImpl$2_FieldInfo_[] = {
	{"$SwitchMap$sun$net$httpserver$HttpConnection$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(ServerImpl$2, $SwitchMap$sun$net$httpserver$HttpConnection$State)},
	{}
};

$EnclosingMethodInfo _ServerImpl$2_EnclosingMethodInfo_ = {
	"sun.net.httpserver.ServerImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _ServerImpl$2_InnerClassesInfo_[] = {
	{"sun.net.httpserver.ServerImpl$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{}
};

$ClassInfo _ServerImpl$2_ClassInfo_ = {
	$ACC_SUPER | $SYNTHETIC,
	"sun.net.httpserver.ServerImpl$2",
	"java.lang.Object",
	nullptr,
	_ServerImpl$2_FieldInfo_,
	nullptr,
	nullptr,
	&_ServerImpl$2_EnclosingMethodInfo_,
	_ServerImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.ServerImpl"
};

$Object* allocate$ServerImpl$2($Class* clazz) {
	return $of($alloc(ServerImpl$2));
}

$ints* ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State = nullptr;

void clinit$ServerImpl$2($Class* class$) {
	$assignStatic(ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State, $new($ints, $($HttpConnection$State::values())->length));
	{
		try {
			$nc(ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State)->set($HttpConnection$State::REQUEST->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State)->set($HttpConnection$State::RESPONSE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			$nc(ServerImpl$2::$SwitchMap$sun$net$httpserver$HttpConnection$State)->set($HttpConnection$State::IDLE->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

ServerImpl$2::ServerImpl$2() {
}

$Class* ServerImpl$2::load$($String* name, bool initialize) {
	$loadClass(ServerImpl$2, name, initialize, &_ServerImpl$2_ClassInfo_, clinit$ServerImpl$2, allocate$ServerImpl$2);
	return class$;
}

$Class* ServerImpl$2::class$ = nullptr;

		} // httpserver
	} // net
} // sun