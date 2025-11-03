#include <sun/nio/cs/ext/ISO2022_CN.h>

#include <java/lang/UnsupportedOperationException.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/US_ASCII.h>
#include <sun/nio/cs/ext/EUC_CN.h>
#include <sun/nio/cs/ext/EUC_TW.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/ISO2022_CN$Decoder.h>
#include <jcpp.h>

#undef ISO_ESC
#undef ISO_SI
#undef ISO_SO
#undef ISO_SS2_7
#undef ISO_SS3_7
#undef MSB
#undef REPLACE_CHAR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $US_ASCII = ::sun::nio::cs::US_ASCII;
using $EUC_CN = ::sun::nio::cs::ext::EUC_CN;
using $EUC_TW = ::sun::nio::cs::ext::EUC_TW;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $ISO2022_CN$Decoder = ::sun::nio::cs::ext::ISO2022_CN$Decoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_CN_FieldInfo_[] = {
	{"ISO_ESC", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, ISO_ESC)},
	{"ISO_SI", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, ISO_SI)},
	{"ISO_SO", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, ISO_SO)},
	{"ISO_SS2_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, ISO_SS2_7)},
	{"ISO_SS3_7", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, ISO_SS3_7)},
	{"MSB", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, MSB)},
	{"REPLACE_CHAR", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, REPLACE_CHAR)},
	{"SODesigGB", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, SODesigGB)},
	{"SODesigCNS", "B", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ISO2022_CN, SODesigCNS)},
	{}
};

$MethodInfo _ISO2022_CN_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ISO2022_CN::*)()>(&ISO2022_CN::init$))},
	{"canEncode", "()Z", nullptr, $PUBLIC},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _ISO2022_CN_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_CN$Decoder", "sun.nio.cs.ext.ISO2022_CN", "Decoder", $STATIC},
	{}
};

$ClassInfo _ISO2022_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_CN",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	_ISO2022_CN_FieldInfo_,
	_ISO2022_CN_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_CN_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_CN$Decoder"
};

$Object* allocate$ISO2022_CN($Class* clazz) {
	return $of($alloc(ISO2022_CN));
}

int32_t ISO2022_CN::hashCode() {
	 return this->$Charset::hashCode();
}

bool ISO2022_CN::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* ISO2022_CN::toString() {
	 return this->$Charset::toString();
}

$Object* ISO2022_CN::clone() {
	 return this->$Charset::clone();
}

void ISO2022_CN::finalize() {
	this->$Charset::finalize();
}

void ISO2022_CN::init$() {
	$Charset::init$("ISO-2022-CN"_s, $($ExtendedCharsets::aliasesFor("ISO-2022-CN"_s)));
}

$String* ISO2022_CN::historicalName() {
	return "ISO2022CN"_s;
}

bool ISO2022_CN::contains($Charset* cs) {
	return (($instanceOf($EUC_CN, cs)) || ($instanceOf($US_ASCII, cs)) || ($instanceOf($EUC_TW, cs)) || ($instanceOf(ISO2022_CN, cs)));
}

$CharsetDecoder* ISO2022_CN::newDecoder() {
	return $new($ISO2022_CN$Decoder, this);
}

$CharsetEncoder* ISO2022_CN::newEncoder() {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

bool ISO2022_CN::canEncode() {
	return false;
}

ISO2022_CN::ISO2022_CN() {
}

$Class* ISO2022_CN::load$($String* name, bool initialize) {
	$loadClass(ISO2022_CN, name, initialize, &_ISO2022_CN_ClassInfo_, allocate$ISO2022_CN);
	return class$;
}

$Class* ISO2022_CN::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun