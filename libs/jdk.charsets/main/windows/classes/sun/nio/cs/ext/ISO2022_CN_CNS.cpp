#include <sun/nio/cs/ext/ISO2022_CN_CNS.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/ext/EUC_TW.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022$Encoder.h>
#include <sun/nio/cs/ext/ISO2022.h>
#include <sun/nio/cs/ext/ISO2022_CN$Decoder.h>
#include <sun/nio/cs/ext/ISO2022_CN_CNS$Encoder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $EUC_TW = ::sun::nio::cs::ext::EUC_TW;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022 = ::sun::nio::cs::ext::ISO2022;
using $ISO2022$Encoder = ::sun::nio::cs::ext::ISO2022$Encoder;
using $ISO2022_CN$Decoder = ::sun::nio::cs::ext::ISO2022_CN$Decoder;
using $ISO2022_CN_CNS$Encoder = ::sun::nio::cs::ext::ISO2022_CN_CNS$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _ISO2022_CN_CNS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_CN_CNS::*)()>(&ISO2022_CN_CNS::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO2022_CN_CNS_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_CN_CNS$Encoder", "sun.nio.cs.ext.ISO2022_CN_CNS", "Encoder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_CN_CNS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_CN_CNS",
	"sun.nio.cs.ext.ISO2022",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_ISO2022_CN_CNS_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_CN_CNS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_CN_CNS$Encoder"
};

$Object* allocate$ISO2022_CN_CNS($Class* clazz) {
	return $of($alloc(ISO2022_CN_CNS));
}

int32_t ISO2022_CN_CNS::hashCode() {
	 return this->$ISO2022::hashCode();
}

bool ISO2022_CN_CNS::equals(Object$* arg0) {
	 return this->$ISO2022::equals(arg0);
}

$String* ISO2022_CN_CNS::toString() {
	 return this->$ISO2022::toString();
}

$Object* ISO2022_CN_CNS::clone() {
	 return this->$ISO2022::clone();
}

void ISO2022_CN_CNS::finalize() {
	this->$ISO2022::finalize();
}

void ISO2022_CN_CNS::init$() {
	$ISO2022::init$("x-ISO-2022-CN-CNS"_s, $($ExtendedCharsets::aliasesFor("x-ISO-2022-CN-CNS"_s)));
}

bool ISO2022_CN_CNS::contains($Charset* cs) {
	return (($instanceOf($EUC_TW, cs)) || ($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(ISO2022_CN_CNS, cs)));
}

$String* ISO2022_CN_CNS::historicalName() {
	return "ISO2022CN_CNS"_s;
}

$CharsetDecoder* ISO2022_CN_CNS::newDecoder() {
	return $new($ISO2022_CN$Decoder, this);
}

$CharsetEncoder* ISO2022_CN_CNS::newEncoder() {
	return $new($ISO2022_CN_CNS$Encoder, this);
}

ISO2022_CN_CNS::ISO2022_CN_CNS() {
}

$Class* ISO2022_CN_CNS::load$($String* name, bool initialize) {
	$loadClass(ISO2022_CN_CNS, name, initialize, &_ISO2022_CN_CNS_ClassInfo_, allocate$ISO2022_CN_CNS);
	return class$;
}

$Class* ISO2022_CN_CNS::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun