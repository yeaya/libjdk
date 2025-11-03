#include <sun/nio/cs/ext/IBM1381.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM1381$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM1381$EncodeHolder.h>
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
using $IBM1381$DecodeHolder = ::sun::nio::cs::ext::IBM1381$DecodeHolder;
using $IBM1381$EncodeHolder = ::sun::nio::cs::ext::IBM1381$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM1381_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM1381::*)()>(&IBM1381::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM1381_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM1381$EncodeHolder", "sun.nio.cs.ext.IBM1381", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM1381$DecodeHolder", "sun.nio.cs.ext.IBM1381", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM1381_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM1381",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM1381_MethodInfo_,
	nullptr,
	nullptr,
	_IBM1381_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM1381$EncodeHolder,sun.nio.cs.ext.IBM1381$DecodeHolder"
};

$Object* allocate$IBM1381($Class* clazz) {
	return $of($alloc(IBM1381));
}

int32_t IBM1381::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM1381::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM1381::toString() {
	 return this->$Charset::toString();
}

$Object* IBM1381::clone() {
	 return this->$Charset::clone();
}

void IBM1381::finalize() {
	this->$Charset::finalize();
}

void IBM1381::init$() {
	$Charset::init$("x-IBM1381"_s, $($ExtendedCharsets::aliasesFor("x-IBM1381"_s)));
}

$String* IBM1381::historicalName() {
	return "Cp1381"_s;
}

bool IBM1381::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM1381, cs)));
}

$CharsetDecoder* IBM1381::newDecoder() {
	$init($IBM1381$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM1381$DecodeHolder::b2c, $IBM1381$DecodeHolder::b2cSB, 161, 254, true);
}

$CharsetEncoder* IBM1381::newEncoder() {
	$init($IBM1381$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM1381$EncodeHolder::c2b, $IBM1381$EncodeHolder::c2bIndex, true);
}

IBM1381::IBM1381() {
}

$Class* IBM1381::load$($String* name, bool initialize) {
	$loadClass(IBM1381, name, initialize, &_IBM1381_ClassInfo_, allocate$IBM1381);
	return class$;
}

$Class* IBM1381::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun