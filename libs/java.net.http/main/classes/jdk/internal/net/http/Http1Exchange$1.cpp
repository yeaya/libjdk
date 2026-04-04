#include <jdk/internal/net/http/Http1Exchange$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/Http1Exchange$State.h>
#include <jdk/internal/net/http/Http1Exchange.h>
#include <jcpp.h>

#undef BODY
#undef COMPLETED
#undef COMPLETING
#undef ERROR
#undef HEADERS
#undef INITIAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Http1Exchange$State = ::jdk::internal::net::http::Http1Exchange$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$ints* Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State = nullptr;

void Http1Exchange$1::clinit$($Class* clazz) {
	$assignStatic(Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State, $new($ints, $($Http1Exchange$State::values())->length));
	{
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::HEADERS->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::BODY->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::INITIAL->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::ERROR->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::COMPLETING->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1Exchange$1::$SwitchMap$jdk$internal$net$http$Http1Exchange$State->set($Http1Exchange$State::COMPLETED->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Http1Exchange$1::Http1Exchange$1() {
}

$Class* Http1Exchange$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$Http1Exchange$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Exchange$1, $SwitchMap$jdk$internal$net$http$Http1Exchange$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.Http1Exchange",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Exchange$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.Http1Exchange$1",
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
		"jdk.internal.net.http.Http1Exchange"
	};
	$loadClass(Http1Exchange$1, name, initialize, &classInfo$$, Http1Exchange$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1Exchange$1);
	});
	return class$;
}

$Class* Http1Exchange$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk