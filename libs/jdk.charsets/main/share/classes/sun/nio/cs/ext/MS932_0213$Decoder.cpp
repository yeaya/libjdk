#include <sun/nio/cs/ext/MS932_0213$Decoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/MS932.h>
#include <sun/nio/cs/ext/MS932_0213.h>
#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $MS932 = ::sun::nio::cs::MS932;
using $SJIS_0213$Decoder = ::sun::nio::cs::ext::SJIS_0213$Decoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$DoubleByte$Decoder* MS932_0213$Decoder::decMS932 = nullptr;

void MS932_0213$Decoder::init$($Charset* cs) {
	$SJIS_0213$Decoder::init$(cs);
}

char16_t MS932_0213$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	char16_t c = $nc(MS932_0213$Decoder::decMS932)->decodeDouble(b1, b2);
	if (c == (char16_t)0xfffd) {
		return $SJIS_0213$Decoder::decodeDouble(b1, b2);
	}
	return c;
}

void MS932_0213$Decoder::clinit$($Class* clazz) {
	$assignStatic(MS932_0213$Decoder::decMS932, $cast($DoubleByte$Decoder, $$new($MS932)->newDecoder()));
}

MS932_0213$Decoder::MS932_0213$Decoder() {
}

$Class* MS932_0213$Decoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"decMS932", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(MS932_0213$Decoder, decMS932)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(MS932_0213$Decoder, init$, void, $Charset*)},
		{"decodeDouble", "(II)C", nullptr, $PROTECTED, $virtualMethod(MS932_0213$Decoder, decodeDouble, char16_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MS932_0213$Decoder", "sun.nio.cs.ext.MS932_0213", "Decoder", $PROTECTED | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Decoder", "sun.nio.cs.ext.SJIS_0213", "Decoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.ext.MS932_0213$Decoder",
		"sun.nio.cs.ext.SJIS_0213$Decoder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.MS932_0213"
	};
	$loadClass(MS932_0213$Decoder, name, initialize, &classInfo$$, MS932_0213$Decoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS932_0213$Decoder);
	});
	return class$;
}

$Class* MS932_0213$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun