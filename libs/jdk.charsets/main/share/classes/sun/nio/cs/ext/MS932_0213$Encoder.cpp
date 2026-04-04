#include <sun/nio/cs/ext/MS932_0213$Encoder.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/MS932.h>
#include <sun/nio/cs/ext/MS932_0213.h>
#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $MS932 = ::sun::nio::cs::MS932;
using $SJIS_0213$Encoder = ::sun::nio::cs::ext::SJIS_0213$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$DoubleByte$Encoder* MS932_0213$Encoder::encMS932 = nullptr;

void MS932_0213$Encoder::init$($Charset* cs) {
	$SJIS_0213$Encoder::init$(cs);
}

int32_t MS932_0213$Encoder::encodeChar(char16_t ch) {
	int32_t db = $nc(MS932_0213$Encoder::encMS932)->encodeChar(ch);
	if (db == 0x0000fffd) {
		return $SJIS_0213$Encoder::encodeChar(ch);
	}
	return db;
}

void MS932_0213$Encoder::clinit$($Class* clazz) {
	$assignStatic(MS932_0213$Encoder::encMS932, $cast($DoubleByte$Encoder, $$new($MS932)->newEncoder()));
}

MS932_0213$Encoder::MS932_0213$Encoder() {
}

$Class* MS932_0213$Encoder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"encMS932", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(MS932_0213$Encoder, encMS932)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(MS932_0213$Encoder, init$, void, $Charset*)},
		{"encodeChar", "(C)I", nullptr, $PROTECTED, $virtualMethod(MS932_0213$Encoder, encodeChar, int32_t, char16_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.MS932_0213$Encoder", "sun.nio.cs.ext.MS932_0213", "Encoder", $PROTECTED | $STATIC},
		{"sun.nio.cs.ext.SJIS_0213$Encoder", "sun.nio.cs.ext.SJIS_0213", "Encoder", $PROTECTED | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.nio.cs.ext.MS932_0213$Encoder",
		"sun.nio.cs.ext.SJIS_0213$Encoder",
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
	$loadClass(MS932_0213$Encoder, name, initialize, &classInfo$$, MS932_0213$Encoder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MS932_0213$Encoder);
	});
	return class$;
}

$Class* MS932_0213$Encoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun