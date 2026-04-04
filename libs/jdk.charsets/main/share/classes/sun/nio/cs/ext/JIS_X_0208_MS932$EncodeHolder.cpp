#include <sun/nio/cs/ext/JIS_X_0208_MS932$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS932.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS932$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS932$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* JIS_X_0208_MS932$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_MS932$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_MS932$EncodeHolder::init$() {
}

void JIS_X_0208_MS932$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JIS_X_0208_MS932$EncodeHolder::c2b, $new($chars, 25344));
	$assignStatic(JIS_X_0208_MS932$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"≌￢≝⊥≥√≩∫⵰≒\u2d71≡\u2d77∠\u2d7a∵\u2d7b∩\u2d7c∪"_s);
		$var($String, c2bNR, u"ℤ¸Ω·ℱ¯≣«≤»╴ゔ♌µ"_s);
		$init($JIS_X_0208_MS932$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_MS932$DecodeHolder::b2cStr, $JIS_X_0208_MS932$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_MS932$EncodeHolder::c2b, JIS_X_0208_MS932$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_MS932$EncodeHolder::JIS_X_0208_MS932$EncodeHolder() {
}

$Class* JIS_X_0208_MS932$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS932$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS932$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JIS_X_0208_MS932$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS932", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.JIS_X_0208_MS932$EncodeHolder",
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
		"sun.nio.cs.ext.JIS_X_0208_MS932"
	};
	$loadClass(JIS_X_0208_MS932$EncodeHolder, name, initialize, &classInfo$$, JIS_X_0208_MS932$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JIS_X_0208_MS932$EncodeHolder);
	});
	return class$;
}

$Class* JIS_X_0208_MS932$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun