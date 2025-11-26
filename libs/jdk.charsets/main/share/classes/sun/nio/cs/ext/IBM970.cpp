#include <sun/nio/cs/ext/IBM970.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EUC_SIM.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EUC_SIM.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM970$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM970$EncodeHolder.h>
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
using $IBM970$DecodeHolder = ::sun::nio::cs::ext::IBM970$DecodeHolder;
using $IBM970$EncodeHolder = ::sun::nio::cs::ext::IBM970$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM970_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM970::*)()>(&IBM970::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM970_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM970$EncodeHolder", "sun.nio.cs.ext.IBM970", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM970$DecodeHolder", "sun.nio.cs.ext.IBM970", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM970_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM970",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM970_MethodInfo_,
	nullptr,
	nullptr,
	_IBM970_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM970$EncodeHolder,sun.nio.cs.ext.IBM970$DecodeHolder"
};

$Object* allocate$IBM970($Class* clazz) {
	return $of($alloc(IBM970));
}

int32_t IBM970::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM970::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM970::toString() {
	 return this->$Charset::toString();
}

$Object* IBM970::clone() {
	 return this->$Charset::clone();
}

void IBM970::finalize() {
	this->$Charset::finalize();
}

void IBM970::init$() {
	$Charset::init$("x-IBM970"_s, $($ExtendedCharsets::aliasesFor("x-IBM970"_s)));
}

$String* IBM970::historicalName() {
	return "Cp970"_s;
}

bool IBM970::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM970, cs)));
}

$CharsetDecoder* IBM970::newDecoder() {
	$init($IBM970$DecodeHolder);
	return $new($DoubleByte$Decoder_EUC_SIM, this, $IBM970$DecodeHolder::b2c, $IBM970$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* IBM970::newEncoder() {
	$init($IBM970$EncodeHolder);
	return $new($DoubleByte$Encoder_EUC_SIM, this, $IBM970$EncodeHolder::c2b, $IBM970$EncodeHolder::c2bIndex, true);
}

IBM970::IBM970() {
}

$Class* IBM970::load$($String* name, bool initialize) {
	$loadClass(IBM970, name, initialize, &_IBM970_ClassInfo_, allocate$IBM970);
	return class$;
}

$Class* IBM970::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun