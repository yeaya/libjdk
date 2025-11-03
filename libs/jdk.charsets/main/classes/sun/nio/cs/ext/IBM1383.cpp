#include <sun/nio/cs/ext/IBM1383.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EUC_SIM.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EUC_SIM.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1383$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1383$EncodeHolder.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Decoder_EUC_SIM = ::sun::nio::cs::DoubleByte$Decoder_EUC_SIM;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $DoubleByte$Encoder_EUC_SIM = ::sun::nio::cs::DoubleByte$Encoder_EUC_SIM;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM1383$DecodeHolder = ::sun::nio::cs::ext::IBM1383$DecodeHolder;
using $IBM1383$EncodeHolder = ::sun::nio::cs::ext::IBM1383$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1383_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1383::*)()>(&IBM1383::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1383_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1383$EncodeHolder", "sun.nio.cs.ext.IBM1383", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM1383$DecodeHolder", "sun.nio.cs.ext.IBM1383", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1383_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1383",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1383_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1383_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1383$EncodeHolder,sun.nio.cs.ext.IBM1383$DecodeHolder"
};

$Object* allocate$IBM1383($Class* clazz) {
	return $of($alloc(IBM1383));
}

int32_t IBM1383::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1383::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1383::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1383::clone() {
	 return this->$Charset::clone();
}

void IBM1383::finalize() {
	this->$Charset::finalize();
}

void IBM1383::init$() {
	$Charset::init$("x-IBM1383"_s, $($ExtendedCharsets::aliasesFor("x-IBM1383"_s)));
}

$String* IBM1383::historicalName() {
	return "Cp1383"_s;
}

bool IBM1383::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM1383, cs)));
}

$CharsetDecoder* IBM1383::newDecoder() {
	$init($IBM1383$DecodeHolder);
	return $new($DoubleByte$Decoder_EUC_SIM, this, $IBM1383$DecodeHolder::b2c, $IBM1383$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* IBM1383::newEncoder() {
	$init($IBM1383$EncodeHolder);
	return $new($DoubleByte$Encoder_EUC_SIM, this, $IBM1383$EncodeHolder::c2b, $IBM1383$EncodeHolder::c2bIndex, true);
}

IBM1383::IBM1383() {
}

$Class* IBM1383::load$($String* name, bool initialize) {
	$loadClass(IBM1383, name, initialize, &_IBM1383_ClassInfo_, allocate$IBM1383);
	return class$;
}

$Class* IBM1383::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun