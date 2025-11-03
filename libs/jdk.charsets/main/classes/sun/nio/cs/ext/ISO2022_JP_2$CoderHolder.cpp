#include <sun/nio/cs/ext/ISO2022_JP_2$CoderHolder.h>

#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <sun/nio/cs/DoubleByte$Decoder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/ISO2022_JP_2.h>
#include <sun/nio/cs/ext/JIS_X_0212.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $ISO2022_JP_2 = ::sun::nio::cs::ext::ISO2022_JP_2;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _ISO2022_JP_2$CoderHolder_FieldInfo_[] = {
	{"DEC0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP_2$CoderHolder, DEC0212)},
	{"ENC0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP_2$CoderHolder, ENC0212)},
	{}
};

$MethodInfo _ISO2022_JP_2$CoderHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ISO2022_JP_2$CoderHolder::*)()>(&ISO2022_JP_2$CoderHolder::init$))},
	{}
};

$InnerClassInfo _ISO2022_JP_2$CoderHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder", "sun.nio.cs.ext.ISO2022_JP_2", "CoderHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _ISO2022_JP_2$CoderHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder",
	"java.lang.Object",
	nullptr,
	_ISO2022_JP_2$CoderHolder_FieldInfo_,
	_ISO2022_JP_2$CoderHolder_MethodInfo_,
	nullptr,
	nullptr,
	_ISO2022_JP_2$CoderHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.ISO2022_JP_2"
};

$Object* allocate$ISO2022_JP_2$CoderHolder($Class* clazz) {
	return $of($alloc(ISO2022_JP_2$CoderHolder));
}

$DoubleByte$Decoder* ISO2022_JP_2$CoderHolder::DEC0212 = nullptr;
$DoubleByte$Encoder* ISO2022_JP_2$CoderHolder::ENC0212 = nullptr;

void ISO2022_JP_2$CoderHolder::init$() {
}

void clinit$ISO2022_JP_2$CoderHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(ISO2022_JP_2$CoderHolder::DEC0212, $cast($DoubleByte$Decoder, $$new($JIS_X_0212)->newDecoder()));
	$assignStatic(ISO2022_JP_2$CoderHolder::ENC0212, $cast($DoubleByte$Encoder, $$new($JIS_X_0212)->newEncoder()));
}

ISO2022_JP_2$CoderHolder::ISO2022_JP_2$CoderHolder() {
}

$Class* ISO2022_JP_2$CoderHolder::load$($String* name, bool initialize) {
	$loadClass(ISO2022_JP_2$CoderHolder, name, initialize, &_ISO2022_JP_2$CoderHolder_ClassInfo_, clinit$ISO2022_JP_2$CoderHolder, allocate$ISO2022_JP_2$CoderHolder);
	return class$;
}

$Class* ISO2022_JP_2$CoderHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun