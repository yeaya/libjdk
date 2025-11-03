#include <sun/nio/cs/ext/IBM950.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM950$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM950$EncodeHolder.h>
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
using $IBM950$DecodeHolder = ::sun::nio::cs::ext::IBM950$DecodeHolder;
using $IBM950$EncodeHolder = ::sun::nio::cs::ext::IBM950$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM950_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM950::*)()>(&IBM950::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM950_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM950$EncodeHolder", "sun.nio.cs.ext.IBM950", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM950$DecodeHolder", "sun.nio.cs.ext.IBM950", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM950_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM950",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM950_MethodInfo_,
	nullptr,
	nullptr,
	_IBM950_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM950$EncodeHolder,sun.nio.cs.ext.IBM950$DecodeHolder"
};

$Object* allocate$IBM950($Class* clazz) {
	return $of($alloc(IBM950));
}

int32_t IBM950::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM950::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM950::toString() {
	 return this->$Charset::toString();
}

$Object* IBM950::clone() {
	 return this->$Charset::clone();
}

void IBM950::finalize() {
	this->$Charset::finalize();
}

void IBM950::init$() {
	$Charset::init$("x-IBM950"_s, $($ExtendedCharsets::aliasesFor("x-IBM950"_s)));
}

$String* IBM950::historicalName() {
	return "Cp950"_s;
}

bool IBM950::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM950, cs)));
}

$CharsetDecoder* IBM950::newDecoder() {
	$init($IBM950$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM950$DecodeHolder::b2c, $IBM950$DecodeHolder::b2cSB, 64, 254, true);
}

$CharsetEncoder* IBM950::newEncoder() {
	$init($IBM950$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM950$EncodeHolder::c2b, $IBM950$EncodeHolder::c2bIndex, true);
}

IBM950::IBM950() {
}

$Class* IBM950::load$($String* name, bool initialize) {
	$loadClass(IBM950, name, initialize, &_IBM950_ClassInfo_, allocate$IBM950);
	return class$;
}

$Class* IBM950::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun