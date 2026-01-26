#include <sun/nio/cs/ext/IBM930$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM930$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM930.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM930$DecodeHolder = ::sun::nio::cs::ext::IBM930$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM930$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM930$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM930$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM930$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IBM930$EncodeHolder, init$, void)},
	{}
};

$InnerClassInfo _IBM930$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM930$EncodeHolder", "sun.nio.cs.ext.IBM930", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM930$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM930$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM930$EncodeHolder_FieldInfo_,
	_IBM930$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM930$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM930"
};

$Object* allocate$IBM930$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM930$EncodeHolder));
}

$chars* IBM930$EncodeHolder::c2b = nullptr;
$chars* IBM930$EncodeHolder::c2bIndex = nullptr;

void IBM930$EncodeHolder::init$() {
}

void clinit$IBM930$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM930$EncodeHolder::c2b, $new($chars, 29696));
	$assignStatic(IBM930$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, "%\n"_s);
		$var($String, c2bNR, u"\u0015\u0085哔毡啐洀勬烿叨萝务萟䑮辑命鋊叚魾䑮\uf86f䉠－䉪¦䎡〜䑊—䑼‖䱽鹼亳頰佞塡偿醬冐囊凱栅出醱剡麴务蠟勉萊勚繡勬俠卓軀即繫叚驒叨蟬叮焰司蔣呃屛呤鷗命嚙咁剝咣搔咤瘦哊簞响摑哔啞哺潑啐瀆啓禱啟麵嗀屢嗁顚孲攢対梎惱繈憰腁曈頹"_s);
		$init($IBM930$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM930$DecodeHolder::b2cStr, $IBM930$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM930$EncodeHolder::c2b, IBM930$EncodeHolder::c2bIndex);
	}
}

IBM930$EncodeHolder::IBM930$EncodeHolder() {
}

$Class* IBM930$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM930$EncodeHolder, name, initialize, &_IBM930$EncodeHolder_ClassInfo_, clinit$IBM930$EncodeHolder, allocate$IBM930$EncodeHolder);
	return class$;
}

$Class* IBM930$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun