#include <jdk/internal/net/http/Http1HeaderParser$1.h>
#include <java/lang/NoSuchFieldError.h>
#include <jdk/internal/net/http/Http1HeaderParser$State.h>
#include <jdk/internal/net/http/Http1HeaderParser.h>
#include <jcpp.h>

#undef FINISHED
#undef HEADER
#undef HEADER_FOUND_CR
#undef HEADER_FOUND_CR_LF
#undef HEADER_FOUND_CR_LF_CR
#undef HEADER_FOUND_LF
#undef INITIAL
#undef STATUS_LINE
#undef STATUS_LINE_END
#undef STATUS_LINE_END_CR
#undef STATUS_LINE_END_LF
#undef STATUS_LINE_FOUND_CR
#undef STATUS_LINE_FOUND_LF

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $NoSuchFieldError = ::java::lang::NoSuchFieldError;
using $Http1HeaderParser$State = ::jdk::internal::net::http::Http1HeaderParser$State;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$ints* Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State = nullptr;

void Http1HeaderParser$1::clinit$($Class* clazz) {
	$assignStatic(Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State, $new($ints, $($Http1HeaderParser$State::values())->length));
	{
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::INITIAL->ordinal(), 1);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE->ordinal(), 2);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE_FOUND_CR->ordinal(), 3);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE_FOUND_LF->ordinal(), 4);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE_END->ordinal(), 5);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE_END_CR->ordinal(), 6);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::STATUS_LINE_END_LF->ordinal(), 7);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::HEADER->ordinal(), 8);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::HEADER_FOUND_CR->ordinal(), 9);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::HEADER_FOUND_LF->ordinal(), 10);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::HEADER_FOUND_CR_LF->ordinal(), 11);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::HEADER_FOUND_CR_LF_CR->ordinal(), 12);
		} catch ($NoSuchFieldError& ex) {
		}
		try {
			Http1HeaderParser$1::$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State->set($Http1HeaderParser$State::FINISHED->ordinal(), 13);
		} catch ($NoSuchFieldError& ex) {
		}
	}
}

Http1HeaderParser$1::Http1HeaderParser$1() {
}

$Class* Http1HeaderParser$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$SwitchMap$jdk$internal$net$http$Http1HeaderParser$State", "[I", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1HeaderParser$1, $SwitchMap$jdk$internal$net$http$Http1HeaderParser$State)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"jdk.internal.net.http.Http1HeaderParser",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1HeaderParser$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $SYNTHETIC,
		"jdk.internal.net.http.Http1HeaderParser$1",
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
		"jdk.internal.net.http.Http1HeaderParser"
	};
	$loadClass(Http1HeaderParser$1, name, initialize, &classInfo$$, Http1HeaderParser$1::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http1HeaderParser$1);
	});
	return class$;
}

$Class* Http1HeaderParser$1::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk