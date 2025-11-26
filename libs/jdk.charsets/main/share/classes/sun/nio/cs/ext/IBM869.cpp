#include <sun/nio/cs/ext/IBM869.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/SingleByte$Decoder.h>
#include <sun/nio/cs/SingleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM869$Holder.h>
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
using $IBM869$Holder = ::sun::nio::cs::ext::IBM869$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM869_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM869::*)()>(&IBM869::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM869_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM869$Holder", "sun.nio.cs.ext.IBM869", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM869_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM869",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM869_MethodInfo_,
	nullptr,
	nullptr,
	_IBM869_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM869$Holder"
};

$Object* allocate$IBM869($Class* clazz) {
	return $of($alloc(IBM869));
}

int32_t IBM869::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM869::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM869::toString() {
	 return this->$Charset::toString();
}

$Object* IBM869::clone() {
	 return this->$Charset::clone();
}

void IBM869::finalize() {
	this->$Charset::finalize();
}

void IBM869::init$() {
	$Charset::init$("IBM869"_s, $($ExtendedCharsets::aliasesFor("IBM869"_s)));
}

$String* IBM869::historicalName() {
	return "Cp869"_s;
}

bool IBM869::contains($Charset* cs) {
	return ($instanceOf(IBM869, cs));
}

$CharsetDecoder* IBM869::newDecoder() {
	$init($IBM869$Holder);
	return $new($SingleByte$Decoder, this, $IBM869$Holder::b2c, false, false);
}

$CharsetEncoder* IBM869::newEncoder() {
	$init($IBM869$Holder);
	return $new($SingleByte$Encoder, this, $IBM869$Holder::c2b, $IBM869$Holder::c2bIndex, false);
}

IBM869::IBM869() {
}

$Class* IBM869::load$($String* name, bool initialize) {
	$loadClass(IBM869, name, initialize, &_IBM869_ClassInfo_, allocate$IBM869);
	return class$;
}

$Class* IBM869::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun