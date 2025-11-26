#include <sun/nio/cs/ext/PCK.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/PCK$DecodeHolder.h>
#include <sun/nio/cs/ext/PCK$EncodeHolder.h>
#include <jcpp.h>

#undef PCK

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
using $PCK$DecodeHolder = ::sun::nio::cs::ext::PCK$DecodeHolder;
using $PCK$EncodeHolder = ::sun::nio::cs::ext::PCK$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _PCK_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PCK::*)()>(&PCK::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _PCK_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.PCK$EncodeHolder", "sun.nio.cs.ext.PCK", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.PCK$DecodeHolder", "sun.nio.cs.ext.PCK", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _PCK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.PCK",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_PCK_MethodInfo_,
	nullptr,
	nullptr,
	_PCK_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.PCK$EncodeHolder,sun.nio.cs.ext.PCK$DecodeHolder"
};

$Object* allocate$PCK($Class* clazz) {
	return $of($alloc(PCK));
}

int32_t PCK::hashCode() {
	 return this->$Charset::hashCode();
}

bool PCK::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* PCK::toString() {
	 return this->$Charset::toString();
}

$Object* PCK::clone() {
	 return this->$Charset::clone();
}

void PCK::finalize() {
	this->$Charset::finalize();
}

void PCK::init$() {
	$Charset::init$("x-PCK"_s, $($ExtendedCharsets::aliasesFor("x-PCK"_s)));
}

$String* PCK::historicalName() {
	return "PCK"_s;
}

bool PCK::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf(PCK, cs)));
}

$CharsetDecoder* PCK::newDecoder() {
	$init($PCK$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $PCK$DecodeHolder::b2c, $PCK$DecodeHolder::b2cSB, 64, 252, true);
}

$CharsetEncoder* PCK::newEncoder() {
	$init($PCK$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $PCK$EncodeHolder::c2b, $PCK$EncodeHolder::c2bIndex, true);
}

PCK::PCK() {
}

$Class* PCK::load$($String* name, bool initialize) {
	$loadClass(PCK, name, initialize, &_PCK_ClassInfo_, allocate$PCK);
	return class$;
}

$Class* PCK::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun