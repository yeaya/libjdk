#include <sun/nio/cs/ext/IBM277.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM277$Holder.h>
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
using $IBM277$Holder = ::sun::nio::cs::ext::IBM277$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM277_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM277::*)()>(&IBM277::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM277_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM277$Holder", "sun.nio.cs.ext.IBM277", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM277_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM277",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM277_MethodInfo_,
	nullptr,
	nullptr,
	_IBM277_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM277$Holder"
};

$Object* allocate$IBM277($Class* clazz) {
	return $of($alloc(IBM277));
}

int32_t IBM277::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM277::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM277::toString() {
	 return this->$Charset::toString();
}

$Object* IBM277::clone() {
	 return this->$Charset::clone();
}

void IBM277::finalize() {
	this->$Charset::finalize();
}

void IBM277::init$() {
	$Charset::init$("IBM277"_s, $($ExtendedCharsets::aliasesFor("IBM277"_s)));
}

$String* IBM277::historicalName() {
	return "Cp277"_s;
}

bool IBM277::contains($Charset* cs) {
	return ($instanceOf(IBM277, cs));
}

$CharsetDecoder* IBM277::newDecoder() {
	$init($IBM277$Holder);
	return $new($SingleByte$Decoder, this, $IBM277$Holder::b2c, false, true);
}

$CharsetEncoder* IBM277::newEncoder() {
	$init($IBM277$Holder);
	return $new($SingleByte$Encoder, this, $IBM277$Holder::c2b, $IBM277$Holder::c2bIndex, false);
}

IBM277::IBM277() {
}

$Class* IBM277::load$($String* name, bool initialize) {
	$loadClass(IBM277, name, initialize, &_IBM277_ClassInfo_, allocate$IBM277);
	return class$;
}

$Class* IBM277::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun