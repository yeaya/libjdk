#include <sun/nio/cs/ext/MacHebrew.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MacHebrew$Holder.h>
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
using $MacHebrew$Holder = ::sun::nio::cs::ext::MacHebrew$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MacHebrew_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MacHebrew::*)()>(&MacHebrew::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MacHebrew_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MacHebrew$Holder", "sun.nio.cs.ext.MacHebrew", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MacHebrew_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MacHebrew",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MacHebrew_MethodInfo_,
	nullptr,
	nullptr,
	_MacHebrew_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MacHebrew$Holder"
};

$Object* allocate$MacHebrew($Class* clazz) {
	return $of($alloc(MacHebrew));
}

int32_t MacHebrew::hashCode() {
	 return this->$Charset::hashCode();
}

bool MacHebrew::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MacHebrew::toString() {
	 return this->$Charset::toString();
}

$Object* MacHebrew::clone() {
	 return this->$Charset::clone();
}

void MacHebrew::finalize() {
	this->$Charset::finalize();
}

void MacHebrew::init$() {
	$Charset::init$("x-MacHebrew"_s, $($ExtendedCharsets::aliasesFor("x-MacHebrew"_s)));
}

$String* MacHebrew::historicalName() {
	return "MacHebrew"_s;
}

bool MacHebrew::contains($Charset* cs) {
	return ($instanceOf(MacHebrew, cs));
}

$CharsetDecoder* MacHebrew::newDecoder() {
	$init($MacHebrew$Holder);
	return $new($SingleByte$Decoder, this, $MacHebrew$Holder::b2c, false, false);
}

$CharsetEncoder* MacHebrew::newEncoder() {
	$init($MacHebrew$Holder);
	return $new($SingleByte$Encoder, this, $MacHebrew$Holder::c2b, $MacHebrew$Holder::c2bIndex, false);
}

MacHebrew::MacHebrew() {
}

$Class* MacHebrew::load$($String* name, bool initialize) {
	$loadClass(MacHebrew, name, initialize, &_MacHebrew_ClassInfo_, allocate$MacHebrew);
	return class$;
}

$Class* MacHebrew::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun