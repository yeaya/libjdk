#include <sun/nio/cs/ext/MS950_HKSCS.h>

#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/HKSCS$Decoder.h>
#include <sun/nio/cs/HKSCS$Encoder.h>
#include <sun/nio/cs/ext/ExtendedCharsets.h>
#include <sun/nio/cs/ext/MS950.h>
#include <sun/nio/cs/ext/MS950_HKSCS$Decoder.h>
#include <sun/nio/cs/ext/MS950_HKSCS$Encoder.h>
#include <jcpp.h>

#undef MS950_HKSCS

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
using $ExtendedCharsets = ::sun::nio::cs::ext::ExtendedCharsets;
using $MS950 = ::sun::nio::cs::ext::MS950;
using $MS950_HKSCS$Decoder = ::sun::nio::cs::ext::MS950_HKSCS$Decoder;
using $MS950_HKSCS$Encoder = ::sun::nio::cs::ext::MS950_HKSCS$Encoder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$MethodInfo _MS950_HKSCS_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MS950_HKSCS::*)()>(&MS950_HKSCS::init$))},
	{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC},
	{"historicalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC},
	{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$InnerClassInfo _MS950_HKSCS_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS950_HKSCS$Encoder", "sun.nio.cs.ext.MS950_HKSCS", "Encoder", $PRIVATE | $STATIC},
	{"sun.nio.cs.ext.MS950_HKSCS$Decoder", "sun.nio.cs.ext.MS950_HKSCS", "Decoder", $STATIC},
	{}
};

$ClassInfo _MS950_HKSCS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.nio.cs.ext.MS950_HKSCS",
	"java.nio.charset.Charset",
	"sun.nio.cs.HistoricallyNamedCharset",
	nullptr,
	_MS950_HKSCS_MethodInfo_,
	nullptr,
	nullptr,
	_MS950_HKSCS_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS950_HKSCS$Encoder,sun.nio.cs.ext.MS950_HKSCS$Decoder"
};

$Object* allocate$MS950_HKSCS($Class* clazz) {
	return $of($alloc(MS950_HKSCS));
}

int32_t MS950_HKSCS::hashCode() {
	 return this->$Charset::hashCode();
}

bool MS950_HKSCS::equals(Object$* arg0) {
	 return this->$Charset::equals(arg0);
}

$String* MS950_HKSCS::toString() {
	 return this->$Charset::toString();
}

$Object* MS950_HKSCS::clone() {
	 return this->$Charset::clone();
}

void MS950_HKSCS::finalize() {
	this->$Charset::finalize();
}

void MS950_HKSCS::init$() {
	$Charset::init$("x-MS950-HKSCS"_s, $($ExtendedCharsets::aliasesFor("x-MS950-HKSCS"_s)));
}

$String* MS950_HKSCS::historicalName() {
	return "MS950_HKSCS"_s;
}

bool MS950_HKSCS::contains($Charset* cs) {
	return (($nc($($nc(cs)->name()))->equals("US-ASCII"_s)) || ($instanceOf($MS950, cs)) || ($instanceOf(MS950_HKSCS, cs)));
}

$CharsetDecoder* MS950_HKSCS::newDecoder() {
	return $new($MS950_HKSCS$Decoder, this);
}

$CharsetEncoder* MS950_HKSCS::newEncoder() {
	return $new($MS950_HKSCS$Encoder, this);
}

MS950_HKSCS::MS950_HKSCS() {
}

$Class* MS950_HKSCS::load$($String* name, bool initialize) {
	$loadClass(MS950_HKSCS, name, initialize, &_MS950_HKSCS_ClassInfo_, allocate$MS950_HKSCS);
	return class$;
}

$Class* MS950_HKSCS::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun