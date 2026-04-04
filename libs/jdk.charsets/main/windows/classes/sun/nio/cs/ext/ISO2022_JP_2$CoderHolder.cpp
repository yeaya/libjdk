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
using $DoubleByte$Decoder = ::sun::nio::cs::DoubleByte$Decoder;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0212 = ::sun::nio::cs::ext::JIS_X_0212;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$DoubleByte$Decoder* ISO2022_JP_2$CoderHolder::DEC0212 = nullptr;
$DoubleByte$Encoder* ISO2022_JP_2$CoderHolder::ENC0212 = nullptr;

void ISO2022_JP_2$CoderHolder::init$() {
}

void ISO2022_JP_2$CoderHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(ISO2022_JP_2$CoderHolder::DEC0212, $cast($DoubleByte$Decoder, $$new($JIS_X_0212)->newDecoder()));
	$assignStatic(ISO2022_JP_2$CoderHolder::ENC0212, $cast($DoubleByte$Encoder, $$new($JIS_X_0212)->newEncoder()));
}

ISO2022_JP_2$CoderHolder::ISO2022_JP_2$CoderHolder() {
}

$Class* ISO2022_JP_2$CoderHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEC0212", "Lsun/nio/cs/DoubleByte$Decoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP_2$CoderHolder, DEC0212)},
		{"ENC0212", "Lsun/nio/cs/DoubleByte$Encoder;", nullptr, $STATIC | $FINAL, $staticField(ISO2022_JP_2$CoderHolder, ENC0212)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ISO2022_JP_2$CoderHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder", "sun.nio.cs.ext.ISO2022_JP_2", "CoderHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.ISO2022_JP_2$CoderHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.nio.cs.ext.ISO2022_JP_2"
	};
	$loadClass(ISO2022_JP_2$CoderHolder, name, initialize, &classInfo$$, ISO2022_JP_2$CoderHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ISO2022_JP_2$CoderHolder);
	});
	return class$;
}

$Class* ISO2022_JP_2$CoderHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun