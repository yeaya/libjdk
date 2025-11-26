#include <sun/nio/cs/ext/IBM948.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM948$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM948$EncodeHolder.h>
#include <jcpp.h>

using $charArray2 = $Array<char16_t, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $IBM948$DecodeHolder = ::sun::nio::cs::ext::IBM948$DecodeHolder;
using $IBM948$EncodeHolder = ::sun::nio::cs::ext::IBM948$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM948_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM948::*)()>(&IBM948::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM948_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM948$EncodeHolder", "sun.nio.cs.ext.IBM948", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM948$DecodeHolder", "sun.nio.cs.ext.IBM948", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM948_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM948",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM948_MethodInfo_,
	nullptr,
	nullptr,
	_IBM948_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM948$EncodeHolder,sun.nio.cs.ext.IBM948$DecodeHolder"
};

$Object* allocate$IBM948($Class* clazz) {
	return $of($alloc(IBM948));
}

int32_t IBM948::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM948::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM948::toString() {
	 return this->$Charset::toString();
}

$Object* IBM948::clone() {
	 return this->$Charset::clone();
}

void IBM948::finalize() {
	this->$Charset::finalize();
}

void IBM948::init$() {
	$Charset::init$("x-IBM948"_s, $($ExtendedCharsets::aliasesFor("x-IBM948"_s)));
}

$String* IBM948::historicalName() {
	return "Cp948"_s;
}

bool IBM948::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM948, cs)));
}

$CharsetDecoder* IBM948::newDecoder() {
	$init($IBM948$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM948$DecodeHolder::b2c, $IBM948$DecodeHolder::b2cSB, 64, 252, true);
}

$CharsetEncoder* IBM948::newEncoder() {
	$init($IBM948$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM948$EncodeHolder::c2b, $IBM948$EncodeHolder::c2bIndex, true);
}

IBM948::IBM948() {
}

$Class* IBM948::load$($String* name, bool initialize) {
	$loadClass(IBM948, name, initialize, &_IBM948_ClassInfo_, allocate$IBM948);
	return class$;
}

$Class* IBM948::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun