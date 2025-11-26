#include <sun/nio/cs/ext/IBM285.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM285$Holder.h>
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
using $IBM285$Holder = ::sun::nio::cs::ext::IBM285$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM285_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM285::*)()>(&IBM285::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM285_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM285$Holder", "sun.nio.cs.ext.IBM285", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM285_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM285",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM285_MethodInfo_,
	nullptr,
	nullptr,
	_IBM285_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM285$Holder"
};

$Object* allocate$IBM285($Class* clazz) {
	return $of($alloc(IBM285));
}

int32_t IBM285::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM285::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM285::toString() {
	 return this->$Charset::toString();
}

$Object* IBM285::clone() {
	 return this->$Charset::clone();
}

void IBM285::finalize() {
	this->$Charset::finalize();
}

void IBM285::init$() {
	$Charset::init$("IBM285"_s, $($ExtendedCharsets::aliasesFor("IBM285"_s)));
}

$String* IBM285::historicalName() {
	return "Cp285"_s;
}

bool IBM285::contains($Charset* cs) {
	return ($instanceOf(IBM285, cs));
}

$CharsetDecoder* IBM285::newDecoder() {
	$init($IBM285$Holder);
	return $new($SingleByte$Decoder, this, $IBM285$Holder::b2c, false, true);
}

$CharsetEncoder* IBM285::newEncoder() {
	$init($IBM285$Holder);
	return $new($SingleByte$Encoder, this, $IBM285$Holder::c2b, $IBM285$Holder::c2bIndex, false);
}

IBM285::IBM285() {
}

$Class* IBM285::load$($String* name, bool initialize) {
	$loadClass(IBM285, name, initialize, &_IBM285_ClassInfo_, allocate$IBM285);
	return class$;
}

$Class* IBM285::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun