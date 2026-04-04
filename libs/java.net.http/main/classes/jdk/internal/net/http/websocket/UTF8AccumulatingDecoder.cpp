#include <jdk/internal/net/http/websocket/UTF8AccumulatingDecoder.h>
#include <java/lang/AssertionError.h>
#include <java/lang/InternalError.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CoderResult.h>
#include <java/nio/charset/CodingErrorAction.h>
#include <java/nio/charset/StandardCharsets.h>
#include <jdk/internal/net/http/common/Log.h>
#include <jdk/internal/net/http/common/Utils.h>
#include <jcpp.h>

#undef EMPTY_BYTEBUFFER
#undef REPORT
#undef UTF_8

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $CoderResult = ::java::nio::charset::CoderResult;
using $CodingErrorAction = ::java::nio::charset::CodingErrorAction;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Log = ::jdk::internal::net::http::common::Log;
using $Utils = ::jdk::internal::net::http::common::Utils;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace websocket {

bool UTF8AccumulatingDecoder::$assertionsDisabled = false;

void UTF8AccumulatingDecoder::init$() {
	$init($StandardCharsets);
	$set(this, decoder, $nc($StandardCharsets::UTF_8)->newDecoder());
	{
		$init($CodingErrorAction);
		$nc(this->decoder)->onMalformedInput($CodingErrorAction::REPORT);
		this->decoder->onUnmappableCharacter($CodingErrorAction::REPORT);
	}
	$init($Utils);
	$set(this, leftovers, $Utils::EMPTY_BYTEBUFFER);
}

$CharBuffer* UTF8AccumulatingDecoder::decode($ByteBuffer* in, bool endOfInput) {
	$useLocalObjectStack();
	$var($ByteBuffer, b, nullptr);
	int32_t rem = $nc(this->leftovers)->remaining();
	if (rem != 0) {
		$assign(b, $ByteBuffer::allocate(rem + $nc(in)->remaining()));
		$$nc($$nc($nc(b)->put(this->leftovers))->put(in))->flip();
	} else {
		$assign(b, in);
	}
	$var($CharBuffer, out, $CharBuffer::allocate($nc(b)->remaining()));
	$var($CoderResult, r, $nc(this->decoder)->decode(b, out, endOfInput));
	if ($nc(r)->isError()) {
		r->throwException();
	}
	if (b->hasRemaining()) {
		$set(this, leftovers, $$nc($$nc($ByteBuffer::allocate(b->remaining()))->put(b))->flip());
	} else {
		$init($Utils);
		$set(this, leftovers, $Utils::EMPTY_BYTEBUFFER);
	}
	if (!($nc(this->leftovers)->remaining() < 4)) {
		$Log::logError("The size of decoding leftovers is greater than expected: {0}"_s, $$new($ObjectArray, {$($Integer::valueOf($nc(this->leftovers)->remaining()))}));
	}
	b->position(b->limit());
	if (!UTF8AccumulatingDecoder::$assertionsDisabled && ! !(endOfInput && $nc(this->leftovers)->hasRemaining())) {
		$throwNew($AssertionError, $$of($str({$$str(endOfInput), ", "_s, this->leftovers})));
	}
	if (endOfInput) {
		$assign(r, this->decoder->flush(out));
		this->decoder->reset();
		if ($nc(r)->isOverflow()) {
			$throwNew($InternalError, "Not yet implemented"_s);
		}
	}
	return $nc(out)->flip();
}

void UTF8AccumulatingDecoder::clinit$($Class* clazz) {
	UTF8AccumulatingDecoder::$assertionsDisabled = !UTF8AccumulatingDecoder::class$->desiredAssertionStatus();
}

UTF8AccumulatingDecoder::UTF8AccumulatingDecoder() {
}

$Class* UTF8AccumulatingDecoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(UTF8AccumulatingDecoder, $assertionsDisabled)},
		{"decoder", "Ljava/nio/charset/CharsetDecoder;", nullptr, $PRIVATE | $FINAL, $field(UTF8AccumulatingDecoder, decoder)},
		{"leftovers", "Ljava/nio/ByteBuffer;", nullptr, $PRIVATE, $field(UTF8AccumulatingDecoder, leftovers)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(UTF8AccumulatingDecoder, init$, void)},
		{"decode", "(Ljava/nio/ByteBuffer;Z)Ljava/nio/CharBuffer;", nullptr, 0, $method(UTF8AccumulatingDecoder, decode, $CharBuffer*, $ByteBuffer*, bool), "java.nio.charset.CharacterCodingException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.websocket.UTF8AccumulatingDecoder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(UTF8AccumulatingDecoder, name, initialize, &classInfo$$, UTF8AccumulatingDecoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(UTF8AccumulatingDecoder);
	});
	return class$;
}

$Class* UTF8AccumulatingDecoder::class$ = nullptr;

				} // websocket
			} // http
		} // net
	} // internal
} // jdk