#include <sun/nio/cs/ext/IBM865.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM865$Holder.h>
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
using $IBM865$Holder = ::sun::nio::cs::ext::IBM865$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM865_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM865::*)()>(&IBM865::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM865_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM865$Holder", "sun.nio.cs.ext.IBM865", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM865_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM865",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM865_MethodInfo_,
	nullptr,
	nullptr,
	_IBM865_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM865$Holder"
};

$Object* allocate$IBM865($Class* clazz) {
	return $of($alloc(IBM865));
}

int32_t IBM865::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM865::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM865::toString() {
	 return this->$Charset::toString();
}

$Object* IBM865::clone() {
	 return this->$Charset::clone();
}

void IBM865::finalize() {
	this->$Charset::finalize();
}

void IBM865::init$() {
	$Charset::init$("IBM865"_s, $($ExtendedCharsets::aliasesFor("IBM865"_s)));
}

$String* IBM865::historicalName() {
	return "Cp865"_s;
}

bool IBM865::contains($Charset* cs) {
	return ($instanceOf(IBM865, cs));
}

$CharsetDecoder* IBM865::newDecoder() {
	$init($IBM865$Holder);
	return $new($SingleByte$Decoder, this, $IBM865$Holder::b2c, false, false);
}

$CharsetEncoder* IBM865::newEncoder() {
	$init($IBM865$Holder);
	return $new($SingleByte$Encoder, this, $IBM865$Holder::c2b, $IBM865$Holder::c2bIndex, false);
}

IBM865::IBM865() {
}

$Class* IBM865::load$($String* name, bool initialize) {
	$loadClass(IBM865, name, initialize, &_IBM865_ClassInfo_, allocate$IBM865);
	return class$;
}

$Class* IBM865::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun