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

$MethodInfo _SJIS_0213_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SJIS_0213::*)()>(&SJIS_0213::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SJIS_0213_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.SJIS_0213$Encoder", "sun.nio.cs.ext.SJIS_0213", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Decoder", "sun.nio.cs.ext.SJIS_0213", "Decoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.SJIS_0213$Holder", "sun.nio.cs.ext.SJIS_0213", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _SJIS_0213_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.SJIS_0213",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_SJIS_0213_MethodInfo_,
	nullptr,
	nullptr,
	_SJIS_0213_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.SJIS_0213$Encoder,sun.nio.cs.ext.SJIS_0213$Decoder,sun.nio.cs.ext.SJIS_0213$Holder,sun.nio.cs.ext.SJIS_0213$Holder$1"
};

$Object* allocate$SJIS_0213($Class* clazz) {
	return $of($alloc(SJIS_0213));
}

void SJIS_0213::init$() {
	$Charset::init$("x-SJIS_0213"_s, $($ExtendedCharsets::aliasesFor("x-SJIS_0213"_s)));
}

bool SJIS_0213::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($SJIS, cs)) || ($instanceOf(SJIS_0213, cs)));
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
	$loadClass(SJIS_0213, name, initialize, &_SJIS_0213_ClassInfo_, allocate$SJIS_0213);
	return class$;
}

$Class* SJIS_0213::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun