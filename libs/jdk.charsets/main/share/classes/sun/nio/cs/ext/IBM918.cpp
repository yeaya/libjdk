#include <sun/nio/cs/ext/IBM918.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM918$Holder.h>
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
using $IBM918$Holder = ::sun::nio::cs::ext::IBM918$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM918_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM918::*)()>(&IBM918::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM918_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM918$Holder", "sun.nio.cs.ext.IBM918", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM918_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM918",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM918_MethodInfo_,
	nullptr,
	nullptr,
	_IBM918_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM918$Holder"
};

$Object* allocate$IBM918($Class* clazz) {
	return $of($alloc(IBM918));
}

int32_t IBM918::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM918::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM918::toString() {
	 return this->$Charset::toString();
}

$Object* IBM918::clone() {
	 return this->$Charset::clone();
}

void IBM918::finalize() {
	this->$Charset::finalize();
}

void IBM918::init$() {
	$Charset::init$("IBM918"_s, $($ExtendedCharsets::aliasesFor("IBM918"_s)));
}

$String* IBM918::historicalName() {
	return "Cp918"_s;
}

bool IBM918::contains($Charset* cs) {
	return ($instanceOf(IBM918, cs));
}

$CharsetDecoder* IBM918::newDecoder() {
	$init($IBM918$Holder);
	return $new($SingleByte$Decoder, this, $IBM918$Holder::b2c, false, false);
}

$CharsetEncoder* IBM918::newEncoder() {
	$init($IBM918$Holder);
	return $new($SingleByte$Encoder, this, $IBM918$Holder::c2b, $IBM918$Holder::c2bIndex, false);
}

IBM918::IBM918() {
}

$Class* IBM918::load$($String* name, bool initialize) {
	$loadClass(IBM918, name, initialize, &_IBM918_ClassInfo_, allocate$IBM918);
	return class$;
}

$Class* IBM918::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun