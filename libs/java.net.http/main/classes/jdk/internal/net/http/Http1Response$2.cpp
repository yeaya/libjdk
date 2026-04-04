#include <jdk/internal/net/http/Http1Response$2.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/Http1Response$State.h>
#include <jdk/internal/net/http/Http1Response.h>
#include <jcpp.h>

#undef READING_BODY
#undef READING_HEADERS

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Http1Response$State = ::jdk::internal::net::http::Http1Response$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$ints* Http1Response$2::$SwitchMap$jdk$internal$net$http$Http1Response$State = nullptr;

void Http1Response$2::clinit$($Class* clazz) {
	$assignStatic(Http1Response$2::$SwitchMap$jdk$internal$net$http$Http1Response$State, $new($ints, $($Http1Response$State::values())->length));
	{
		try {
			Http1Response$2::$SwitchMap$jdk$internal$net$http$Http1Response$State->set($Http1Response$State::READING_HEADERS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Response$2::$SwitchMap$jdk$internal$net$http$Http1Response$State->set($Http1Response$State::READING_BODY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Http1Response$2::Http1Response$2() {
}

$Class* Http1Response$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$Http1Response$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Response$2, $SwitchMap$jdk$internal$net$http$Http1Response$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.Http1Response",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Response$2", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.Http1Response$2",
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
		"jdk.internal.net.http.Http1Response"
	};
	$loadClass(Http1Response$2, name, initialize, &classInfo$$, Http1Response$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Response$2);
	});
	return class$;
}

$Class* Http1Response$2::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk