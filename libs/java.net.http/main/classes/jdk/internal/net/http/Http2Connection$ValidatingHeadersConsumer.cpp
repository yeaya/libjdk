#include <jdk/internal/net/http/Http2Connection$ValidatingHeadersConsumer.h>
#include <java/io/IOException.h>
#include <java/io/UncheckedIOException.h>
#include <java/lang/CharSequence.h>
#include <java/util/Set.h>
#include <jdk/internal/net/http/Http2Connection.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef PSEUDO_HEADERS

using $IOException = ::java::io::IOException;
using $UncheckedIOException = ::java::io::UncheckedIOException;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

$Set* Http2Connection$ValidatingHeadersConsumer::PSEUDO_HEADERS = nullptr;

void Http2Connection$ValidatingHeadersConsumer::init$() {
}

void Http2Connection$ValidatingHeadersConsumer::reset() {
	this->pseudoHeadersEnded = false;
}

void Http2Connection$ValidatingHeadersConsumer::onDecoded($CharSequence* name, $CharSequence* value) {
	$useLocalObjectStack();
	$var($String, n, $nc(name)->toString());
	if ($nc(n)->startsWith(":"_s)) {
		if (this->pseudoHeadersEnded) {
			$throw($(newException("Unexpected pseudo-header \'%s\'"_s, n)));
		} else if (!$nc(Http2Connection$ValidatingHeadersConsumer::PSEUDO_HEADERS)->contains(n)) {
			$throw($(newException("Unknown pseudo-header \'%s\'"_s, n)));
		}
	} else {
		this->pseudoHeadersEnded = true;
		if (!$Utils::isValidName(n)) {
			$throw($(newException("Bad header name \'%s\'"_s, n)));
		}
	}
	$var($String, v, $nc(value)->toString());
	if (!$Utils::isValidValue(v)) {
		$throw($(newException("Bad header value \'%s\'"_s, v)));
	}
}

$UncheckedIOException* Http2Connection$ValidatingHeadersConsumer::newException($String* message, $String* header) {
	$useLocalObjectStack();
	return $new($UncheckedIOException, $$new($IOException, $($String::format(message, $$new($ObjectArray, {header})))));
}

void Http2Connection$ValidatingHeadersConsumer::clinit$($Class* clazz) {
	$assignStatic(Http2Connection$ValidatingHeadersConsumer::PSEUDO_HEADERS, $Set::of(":authority"_s, ":method"_s, ":path"_s, ":scheme"_s, ":status"_s));
}

Http2Connection$ValidatingHeadersConsumer::Http2Connection$ValidatingHeadersConsumer() {
}

$Class* Http2Connection$ValidatingHeadersConsumer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"PSEUDO_HEADERS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Http2Connection$ValidatingHeadersConsumer, PSEUDO_HEADERS)},
		{"pseudoHeadersEnded", "Z", nullptr, $PRIVATE, $field(Http2Connection$ValidatingHeadersConsumer, pseudoHeadersEnded)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Http2Connection$ValidatingHeadersConsumer, init$, void)},
		{"newException", "(Ljava/lang/String;Ljava/lang/String;)Ljava/io/UncheckedIOException;", nullptr, $PRIVATE, $method(Http2Connection$ValidatingHeadersConsumer, newException, $UncheckedIOException*, $String*, $String*)},
		{"onDecoded", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(Http2Connection$ValidatingHeadersConsumer, onDecoded, void, $CharSequence*, $CharSequence*), "java.io.UncheckedIOException"},
		{"reset", "()V", nullptr, 0, $virtualMethod(Http2Connection$ValidatingHeadersConsumer, reset, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.Http2Connection$ValidatingHeadersConsumer", "jdk.internal.net.http.Http2Connection", "ValidatingHeadersConsumer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.Http2Connection$ValidatingHeadersConsumer",
		"java.lang.Object",
		"jdk.internal.net.http.hpack.DecodingCallback",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.Http2Connection"
	};
	$loadClass(Http2Connection$ValidatingHeadersConsumer, name, initialize, &classInfo$$, Http2Connection$ValidatingHeadersConsumer::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Http2Connection$ValidatingHeadersConsumer);
	});
	return class$;
}

$Class* Http2Connection$ValidatingHeadersConsumer::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk