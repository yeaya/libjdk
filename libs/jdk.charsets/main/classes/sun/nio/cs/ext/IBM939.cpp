#include <sun/nio/cs/ext/IBM939.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM939$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM939$EncodeHolder.h>
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
using $IBM939$DecodeHolder = ::sun::nio::cs::ext::IBM939$DecodeHolder;
using $IBM939$EncodeHolder = ::sun::nio::cs::ext::IBM939$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM939_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM939::*)()>(&IBM939::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM939_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM939$EncodeHolder", "sun.nio.cs.ext.IBM939", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM939$DecodeHolder", "sun.nio.cs.ext.IBM939", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM939_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM939",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM939_MethodInfo_,
	nullptr,
	nullptr,
	_IBM939_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM939$EncodeHolder,sun.nio.cs.ext.IBM939$DecodeHolder"
};

$Object* allocate$IBM939($Class* clazz) {
	return $of($alloc(IBM939));
}

int32_t IBM939::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM939::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM939::toString() {
	 return this->$Charset::toString();
}

$Object* IBM939::clone() {
	 return this->$Charset::clone();
}

void IBM939::finalize() {
	this->$Charset::finalize();
}

void IBM939::init$() {
	$Charset::init$("x-IBM939"_s, $($ExtendedCharsets::aliasesFor("x-IBM939"_s)));
}

$String* IBM939::historicalName() {
	return "Cp939"_s;
}

bool IBM939::contains($Charset* cs) {
	return ($instanceOf(IBM939, cs));
}

$CharsetDecoder* IBM939::newDecoder() {
	$init($IBM939$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM939$DecodeHolder::b2c, $IBM939$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM939::newEncoder() {
	$init($IBM939$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM939$EncodeHolder::c2b, $IBM939$EncodeHolder::c2bIndex, false);
}

IBM939::IBM939() {
}

$Class* IBM939::load$($String* name, bool initialize) {
	$loadClass(IBM939, name, initialize, &_IBM939_ClassInfo_, allocate$IBM939);
	return class$;
}

$Class* IBM939::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun