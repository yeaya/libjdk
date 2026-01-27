#include <sun/util/resources/ext/CurrencyNames_zh_CN.h>

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

$MethodInfo _CurrencyNames_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_CN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zh_CN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zh_CN_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.CurrencyNames_zh_CN",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_CN_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_CN($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_CN));
}

void CurrencyNames_zh_CN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CNY"_s),
			$of(u"￥"_s)
		}),
		$$new($ObjectArray, {
			$of("adp"_s),
			$of(u"安道尔比塞塔"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"阿联酋迪拉姆"_s)
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
			$of(u"阿尔巴尼亚列克"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"亚美尼亚德拉姆"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"荷兰安替兰盾"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"安哥拉宽扎"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"阿根廷比索"_s)
		}),
		$$new($ObjectArray, {
			$of("ats"_s),
			$of(u"奥地利先令"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"澳大利亚元"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"阿鲁巴基尔德元"_s)
		}),
		$$new($ObjectArray, {
			$of("azm"_s),
			$of(u"阿塞拜疆马纳特 (1993-2006)"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"阿塞拜疆马纳特"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"波士尼亚-赫塞哥维纳兑换券"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"巴巴多斯元"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"孟加拉塔卡"_s)
		}),
		$$new($ObjectArray, {
			$of("bef"_s),
			$of(u"比利时法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("bgl"_s),
			$of(u"保加利亚硬列弗"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"保加利亚新列弗"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"巴林第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"布隆迪法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"百慕大元"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"文莱元"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"玻利维亚诺"_s)
		}),
		$$new($ObjectArray, {
			$of("bov"_s),
			$of(u"玻利维亚 Mvdol（资金）"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"巴西雷亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"巴哈马元"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"不丹努扎姆"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"博茨瓦纳普拉"_s)
		}),
		$$new($ObjectArray, {
			$of("byb"_s),
			$of(u"白俄罗斯新卢布 (1994-1999)"_s)
		}),
		$$new($ObjectArray, {
			$of("byr"_s),
			$of(u"白俄罗斯卢布"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"伯利兹元"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"加拿大元"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"刚果法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"瑞士法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("clf"_s),
			$of(u"智利 Unidades de Fomento（资金）"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"智利比索"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"人民币"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"哥伦比亚比索"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"哥斯达黎加科朗"_s)
		}),
		$$new($ObjectArray, {
			$of("csd"_s),
			$of(u"旧塞尔维亚第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"古巴可兑换比索"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"古巴比索"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"佛得角埃斯库多"_s)
		}),
		$$new($ObjectArray, {
			$of("cyp"_s),
			$of(u"塞浦路斯镑"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"捷克克郎"_s)
		}),
		$$new($ObjectArray, {
			$of("dem"_s),
			$of(u"德国马克"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"吉布提法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"丹麦克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"多米尼加比索"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"阿尔及利亚第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("eek"_s),
			$of(u"爱沙尼亚克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"埃及镑"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"厄立特里亚纳克法"_s)
		}),
		$$new($ObjectArray, {
			$of("esp"_s),
			$of(u"西班牙比塞塔"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"埃塞俄比亚比尔"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"欧元"_s)
		}),
		$$new($ObjectArray, {
			$of("fim"_s),
			$of(u"芬兰马克"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"斐济元"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"福克兰镑"_s)
		}),
		$$new($ObjectArray, {
			$of("frf"_s),
			$of(u"法国法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"英镑"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"乔治亚拉瑞"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"加纳塞第"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"加纳塞地"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"直布罗陀镑"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"冈比亚达拉西"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"几内亚法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("grd"_s),
			$of(u"希腊德拉克马"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"危地马拉格查尔"_s)
		}),
		$$new($ObjectArray, {
			$of("gwp"_s),
			$of(u"几内亚比绍比索"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"圭亚那元"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"港元"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"洪都拉斯拉伦皮拉"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"克罗地亚库纳"_s)
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
			$of(u"印度尼西亚盾"_s)
		}),
		$$new($ObjectArray, {
			$of("iep"_s),
			$of(u"爱尔兰镑"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"以色列新谢克尔"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"印度卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"伊拉克第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"伊朗里亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"冰岛克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"意大利里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"牙买加元"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"约旦第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"日元"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"肯尼亚先令"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"吉尔吉斯斯坦索姆"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"柬埔寨瑞尔"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"科摩罗法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"朝鲜圆"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"韩圆"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"科威特第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"开曼元"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"哈萨克斯坦坚戈"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"老挝基普"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"黎巴嫩镑"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"斯里兰卡卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"利比亚元"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"莱索托洛蒂"_s)
		}),
		$$new($ObjectArray, {
			$of("ltl"_s),
			$of(u"立陶宛立特"_s)
		}),
		$$new($ObjectArray, {
			$of("luf"_s),
			$of(u"卢森堡法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("lvl"_s),
			$of(u"拉脱维亚拉特"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"利比亚第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"摩洛哥迪拉姆"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"摩尔多瓦列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"马达加斯加阿里亚里"_s)
		}),
		$$new($ObjectArray, {
			$of("mgf"_s),
			$of(u"马达加斯加法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"马其顿戴代纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"缅甸开亚特"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"蒙古图格里克"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"澳门元"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"毛里塔尼亚乌吉亚"_s)
		}),
		$$new($ObjectArray, {
			$of("mtl"_s),
			$of(u"马耳他里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"毛里求斯卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"马尔代夫拉菲亚"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"马拉维克瓦查"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"墨西哥比索"_s)
		}),
		$$new($ObjectArray, {
			$of("mxv"_s),
			$of(u"墨西哥 Unidad de Inversion (UDI)（资金）"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"马来西亚林吉特"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"旧莫桑比克美提卡"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"莫桑比克美提卡"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"纳米比亚元"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"尼日利亚奈拉"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"尼加拉瓜金科多巴"_s)
		}),
		$$new($ObjectArray, {
			$of("nlg"_s),
			$of(u"荷兰盾"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"挪威克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"尼泊尔卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"新西兰元"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"阿曼里亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"巴拿马巴波亚"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"秘鲁新索尔"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"巴布亚新几内亚基那"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"菲律宾比索"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"巴基斯坦卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"波兰兹罗提"_s)
		}),
		$$new($ObjectArray, {
			$of("pte"_s),
			$of(u"葡萄牙埃斯库多"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"巴拉圭瓜拉尼"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"卡塔尔里亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("rol"_s),
			$of(u"旧罗马尼亚列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"罗马尼亚列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"塞尔维亚第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"俄国卢布"_s)
		}),
		$$new($ObjectArray, {
			$of("rur"_s),
			$of(u"俄国卢布 (1991-1998)"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"卢旺达法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"沙特里亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"所罗门群岛元"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"塞舌尔卢比"_s)
		}),
		$$new($ObjectArray, {
			$of("sdd"_s),
			$of(u"苏丹第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"苏丹镑"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"瑞典克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"新加坡元"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"圣赫勒拿群岛磅"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"斯洛文尼亚托拉尔"_s)
		}),
		$$new($ObjectArray, {
			$of("skk"_s),
			$of(u"斯洛伐克克朗"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"塞拉利昂利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"索马里先令"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"苏里南元"_s)
		}),
		$$new($ObjectArray, {
			$of("srg"_s),
			$of(u"苏里南盾"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"圣多美和普林西比多布拉"_s)
		}),
		$$new($ObjectArray, {
			$of("svc"_s),
			$of(u"萨尔瓦多科朗"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"叙利亚镑"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"斯威士兰里兰吉尼"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"泰铢"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"塔吉克斯坦索莫尼"_s)
		}),
		$$new($ObjectArray, {
			$of("tmm"_s),
			$of(u"土库曼斯坦马纳特"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"土库曼斯坦新马纳特"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"突尼斯第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"汤加潘加"_s)
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
			$of(u"新台币"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"坦桑尼亚先令"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"乌克兰格里夫尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"乌干达先令"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"美元"_s)
		}),
		$$new($ObjectArray, {
			$of("usn"_s),
			$of(u"美元（次日）"_s)
		}),
		$$new($ObjectArray, {
			$of("uss"_s),
			$of(u"美元（当日）"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"乌拉圭比索"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"乌兹别克斯苏姆"_s)
		}),
		$$new($ObjectArray, {
			$of("veb"_s),
			$of(u"委内瑞拉博利瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("vef"_s),
			$of(u"委内瑞拉强势玻利瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"越南盾"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"瓦努阿图瓦图"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"西萨摩亚塔拉"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"中非金融合作法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xag"_s),
			$of(u"银"_s)
		}),
		$$new($ObjectArray, {
			$of("xau"_s),
			$of(u"黄金"_s)
		}),
		$$new($ObjectArray, {
			$of("xba"_s),
			$of(u"欧洲复合单位"_s)
		}),
		$$new($ObjectArray, {
			$of("xbb"_s),
			$of(u"欧洲货币联盟"_s)
		}),
		$$new($ObjectArray, {
			$of("xbc"_s),
			$of(u"欧洲计算单位 (XBC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xbd"_s),
			$of(u"欧洲计算单位 (XBD)"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"东加勒比元"_s)
		}),
		$$new($ObjectArray, {
			$of("xdr"_s),
			$of(u"特别提款权"_s)
		}),
		$$new($ObjectArray, {
			$of("xfo"_s),
			$of(u"法国金法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xfu"_s),
			$of(u"法国 UIC 法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"非洲金融共同体法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xpd"_s),
			$of(u"钯"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"太平洋法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xpt"_s),
			$of(u"铂"_s)
		}),
		$$new($ObjectArray, {
			$of("xts"_s),
			$of(u"为测试保留的代码"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"货币未知或无效"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"也门里亚尔"_s)
		}),
		$$new($ObjectArray, {
			$of("yum"_s),
			$of(u"南斯拉夫偌威第纳尔"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"南非兰特"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"赞比亚克瓦查"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"津巴布韦元"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"津巴布韦元 (2009)"_s)
		})
	});
}

CurrencyNames_zh_CN::CurrencyNames_zh_CN() {
}

$Class* CurrencyNames_zh_CN::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_CN, name, initialize, &_CurrencyNames_zh_CN_ClassInfo_, allocate$CurrencyNames_zh_CN);
	return class$;
}

$Class* CurrencyNames_zh_CN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun