#include <sun/nio/cs/ext/IBM930.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM930$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM930$EncodeHolder.h>
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
using $IBM930$DecodeHolder = ::sun::nio::cs::ext::IBM930$DecodeHolder;
using $IBM930$EncodeHolder = ::sun::nio::cs::ext::IBM930$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM930_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM930::*)()>(&IBM930::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM930_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM930$EncodeHolder", "sun.nio.cs.ext.IBM930", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM930$DecodeHolder", "sun.nio.cs.ext.IBM930", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM930_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM930",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM930_MethodInfo_,
	nullptr,
	nullptr,
	_IBM930_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM930$EncodeHolder,sun.nio.cs.ext.IBM930$DecodeHolder"
};

$Object* allocate$IBM930($Class* clazz) {
	return $of($alloc(IBM930));
}

int32_t IBM930::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM930::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM930::toString() {
	 return this->$Charset::toString();
}

$Object* IBM930::clone() {
	 return this->$Charset::clone();
}

void IBM930::finalize() {
	this->$Charset::finalize();
}

void IBM930::init$() {
	$Charset::init$("x-IBM930"_s, $($ExtendedCharsets::aliasesFor("x-IBM930"_s)));
}

$String* IBM930::historicalName() {
	return "Cp930"_s;
}

bool IBM930::contains($Charset* cs) {
	return ($instanceOf(IBM930, cs));
}

$CharsetDecoder* IBM930::newDecoder() {
	$init($IBM930$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM930$DecodeHolder::b2c, $IBM930$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM930::newEncoder() {
	$init($IBM930$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM930$EncodeHolder::c2b, $IBM930$EncodeHolder::c2bIndex, false);
}

IBM930::IBM930() {
}

$Class* IBM930::load$($String* name, bool initialize) {
	$loadClass(IBM930, name, initialize, &_IBM930_ClassInfo_, allocate$IBM930);
	return class$;
}

$Class* IBM930::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun