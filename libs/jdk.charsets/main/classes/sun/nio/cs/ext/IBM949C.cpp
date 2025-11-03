#include <sun/nio/cs/ext/IBM949C.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM949$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM949C$Holder.h>
#include <jcpp.h>

#undef IBM949C

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
using $IBM949$DecodeHolder = ::sun::nio::cs::ext::IBM949$DecodeHolder;
using $IBM949C$Holder = ::sun::nio::cs::ext::IBM949C$Holder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM949C_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM949C::*)()>(&IBM949C::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM949C_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM949C$Holder", "sun.nio.cs.ext.IBM949C", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IBM949C_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM949C",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM949C_MethodInfo_,
	nullptr,
	nullptr,
	_IBM949C_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM949C$Holder"
};

$Object* allocate$IBM949C($Class* clazz) {
	return $of($alloc(IBM949C));
}

int32_t IBM949C::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM949C::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM949C::toString() {
	 return this->$Charset::toString();
}

$Object* IBM949C::clone() {
	 return this->$Charset::clone();
}

void IBM949C::finalize() {
	this->$Charset::finalize();
}

void IBM949C::init$() {
	$Charset::init$("x-IBM949C"_s, $($ExtendedCharsets::aliasesFor("x-IBM949C"_s)));
}

$String* IBM949C::historicalName() {
	return "Cp949C"_s;
}

bool IBM949C::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(IBM949C, cs)));
}

$CharsetDecoder* IBM949C::newDecoder() {
	$init($IBM949$DecodeHolder);
	$init($IBM949C$Holder);
	return $new($DoubleByte$Decoder, this, $IBM949$DecodeHolder::b2c, $IBM949C$Holder::b2cSB, 161, 254);
}

$CharsetEncoder* IBM949C::newEncoder() {
	$init($IBM949C$Holder);
	return $new($DoubleByte$Encoder, this, $IBM949C$Holder::c2b, $IBM949C$Holder::c2bIndex);
}

IBM949C::IBM949C() {
}

$Class* IBM949C::load$($String* name, bool initialize) {
	$loadClass(IBM949C, name, initialize, &_IBM949C_ClassInfo_, allocate$IBM949C);
	return class$;
}

$Class* IBM949C::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun