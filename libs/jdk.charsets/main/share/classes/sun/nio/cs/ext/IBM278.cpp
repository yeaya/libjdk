#include <sun/nio/cs/ext/IBM278.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM278$Holder.h>
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
using $IBM278$Holder = ::sun::nio::cs::ext::IBM278$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM278_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM278::*)()>(&IBM278::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM278_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM278$Holder", "sun.nio.cs.ext.IBM278", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM278_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM278",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM278_MethodInfo_,
	nullptr,
	nullptr,
	_IBM278_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM278$Holder"
};

$Object* allocate$IBM278($Class* clazz) {
	return $of($alloc(IBM278));
}

int32_t IBM278::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM278::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM278::toString() {
	 return this->$Charset::toString();
}

$Object* IBM278::clone() {
	 return this->$Charset::clone();
}

void IBM278::finalize() {
	this->$Charset::finalize();
}

void IBM278::init$() {
	$Charset::init$("IBM278"_s, $($ExtendedCharsets::aliasesFor("IBM278"_s)));
}

$String* IBM278::historicalName() {
	return "Cp278"_s;
}

bool IBM278::contains($Charset* cs) {
	return ($instanceOf(IBM278, cs));
}

$CharsetDecoder* IBM278::newDecoder() {
	$init($IBM278$Holder);
	return $new($SingleByte$Decoder, this, $IBM278$Holder::b2c, false, true);
}

$CharsetEncoder* IBM278::newEncoder() {
	$init($IBM278$Holder);
	return $new($SingleByte$Encoder, this, $IBM278$Holder::c2b, $IBM278$Holder::c2bIndex, false);
}

IBM278::IBM278() {
}

$Class* IBM278::load$($String* name, bool initialize) {
	$loadClass(IBM278, name, initialize, &_IBM278_ClassInfo_, allocate$IBM278);
	return class$;
}

$Class* IBM278::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun