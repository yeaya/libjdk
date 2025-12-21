#include <sun/nio/cs/ext/IBM948$EncodeHolder.h>

#include <sun/nio/cs/DoubleByte$Encoder.h>
#include <sun/nio/cs/ext/IBM948$DecodeHolder.h>
#include <sun/nio/cs/ext/IBM948.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DoubleByte$Encoder = ::sun::nio::cs::DoubleByte$Encoder;
using $IBM948$DecodeHolder = ::sun::nio::cs::ext::IBM948$DecodeHolder;

namespace sun {
	namespace nio {
		namespace cs {
			namespace ext {

$FieldInfo _IBM948$EncodeHolder_FieldInfo_[] = {
	{"c2b", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM948$EncodeHolder, c2b)},
	{"c2bIndex", "[C", nullptr, $STATIC | $FINAL, $staticField(IBM948$EncodeHolder, c2bIndex)},
	{}
};

$MethodInfo _IBM948$EncodeHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(IBM948$EncodeHolder::*)()>(&IBM948$EncodeHolder::init$))},
	{}
};

$InnerClassInfo _IBM948$EncodeHolder_InnerClassesInfo_[] = {
	{"sun.nio.cs.ext.IBM948$EncodeHolder", "sun.nio.cs.ext.IBM948", "EncodeHolder", $STATIC},
	{}
};

$ClassInfo _IBM948$EncodeHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.nio.cs.ext.IBM948$EncodeHolder",
	"java.lang.Object",
	nullptr,
	_IBM948$EncodeHolder_FieldInfo_,
	_IBM948$EncodeHolder_MethodInfo_,
	nullptr,
	nullptr,
	_IBM948$EncodeHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.nio.cs.ext.IBM948"
};

$Object* allocate$IBM948$EncodeHolder($Class* clazz) {
	return $of($alloc(IBM948$EncodeHolder));
}

$chars* IBM948$EncodeHolder::c2b = nullptr;
$chars* IBM948$EncodeHolder::c2bIndex = nullptr;

void IBM948$EncodeHolder::init$() {
}

void clinit$IBM948$EncodeHolder($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(IBM948$EncodeHolder::c2b, $new($chars, 32512));
	$assignStatic(IBM948$EncodeHolder::c2bIndex, $new($chars, 256));
	{
		$var($String, b2cNR, nullptr);
		$var($String, c2bNR, u"豀一豁乙豇二豈人豉儿豊入豋八豌几豍刀豏力豐匕豑十豒卜豓又豦口豧土豨士豩夕豪大豫女豬子豯寸豰小豱尢豲尸豳山豵工豶己豹巾豺干豻廾豼弋豽弓販卅貾心貿戈賀戶賁手賃支賄文賅斗賆斤資方賈日賉曰賊月賋木賌欠賍止賎歹賏毋賐比賑毛賒氏賓水賔火賕爪賖父賗爻賘片賙牙賚牛賛犬趈玄趉玉越瓜趋瓦趌甘趍生趎用趐田趔疋趕白趖皮趗皿趘目趙矛趚矢趛石趜示趝禾趞穴趟立蹫竹蹬米蹭糸蹮缶蹯羊蹰羽蹱老蹳而蹴耒蹵耳蹶聿蹷肉蹺臣蹻自蹼至蹽臼蹾舌躀舛躁舟躂艮躃色躅虫躆血躇行躈衣迂見迃角迄言迅谷迆豆过豕迈貝迉赤迊走迋足迌身迍車迎辛迏辰迕邑迚酉进釆远里釘金釙長釚門釛阜釡隹釢雨釣青釤非鏱面鏲革鏳韋鏴韭鏵音鏶頁鏷風鏸飛鏹食鏺首鏻香隋馬隌骨隍高階鬥随鬲隐鬼饂魚饃鳥饄鹵饅鹿饆麥饇麻鮥黃鮦黍鮧黑鷭鼎鷮鼓鷯鼠鿹鼻鿺齊ꉎ齒ꎼ龍ꎽ龜ꥂ凵ꥃ匚ꥄ厂ꥉ囗ꥋ屮ꥌ彳꥟殳ꥡ气ꥢ爿ꦇ禸ꧧ网ꧨ艸ꧭ虍ꧮ襾ꭄ豸뉬髟뉭鬯륵黹복黽쥢龠"_s);
		$init($IBM948$DecodeHolder);
		$DoubleByte$Encoder::initC2B($IBM948$DecodeHolder::b2cStr, $IBM948$DecodeHolder::b2cSBStr, b2cNR, c2bNR, 64, 252, IBM948$EncodeHolder::c2b, IBM948$EncodeHolder::c2bIndex);
	}
}

IBM948$EncodeHolder::IBM948$EncodeHolder() {
}

$Class* IBM948$EncodeHolder::load$($String* name, bool initialize) {
	$loadClass(IBM948$EncodeHolder, name, initialize, &_IBM948$EncodeHolder_ClassInfo_, clinit$IBM948$EncodeHolder, allocate$IBM948$EncodeHolder);
	return class$;
}

$Class* IBM948$EncodeHolder::class$ = nullptr;

			} // ext
		} // cs
	} // nio
} // sun