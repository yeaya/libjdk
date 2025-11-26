#include <sun/nio/cs/ext/IBM1141.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1141$Holder.h>
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
using $IBM1141$Holder = ::sun::nio::cs::ext::IBM1141$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1141_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1141::*)()>(&IBM1141::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1141_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1141$Holder", "sun.nio.cs.ext.IBM1141", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1141_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1141",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1141_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1141_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1141$Holder"
};

$Object* allocate$IBM1141($Class* clazz) {
	return $of($alloc(IBM1141));
}

int32_t IBM1141::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1141::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1141::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1141::clone() {
	 return this->$Charset::clone();
}

void IBM1141::finalize() {
	this->$Charset::finalize();
}

void IBM1141::init$() {
	$Charset::init$("IBM01141"_s, $($ExtendedCharsets::aliasesFor("IBM01141"_s)));
}

$String* IBM1141::historicalName() {
	return "Cp1141"_s;
}

bool IBM1141::contains($Charset* cs) {
	return ($instanceOf(IBM1141, cs));
}

$CharsetDecoder* IBM1141::newDecoder() {
	$init($IBM1141$Holder);
	return $new($SingleByte$Decoder, this, $IBM1141$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1141::newEncoder() {
	$init($IBM1141$Holder);
	return $new($SingleByte$Encoder, this, $IBM1141$Holder::c2b, $IBM1141$Holder::c2bIndex, false);
}

IBM1141::IBM1141() {
}

$Class* IBM1141::load$($String* name, bool initialize) {
	$loadClass(IBM1141, name, initialize, &_IBM1141_ClassInfo_, allocate$IBM1141);
	return class$;
}

$Class* IBM1141::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun