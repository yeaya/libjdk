#include <sun/nio/cs/ext/IBM868.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM868$Holder.h>
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
using $IBM868$Holder = ::sun::nio::cs::ext::IBM868$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM868_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM868::*)()>(&IBM868::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM868_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM868$Holder", "sun.nio.cs.ext.IBM868", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM868_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM868",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM868_MethodInfo_,
	nullptr,
	nullptr,
	_IBM868_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM868$Holder"
};

$Object* allocate$IBM868($Class* clazz) {
	return $of($alloc(IBM868));
}

int32_t IBM868::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM868::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM868::toString() {
	 return this->$Charset::toString();
}

$Object* IBM868::clone() {
	 return this->$Charset::clone();
}

void IBM868::finalize() {
	this->$Charset::finalize();
}

void IBM868::init$() {
	$Charset::init$("IBM868"_s, $($ExtendedCharsets::aliasesFor("IBM868"_s)));
}

$String* IBM868::historicalName() {
	return "Cp868"_s;
}

bool IBM868::contains($Charset* cs) {
	return ($instanceOf(IBM868, cs));
}

$CharsetDecoder* IBM868::newDecoder() {
	$init($IBM868$Holder);
	return $new($SingleByte$Decoder, this, $IBM868$Holder::b2c, false, false);
}

$CharsetEncoder* IBM868::newEncoder() {
	$init($IBM868$Holder);
	return $new($SingleByte$Encoder, this, $IBM868$Holder::c2b, $IBM868$Holder::c2bIndex, false);
}

IBM868::IBM868() {
}

$Class* IBM868::load$($String* name, bool initialize) {
	$loadClass(IBM868, name, initialize, &_IBM868_ClassInfo_, allocate$IBM868);
	return class$;
}

$Class* IBM868::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun