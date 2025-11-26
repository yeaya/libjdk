#include <sun/nio/cs/ext/MSISO2022JP$CoderHolder.h>

#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932.h>
#include <sun/nio/cs/ext/MSISO2022JP.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS932 = ::sun::nio::cs::ext::JIS_X_0208_MS932;
using $MSISO2022JP = ::sun::nio::cs::ext::MSISO2022JP;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _MSISO2022JP$CoderHolder_FieldInfo_[] = {
	{"DEC0208", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(MSISO2022JP$CoderHolder, DEC0208)},
	{"ENC0208", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(MSISO2022JP$CoderHolder, ENC0208)},
	{}
};

$MethodInfo _MSISO2022JP$CoderHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MSISO2022JP$CoderHolder::*)()>(&MSISO2022JP$CoderHolder::init$))},
	{}
};

$InnerClassInfo _MSISO2022JP$CoderHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.MSISO2022JP$CoderHolder", "sun.nio.cs.ext.MSISO2022JP", "CoderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MSISO2022JP$CoderHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.MSISO2022JP$CoderHolder",
	"java.lang.Object",
	nullptr,
	_MSISO2022JP$CoderHolder_FieldInfo_,
	_MSISO2022JP$CoderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_MSISO2022JP$CoderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.MSISO2022JP"
};

$Object* allocate$MSISO2022JP$CoderHolder($Class* clazz) {
	return $of($alloc(MSISO2022JP$CoderHolder));
}

$DoubleByte$Decoder* MSISO2022JP$CoderHolder::DEC0208 = nullptr;
$DoubleByte$Encoder* MSISO2022JP$CoderHolder::ENC0208 = nullptr;

void MSISO2022JP$CoderHolder::init$() {
}

void clinit$MSISO2022JP$CoderHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(MSISO2022JP$CoderHolder::DEC0208, $cast($DoubleByte$Decoder, $$new($JIS_X_0208_MS932)->newDecoder()));
	$assignStatic(MSISO2022JP$CoderHolder::ENC0208, $cast($DoubleByte$Encoder, $$new($JIS_X_0208_MS932)->newEncoder()));
}

MSISO2022JP$CoderHolder::MSISO2022JP$CoderHolder() {
}

$Class* MSISO2022JP$CoderHolder::load$($String* name, bool initialize) {
	$loadClass(MSISO2022JP$CoderHolder, name, initialize, &_MSISO2022JP$CoderHolder_ClassInfo_, clinit$MSISO2022JP$CoderHolder, allocate$MSISO2022JP$CoderHolder);
	return class$;
}

$Class* MSISO2022JP$CoderHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun