#include <sun/nio/cs/ext/IBM942.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/IBM942$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM942$EncodeHolder.h>
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
using $IBM942$DecodeHolder = ::sun::nio::cs::ext::IBM942$DecodeHolder;
using $IBM942$EncodeHolder = ::sun::nio::cs::ext::IBM942$EncodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _IBM942_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IBM942::*)()>(&IBM942::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _IBM942_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM942$EncodeHolder", "sun.nio.cs.ext.IBM942", "EncodeHolder", $STATIC},
	{"sun.nio.cs.ext.IBM942$DecodeHolder", "sun.nio.cs.ext.IBM942", "DecodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM942_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.IBM942",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_IBM942_MethodInfo_,
	nullptr,
	nullptr,
	_IBM942_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM942$EncodeHolder,sun.nio.cs.ext.IBM942$DecodeHolder"
};

$Object* allocate$IBM942($Class* clazz) {
	return $of($alloc(IBM942));
}

int32_t IBM942::hashCode() {
	 return this->$Charset::hashCode();
}

bool IBM942::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* IBM942::toString() {
	 return this->$Charset::toString();
}

$Object* IBM942::clone() {
	 return this->$Charset::clone();
}

void IBM942::finalize() {
	this->$Charset::finalize();
}

void IBM942::init$() {
	$Charset::init$("x-IBM942"_s, $($ExtendedCharsets::aliasesFor("x-IBM942"_s)));
}

$String* IBM942::historicalName() {
	return "Cp942"_s;
}

bool IBM942::contains($Charset* cs) {
	return ($instanceOf(IBM942, cs));
}

$CharsetDecoder* IBM942::newDecoder() {
	$init($IBM942$DecodeHolder);
	return $new($DoubleByte$Decoder, this, $IBM942$DecodeHolder::b2c, $IBM942$DecodeHolder::b2cSB, 64, 252, false);
}

$CharsetEncoder* IBM942::newEncoder() {
	$init($IBM942$EncodeHolder);
	return $new($DoubleByte$Encoder, this, $IBM942$EncodeHolder::c2b, $IBM942$EncodeHolder::c2bIndex, false);
}

IBM942::IBM942() {
}

$Class* IBM942::load$($String* name, bool initialize) {
	$loadClass(IBM942, name, initialize, &_IBM942_ClassInfo_, allocate$IBM942);
	return class$;
}

$Class* IBM942::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun