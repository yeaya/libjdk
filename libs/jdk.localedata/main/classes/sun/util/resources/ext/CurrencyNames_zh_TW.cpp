#include <sun/util/resources/ext/CurrencyNames_zh_TW.h>

#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

$MethodInfo _CurrencyNames_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_TW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zh_TW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zh_TW_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_TW",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_TW_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_TW($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_TW));
}

void CurrencyNames_zh_TW::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("NT$"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"安道爾陪士特"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"阿拉伯聯合大公國迪爾汗"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"阿富汗尼 (1927-2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"阿富汗尼"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"阿爾巴尼亞列克"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"亞美尼亞德拉姆"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"安哥拉寬扎"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"阿根廷披索"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"奧地利先令"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"澳幣"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"阿魯巴盾"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"亞塞拜然馬納特 (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"亞塞拜然馬納特"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"波士尼亞-黑塞哥維那可轉換馬克"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"巴貝多元"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"孟加拉塔卡"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"比利時法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"保加利亞硬列弗"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"保加利亞新列弗"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"巴林第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"蒲隆地法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"百慕達幣"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"汶萊元"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"玻利維亞貨幣單位"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"玻利維亞幕多"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"巴西里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"巴哈馬元"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"不丹努扎姆"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"波札那普拉"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"白俄羅斯新盧布 (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"白俄羅斯盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"貝里斯元"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"加幣"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"剛果法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"瑞士法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"卡林油達佛曼跎"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"智利披索"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"人民幣"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"哥倫比亞披索"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"哥斯大黎加科郎"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"旧塞尔维亚第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"古巴可轉換披索"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"古巴披索"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"維德角埃斯庫多"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"賽普勒斯鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"捷克克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"德國馬克"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"吉布地法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"丹麥克羅納"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"多明尼加披索"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"阿爾及利亞第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"愛沙尼亞克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"埃及鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"厄立特里亞納克法"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"西班牙陪士特"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"衣索比亞比爾"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"歐元"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"芬蘭馬克"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"斐濟元"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"福克蘭群島鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"法國法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"英鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"喬治拉里"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"迦納仙蔕 (1979-2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"迦納仙蔕"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"直布羅陀鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"甘比亞達拉西"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"幾內亞法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"希臘德拉克馬"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"瓜地馬拉格查爾"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"幾內亞比索披索"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"圭亞那元"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"港元"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"洪都拉斯倫皮拉"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"克羅地亞庫納"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"海地古德"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"匈牙利福林"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"印尼盾"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"愛爾蘭鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"以色列新謝克爾"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"印度盧比"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"伊拉克第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"伊朗里亞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"冰島克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"義大利里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"牙買加元"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"約旦第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"日圓"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"肯尼亞先令"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"吉爾吉斯索馬"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"柬埔寨瑞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"科摩羅法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"北韓圜"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"韓圜"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"科威特第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"開曼群島美元"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"卡扎克斯坦坦吉"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"老挝基普"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"黎巴嫩鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"斯里蘭卡盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"賴比瑞亞元"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"賴索托羅蒂"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"立陶宛里塔"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"盧森堡法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"拉脫維亞拉特銀幣"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"利比亞第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"摩洛哥迪拉姆"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"摩杜雲列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"馬達加斯加艾瑞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"馬達加斯加法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"馬其頓第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"緬甸元"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"蒙古圖格里克"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"澳門元"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"茅利塔尼亞烏吉亞"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"馬爾他里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"模里西斯盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"馬爾地夫海島盧非亞"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"馬拉維克瓦查"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"墨西哥披索"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"墨西哥 Unidad de Inversion (UDI)（资金）"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"馬來西亞令吉"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"莫三比克梅蒂卡爾"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"莫三比克美提卡"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"納米比亞元"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"奈及利亞奈拉"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"尼加拉瓜金科多巴"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"荷蘭盾"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"挪威克羅納"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"尼泊爾盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"紐西蘭幣"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"阿曼里奧"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"巴拿馬巴波亞"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"秘魯新太陽幣"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"巴布亞紐幾內亞基那"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"菲律賓披索"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"巴基斯坦盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"波蘭茲羅提"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"葡萄牙埃斯庫多"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"巴拉圭瓜拉尼"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"卡達爾里亞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"旧罗马尼亚列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"羅馬尼亞列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"塞爾維亞戴納"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"俄羅斯盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"俄羅斯盧布 (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"盧安達法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"沙烏地里雅"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"索羅門群島元"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"塞席爾盧比"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"蘇丹第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"蘇丹鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"瑞典克羅納"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"新加坡幣"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"圣赫勒拿群岛磅"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"斯洛維尼亞托勒"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"斯洛伐克克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"獅子山利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"索馬利亞先令"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"苏里南元"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"蘇利南基爾"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"聖多美島和普林西比島多布拉"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"萨尔瓦多科朗"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"敘利亞鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"斯威士兰里兰吉尼"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"泰銖"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"塔吉克斯坦索莫尼"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"土庫曼馬納特"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"土庫曼新馬納特"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"突尼西亞第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"東加潘加"_s)
		}),
		$$new($ObjectArray, {
			$of("tpe"_s),
			$of(u"帝汶埃斯库多"_s)
		}),
		$$new($ObjectArray, {
			$of("trl"_s),
			$of(u"土耳其里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"新土耳其里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"特立尼达和多巴哥元"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"新臺幣"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"坦桑尼亚先令"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"烏克蘭格里夫那"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"烏干達先令"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"美元"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"美元 (第二天)"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"美元 (同一天)"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"烏拉圭披索"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"烏茲別克索姆"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"委內瑞拉玻利瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"委內瑞拉強勢玻利瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"越南盾"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"萬那杜萬杜"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"西薩摩亞塔拉"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"西非法郎 BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of("XAG"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"黃金"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"歐洲綜合單位"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"歐洲貨幣單位 XBB"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"歐洲會計單位 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"歐洲會計單位 (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"格瑞那達元"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"特殊提款權"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"法國金法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"法國 UIC 法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"西非法郎 BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"钯"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP 法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"铂"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of("XTS"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of("XXX"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"葉門里雅"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"南斯拉夫挪威亞第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"南非蘭特"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"尚比亞克瓦查"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"辛巴威元"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"辛巴威元 (2009)"_s)
		})
	});
}

CurrencyNames_zh_TW::CurrencyNames_zh_TW() {
}

$Class* CurrencyNames_zh_TW::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_TW, name, initialize, &_CurrencyNames_zh_TW_ClassInfo_, allocate$CurrencyNames_zh_TW);
	return class$;
}

$Class* CurrencyNames_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun