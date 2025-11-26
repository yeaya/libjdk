#include <sun/nio/cs/ext/MacCentralEurope.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacCentralEurope$Holder.h>
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
using $MacCentralEurope$Holder = ::sun::nio::cs::ext::MacCentralEurope$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacCentralEurope_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacCentralEurope::*)()>(&MacCentralEurope::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacCentralEurope_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacCentralEurope$Holder", "sun.nio.cs.ext.MacCentralEurope", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacCentralEurope_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacCentralEurope",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacCentralEurope_MethodInfo_,
	nullptr,
	nullptr,
	_MacCentralEurope_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacCentralEurope$Holder"
};

$Object* allocate$MacCentralEurope($Class* clazz) {
	return $of($alloc(MacCentralEurope));
}

int32_t MacCentralEurope::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacCentralEurope::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacCentralEurope::toString() {
	 return this->$Charset::toString();
}

$Object* MacCentralEurope::clone() {
	 return this->$Charset::clone();
}

void MacCentralEurope::finalize() {
	this->$Charset::finalize();
}

void MacCentralEurope::init$() {
	$Charset::init$("x-MacCentralEurope"_s, $($ExtendedCharsets::aliasesFor("x-MacCentralEurope"_s)));
}

$String* MacCentralEurope::historicalName() {
	return "MacCentralEurope"_s;
}

bool MacCentralEurope::contains($Charset* cs) {
	return ($instanceOf(MacCentralEurope, cs));
}

$CharsetDecoder* MacCentralEurope::newDecoder() {
	$init($MacCentralEurope$Holder);
	return $new($SingleByte$Decoder, this, $MacCentralEurope$Holder::b2c, false, false);
}

$CharsetEncoder* MacCentralEurope::newEncoder() {
	$init($MacCentralEurope$Holder);
	return $new($SingleByte$Encoder, this, $MacCentralEurope$Holder::c2b, $MacCentralEurope$Holder::c2bIndex, false);
}

MacCentralEurope::MacCentralEurope() {
}

$Class* MacCentralEurope::load$($String* name, bool initialize) {
	$loadClass(MacCentralEurope, name, initialize, &_MacCentralEurope_ClassInfo_, allocate$MacCentralEurope);
	return class$;
}

$Class* MacCentralEurope::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun