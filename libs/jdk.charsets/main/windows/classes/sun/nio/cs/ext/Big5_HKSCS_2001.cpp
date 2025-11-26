#include <sun/nio/cs/ext/Big5_HKSCS_2001.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
#include <sun/nio/cs/ext/Big5.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001$Decoder.h>
#include <sun/nio/cs/ext/Big5_HKSCS_2001$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Decoder = ::sun::nio::cs::HKSCS$Decoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $Big5 = ::sun::nio::cs::ext::Big5;
using $Big5_HKSCS_2001$Decoder = ::sun::nio::cs::ext::Big5_HKSCS_2001$Decoder;
using $Big5_HKSCS_2001$Encoder = ::sun::nio::cs::ext::Big5_HKSCS_2001$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _Big5_HKSCS_2001_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Big5_HKSCS_2001::*)()>(&Big5_HKSCS_2001::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _Big5_HKSCS_2001_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.Big5_HKSCS_2001$Encoder", "sun.nio.cs.ext.Big5_HKSCS_2001", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.Big5_HKSCS_2001$Decoder", "sun.nio.cs.ext.Big5_HKSCS_2001", "Decoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _Big5_HKSCS_2001_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.Big5_HKSCS_2001",
	"java.nio.charset.Charset",
	nullptr,
	nullptr,
	_Big5_HKSCS_2001_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_HKSCS_2001_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.Big5_HKSCS_2001$Encoder,sun.nio.cs.ext.Big5_HKSCS_2001$Decoder"
};

$Object* allocate$Big5_HKSCS_2001($Class* clazz) {
	return $of($alloc(Big5_HKSCS_2001));
}

void Big5_HKSCS_2001::init$() {
	$Charset::init$("x-Big5-HKSCS-2001"_s, $($ExtendedCharsets::aliasesFor("x-Big5-HKSCS-2001"_s)));
}

bool Big5_HKSCS_2001::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($Big5, cs)) || ($instanceOf(Big5_HKSCS_2001, cs)));
}

$CharsetDecoder* Big5_HKSCS_2001::newDecoder() {
	return $new($Big5_HKSCS_2001$Decoder, this);
}

$CharsetEncoder* Big5_HKSCS_2001::newEncoder() {
	return $new($Big5_HKSCS_2001$Encoder, this);
}

Big5_HKSCS_2001::Big5_HKSCS_2001() {
}

$Class* Big5_HKSCS_2001::load$($String* name, bool initialize) {
	$loadClass(Big5_HKSCS_2001, name, initialize, &_Big5_HKSCS_2001_ClassInfo_, allocate$Big5_HKSCS_2001);
	return class$;
}

$Class* Big5_HKSCS_2001::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun