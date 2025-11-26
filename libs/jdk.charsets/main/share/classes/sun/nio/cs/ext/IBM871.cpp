#include <sun/nio/cs/ext/IBM871.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM871$Holder.h>
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
using $IBM871$Holder = ::sun::nio::cs::ext::IBM871$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM871_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM871::*)()>(&IBM871::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM871_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM871$Holder", "sun.nio.cs.ext.IBM871", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM871_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM871",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM871_MethodInfo_,
	nullptr,
	nullptr,
	_IBM871_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM871$Holder"
};

$Object* allocate$IBM871($Class* clazz) {
	return $of($alloc(IBM871));
}

int32_t IBM871::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM871::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM871::toString() {
	 return this->$Charset::toString();
}

$Object* IBM871::clone() {
	 return this->$Charset::clone();
}

void IBM871::finalize() {
	this->$Charset::finalize();
}

void IBM871::init$() {
	$Charset::init$("IBM871"_s, $($ExtendedCharsets::aliasesFor("IBM871"_s)));
}

$String* IBM871::historicalName() {
	return "Cp871"_s;
}

bool IBM871::contains($Charset* cs) {
	return ($instanceOf(IBM871, cs));
}

$CharsetDecoder* IBM871::newDecoder() {
	$init($IBM871$Holder);
	return $new($SingleByte$Decoder, this, $IBM871$Holder::b2c, false, true);
}

$CharsetEncoder* IBM871::newEncoder() {
	$init($IBM871$Holder);
	return $new($SingleByte$Encoder, this, $IBM871$Holder::c2b, $IBM871$Holder::c2bIndex, false);
}

IBM871::IBM871() {
}

$Class* IBM871::load$($String* name, bool initialize) {
	$loadClass(IBM871, name, initialize, &_IBM871_ClassInfo_, allocate$IBM871);
	return class$;
}

$Class* IBM871::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun