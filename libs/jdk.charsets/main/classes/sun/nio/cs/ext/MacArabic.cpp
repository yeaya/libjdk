#include <sun/nio/cs/ext/MacArabic.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacArabic$Holder.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $SingleByte$Decoder = ::sun::nio::cs::SingleByte$Decoder;
using $SingleByte$Encoder = ::sun::nio::cs::SingleByte$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $MacArabic$Holder = ::sun::nio::cs::ext::MacArabic$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacArabic_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacArabic::*)()>(&MacArabic::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacArabic_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacArabic$Holder", "sun.nio.cs.ext.MacArabic", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacArabic_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacArabic",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacArabic_MethodInfo_,
	nullptr,
	nullptr,
	_MacArabic_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacArabic$Holder"
};

$Object* allocate$MacArabic($Class* clazz) {
	return $of($alloc(MacArabic));
}

int32_t MacArabic::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacArabic::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacArabic::toString() {
	 return this->$Charset::toString();
}

$Object* MacArabic::clone() {
	 return this->$Charset::clone();
}

void MacArabic::finalize() {
	this->$Charset::finalize();
}

void MacArabic::init$() {
	$Charset::init$("x-MacArabic"_s, $($ExtendedCharsets::aliasesFor("x-MacArabic"_s)));
}

$String* MacArabic::historicalName() {
	return "MacArabic"_s;
}

bool MacArabic::contains($Charset* cs) {
	return ($instanceOf(MacArabic, cs));
}

$CharsetDecoder* MacArabic::newDecoder() {
	$init($MacArabic$Holder);
	return $new($SingleByte$Decoder, this, $MacArabic$Holder::b2c, false, false);
}

$CharsetEncoder* MacArabic::newEncoder() {
	$init($MacArabic$Holder);
	return $new($SingleByte$Encoder, this, $MacArabic$Holder::c2b, $MacArabic$Holder::c2bIndex, false);
}

MacArabic::MacArabic() {
}

$Class* MacArabic::load$($String* name, bool initialize) {
	$loadClass(MacArabic, name, initialize, &_MacArabic_ClassInfo_, allocate$MacArabic);
	return class$;
}

$Class* MacArabic::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun