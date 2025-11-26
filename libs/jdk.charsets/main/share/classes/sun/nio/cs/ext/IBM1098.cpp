#include <sun/nio/cs/ext/IBM1098.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1098$Holder.h>
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
using $IBM1098$Holder = ::sun::nio::cs::ext::IBM1098$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1098_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1098::*)()>(&IBM1098::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1098_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1098$Holder", "sun.nio.cs.ext.IBM1098", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM1098_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1098",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1098_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1098_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1098$Holder"
};

$Object* allocate$IBM1098($Class* clazz) {
	return $of($alloc(IBM1098));
}

int32_t IBM1098::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1098::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1098::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1098::clone() {
	 return this->$Charset::clone();
}

void IBM1098::finalize() {
	this->$Charset::finalize();
}

void IBM1098::init$() {
	$Charset::init$("x-IBM1098"_s, $($ExtendedCharsets::aliasesFor("x-IBM1098"_s)));
}

$String* IBM1098::historicalName() {
	return "Cp1098"_s;
}

bool IBM1098::contains($Charset* cs) {
	return ($instanceOf(IBM1098, cs));
}

$CharsetDecoder* IBM1098::newDecoder() {
	$init($IBM1098$Holder);
	return $new($SingleByte$Decoder, this, $IBM1098$Holder::b2c, false, false);
}

$CharsetEncoder* IBM1098::newEncoder() {
	$init($IBM1098$Holder);
	return $new($SingleByte$Encoder, this, $IBM1098$Holder::c2b, $IBM1098$Holder::c2bIndex, false);
}

IBM1098::IBM1098() {
}

$Class* IBM1098::load$($String* name, bool initialize) {
	$loadClass(IBM1098, name, initialize, &_IBM1098_ClassInfo_, allocate$IBM1098);
	return class$;
}

$Class* IBM1098::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun