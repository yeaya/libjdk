#include <sun/nio/cs/ext/IBM939$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM939$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM939.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM939$DecodeHolder = ::sun::nio::cs::ext::IBM939$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM939$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM939$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM939$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM939$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(IBM939$EncodeHolder, init$, void)},
	{}
};

$InnerClassInfo _IBM939$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM939$EncodeHolder", "sun.nio.cs.ext.IBM939", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM939$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM939$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM939$EncodeHolder_FieldInfo_,
	_IBM939$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM939$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM939"
};

$Object* allocate$IBM939$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM939$EncodeHolder));
}

$chars* IBM939$EncodeHolder::c2b = nullptr;
$chars* IBM939$EncodeHolder::c2bIndex = nullptr;

void IBM939$EncodeHolder::init$() {
}

void clinit$IBM939$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM939$EncodeHolder::c2b, $new($chars, 29696));
	$assignStatic(IBM939$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, "%\n"_s);
		$var($String, c2bNR, u"\u0015\u0085䉠−䉪¦䎡〜䑊—䑮\uf86f䑼‖䱽鹼亳頰佞塡偿醬冐囊凱栅出醱剡麴务蠟勉萊勚繡勬俠卓軀即繫厳荆叚驒叨蟬叮焰司蔣呃屛呤鷗命嚙咁剝咣搔咤瘦哊簞响摑哔啞哺潑啐瀆啓禱啟麵嗀屢嗁顚孲攢対梎惱繈憰腁曈頹哔毡啐洀勬烿叨萝务萟䑮辑命鋊叚魾"_s);
		$init($IBM939$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM939$DecodeHolder::b2cStr, $IBM939$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM939$EncodeHolder::c2b, IBM939$EncodeHolder::c2bIndex);
	}
}

IBM939$EncodeHolder::IBM939$EncodeHolder() {
}

$Class* IBM939$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM939$EncodeHolder, name, initialize, &_IBM939$EncodeHolder_ClassInfo_, clinit$IBM939$EncodeHolder, allocate$IBM939$EncodeHolder);
	return class$;
}

$Class* IBM939$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun