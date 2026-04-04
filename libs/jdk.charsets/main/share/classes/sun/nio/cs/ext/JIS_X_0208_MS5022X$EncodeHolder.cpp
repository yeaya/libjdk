#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X$DecodeHolder.h>
#include <sun/nio/cs/ext/JIS_X_0208_MS5022X.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $JIS_X_0208_MS5022X$DecodeHolder = ::sun::nio::cs::ext::JIS_X_0208_MS5022X$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* JIS_X_0208_MS5022X$EncodeHolder::c2b = nullptr;
$chars* JIS_X_0208_MS5022X$EncodeHolder::c2bIndex = nullptr;

void JIS_X_0208_MS5022X$EncodeHolder::init$() {
}

void JIS_X_0208_MS5022X$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JIS_X_0208_MS5022X$EncodeHolder::c2b, $new($chars, 25856));
	$assignStatic(JIS_X_0208_MS5022X$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"⅝－⅂∥℣｡⅖｢⅗｣™､Ω･╲ｦ┡ｧ┣ｨ┥ｩ┧ｪ┩ｫ╣ｬ╥ｭ╧ｮ╃ｯℼｰ┢ｱ┤ｲ┦ｳ┨ｴ┪ｵ┫ｶ┭ｷ┯ｸ┱ｹ┳ｺ┵ｻ┷ｼ┹ｽ┻ｾ┽ｿ┿ﾀ╁ﾁ╄ﾂ╆ﾃ╈ﾄ╊ﾅ╋ﾆ╌ﾇ╍ﾈ╎ﾉ╏ﾊ╒ﾋ╕ﾌ╘ﾍ╛ﾎ╞ﾏ╟ﾐ╠ﾑ╡ﾒ╢ﾓ╤ﾔ╦ﾕ╨ﾖ╩ﾗ╪ﾘ╫ﾙ╬ﾚ╭ﾛ╯ﾜ╳ﾝÅﾞℬﾟⅱ￠ⅲ￡≌￢"_s);
		$init($JIS_X_0208_MS5022X$DecodeHolder);
		$DoubleByte$Encoder::initC2B($JIS_X_0208_MS5022X$DecodeHolder::b2cStr, $JIS_X_0208_MS5022X$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 33, 126, JIS_X_0208_MS5022X$EncodeHolder::c2b, JIS_X_0208_MS5022X$EncodeHolder::c2bIndex);
	}
}

JIS_X_0208_MS5022X$EncodeHolder::JIS_X_0208_MS5022X$EncodeHolder() {
}

$Class* JIS_X_0208_MS5022X$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS5022X$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(JIS_X_0208_MS5022X$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JIS_X_0208_MS5022X$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.JIS_X_0208_MS5022X$EncodeHolder", "sun.nio.cs.ext.JIS_X_0208_MS5022X", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.JIS_X_0208_MS5022X$EncodeHolder",
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
		"sun.nio.cs.ext.JIS_X_0208_MS5022X"
	};
	$loadClass(JIS_X_0208_MS5022X$EncodeHolder, name, initialize, &classInfo$$, JIS_X_0208_MS5022X$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JIS_X_0208_MS5022X$EncodeHolder);
	});
	return class$;
}

$Class* JIS_X_0208_MS5022X$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun