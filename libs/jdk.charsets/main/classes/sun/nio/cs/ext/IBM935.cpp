#include <sun/nio/cs/ext/IBM935.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM935$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM935$EncodeHolder.h>
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
using $IBM935$DecodeHolder = ::sun::nio::cs::ext::IBM935$DecodeHolder;
using $IBM935$EncodeHolder = ::sun::nio::cs::ext::IBM935$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM935_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM935::*)()>(&IBM935::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM935_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM935$EncodeHolder", "sun.nio.cs.ext.IBM935", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM935$DecodeHolder", "sun.nio.cs.ext.IBM935", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM935_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM935",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM935_MethodInfo_,
	nullptr,
	nullptr,
	_IBM935_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM935$EncodeHolder,sun.nio.cs.ext.IBM935$DecodeHolder"
};

$Object* allocate$IBM935($Class* clazz) {
	return $of($alloc(IBM935));
}

int32_t IBM935::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM935::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM935::toString() {
	 return this->$Charset::toString();
}

$Object* IBM935::clone() {
	 return this->$Charset::clone();
}

void IBM935::finalize() {
	this->$Charset::finalize();
}

void IBM935::init$() {
	$Charset::init$("x-IBM935"_s, $($ExtendedCharsets::aliasesFor("x-IBM935"_s)));
}

$String* IBM935::historicalName() {
	return "Cp935"_s;
}

bool IBM935::contains($Charset* cs) {
	return ($instanceOf(IBM935, cs));
}

$CharsetDecoder* IBM935::newDecoder() {
	$init($IBM935$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM935$DecodeHolder::b2c, $IBM935$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM935::newEncoder() {
	$init($IBM935$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM935$EncodeHolder::c2b, $IBM935$EncodeHolder::c2bIndex, false);
}

IBM935::IBM935() {
}

$Class* IBM935::load$($String* name, bool initialize) {
	$loadClass(IBM935, name, initialize, &_IBM935_ClassInfo_, allocate$IBM935);
	return class$;
}

$Class* IBM935::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun