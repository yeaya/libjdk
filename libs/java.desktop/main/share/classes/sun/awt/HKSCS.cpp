#include <sun/awt/HKSCS.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetDecoder.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <jcpp.h>

#undef HKSCS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetDecoder = ::java::nio::charset::CharsetDecoder;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;

namespace sun {
	namespace awt {

$Charset* HKSCS::cs = nullptr;

void HKSCS::init$() {
	$Charset::init$("HKSCS"_s, nullptr);
}

bool HKSCS::contains($Charset* cs) {
	return ($instanceOf(HKSCS, cs));
}

$CharsetDecoder* HKSCS::newDecoder() {
	return $nc(HKSCS::cs)->newDecoder();
}

$CharsetEncoder* HKSCS::newEncoder() {
	return $nc(HKSCS::cs)->newEncoder();
}

void HKSCS::clinit$($Class* clazz) {
	$assignStatic(HKSCS::cs, $Charset::forName("x-MS950-HKSCS-XP"_s));
}

HKSCS::HKSCS() {
}

$Class* HKSCS::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cs", "Ljava/nio/charset/Charset;", nullptr, $PRIVATE | $STATIC, $staticField(HKSCS, cs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HKSCS, init$, void)},
		{"contains", "(Ljava/nio/charset/Charset;)Z", nullptr, $PUBLIC, $virtualMethod(HKSCS, contains, bool, $Charset*)},
		{"newDecoder", "()Ljava/nio/charset/CharsetDecoder;", nullptr, $PUBLIC, $virtualMethod(HKSCS, newDecoder, $CharsetDecoder*)},
		{"newEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PUBLIC, $virtualMethod(HKSCS, newEncoder, $CharsetEncoder*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.HKSCS",
		"java.nio.charset.Charset",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HKSCS, name, initialize, &classInfo$$, HKSCS::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(HKSCS);
	});
	return class$;
}

$Class* HKSCS::class$ = nullptr;

	} // awt
} // sun