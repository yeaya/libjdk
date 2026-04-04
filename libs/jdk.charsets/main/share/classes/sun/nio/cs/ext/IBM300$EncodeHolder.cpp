#include <sun/nio/cs/ext/IBM300$EncodeHolder.h>
#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM300$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM300.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM300$DecodeHolder = ::sun::nio::cs::ext::IBM300$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$chars* IBM300$EncodeHolder::c2b = nullptr;
$chars* IBM300$EncodeHolder::c2bIndex = nullptr;

void IBM300$EncodeHolder::init$() {
}

void IBM300$EncodeHolder::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(IBM300$EncodeHolder::c2b, $new($chars, 29696));
	$assignStatic(IBM300$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"䉠−䉪¦䎡〜䑊—䑮\uf86f䑼‖䱽鹼亳頰佞塡偿醬冐囊凱栅出醱剡麴务蠟勉萊勚繡勬俠卓軀即繫厳荆叚驒叨蟬叮焰司蔣呃屛呤鷗命嚙咁剝咣搔咤瘦哊簞响摑哔啞哺潑啐瀆啓禱啟麵嗀屢嗁顚孲攢対梎惱繈憰腁曈頹"_s);
		$init($IBM300$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM300$DecodeHolder::b2cStr, $IBM300$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM300$EncodeHolder::c2b, IBM300$EncodeHolder::c2bIndex);
	}
}

IBM300$EncodeHolder::IBM300$EncodeHolder() {
}

$Class* IBM300$EncodeHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM300$EncodeHolder, c2b)},
		{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM300$EncodeHolder, c2bIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(IBM300$EncodeHolder, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.nio.cs.ext.IBM300$EncodeHolder", "sun.nio.cs.ext.IBM300", "EncodeHolder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.nio.cs.ext.IBM300$EncodeHolder",
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
		"sun.nio.cs.ext.IBM300"
	};
	$loadClass(IBM300$EncodeHolder, name, initialize, &classInfo$$, IBM300$EncodeHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IBM300$EncodeHolder);
	});
	return class$;
}

$Class* IBM300$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun