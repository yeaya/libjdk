#include <sun/nio/cs/ext/MS50220$Holder.h>

#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X.h>
#include <sun/nio/cs/ext/JIS_X_0212_MS5022X.h>
#include <sun/nio/cs/ext/MS50220.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS5022X = ::sun::nio::cs::ext::JIS_X_0208_MS5022X;
using $JIS_X_0212_MS5022X = ::sun::nio::cs::ext::JIS_X_0212_MS5022X;
using $MS50220 = ::sun::nio::cs::ext::MS50220;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MS50220$Holder_FieldInfo_[] = {
	{"DEC0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS50220$Holder, DEC0208)},
	{"DEC0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS50220$Holder, DEC0212)},
	{"ENC0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS50220$Holder, ENC0208)},
	{"ENC0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MS50220$Holder, ENC0212)},
	{}
};

$MethodInfo _MS50220$Holder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MS50220$Holder::*)()>(&MS50220$Holder::init$))},
	{}
};

$InnerClassInfo _MS50220$Holder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MS50220$Holder", "sun.nio.cs.ext.MS50220", "Holder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MS50220$Holder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MS50220$Holder",
	"java.lang.Object",
	nullptr,
	_MS50220$Holder_FieldInfo_,
	_MS50220$Holder_MethodInfo_,
	nullptr,
	nullptr,
	_MS50220$Holder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MS50220"
};

$Object* allocate$MS50220$Holder($Class* clazz) {
	return $of($alloc(MS50220$Holder));
}

$DoubleByte$Decoder* MS50220$Holder::DEC0208 = nullptr;
$DoubleByte$Decoder* MS50220$Holder::DEC0212 = nullptr;
$DoubleByte$Encoder* MS50220$Holder::ENC0208 = nullptr;
$DoubleByte$Encoder* MS50220$Holder::ENC0212 = nullptr;

void MS50220$Holder::init$() {
}

void clinit$MS50220$Holder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MS50220$Holder::DEC0208, $cast($DoubleByte$Decoder, $$new($JIS_X_0208_MS5022X)->newDecoder()));
	$assignStatic(MS50220$Holder::DEC0212, $cast($DoubleByte$Decoder, $$new($JIS_X_0212_MS5022X)->newDecoder()));
	$assignStatic(MS50220$Holder::ENC0208, $cast($DoubleByte$Encoder, $$new($JIS_X_0208_MS5022X)->newEncoder()));
	$assignStatic(MS50220$Holder::ENC0212, $cast($DoubleByte$Encoder, $$new($JIS_X_0212_MS5022X)->newEncoder()));
}

MS50220$Holder::MS50220$Holder() {
}

$Class* MS50220$Holder::load$($String* name, bool initialize) {
	$loadClass(MS50220$Holder, name, initialize, &_MS50220$Holder_ClassInfo_, clinit$MS50220$Holder, allocate$MS50220$Holder);
	return class$;
}

$Class* MS50220$Holder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun