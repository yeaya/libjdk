#include <sun/nio/cs/ext/IBM943C.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM943$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM943C$Holder.h>
#include <jcpp.h>

#undef IBM943C

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
using $IBM943$DecodeHolder = ::sun::nio::cs::ext::IBM943$DecodeHolder;
using $IBM943C$Holder = ::sun::nio::cs::ext::IBM943C$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM943C_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM943C::*)()>(&IBM943C::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM943C_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM943C$Holder", "sun.nio.cs.ext.IBM943C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM943C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM943C",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM943C_MethodInfo_,
	nullptr,
	nullptr,
	_IBM943C_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM943C$Holder"
};

$Object* allocate$IBM943C($Class* clazz) {
	return $of($alloc(IBM943C));
}

int32_t IBM943C::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM943C::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM943C::toString() {
	 return this->$Charset::toString();
}

$Object* IBM943C::clone() {
	 return this->$Charset::clone();
}

void IBM943C::finalize() {
	this->$Charset::finalize();
}

void IBM943C::init$() {
	$Charset::init$("x-IBM943C"_s, $($ExtendedCharsets::aliasesFor("x-IBM943C"_s)));
}

$String* IBM943C::historicalName() {
	return "Cp943C"_s;
}

bool IBM943C::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM943C, cs)));
}

$CharsetDecoder* IBM943C::newDecoder() {
	$init($IBM943$DecodeHolder);
	$init($IBM943C$Holder);
	return $new($DoubleByte$Decoder, this, $IBM943$DecodeHolder::b2c, $IBM943C$Holder::b2cSB, 64, 252);
}

$CharsetEncoder* IBM943C::newEncoder() {
	$init($IBM943C$Holder);
	return $new($DoubleByte$Encoder, this, $IBM943C$Holder::c2b, $IBM943C$Holder::c2bIndex);
}

IBM943C::IBM943C() {
}

$Class* IBM943C::load$($String* name, bool initialize) {
	$loadClass(IBM943C, name, initialize, &_IBM943C_ClassInfo_, allocate$IBM943C);
	return class$;
}

$Class* IBM943C::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun