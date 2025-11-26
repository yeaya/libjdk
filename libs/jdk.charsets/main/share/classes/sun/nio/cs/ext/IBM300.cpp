#include <sun/nio/cs/ext/IBM300.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_DBCSONLY.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM300$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM300$EncodeHolder.h>
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
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM300$DecodeHolder = ::sun::nio::cs::ext::IBM300$DecodeHolder;
using $IBM300$EncodeHolder = ::sun::nio::cs::ext::IBM300$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM300_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM300::*)()>(&IBM300::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM300_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM300$EncodeHolder", "sun.nio.cs.ext.IBM300", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM300$DecodeHolder", "sun.nio.cs.ext.IBM300", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM300_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM300",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM300_MethodInfo_,
	nullptr,
	nullptr,
	_IBM300_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM300$EncodeHolder,sun.nio.cs.ext.IBM300$DecodeHolder"
};

$Object* allocate$IBM300($Class* clazz) {
	return $of($alloc(IBM300));
}

int32_t IBM300::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM300::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM300::toString() {
	 return this->$Charset::toString();
}

$Object* IBM300::clone() {
	 return this->$Charset::clone();
}

void IBM300::finalize() {
	this->$Charset::finalize();
}

void IBM300::init$() {
	$Charset::init$("x-IBM300"_s, $($ExtendedCharsets::aliasesFor("x-IBM300"_s)));
}

$String* IBM300::historicalName() {
	return "Cp300"_s;
}

bool IBM300::contains($Charset* cs) {
	return ($instanceOf(IBM300, cs));
}

$CharsetDecoder* IBM300::newDecoder() {
	$init($IBM300$DecodeHolder);
	return $new($DoubleByte$Decoder_DBCSONLY, this, $IBM300$DecodeHolder::b2c, $IBM300$DecodeHolder::b2cSB, 64, 254, false);
}

$CharsetEncoder* IBM300::newEncoder() {
	$init($IBM300$EncodeHolder);
	return $new($DoubleByte$Encoder_DBCSONLY, this, $$new($bytes, {
		(int8_t)66,
		(int8_t)111
	}), $IBM300$EncodeHolder::c2b, $IBM300$EncodeHolder::c2bIndex, false);
}

IBM300::IBM300() {
}

$Class* IBM300::load$($String* name, bool initialize) {
	$loadClass(IBM300, name, initialize, &_IBM300_ClassInfo_, allocate$IBM300);
	return class$;
}

$Class* IBM300::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun