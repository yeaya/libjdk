#include <sun/nio/cs/ext/MS932_0213.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/MS932.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MS932_0213$Decoder.h>
#include <sun/nio/cs/ext/MS932_0213$Encoder.h>
#include <sun/nio/cs/ext/SJIS_0213$Decoder.h>
#include <sun/nio/cs/ext/SJIS_0213$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $MS932 = ::sun::nio::cs::MS932;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $MS932_0213$Decoder = ::sun::nio::cs::ext::MS932_0213$Decoder;
using $MS932_0213$Encoder = ::sun::nio::cs::ext::MS932_0213$Encoder;
using $SJIS_0213$Decoder = ::sun::nio::cs::ext::SJIS_0213$Decoder;
using $SJIS_0213$Encoder = ::sun::nio::cs::ext::SJIS_0213$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MS932_0213_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS932_0213::*)()>(&MS932_0213::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MS932_0213_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS932_0213$Encoder", "sun.nio.cs.ext.MS932_0213", "Encoder", $PROTECTED | $STATIC},
	{"sun.nio.cs.ext.MS932_0213$Decoder", "sun.nio.cs.ext.MS932_0213", "Decoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _MS932_0213_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS932_0213",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_MS932_0213_MethodInfo_,
	nullptr,
	nullptr,
	_MS932_0213_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS932_0213$Encoder,sun.nio.cs.ext.MS932_0213$Decoder"
};

$Object* allocate$MS932_0213($Class* clazz) {
	return $of($alloc(MS932_0213));
}

void MS932_0213::init$() {
	$Charset::init$("x-MS932_0213"_s, $($ExtendedCharsets::aliasesFor("x-MS932_0213"_s)));
}

bool MS932_0213::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($MS932, cs)) || ($instanceOf(MS932_0213, cs)));
}

$CharsetDecoder* MS932_0213::newDecoder() {
	return $new($MS932_0213$Decoder, this);
}

$CharsetEncoder* MS932_0213::newEncoder() {
	return $new($MS932_0213$Encoder, this);
}

MS932_0213::MS932_0213() {
}

$Class* MS932_0213::load$($String* name, bool initialize) {
	$loadClass(MS932_0213, name, initialize, &_MS932_0213_ClassInfo_, allocate$MS932_0213);
	return class$;
}

$Class* MS932_0213::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun