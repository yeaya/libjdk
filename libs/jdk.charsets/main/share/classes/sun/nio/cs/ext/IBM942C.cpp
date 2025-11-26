#include <sun/nio/cs/ext/IBM942C.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942C$Holder.h>
#include <jcpp.h>

#undef IBM942C

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
using $IBM942$DecodeHolder = ::sun::nio::cs::ext::IBM942$DecodeHolder;
using $IBM942C$Holder = ::sun::nio::cs::ext::IBM942C$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM942C_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM942C::*)()>(&IBM942C::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM942C_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM942C$Holder", "sun.nio.cs.ext.IBM942C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM942C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM942C",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM942C_MethodInfo_,
	nullptr,
	nullptr,
	_IBM942C_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM942C$Holder"
};

$Object* allocate$IBM942C($Class* clazz) {
	return $of($alloc(IBM942C));
}

int32_t IBM942C::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM942C::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM942C::toString() {
	 return this->$Charset::toString();
}

$Object* IBM942C::clone() {
	 return this->$Charset::clone();
}

void IBM942C::finalize() {
	this->$Charset::finalize();
}

void IBM942C::init$() {
	$Charset::init$("x-IBM942C"_s, $($ExtendedCharsets::aliasesFor("x-IBM942C"_s)));
}

$String* IBM942C::historicalName() {
	return "Cp942C"_s;
}

bool IBM942C::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM942C, cs)));
}

$CharsetDecoder* IBM942C::newDecoder() {
	$init($IBM942$DecodeHolder);
	$init($IBM942C$Holder);
	return $new($DoubleByte$Decoder, this, $IBM942$DecodeHolder::b2c, $IBM942C$Holder::b2cSB, 64, 252);
}

$CharsetEncoder* IBM942C::newEncoder() {
	$init($IBM942C$Holder);
	return $new($DoubleByte$Encoder, this, $IBM942C$Holder::c2b, $IBM942C$Holder::c2bIndex);
}

IBM942C::IBM942C() {
}

$Class* IBM942C::load$($String* name, bool initialize) {
	$loadClass(IBM942C, name, initialize, &_IBM942C_ClassInfo_, allocate$IBM942C);
	return class$;
}

$Class* IBM942C::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun