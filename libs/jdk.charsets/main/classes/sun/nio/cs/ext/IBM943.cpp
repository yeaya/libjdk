#include <sun/nio/cs/ext/IBM943.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM943$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM943$EncodeHolder.h>
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
using $IBM943$DecodeHolder = ::sun::nio::cs::ext::IBM943$DecodeHolder;
using $IBM943$EncodeHolder = ::sun::nio::cs::ext::IBM943$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM943_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM943::*)()>(&IBM943::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM943_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM943$EncodeHolder", "sun.nio.cs.ext.IBM943", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM943$DecodeHolder", "sun.nio.cs.ext.IBM943", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM943_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM943",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM943_MethodInfo_,
	nullptr,
	nullptr,
	_IBM943_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM943$EncodeHolder,sun.nio.cs.ext.IBM943$DecodeHolder"
};

$Object* allocate$IBM943($Class* clazz) {
	return $of($alloc(IBM943));
}

int32_t IBM943::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM943::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM943::toString() {
	 return this->$Charset::toString();
}

$Object* IBM943::clone() {
	 return this->$Charset::clone();
}

void IBM943::finalize() {
	this->$Charset::finalize();
}

void IBM943::init$() {
	$Charset::init$("x-IBM943"_s, $($ExtendedCharsets::aliasesFor("x-IBM943"_s)));
}

$String* IBM943::historicalName() {
	return "Cp943"_s;
}

bool IBM943::contains($Charset* cs) {
	return ($instanceOf(IBM943, cs));
}

$CharsetDecoder* IBM943::newDecoder() {
	$init($IBM943$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM943$DecodeHolder::b2c, $IBM943$DecodeHolder::b2cSB, 64, 252, false);
}

$CharsetEncoder* IBM943::newEncoder() {
	$init($IBM943$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM943$EncodeHolder::c2b, $IBM943$EncodeHolder::c2bIndex, false);
}

IBM943::IBM943() {
}

$Class* IBM943::load$($String* name, bool initialize) {
	$loadClass(IBM943, name, initialize, &_IBM943_ClassInfo_, allocate$IBM943);
	return class$;
}

$Class* IBM943::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun