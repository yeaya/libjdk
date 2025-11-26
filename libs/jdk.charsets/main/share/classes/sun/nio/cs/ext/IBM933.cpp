#include <sun/nio/cs/ext/IBM933.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_EBCDIC.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_EBCDIC.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM933$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM933$EncodeHolder.h>
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
using $IBM933$DecodeHolder = ::sun::nio::cs::ext::IBM933$DecodeHolder;
using $IBM933$EncodeHolder = ::sun::nio::cs::ext::IBM933$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM933_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM933::*)()>(&IBM933::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM933_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM933$EncodeHolder", "sun.nio.cs.ext.IBM933", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM933$DecodeHolder", "sun.nio.cs.ext.IBM933", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM933_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM933",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM933_MethodInfo_,
	nullptr,
	nullptr,
	_IBM933_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM933$EncodeHolder,sun.nio.cs.ext.IBM933$DecodeHolder"
};

$Object* allocate$IBM933($Class* clazz) {
	return $of($alloc(IBM933));
}

int32_t IBM933::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM933::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM933::toString() {
	 return this->$Charset::toString();
}

$Object* IBM933::clone() {
	 return this->$Charset::clone();
}

void IBM933::finalize() {
	this->$Charset::finalize();
}

void IBM933::init$() {
	$Charset::init$("x-IBM933"_s, $($ExtendedCharsets::aliasesFor("x-IBM933"_s)));
}

$String* IBM933::historicalName() {
	return "Cp933"_s;
}

bool IBM933::contains($Charset* cs) {
	return ($instanceOf(IBM933, cs));
}

$CharsetDecoder* IBM933::newDecoder() {
	$init($IBM933$DecodeHolder);
	return $new($DoubleByte$Decoder_EBCDIC, this, $IBM933$DecodeHolder::b2c, $IBM933$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM933::newEncoder() {
	$init($IBM933$EncodeHolder);
	return $new($DoubleByte$Encoder_EBCDIC, this, $IBM933$EncodeHolder::c2b, $IBM933$EncodeHolder::c2bIndex, false);
}

IBM933::IBM933() {
}

$Class* IBM933::load$($String* name, bool initialize) {
	$loadClass(IBM933, name, initialize, &_IBM933_ClassInfo_, allocate$IBM933);
	return class$;
}

$Class* IBM933::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun