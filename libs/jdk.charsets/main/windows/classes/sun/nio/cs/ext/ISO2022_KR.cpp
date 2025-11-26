#include <sun/nio/cs/ext/ISO2022_KR.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/EUC_KR.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022.h>
#include <sun/nio/cs/ext/ISO2022_KR$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_KR$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $EUC_KR = ::sun::nio::cs::ext::EUC_KR;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022 = ::sun::nio::cs::ext::ISO2022;
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;
using $ISO2022_KR$Decoder = ::sun::nio::cs::ext::ISO2022_KR$Decoder;
using $ISO2022_KR$Encoder = ::sun::nio::cs::ext::ISO2022_KR$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _ISO2022_KR_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_KR::*)()>(&ISO2022_KR::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO2022_KR_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_KR$Encoder", "sun.nio.cs.ext.ISO2022_KR", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.ISO2022_KR$Decoder", "sun.nio.cs.ext.ISO2022_KR", "Decoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.ISO2022_KR$Holder", "sun.nio.cs.ext.ISO2022_KR", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_KR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_KR",
	"sun.nio.cs.ext.ISO2022",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_ISO2022_KR_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_KR_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_KR$Encoder,sun.nio.cs.ext.ISO2022_KR$Decoder,sun.nio.cs.ext.ISO2022_KR$Holder"
};

$Object* allocate$ISO2022_KR($Class* clazz) {
	return $of($alloc(ISO2022_KR));
}

int32_t ISO2022_KR::hashCode() {
	 return this->$ISO2022::hashCode();
}

bool ISO2022_KR::equals(Object$* arg0) {
	 return this->$ISO2022::equals(arg0);
}

$String* ISO2022_KR::toString() {
	 return this->$ISO2022::toString();
}

$Object* ISO2022_KR::clone() {
	 return this->$ISO2022::clone();
}

void ISO2022_KR::finalize() {
	this->$ISO2022::finalize();
}

void ISO2022_KR::init$() {
	$ISO2022::init$("ISO-2022-KR"_s, $($ExtendedCharsets::aliasesFor("ISO-2022-KR"_s)));
}

bool ISO2022_KR::contains($Charset* cs) {
	return (($instanceOf($EUC_KR, cs)) || ($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(ISO2022_KR, cs)));
}

$String* ISO2022_KR::historicalName() {
	return "ISO2022KR"_s;
}

$CharsetDecoder* ISO2022_KR::newDecoder() {
	return $new($ISO2022_KR$Decoder, this);
}

$CharsetEncoder* ISO2022_KR::newEncoder() {
	return $new($ISO2022_KR$Encoder, this);
}

ISO2022_KR::ISO2022_KR() {
}

$Class* ISO2022_KR::load$($String* name, bool initialize) {
	$loadClass(ISO2022_KR, name, initialize, &_ISO2022_KR_ClassInfo_, allocate$ISO2022_KR);
	return class$;
}

$Class* ISO2022_KR::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun