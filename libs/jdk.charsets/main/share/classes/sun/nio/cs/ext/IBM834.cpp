#include <sun/nio/cs/ext/IBM834.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_DBCSONLY.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM834$Encoder.h>
#include <sun/nio/cs/ext/IBM933$DecodeHolder.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Decoder_DBCSONLY = ::sun::nio::cs::DoubleByte$Decoder_DBCSONLY;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $DoubleByte$Encoder_DBCSONLY = ::sun::nio::cs::DoubleByte$Encoder_DBCSONLY;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM834$Encoder = ::sun::nio::cs::ext::IBM834$Encoder;
using $IBM933$DecodeHolder = ::sun::nio::cs::ext::IBM933$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM834_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM834::*)()>(&IBM834::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _IBM834_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM834$Encoder", "sun.nio.cs.ext.IBM834", "Encoder", $PROTECTED | $STATIC},
	{}
};

$ClassInfo _IBM834_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM834",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_IBM834_MethodInfo_,
	nullptr,
	nullptr,
	_IBM834_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM834$Encoder"
};

$Object* allocate$IBM834($Class* clazz) {
	return $of($alloc(IBM834));
}

void IBM834::init$() {
	$Charset::init$("x-IBM834"_s, $($ExtendedCharsets::aliasesFor("x-IBM834"_s)));
}

bool IBM834::contains($Charset* cs) {
	return ($instanceOf(IBM834, cs));
}

$CharsetDecoder* IBM834::newDecoder() {
	$init($IBM933$DecodeHolder);
	return $new($DoubleByte$Decoder_DBCSONLY, this, $IBM933$DecodeHolder::b2c, nullptr, 64, 254);
}

$CharsetEncoder* IBM834::newEncoder() {
	return $new($IBM834$Encoder, this);
}

IBM834::IBM834() {
}

$Class* IBM834::load$($String* name, bool initialize) {
	$loadClass(IBM834, name, initialize, &_IBM834_ClassInfo_, allocate$IBM834);
	return class$;
}

$Class* IBM834::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun