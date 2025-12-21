#include <sun/nio/cs/ext/IBM937$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM937$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM937.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM937$DecodeHolder = ::sun::nio::cs::ext::IBM937$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM937$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM937$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM937$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM937$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM937$EncodeHolder::*)()>(&IBM937$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM937$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM937$EncodeHolder", "sun.nio.cs.ext.IBM937", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM937$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM937$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM937$EncodeHolder_FieldInfo_,
	_IBM937$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM937$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM937"
};

$Object* allocate$IBM937$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM937$EncodeHolder));
}

$chars* IBM937$EncodeHolder::c2b = nullptr;
$chars* IBM937$EncodeHolder::c2bIndex = nullptr;

void IBM937$EncodeHolder::init$() {
}

void clinit$IBM937$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM937$EncodeHolder::c2b, $new($chars, 32512));
	$assignStatic(IBM937$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, u"%\n䕊十䕌卅䡁一䡅乙䡇二䡉人䡊儿䡋入䡌八䡐几䡑凵䡒刀䡓力䡕匕䡖匚䡘十䡙卜䡛厂䡝又䡞口䡟囗䡠土䡡士䡣夕䡤大䡥女䡦子䡨寸䡩小䡪尢䡫尸䡬屮䡭山䡯工䡰己䡱巾䡲干䡶廾䡷弋䡸弓䡻彳䡼心䡽戈䡾戶䡿手䢁支䢃文䢄斗䢅斤䢆方䢈日䢉曰䢊月䢋木䢌欠䢍止䢎歹䢏殳䢐毋䢑比䢒毛䢓氏䢔气䢕水䢖火䢗爪䢘父䢙爻䢚爿䢛片䢜牙䢝牛䢞犬䢟玄䢠玉䢡瓜䢢瓦䢣甘䢤生䢥用䢦田䢧疋䢪白䢫皮䢬皿䢭目䢮矛䢯矢䢰石䢱示䢲禸䢳禾䢴穴䢵立䢶竹䢷米䢸糸䢹缶䢺网䢻羊䢼羽䢽老䢾而䢿耒䣀耳䣁聿䣂肉䣃臣䣄自䣅至䣆臼䣇舌䣈舛䣉舟䣊艮䣋色䣌艸䣍虍䣎虫䣏血䣐行䣑衣䣒襾䣓見䣔角䣕言䣖谷䣗豆䣘豕䣙豸䣚貝䣛赤䣜走䣝足䣞身䣟車䣠辛䣡辰䣣邑䣤酉䣥釆䣦里䣧金䣨長䣩門䣪阜䣬隹䣭雨䣮青䣯非䣰面䣱革䣲韋䣳韭䣴音䣵頁䣶風䣷飛䣸食䣹首䣺香䣻馬䣼骨䣽高䥁髟䥂鬥䥃鬯䥄鬲䥅鬼䥆魚䥇鳥䥈鹵䥉鹿䥊麥䥋麻䥌黃䥍黍䥎黑䥏黹䥐黽䥑鼎䥒鼓䥓鼠䥔鼻䥕齊䥖齒䥗龍䥘龜䥙龠"_s);
		$var($String, c2bNR, u"\u0015\u0085"_s);
		$init($IBM937$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM937$DecodeHolder::b2cStr, $IBM937$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 254, IBM937$EncodeHolder::c2b, IBM937$EncodeHolder::c2bIndex);
	}
}

IBM937$EncodeHolder::IBM937$EncodeHolder() {
}

$Class* IBM937$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM937$EncodeHolder, name, initialize, &_IBM937$EncodeHolder_ClassInfo_, clinit$IBM937$EncodeHolder, allocate$IBM937$EncodeHolder);
	return class$;
}

$Class* IBM937$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun