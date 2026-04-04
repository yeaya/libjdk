#include <sun/nio/cs/ext/SJIS_0213.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SJIS.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>
#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $SJIS = ::sun::nio::cs::SJIS;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $SJIS_0213$Decoder = ::sun::nio::cs::ext::SJIS_0213$Decoder;
using $SJIS_0213$Encoder = ::sun::nio::cs::ext::SJIS_0213$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

void SJIS_0213::init$() {
	$Charset::init$("x-SJIS_0213"_s, $($ExtendedCharsets::aliasesFor("x-SJIS_0213"_s)));
}

bool SJIS_0213::contains($Charset* cs) {
	return (($$nc($nc(cs)->name())->equals("US-ASCII"_s)) || ($instanceOf($SJIS, cs)) || ($instanceOf(SJIS_0213, cs)));
}

$CharsetDecoder* SJIS_0213::newDecoder() {
	return $new($SJIS_0213$Decoder, this);
}

$CharsetEncoder* SJIS_0213::newEncoder() {
	return $new($SJIS_0213$Encoder, this);
}

SJIS_0213::SJIS_0213() {
}

$Class* SJIS_0213::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SJIS_0213, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(SJIS_0213, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(SJIS_0213, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(SJIS_0213, newEncoder, $CharsetEncoder*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.SJIS_0213$Encoder", "sun.nio.cs.ext.SJIS_0213", "Encoder", $PROTECTED | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Decoder", "sun.nio.cs.ext.SJIS_0213", "Decoder", $PROTECTED | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.ext.SJIS_0213",
		"java.nio.charset.Charset",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.SJIS_0213$Encoder,sun.nio.cs.ext.SJIS_0213$Decoder,sun.nio.cs.ext.SJIS_0213$Holder,sun.nio.cs.ext.SJIS_0213$Holder$1"
	};
	$loadClass(SJIS_0213, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SJIS_0213);
	});
	return class$;
}

$Class* SJIS_0213::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun