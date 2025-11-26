#include <sun/nio/cs/ext/JIS_X_0208_MS932.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Decoder_DBCSONLY.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/DoubleByte$Encoder_DBCSONLY.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$EncodeHolder.h>
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
using $JIS_X_0208_MS932$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS932$DecodeHolder;
using $JIS_X_0208_MS932$EncodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS932$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _JIS_X_0208_MS932_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JIS_X_0208_MS932::*)()>(&JIS_X_0208_MS932::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _JIS_X_0208_MS932_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS932", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.JIS_X_0208_MS932$DecodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS932", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _JIS_X_0208_MS932_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.JIS_X_0208_MS932",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_JIS_X_0208_MS932_MethodInfo_,
	nullptr,
	nullptr,
	_JIS_X_0208_MS932_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder,sun.nio.cs.ext.JIS_X_0208_MS932$DecodeHolder"
};

$Object* allocate$JIS_X_0208_MS932($Class* clazz) {
	return $of($alloc(JIS_X_0208_MS932));
}

int32_t JIS_X_0208_MS932::hashCode() {
	 return this->$Charset::hashCode();
}

bool JIS_X_0208_MS932::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* JIS_X_0208_MS932::toString() {
	 return this->$Charset::toString();
}

$Object* JIS_X_0208_MS932::clone() {
	 return this->$Charset::clone();
}

void JIS_X_0208_MS932::finalize() {
	this->$Charset::finalize();
}

void JIS_X_0208_MS932::init$() {
	$Charset::init$("x-JIS0208_MS932"_s, $($ExtendedCharsets::aliasesFor("x-JIS0208_MS932"_s)));
}

$String* JIS_X_0208_MS932::historicalName() {
	return "JIS_X_0208_MS932"_s;
}

bool JIS_X_0208_MS932::contains($Charset* cs) {
	return ($instanceOf(JIS_X_0208_MS932, cs));
}

$CharsetDecoder* JIS_X_0208_MS932::newDecoder() {
	$init($JIS_X_0208_MS932$DecodeHolder);
	return $new($DoubleByte$Decoder_DBCSONLY, this, $JIS_X_0208_MS932$DecodeHolder::b2c, $JIS_X_0208_MS932$DecodeHolder::b2cSB, 33, 126, false);
}

$CharsetEncoder* JIS_X_0208_MS932::newEncoder() {
	$init($JIS_X_0208_MS932$EncodeHolder);
	return $new($DoubleByte$Encoder_DBCSONLY, this, $$new($bytes, {
		(int8_t)33,
		(int8_t)41
	}), $JIS_X_0208_MS932$EncodeHolder::c2b, $JIS_X_0208_MS932$EncodeHolder::c2bIndex, false);
}

JIS_X_0208_MS932::JIS_X_0208_MS932() {
}

$Class* JIS_X_0208_MS932::load$($String* name, bool initialize) {
	$loadClass(JIS_X_0208_MS932, name, initialize, &_JIS_X_0208_MS932_ClassInfo_, allocate$JIS_X_0208_MS932);
	return class$;
}

$Class* JIS_X_0208_MS932::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun