#include <sun/nio/cs/ext/MacTurkish.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacTurkish$Holder.h>
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
using $MacTurkish$Holder = ::sun::nio::cs::ext::MacTurkish$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacTurkish_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacTurkish::*)()>(&MacTurkish::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacTurkish_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacTurkish$Holder", "sun.nio.cs.ext.MacTurkish", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacTurkish_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacTurkish",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacTurkish_MethodInfo_,
	nullptr,
	nullptr,
	_MacTurkish_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacTurkish$Holder"
};

$Object* allocate$MacTurkish($Class* clazz) {
	return $of($alloc(MacTurkish));
}

int32_t MacTurkish::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacTurkish::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacTurkish::toString() {
	 return this->$Charset::toString();
}

$Object* MacTurkish::clone() {
	 return this->$Charset::clone();
}

void MacTurkish::finalize() {
	this->$Charset::finalize();
}

void MacTurkish::init$() {
	$Charset::init$("x-MacTurkish"_s, $($ExtendedCharsets::aliasesFor("x-MacTurkish"_s)));
}

$String* MacTurkish::historicalName() {
	return "MacTurkish"_s;
}

bool MacTurkish::contains($Charset* cs) {
	return ($instanceOf(MacTurkish, cs));
}

$CharsetDecoder* MacTurkish::newDecoder() {
	$init($MacTurkish$Holder);
	return $new($SingleByte$Decoder, this, $MacTurkish$Holder::b2c, false, false);
}

$CharsetEncoder* MacTurkish::newEncoder() {
	$init($MacTurkish$Holder);
	return $new($SingleByte$Encoder, this, $MacTurkish$Holder::c2b, $MacTurkish$Holder::c2bIndex, false);
}

MacTurkish::MacTurkish() {
}

$Class* MacTurkish::load$($String* name, bool initialize) {
	$loadClass(MacTurkish, name, initialize, &_MacTurkish_ClassInfo_, allocate$MacTurkish);
	return class$;
}

$Class* MacTurkish::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun