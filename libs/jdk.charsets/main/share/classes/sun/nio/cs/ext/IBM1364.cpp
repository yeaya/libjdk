#include <sun/nio/cs/ext/IBM1364.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1364$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1364$EncodeHolder.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Decoder_EBCDIC = ::sun::nio::cs::DoubleByte$Decoder_EBCDIC;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $DoubleByte$Encoder_EBCDIC = ::sun::nio::cs::DoubleByte$Encoder_EBCDIC;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM1364$DecodeHolder = ::sun::nio::cs::ext::IBM1364$DecodeHolder;
using $IBM1364$EncodeHolder = ::sun::nio::cs::ext::IBM1364$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1364_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1364::*)()>(&IBM1364::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1364_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1364$EncodeHolder", "sun.nio.cs.ext.IBM1364", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM1364$DecodeHolder", "sun.nio.cs.ext.IBM1364", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1364_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1364",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1364_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1364_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1364$EncodeHolder,sun.nio.cs.ext.IBM1364$DecodeHolder"
};

$Object* allocate$IBM1364($Class* clazz) {
	return $of($alloc(IBM1364));
}

int32_t IBM1364::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1364::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1364::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1364::clone() {
	 return this->$Charset::clone();
}

void IBM1364::finalize() {
	this->$Charset::finalize();
}

void IBM1364::init$() {
	$Charset::init$("x-IBM1364"_s, $($ExtendedCharsets::aliasesFor("x-IBM1364"_s)));
}

$String* IBM1364::historicalName() {
	return "Cp1364"_s;
}

bool IBM1364::contains($Charset* cs) {
	return ($instanceOf(IBM1364, cs));
}

$CharsetDecoder* IBM1364::newDecoder() {
	$init($IBM1364$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM1364$DecodeHolder::b2c, $IBM1364$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM1364::newEncoder() {
	$init($IBM1364$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM1364$EncodeHolder::c2b, $IBM1364$EncodeHolder::c2bIndex, false);
}

IBM1364::IBM1364() {
}

$Class* IBM1364::load$($String* name, bool initialize) {
	$loadClass(IBM1364, name, initialize, &_IBM1364_ClassInfo_, allocate$IBM1364);
	return class$;
}

$Class* IBM1364::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun