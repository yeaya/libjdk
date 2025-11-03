#include <sun/nio/cs/ext/ISO2022_JP_2.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_JP$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_JP$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP.h>
#include <sun/nio/cs/ext/ISO2022_JP_2$CoderHolder.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022_JP = ::sun::nio::cs::ext::ISO2022_JP;
using $ISO2022_JP$Decoder = ::sun::nio::cs::ext::ISO2022_JP$Decoder;
using $ISO2022_JP$Encoder = ::sun::nio::cs::ext::ISO2022_JP$Encoder;
using $ISO2022_JP_2$CoderHolder = ::sun::nio::cs::ext::ISO2022_JP_2$CoderHolder;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _ISO2022_JP_2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_JP_2::*)()>(&ISO2022_JP_2::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ISO2022_JP_2_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder", "sun.nio.cs.ext.ISO2022_JP_2", "CoderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_JP_2_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_JP_2",
	"sun.nio.cs.ext.ISO2022_JP",
	nullptr,
	nullptr,
	_ISO2022_JP_2_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_JP_2_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder"
};

$Object* allocate$ISO2022_JP_2($Class* clazz) {
	return $of($alloc(ISO2022_JP_2));
}

void ISO2022_JP_2::init$() {
	$ISO2022_JP::init$("ISO-2022-JP-2"_s, $($ExtendedCharsets::aliasesFor("ISO-2022-JP-2"_s)));
}

$String* ISO2022_JP_2::historicalName() {
	return "ISO2022JP2"_s;
}

bool ISO2022_JP_2::contains($Charset* cs) {
	return $ISO2022_JP::contains(cs) || ($instanceOf($JIS_X_0212, cs)) || ($instanceOf(ISO2022_JP_2, cs));
}

$CharsetDecoder* ISO2022_JP_2::newDecoder() {
	$init($ISO2022_JP$Decoder);
	$init($ISO2022_JP_2$CoderHolder);
	return $new($ISO2022_JP$Decoder, this, $ISO2022_JP$Decoder::DEC0208, $ISO2022_JP_2$CoderHolder::DEC0212);
}

$CharsetEncoder* ISO2022_JP_2::newEncoder() {
	$init($ISO2022_JP$Encoder);
	$init($ISO2022_JP_2$CoderHolder);
	return $new($ISO2022_JP$Encoder, this, $ISO2022_JP$Encoder::ENC0208, $ISO2022_JP_2$CoderHolder::ENC0212, true);
}

ISO2022_JP_2::ISO2022_JP_2() {
}

$Class* ISO2022_JP_2::load$($String* name, bool initialize) {
	$loadClass(ISO2022_JP_2, name, initialize, &_ISO2022_JP_2_ClassInfo_, allocate$ISO2022_JP_2);
	return class$;
}

$Class* ISO2022_JP_2::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun