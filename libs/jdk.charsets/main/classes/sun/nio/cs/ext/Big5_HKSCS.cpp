#include <sun/nio/cs/ext/Big5_HKSCS.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
#include <sun/nio/cs/ext/Big5.h>
#include <sun/nio/cs/ext/Big5_HKSCS$Decoder.h>
#include <sun/nio/cs/ext/Big5_HKSCS$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $HKSCS$Decoder = ::sun::nio::cs::HKSCS$Decoder;
using $HKSCS$Encoder = ::sun::nio::cs::HKSCS$Encoder;
using $HistoricallyNamedCharset = ::sun::nio::cs::HistoricallyNamedCharset;
using $Big5 = ::sun::nio::cs::ext::Big5;
using $Big5_HKSCS$Decoder = ::sun::nio::cs::ext::Big5_HKSCS$Decoder;
using $Big5_HKSCS$Encoder = ::sun::nio::cs::ext::Big5_HKSCS$Encoder;
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _Big5_HKSCS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Big5_HKSCS::*)()>(&Big5_HKSCS::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _Big5_HKSCS_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.Big5_HKSCS$Encoder", "sun.nio.cs.ext.Big5_HKSCS", "Encoder", $STATIC},
	{"sun.nio.cs.ext.Big5_HKSCS$Decoder", "sun.nio.cs.ext.Big5_HKSCS", "Decoder", $STATIC},
	{}
};

$ClassInfo _Big5_HKSCS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.Big5_HKSCS",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_Big5_HKSCS_MethodInfo_,
	nullptr,
	nullptr,
	_Big5_HKSCS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.Big5_HKSCS$Encoder,sun.nio.cs.ext.Big5_HKSCS$Decoder"
};

$Object* allocate$Big5_HKSCS($Class* clazz) {
	return $of($alloc(Big5_HKSCS));
}

int32_t Big5_HKSCS::hashCode() {
	 return this->$Charset::hashCode();
}

bool Big5_HKSCS::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* Big5_HKSCS::toString() {
	 return this->$Charset::toString();
}

$Object* Big5_HKSCS::clone() {
	 return this->$Charset::clone();
}

void Big5_HKSCS::finalize() {
	this->$Charset::finalize();
}

void Big5_HKSCS::init$() {
	$Charset::init$("Big5-HKSCS"_s, $($ExtendedCharsets::aliasesFor("Big5-HKSCS"_s)));
}

$String* Big5_HKSCS::historicalName() {
	return "Big5_HKSCS"_s;
}

bool Big5_HKSCS::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($Big5, cs)) || ($instanceOf(Big5_HKSCS, cs)));
}

$CharsetDecoder* Big5_HKSCS::newDecoder() {
	return $new($Big5_HKSCS$Decoder, this);
}

$CharsetEncoder* Big5_HKSCS::newEncoder() {
	return $new($Big5_HKSCS$Encoder, this);
}

Big5_HKSCS::Big5_HKSCS() {
}

$Class* Big5_HKSCS::load$($String* name, bool initialize) {
	$loadClass(Big5_HKSCS, name, initialize, &_Big5_HKSCS_ClassInfo_, allocate$Big5_HKSCS);
	return class$;
}

$Class* Big5_HKSCS::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun