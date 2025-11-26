#include <sun/nio/cs/ext/IBM949.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM949$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM949$EncodeHolder.h>
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
using $IBM949$DecodeHolder = ::sun::nio::cs::ext::IBM949$DecodeHolder;
using $IBM949$EncodeHolder = ::sun::nio::cs::ext::IBM949$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM949_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM949::*)()>(&IBM949::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM949_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM949$EncodeHolder", "sun.nio.cs.ext.IBM949", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM949$DecodeHolder", "sun.nio.cs.ext.IBM949", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM949_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM949",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM949_MethodInfo_,
	nullptr,
	nullptr,
	_IBM949_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM949$EncodeHolder,sun.nio.cs.ext.IBM949$DecodeHolder"
};

$Object* allocate$IBM949($Class* clazz) {
	return $of($alloc(IBM949));
}

int32_t IBM949::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM949::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM949::toString() {
	 return this->$Charset::toString();
}

$Object* IBM949::clone() {
	 return this->$Charset::clone();
}

void IBM949::finalize() {
	this->$Charset::finalize();
}

void IBM949::init$() {
	$Charset::init$("x-IBM949"_s, $($ExtendedCharsets::aliasesFor("x-IBM949"_s)));
}

$String* IBM949::historicalName() {
	return "Cp949"_s;
}

bool IBM949::contains($Charset* cs) {
	return ($instanceOf(IBM949, cs));
}

$CharsetDecoder* IBM949::newDecoder() {
	$init($IBM949$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM949$DecodeHolder::b2c, $IBM949$DecodeHolder::b2cSB, 161, 254, false);
}

$CharsetEncoder* IBM949::newEncoder() {
	$init($IBM949$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM949$EncodeHolder::c2b, $IBM949$EncodeHolder::c2bIndex, false);
}

IBM949::IBM949() {
}

$Class* IBM949::load$($String* name, bool initialize) {
	$loadClass(IBM949, name, initialize, &_IBM949_ClassInfo_, allocate$IBM949);
	return class$;
}

$Class* IBM949::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun