#include <sun/nio/cs/ext/EUC_CN.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/EUC_CN$DecodeHolder.h>
#include <sun/nio/cs/ext/EUC_CN$EncodeHolder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

#undef EUC_CN

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $EUC_CN$DecodeHolder = ::sun::nio::cs::ext::EUC_CN$DecodeHolder;
using $EUC_CN$EncodeHolder = ::sun::nio::cs::ext::EUC_CN$EncodeHolder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _EUC_CN_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(EUC_CN::*)()>(&EUC_CN::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _EUC_CN_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.EUC_CN$EncodeHolder", "sun.nio.cs.ext.EUC_CN", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.EUC_CN$DecodeHolder", "sun.nio.cs.ext.EUC_CN", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _EUC_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.EUC_CN",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_EUC_CN_MethodInfo_,
	nullptr,
	nullptr,
	_EUC_CN_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.EUC_CN$EncodeHolder,sun.nio.cs.ext.EUC_CN$DecodeHolder"
};

$Object* allocate$EUC_CN($Class* clazz) {
	return $of($alloc(EUC_CN));
}

int32_t EUC_CN::hashCode() {
	 return this->$Charset::hashCode();
}

bool EUC_CN::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* EUC_CN::toString() {
	 return this->$Charset::toString();
}

$Object* EUC_CN::clone() {
	 return this->$Charset::clone();
}

void EUC_CN::finalize() {
	this->$Charset::finalize();
}

void EUC_CN::init$() {
	$Charset::init$("GB2312"_s, $($ExtendedCharsets::aliasesFor("GB2312"_s)));
}

$String* EUC_CN::historicalName() {
	return "EUC_CN"_s;
}

bool EUC_CN::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(EUC_CN, cs)));
}

$CharsetDecoder* EUC_CN::newDecoder() {
	$init($EUC_CN$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $EUC_CN$DecodeHolder::b2c, $EUC_CN$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* EUC_CN::newEncoder() {
	$init($EUC_CN$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $EUC_CN$EncodeHolder::c2b, $EUC_CN$EncodeHolder::c2bIndex, true);
}

EUC_CN::EUC_CN() {
}

$Class* EUC_CN::load$($String* name, bool initialize) {
	$loadClass(EUC_CN, name, initialize, &_EUC_CN_ClassInfo_, allocate$EUC_CN);
	return class$;
}

$Class* EUC_CN::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun