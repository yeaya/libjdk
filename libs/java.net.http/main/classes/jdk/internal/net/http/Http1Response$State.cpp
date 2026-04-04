#include <jdk/internal/net/http/Http1Response$State.h>
#include <java/lang/Enum.h>
#include <jdk/internal/net/http/Http1Response.h>
#include <jcpp.h>

#undef DONE
#undef INITIAL
#undef READING_BODY
#undef READING_HEADERS

using $Http1Response$StateArray = $Array<::jdk::internal::net::http::Http1Response$State>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

Http1Response$State* Http1Response$State::INITIAL = nullptr;
Http1Response$State* Http1Response$State::READING_HEADERS = nullptr;
Http1Response$State* Http1Response$State::READING_BODY = nullptr;
Http1Response$State* Http1Response$State::DONE = nullptr;
$Http1Response$StateArray* Http1Response$State::$VALUES = nullptr;

$Http1Response$StateArray* Http1Response$State::$values() {
	$init(Http1Response$State);
	return $new($Http1Response$StateArray, {
		Http1Response$State::INITIAL,
		Http1Response$State::READING_HEADERS,
		Http1Response$State::READING_BODY,
		Http1Response$State::DONE
	});
}

$Http1Response$StateArray* Http1Response$State::values() {
	$init(Http1Response$State);
	return $cast($Http1Response$StateArray, Http1Response$State::$VALUES->clone());
}

Http1Response$State* Http1Response$State::valueOf($String* name) {
	$init(Http1Response$State);
	return $cast(Http1Response$State, $Enum::valueOf(Http1Response$State::class$, name));
}

void Http1Response$State::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void Http1Response$State::clinit$($Class* clazz) {
	$assignStatic(Http1Response$State::INITIAL, $new(Http1Response$State, "INITIAL"_s, 0));
	$assignStatic(Http1Response$State::READING_HEADERS, $new(Http1Response$State, "READING_HEADERS"_s, 1));
	$assignStatic(Http1Response$State::READING_BODY, $new(Http1Response$State, "READING_BODY"_s, 2));
	$assignStatic(Http1Response$State::DONE, $new(Http1Response$State, "DONE"_s, 3));
	$assignStatic(Http1Response$State::$VALUES, Http1Response$State::$values());
}

Http1Response$State::Http1Response$State() {
}

$Class* Http1Response$State::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INITIAL", "Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1Response$State, INITIAL)},
		{"READING_HEADERS", "Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1Response$State, READING_HEADERS)},
		{"READING_BODY", "Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1Response$State, READING_BODY)},
		{"DONE", "Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(Http1Response$State, DONE)},
		{"$VALUES", "[Ljdk/internal/net/http/Http1Response$State;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(Http1Response$State, $VALUES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"$values", "()[Ljdk/internal/net/http/Http1Response$State;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Http1Response$State, $values, $Http1Response$StateArray*)},
		{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(Http1Response$State, init$, void, $String*, int32_t)},
		{"valueOf", "(Ljava/lang/String;)Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(Http1Response$State, valueOf, Http1Response$State*, $String*)},
		{"values", "()[Ljdk/internal/net/http/Http1Response$State;", nullptr, $PUBLIC | $STATIC, $staticMethod(Http1Response$State, values, $Http1Response$StateArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http1Response$State", "jdk.internal.net.http.Http1Response", "State", $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER | $ENUM,
		"jdk.internal.net.http.Http1Response$State",
		"java.lang.Enum",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Enum<Ljdk/internal/net/http/Http1Response$State;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http1Response"
	};
	$loadClass(Http1Response$State, name, initialize, &classInfo$$, Http1Response$State::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Http1Response$State));
	});
	return class$;
}

$Class* Http1Response$State::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk