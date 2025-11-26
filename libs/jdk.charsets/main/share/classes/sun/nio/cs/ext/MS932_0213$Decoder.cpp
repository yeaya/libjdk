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
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $MS932 = ::sun::nio::cs::MS932;
using $MS932_0213 = ::sun::nio::cs::ext::MS932_0213;
using $SJIS_0213$Decoder = ::sun::nio::cs::ext::SJIS_0213$Decoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MS932_0213$Decoder_FieldInfo_[] = {
	{"decMS932", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(MS932_0213$Decoder, decMS932)},
	{}
};

$MethodInfo _MS932_0213$Decoder_MethodInfo_[] = {
	{"<init>", "(Ljava/nio/charset/Charset;)V", nullptr, $PROTECTED, $method(static_cast<void(MS932_0213$Decoder::*)($Charset*)>(&MS932_0213$Decoder::init$))},
	{"decodeDouble", "(II)C", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MS932_0213$Decoder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS932_0213$Decoder", "sun.nio.cs.ext.MS932_0213", "Decoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Decoder", "sun.nio.cs.ext.SJIS_0213", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _MS932_0213$Decoder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS932_0213$Decoder",
	"sun.nio.cs.ext.SJIS_0213$Decoder",
	nullptr,
	_MS932_0213$Decoder_FieldInfo_,
	_MS932_0213$Decoder_MethodInfo_,
	nullptr,
	nullptr,
	_MS932_0213$Decoder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS932_0213"
};

$Object* allocate$MS932_0213$Decoder($Class* clazz) {
	return $of($alloc(MS932_0213$Decoder));
}

$DoubleByte$Decoder* MS932_0213$Decoder::decMS932 = nullptr;

void MS932_0213$Decoder::init$($Charset* cs) {
	$SJIS_0213$Decoder::init$(cs);
}

char16_t MS932_0213$Decoder::decodeDouble(int32_t b1, int32_t b2) {
	char16_t c = $nc(MS932_0213$Decoder::decMS932)->decodeDouble(b1, b2);
	if (c == (char16_t)0xFFFD) {
		return $SJIS_0213$Decoder::decodeDouble(b1, b2);
	}
	return c;
}

void clinit$MS932_0213$Decoder($Class* class$) {
	$assignStatic(MS932_0213$Decoder::decMS932, $cast($DoubleByte$Decoder, $$new($MS932)->newDecoder()));
}

MS932_0213$Decoder::MS932_0213$Decoder() {
}

$Class* MS932_0213$Decoder::load$($String* name, bool initialize) {
	$loadClass(MS932_0213$Decoder, name, initialize, &_MS932_0213$Decoder_ClassInfo_, clinit$MS932_0213$Decoder, allocate$MS932_0213$Decoder);
	return class$;
}

$Class* MS932_0213$Decoder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun