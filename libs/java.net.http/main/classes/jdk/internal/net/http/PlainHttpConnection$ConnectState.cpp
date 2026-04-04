#include <jdk/internal/net/http/PlainHttpConnection$ConnectState.h>
#include <java/lang/Enum.h>
#include <jdk/internal/net/http/PlainHttpConnection.h>
#include <jcpp.h>

#undef RETRY
#undef SUCCESS

using $PlainHttpConnection$ConnectStateArray = $Array<::jdk::internal::net::http::PlainHttpConnection$ConnectState>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

PlainHttpConnection$ConnectState* PlainHttpConnection$ConnectState::SUCCESS = nullptr;
PlainHttpConnection$ConnectState* PlainHttpConnection$ConnectState::RETRY = nullptr;
$PlainHttpConnection$ConnectStateArray* PlainHttpConnection$ConnectState::$VALUES = nullptr;

$PlainHttpConnection$ConnectStateArray* PlainHttpConnection$ConnectState::$values() {
	$init(PlainHttpConnection$ConnectState);
	return $new($PlainHttpConnection$ConnectStateArray, {
		PlainHttpConnection$ConnectState::SUCCESS,
		PlainHttpConnection$ConnectState::RETRY
	});
}

$PlainHttpConnection$ConnectStateArray* PlainHttpConnection$ConnectState::values() {
	$init(PlainHttpConnection$ConnectState);
	return $cast($PlainHttpConnection$ConnectStateArray, PlainHttpConnection$ConnectState::$VALUES->clone());
}

PlainHttpConnection$ConnectState* PlainHttpConnection$ConnectState::valueOf($String* name) {
	$init(PlainHttpConnection$ConnectState);
	return $cast(PlainHttpConnection$ConnectState, $Enum::valueOf(PlainHttpConnection$ConnectState::class$, name));
}

void PlainHttpConnection$ConnectState::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void PlainHttpConnection$ConnectState::clinit$($Class* clazz) {
	$assignStatic(PlainHttpConnection$ConnectState::SUCCESS, $new(PlainHttpConnection$ConnectState, "SUCCESS"_s, 0));
	$assignStatic(PlainHttpConnection$ConnectState::RETRY, $new(PlainHttpConnection$ConnectState, "RETRY"_s, 1));
	$assignStatic(PlainHttpConnection$ConnectState::$VALUES, PlainHttpConnection$ConnectState::$values());
}

PlainHttpConnection$ConnectState::PlainHttpConnection$ConnectState() {
}

$Class* PlainHttpConnection$ConnectState::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SUCCESS", "Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainHttpConnection$ConnectState, SUCCESS)},
		{"RETRY", "Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(PlainHttpConnection$ConnectState, RETRY)},
		{"$VALUES", "[Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(PlainHttpConnection$ConnectState, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(PlainHttpConnection$ConnectState, $values, $PlainHttpConnection$ConnectStateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(PlainHttpConnection$ConnectState, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlainHttpConnection$ConnectState, valueOf, PlainHttpConnection$ConnectState*, $String*)},
		{"values", "()[Ljdk/internal/net/http/PlainHttpConnection$ConnectState;", nullptr, $PUBLIC | $STATIC, $staticMethod(PlainHttpConnection$ConnectState, values, $PlainHttpConnection$ConnectStateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PlainHttpConnection$ConnectState", "jdk.internal.net.http.PlainHttpConnection", "ConnectState", $PRIVATE | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.net.http.PlainHttpConnection$ConnectState",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/net/http/PlainHttpConnection$ConnectState;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.PlainHttpConnection"
	};
	$loadClass(PlainHttpConnection$ConnectState, name, initialize, &classInfo$$, PlainHttpConnection$ConnectState::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PlainHttpConnection$ConnectState));
	});
	return class$;
}

$Class* PlainHttpConnection$ConnectState::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk