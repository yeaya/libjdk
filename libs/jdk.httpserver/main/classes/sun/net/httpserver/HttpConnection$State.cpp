#include <sun/net/httpserver/HttpConnection$State.h>

#include <java/lang/Enum.h>
#include <sun/net/httpserver/HttpConnection.h>
#include <jcpp.h>

#undef IDLE
#undef REQUEST
#undef RESPONSE

using $HttpConnection$StateArray = $Array<::sun::net::httpserver::HttpConnection$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpConnection = ::sun::net::httpserver::HttpConnection;

namespace sun {
	namespace net {
		namespace httpserver {

$FieldInfo _HttpConnection$State_FieldInfo_[] = {
	{"IDLE", "Lsun/net/httpserver/HttpConnection$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpConnection$State, IDLE)},
	{"REQUEST", "Lsun/net/httpserver/HttpConnection$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpConnection$State, REQUEST)},
	{"RESPONSE", "Lsun/net/httpserver/HttpConnection$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(HttpConnection$State, RESPONSE)},
	{"$VALUES", "[Lsun/net/httpserver/HttpConnection$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(HttpConnection$State, $VALUES)},
	{}
};

$MethodInfo _HttpConnection$State_MethodInfo_[] = {
	{"$values", "()[Lsun/net/httpserver/HttpConnection$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$HttpConnection$StateArray*(*)()>(&HttpConnection$State::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(HttpConnection$State::*)($String*,int32_t)>(&HttpConnection$State::init$))},
	{"valueOf", "(Ljava/lang/String;)Lsun/net/httpserver/HttpConnection$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<HttpConnection$State*(*)($String*)>(&HttpConnection$State::valueOf))},
	{"values", "()[Lsun/net/httpserver/HttpConnection$State;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$HttpConnection$StateArray*(*)()>(&HttpConnection$State::values))},
	{}
};

$InnerClassInfo _HttpConnection$State_InnerClassesInfo_[] = {
	{"sun.net.httpserver.HttpConnection$State", "sun.net.httpserver.HttpConnection", "State", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _HttpConnection$State_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"sun.net.httpserver.HttpConnection$State",
	"java.lang.Enum",
	nullptr,
	_HttpConnection$State_FieldInfo_,
	_HttpConnection$State_MethodInfo_,
	"Ljava/lang/Enum<Lsun/net/httpserver/HttpConnection$State;>;",
	nullptr,
	_HttpConnection$State_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.net.httpserver.HttpConnection"
};

$Object* allocate$HttpConnection$State($Class* clazz) {
	return $of($alloc(HttpConnection$State));
}

HttpConnection$State* HttpConnection$State::IDLE = nullptr;
HttpConnection$State* HttpConnection$State::REQUEST = nullptr;
HttpConnection$State* HttpConnection$State::RESPONSE = nullptr;
$HttpConnection$StateArray* HttpConnection$State::$VALUES = nullptr;

$HttpConnection$StateArray* HttpConnection$State::$values() {
	$init(HttpConnection$State);
	return $new($HttpConnection$StateArray, {
		HttpConnection$State::IDLE,
		HttpConnection$State::REQUEST,
		HttpConnection$State::RESPONSE
	});
}

$HttpConnection$StateArray* HttpConnection$State::values() {
	$init(HttpConnection$State);
	return $cast($HttpConnection$StateArray, HttpConnection$State::$VALUES->clone());
}

HttpConnection$State* HttpConnection$State::valueOf($String* name) {
	$init(HttpConnection$State);
	return $cast(HttpConnection$State, $Enum::valueOf(HttpConnection$State::class$, name));
}

void HttpConnection$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$HttpConnection$State($Class* class$) {
	$assignStatic(HttpConnection$State::IDLE, $new(HttpConnection$State, "IDLE"_s, 0));
	$assignStatic(HttpConnection$State::REQUEST, $new(HttpConnection$State, "REQUEST"_s, 1));
	$assignStatic(HttpConnection$State::RESPONSE, $new(HttpConnection$State, "RESPONSE"_s, 2));
	$assignStatic(HttpConnection$State::$VALUES, HttpConnection$State::$values());
}

HttpConnection$State::HttpConnection$State() {
}

$Class* HttpConnection$State::load$($String* name, bool initialize) {
	$loadClass(HttpConnection$State, name, initialize, &_HttpConnection$State_ClassInfo_, clinit$HttpConnection$State, allocate$HttpConnection$State);
	return class$;
}

$Class* HttpConnection$State::class$ = nullptr;

		} // httpserver
	} // net
} // sun