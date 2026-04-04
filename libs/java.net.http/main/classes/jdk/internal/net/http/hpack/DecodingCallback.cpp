#include <jdk/internal/net/http/hpack/DecodingCallback.h>
#include <java/lang/CharSequence.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace hpack {

void DecodingCallback::onDecoded($CharSequence* name, $CharSequence* value, bool sensitive) {
	onDecoded(name, value);
}

void DecodingCallback::onIndexed(int32_t index, $CharSequence* name, $CharSequence* value) {
	onDecoded(name, value, false);
}

void DecodingCallback::onLiteral(int32_t index, $CharSequence* name, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, false);
}

void DecodingCallback::onLiteral($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, false);
}

void DecodingCallback::onLiteralNeverIndexed(int32_t index, $CharSequence* name, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, true);
}

void DecodingCallback::onLiteralNeverIndexed($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, true);
}

void DecodingCallback::onLiteralWithIndexing(int32_t index, $CharSequence* name, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, false);
}

void DecodingCallback::onLiteralWithIndexing($CharSequence* name, bool nameHuffman, $CharSequence* value, bool valueHuffman) {
	onDecoded(name, value, false);
}

void DecodingCallback::onSizeUpdate(int32_t capacity) {
}

$Class* DecodingCallback::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"onDecoded", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(DecodingCallback, onDecoded, void, $CharSequence*, $CharSequence*)},
		{"onDecoded", "(Ljava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onDecoded, void, $CharSequence*, $CharSequence*, bool)},
		{"onIndexed", "(ILjava/lang/CharSequence;Ljava/lang/CharSequence;)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onIndexed, void, int32_t, $CharSequence*, $CharSequence*)},
		{"onLiteral", "(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteral, void, int32_t, $CharSequence*, $CharSequence*, bool)},
		{"onLiteral", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteral, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"onLiteralNeverIndexed", "(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteralNeverIndexed, void, int32_t, $CharSequence*, $CharSequence*, bool)},
		{"onLiteralNeverIndexed", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteralNeverIndexed, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"onLiteralWithIndexing", "(ILjava/lang/CharSequence;Ljava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteralWithIndexing, void, int32_t, $CharSequence*, $CharSequence*, bool)},
		{"onLiteralWithIndexing", "(Ljava/lang/CharSequence;ZLjava/lang/CharSequence;Z)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onLiteralWithIndexing, void, $CharSequence*, bool, $CharSequence*, bool)},
		{"onSizeUpdate", "(I)V", nullptr, $PUBLIC, $virtualMethod(DecodingCallback, onSizeUpdate, void, int32_t)},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/lang/FunctionalInterface;", nullptr},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"jdk.internal.net.http.hpack.DecodingCallback",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		nullptr,
		annotations$$
	};
	$loadClass(DecodingCallback, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DecodingCallback);
	});
	return class$;
}

$Class* DecodingCallback::class$ = nullptr;

				} // hpack
			} // http
		} // net
	} // internal
} // jdk