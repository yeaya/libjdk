#include <sun/util/resources/cldr/ext/LocaleNames_yue_Hans.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _LocaleNames_yue_Hans_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_yue_Hans, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_yue_Hans, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_yue_Hans_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_yue_Hans",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_yue_Hans_MethodInfo_
};

$Object* allocate$LocaleNames_yue_Hans($Class* clazz) {
	return $of($alloc(LocaleNames_yue_Hans));
}

void LocaleNames_yue_Hans::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_yue_Hans::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"阿拉伯文"_s);
	$var($String, metaValue_bn, u"孟加拉文"_s);
	$var($String, metaValue_el, u"希腊文"_s);
	$var($String, metaValue_gu, u"古吉拉特文"_s);
	$var($String, metaValue_he, u"希伯来文"_s);
	$var($String, metaValue_hy, u"亚美尼亚文"_s);
	$var($String, metaValue_ja, u"日文"_s);
	$var($String, metaValue_jv, u"爪哇文"_s);
	$var($String, metaValue_ka, u"乔治亚文"_s);
	$var($String, metaValue_km, u"高棉文"_s);
	$var($String, metaValue_kn, u"坎那达文"_s);
	$var($String, metaValue_ko, u"韩文"_s);
	$var($String, metaValue_la, u"拉丁文"_s);
	$var($String, metaValue_ml, u"马来亚拉姆文"_s);
	$var($String, metaValue_mn, u"蒙古文"_s);
	$var($String, metaValue_my, u"缅甸文"_s);
	$var($String, metaValue_or, u"欧利亚文"_s);
	$var($String, metaValue_sd, u"信德文"_s);
	$var($String, metaValue_su, u"巽他文"_s);
	$var($String, metaValue_ta, u"坦米尔文"_s);
	$var($String, metaValue_te, u"泰卢固文"_s);
	$var($String, metaValue_th, u"泰文"_s);
	$var($String, metaValue_ban, u"峇里文"_s);
	$var($String, metaValue_bas, u"巴萨文"_s);
	$var($String, metaValue_bax, u"巴姆穆文"_s);
	$var($String, metaValue_bug, u"布吉斯文"_s);
	$var($String, metaValue_ccp, u"查克马文"_s);
	$var($String, metaValue_chr, u"柴罗基文"_s);
	$var($String, metaValue_cop, u"科普特文"_s);
	$var($String, metaValue_mai, u"迈蒂利文"_s);
	$var($String, metaValue_men, u"门德文"_s);
	$var($String, metaValue_peo, u"古波斯文"_s);
	$var($String, metaValue_phn, u"腓尼基文"_s);
	$var($String, metaValue_saz, u"索拉什特拉文"_s);
	$var($String, metaValue_ssy, u"萨霍文"_s);
	$var($String, metaValue_uga, u"乌加列文"_s);
	$var($String, metaValue_type_nu_taml, u"坦米尔数字"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"科隆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"欧甘文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"米兰德斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"符号"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"阿灿文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"马尔尼里文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"兰纳文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("egl"_s),
			$of(u"埃米利安文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwv"_s),
			$of(u"明打威文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"南岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"表情符号"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"雷西亚尼瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"明格列尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"古埃及文"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"拉贾斯坦诸文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"八思巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"提姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"特索文"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"复活岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"泰雷诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"阿森松岛"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"拉罗通加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"泰顿文"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"安道尔"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"阿拉伯联合大公国"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"佛兰芒文"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"阿富汗"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"安提瓜同巴布达"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"衣索比亚历"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"吉拉基文"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"安圭拉"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"时区"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"阿尔巴尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"亚美尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"谈格瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"安哥拉"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"南极洲"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"阿根廷"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"帕提亚文（碑铭体）"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"美属萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"奥地利"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"澳洲"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"荷属阿鲁巴"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"奥兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"姆耶内文"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"亚塞拜然"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"亚美尼亚东部"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波斯尼亚同黑塞哥维那"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"巴贝多"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"宿雾文"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"孟加拉"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"库密克文"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"比利时"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"中古高地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"布吉纳法索"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"保加利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"巴林"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"蒲隆地"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"贝南"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"圣巴瑟米"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"百慕达"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"库特奈文"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"厄尔兹亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"汶莱"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"玻利维亚"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"荷兰加勒比区"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"巴西"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"巴哈马"_s)
		}),
		$$new($ObjectArray, {
			$of("xog"_s),
			$of(u"索加文"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"不丹"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"布威岛"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"波札那"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"白俄罗斯"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"贝里斯"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"视觉语音文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"波斯历"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"希伯来数字"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"加拿大"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科科斯（基林）群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"马赞德兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"刚果（金夏沙）"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"中非共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"刚果（布拉萨）"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"瑞士"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"象牙海岸"_s)
		}),
		$$new($ObjectArray, {
			$of("CK"_s),
			$of(u"库克群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"智利"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"凯提文"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"喀麦隆"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"中华人民共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"哥伦比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"克里派顿岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"哥斯大黎加"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"古巴"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"维德角"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"库拉索"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"圣诞岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"赛普勒斯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"峇里文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"捷克"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"艾卡朱克文"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"西佛兰德文"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"德国"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"古高地日耳曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"亚齐文"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"奇加文"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"迪亚哥加西亚岛"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"孔卡尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"梵文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"吉布地"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"丹麦"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"阿侨利文"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"冈德文"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"盲人用点字"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"婆罗米文"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"多米尼克"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"小写亚美尼亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"多明尼加共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"科隆达罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"哥德文"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"美茵-法兰克尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"曼尼普尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"祖尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"蒂格雷文"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"塔卡里文字"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"阿尔及利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"潘加辛文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"半形"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"巴列维文"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"休达与梅利利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"奇布查文"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"潘帕嘉文"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"厄瓜多"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"帕皮阿门托文"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"阿当莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"爱沙尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"提夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"埃及"_s)
		}),
		$$new($ObjectArray, {
			$of("EH"_s),
			$of(u"西撒哈拉"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"查加文"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"帛琉文"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"处奇斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"契奴克文"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"马里文"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"奇佩瓦扬文"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"乔克托文"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"厄利垂亚"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"西班牙"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"衣索比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"欧盟"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"埃兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"公历"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"欧元区"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"沙伊安文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"古吉拉特数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"印度河流域（哈拉帕文）"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"阿迪各文"_s)
		}),
		$$new($ObjectArray, {
			$of("aeb"_s),
			$of(u"突尼斯阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("FI"_s),
			$of(u"芬兰"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"斐济"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"福克兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"密克罗尼西亚群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"区域变异"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"法罗群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"法国"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"克培列文"_s)
		}),
		$$new($ObjectArray, {
			$of("pcd"_s),
			$of(u"庇卡底文"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"托克劳文"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"格列博文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"印度国历"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"罗马格诺里文"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"古希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"加彭"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"查库尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"沃提克文"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"英国"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"尼日利亚皮钦语"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"格瑞那达"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"乔治亚共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"法属圭亚那"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"根西岛"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"迦纳"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"傣哪文"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"直布罗陀"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"阿弗里希利文"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"格陵兰"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"中古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"甘比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"几内亚"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"瓜地洛普"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"赤道几内亚"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"希腊"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"南佐治亚岛同南桑威奇群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"瓜地马拉"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"关岛"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"宾夕法尼亚德文"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"几内亚比索"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"特林基特文"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"克林贡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"西双版纳新傣文"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"盖亚那"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"索拉尼库尔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"无语言内容"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"女真文字"_s)
		}),
		$$new($ObjectArray, {
			$of("tly"_s),
			$of(u"塔里什文"_s)
		}),
		$$new($ObjectArray, {
			$of("pdt"_s),
			$of(u"门诺低地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"中华人民共和国香港特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"瓦依文"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"赫德岛同麦克唐纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"宏都拉斯"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"克罗埃西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"亚罕文"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"德文（瑞士）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"乌姆库拉历"_s)
		}),
		$$new($ObjectArray, {
			$of("HT"_s),
			$of(u"海地"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"匈牙利"_s)
		}),
		$$new($ObjectArray, {
			$of("rif"_s),
			$of(u"里菲亚诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"塔马奇克文"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"加那利群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"闽南语"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"印尼"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"克耶数字"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"爱尔兰"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"拿波里文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"苏利南恩都卡方言"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"纳马文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"索朗桑朋数字"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"扎扎文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"西夏文"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"以色列"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"纳巴泰文字"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"曼岛"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"印度"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"欧洲排序规则"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"英属印度洋领地"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"伊拉克"_s)
		}),
		$$new($ObjectArray, {
			$of("IR"_s),
			$of(u"伊朗"_s)
		}),
		$$new($ObjectArray, {
			$of("IS"_s),
			$of(u"冰岛"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"义大利"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"数学符号"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"泰文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"佛罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"瓦尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"电脑"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"孟加拉数字"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"普法尔茨德文"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"泽西岛"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"伊斯兰历"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"牙买加"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"约旦"_s)
		}),
		$$new($ObjectArray, {
			$of("gur"_s),
			$of(u"弗拉弗拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"日本"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"中世纪晚期法文（至1606年）"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"阿伊努文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"古西文"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"东加文（尼亚萨）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"坎那达数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"克耶李文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"悉昙文字"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"高地德文（瑞士）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"发音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"英格里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"佛历"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"肯亚"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"拉丁美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"吉尔吉斯"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"柬埔寨"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"吉里巴斯"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"葛摩"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"圣基茨同尼维斯"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"继承文字（Unicode）"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"北韩"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"南韩"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"柏格理拼音符"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"科威特"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"托比辛文"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"开曼群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"哈萨克"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"寮国"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"黎巴嫩"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"圣露西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"西里尔文（古教会斯拉夫文变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"圭契文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"俄罗斯文拼字（1917年后）"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"低地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"列支敦斯登"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"斯里兰卡"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"阿卡德文"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"赖比瑞亚"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"中尤皮克文"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"赖索托"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"巴列维文（书体）"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"立陶宛"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"卢森堡"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"拉脱维亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"片假名"_s)
		}),
		$$new($ObjectArray, {
			$of("Sora"_s),
			$of(u"索朗桑朋文字"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"利比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"拉迪诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"温旧文"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"阿拉巴马文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"传统梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"拉亨达文"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"朗吉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"塔安那文"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"摩洛哥"_s)
		}),
		$$new($ObjectArray, {
			$of("MC"_s),
			$of(u"摩纳哥"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"摩尔多瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"女书文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"蒙特内哥罗"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"法属圣马丁"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"兰巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"马达加斯加"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"马绍尔群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"阿留申文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"瓦伊文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"马其顿"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"马利"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"缅甸"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"蒙古"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"尼瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"中华人民共和国澳门特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"盖格阿尔巴尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"北马里亚纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"马丁尼克岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"茅利塔尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙哲腊"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"马尔他"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"卡皮兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"联合国地名专家组"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"模里西斯"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"南阿尔泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"马尔地夫"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"马拉威"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"墨西哥"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"日本历"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"马来西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"莫三比克"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"巴列维文（碑铭体）"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"纳米比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"撒哈拉以南非洲"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"希伯来历"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"字典排序"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"新喀里多尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"威妥玛式拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"图罗尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"统一康沃尔文修订拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"尼日"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"诺福克岛"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"奈及利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"太鲁阁文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"巴列维文（圣诗体）"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"尼加拉瓜"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"杨松录苗文"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"荷兰"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"挪威"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"尼泊尔"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"诺鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"特萨克尼恩文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"纽埃岛"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"兰博文"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"钦西安文"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"纽西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"麦罗埃文（曲线字体）"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"吉普赛文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"麦罗埃文"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"克里米亚半岛的土耳其文；克里米亚半岛的塔塔尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"阿曼王国"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"俄罗斯文拼字（1708 年）"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"昂加文"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"法语克里奥尔混合语"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"巴拿马"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"伊斯兰民用历"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"卡舒布文"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"秘鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"穆斯林塔特文"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法属玻里尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"巴布亚纽几内亚"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"菲律宾"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"巴基斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"波兰"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"依汪都文"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"圣皮埃尔同密克隆群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特肯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"波多黎各"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"巴勒斯坦自治区"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"葡萄牙"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"帛琉"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"尼亚斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"小写希腊数字"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"巴拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"图姆布卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"卡达"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"苏格兰标准英语"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"牙买加克里奥尔英文"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"皮埃蒙特文"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"纽埃文"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"大洋洲边疆群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"埃斯特雷马杜拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"列兹干文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA 拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"塔卡里数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"吐瓦鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"傣担文"_s)
		}),
		$$new($ObjectArray, {
			$of("001"_s),
			$of(u"世界"_s)
		}),
		$$new($ObjectArray, {
			$of("002"_s),
			$of(u"非洲"_s)
		}),
		$$new($ObjectArray, {
			$of("njo"_s),
			$of(u"阿沃那加文"_s)
		}),
		$$new($ObjectArray, {
			$of("003"_s),
			$of(u"北美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"留尼旺"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"南美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("lfn"_s),
			$of(u"新共同语言"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"逻辑文"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"旁狄希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"拉让文"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"大洋洲"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"瑞士苏瑟瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"罗马尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"塞尔维亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"谬文"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"俄罗斯"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"卢安达"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"新傣仂文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"摩尼教文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"卡罗须提文"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙乌地阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"波那贝文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"曼底安文"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"索罗门群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"北桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"西非"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"塞席尔"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"苏丹"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"中美"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"瑞典"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"东非"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"阿拉米文"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"洛马文"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"北非"_s)
		}),
		$$new($ObjectArray, {
			$of("SG"_s),
			$of(u"新加坡"_s)
		}),
		$$new($ObjectArray, {
			$of("SH"_s),
			$of(u"圣赫勒拿岛"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"强制换行样式"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"中非"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"斯洛维尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"非洲南部"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"斯瓦尔巴特群岛同扬马延岛"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"斯洛伐克"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"沃雷艾文"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"狮子山"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"圣马利诺"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"塞内加尔"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"索马利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"马普切文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"阿拉帕霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"苏利南"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"阿拉奥纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"南苏丹"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"圣多美同普林西比"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"阿尔及利亚阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"萨尔瓦多"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"荷属圣马丁"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"叙利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"瑶文"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"史瓦济兰"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"阿拉瓦克文"_s)
		}),
		$$new($ObjectArray, {
			$of("arz"_s),
			$of(u"埃及阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("ary"_s),
			$of(u"摩洛哥阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"雅浦文"_s)
		}),
		$$new($ObjectArray, {
			$of("rtm"_s),
			$of(u"罗图马岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"特里斯坦达库尼亚群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"阿苏文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"美制度量单位系统"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"北美"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"土克斯及开科斯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"洋卞文"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"查德"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法属南方属地"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"美国手语"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"多哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"泰国"_s)
		}),
		$$new($ObjectArray, {
			$of("TJ"_s),
			$of(u"塔吉克"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"加勒比海"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"托克劳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"东帝汶"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"耶姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"韩文子音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"土库曼"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"布恩特林方言"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"突尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"东加"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"土耳其"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"千里达同多巴哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"吐瓦鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"台湾"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"阿斯图里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"卢森尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"罗维阿纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"鄂尔浑文"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"坦尚尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"夸西奥文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"未知文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(metaValue_sd)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"乌克兰"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"利古里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"罗马尼亚语系"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"东亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"土凡文"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"史瓦希里文（刚果）"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"南亚"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"海达文"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"东南亚"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"乌干达"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"客家话"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"拼音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"南欧"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"锡兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"美国本土外小岛屿"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"利伏尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"联合国"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"美国"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"夏威夷文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"白俄罗斯文（学术）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"简体中文排序 - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"乌拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"普鲁士文"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"乌兹别克"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"塔马齐格特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"笔画排序"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"恩甘澎文"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"梵蒂冈"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"古普罗旺斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"圣文森特同格林纳丁斯"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"委内瑞拉"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"英属维京群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"美属维京群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"越南"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"万那杜"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"诺盖文"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"罗瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"古诺尔斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"澳洲同纽西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"亚美尼亚西部"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"美拉尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"瓦利斯同富图纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"传统排序"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"密克罗尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"恩格姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"拉科塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("nov"_s),
			$of(u"诺维亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"金融数字"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"科塔瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"平文式罗马字"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"瓦瑟文"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"曼尼普尔数字"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"瓦拉莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"瓦绍文"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"伪口音"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"瓦瑞文"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"伪 Bidi"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"阿瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"玻里尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"科索沃"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"婆罗米数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"非书写语言"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"桑塔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"沃皮瑞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"巴塔克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"布列斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"叶门"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"曼德文字 (N’Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"标准排序"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"伦巴底文"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"芳族文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"雷西亚方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"瑞士苏希瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"芳蒂文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"手语书写符号"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"马约特"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"占文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"南非"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"巽他数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"宽松换行样式"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"天城文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"乔治亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.zhuyin"_s),
			$of(u"注音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"尚比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"汉语拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"辛巴威"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"未知区域"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"古北欧文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"公制"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"国际标准 ISO 8601"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"芒戈文"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"北索托文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"泰卢固数字"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"洛齐文"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"纳西格巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"马恰美文"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"斐济印地文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"大写简体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"希利盖农文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"阿拉伯-印度扩充数字"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"努埃尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"达科他文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"全形数字"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"赫梯文"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"达尔格瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"台塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"玛雅象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"北卢尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"古尼瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"沃蒂艾克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"伊斯兰新月历"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"林布文"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"桑达韦文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"罗马数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"雅库特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"夏拉达数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"拉特加莱文"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"萨玛利亚阿拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"高加索阿尔巴尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"利物浦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"萨布鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"撒撒克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"散塔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"提非纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"犹太教-波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(u"数值"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"原始数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"甘拜文"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"古鲁穆奇文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"阿鲁库方言"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"鲁巴鲁鲁亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"比斯开方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"全形"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"桑古文"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"路易塞诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"尼扬科莱文"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"尼扬韦齐文"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"卢恩达文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"尼奥啰文"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"卢奥文"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"菲律宾文"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"孟文"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"德拉瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"卢晒文"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"俾路支文"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"斯拉夫"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(metaValue_ban)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(metaValue_uga)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"托尔讷芬兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"卢雅文"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"巴伐利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(metaValue_bax)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"犹太阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"尼兹马文"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"苏格兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"西西里文"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"阿法文"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"阿布哈兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"巴塔克托巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"阿纬斯陀文"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"南非荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"阿坎文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"查克马数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"戈马拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"阿姆哈拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"阿拉贡文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"雷西亚史托维萨方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(metaValue_ar)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"片假名或平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"阿萨姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"萨丁尼亚-萨萨里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"线性文字（A）"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"阿瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"线性文字（B）"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"南库尔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"艾马拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"亚塞拜然文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"克吉奇文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"雷西亚欧西亚柯方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"巴什客尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"部首笔画排序"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"白俄罗斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"保加利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"比斯拉马文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"爪哇文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"班巴拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"多格里布文"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"布列塔尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"波士尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"塞讷卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("sei"_s),
			$of(u"瑟里文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"寮国数字"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"赛纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"西非书面语言 (N’Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"瑟尔卡普文"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"加泰罗尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"东桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"车臣文"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"查莫洛文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"已修订的拼字学"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"科西嘉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"克里文"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"捷克文"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"宗教斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("yrl"_s),
			$of(u"奈恩加图文"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"楚瓦什文"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"威尔斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"衣索比亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"彝文"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"丹麦文"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"德文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"标准货币格式"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"贝扎文"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"丁卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"日德兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"别姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"古爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"蒙古数字"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"迪维西文"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"贝塔维文"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"宗卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"贝纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"农历"_s)
		}),
		$$new($ObjectArray, {
			$of("lzh"_s),
			$of(u"文言文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"栗僳文"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"扎尔马文"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"萨莫吉希亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"希腊数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"埃维文"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"富特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"一般换行样式"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"摩尔多瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"英文"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"世界文"_s)
		}),
		$$new($ObjectArray, {
			$of("bfq"_s),
			$of(u"巴达加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"拉兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"繁体中文排序 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"爱沙尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"汉语注音"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"巴斯克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"布希德文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"韩文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"撒马利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"希尔哈文"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"上索布文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"汉语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"爱尔兰阿尔斯特方言"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"掸文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"哈努诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"简体"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"阿拉伯数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁体"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"富拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"阿拉伯文（查德）"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"湘语"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"芬兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"斐济文"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"丰文"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"西俾路支文"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"粤语"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"法罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"美国地名委员会"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"姆本杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"法文"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"希达摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"西弗里西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"苏格兰盖尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"加利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"瓜拉尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"博杰普尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"未知语言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"衣索比亚历 (Amete Alem)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"伊斯兰天文历"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"曼岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"奥斯曼亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"豪撒文"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"北印度文"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"胡帕文"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"比科尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"比尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"西里莫图土文"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"克罗埃西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"海地文"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"匈牙利文"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"赫雷罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"卡真法文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"IPA 拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"国际文"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"韩文字母"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"印尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"西藏数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"国际文（E）"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"伊布文"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"四川彝文"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"中古法文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of(u"罗曼什文"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"依奴皮维克文"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"古法文"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"法兰克-普罗旺斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"伊多文"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"东弗里西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"班亚尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"北弗里西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"冰岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"义大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"因纽特文"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"下西利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"高地挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(metaValue_ja)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"古南阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"沙拉堤文"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"多格来文"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"塞拉亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"西纳文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"康姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"南萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"箫柏纳字符"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"佛教混合梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"马都拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"鲁勒萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"马加伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"马法文"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(metaValue_mai)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"伊纳里萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"锡克锡卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"望加锡文"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"吴语"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"斯科特萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"曼丁哥文"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"刚果文"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"歌德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"吉库尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"马赛文"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"广亚马文"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"哈萨克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"格陵兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"卡努里文"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"喀什米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"色斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"雷布查文"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"阿维斯陀文"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"库尔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"科米文"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"康瓦耳文"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"吉尔吉斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"索尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"卢森堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"马来亚拉姆数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"干达文"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"朗格朗格象形文"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"林堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"西藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"林加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"弗留利文"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"寮文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"英制度量单位系统"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"老傣文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"立陶宛文"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"鲁巴加丹加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"拉脱维亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"索格底亚纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}，{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"马拉加什文"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"马绍尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"预设 Unicode 排序"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"毛利文"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"马其顿文"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"马拉地文"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"马来文"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"马尔他文"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(metaValue_my)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(metaValue_hy)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"莫克沙文"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"马巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"下索布文"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"皇室亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"诺鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"一般用途搜寻"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"巴克摩挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北地毕列文"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"尼泊尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"恩东加文"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"曼达文"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"耐诺斯克挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南地毕列文"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"纳瓦霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"卡拉卡尔帕克文"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"尼扬贾文"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"卡琴文"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"卡比尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"希腊文多调正字法"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"奥克西坦文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"卡捷文"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"卡姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(metaValue_men)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"早期现代英语"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"奥杰布瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"梅鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"亚美尼亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"奥罗莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"卡威文"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"中部杜顺文"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"奥塞提文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"美国国会图书馆标准方案罗马化（1997年版）"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"比什奴普莱利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"卡巴尔达文"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"克里奥文（模里西斯）"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"苏拉南东墎文"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"旁遮普文"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"杜亚拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"塞雷尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"雷西亚利波瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"卡念布文"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"巴利文"_s)
		}),
		$$new($ObjectArray, {
			$of("bqi"_s),
			$of(u"巴赫蒂亚里文"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"波兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"中古荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"索拉什特拉文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"檀纪历"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"瑞士瓦勒德方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"普什图文"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"葡萄牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"中古爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"排序"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"卡塔布文"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"马夸文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"货币格式"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"曼德数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"布拉杰文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"历法"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"米兹泰尔方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"寮国文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"瑞士苏迈拉方言"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"美塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 小时制 (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 小时制 (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"布拉维文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"缅甸数字"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"盖楚瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"萨波特克文"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"博多文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"蓝拿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"马孔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"吠陀梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"沙特菲士兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"衣索比亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"香港语言学学会粤语拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 小时制 (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 小时制 (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"罗曼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"隆迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"货币"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"罗马尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"欧利亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"中文十进位数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"俄文"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"阿库色文"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"卢安达文"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"布列斯符号"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"卡布威尔第文"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"米克马克文"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"苏库马文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"杜普洛伊速记"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"统一康沃尔文拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"撒丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"苏苏文"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(metaValue_sd)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北方萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"米南卡堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"桑戈文"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"塞尔维亚克罗埃西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"肯扬文"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"僧伽罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"苏美文"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"斯洛伐克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"斯洛维尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"格兰他文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"萨摩亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"塞内加尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"索马利文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"阿拉伯-印度数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"阿尔巴尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"塞尔维亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}：{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"斯瓦特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"会计货币格式"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"塞索托文"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"那提松尼方言"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"瑞典文"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"史瓦希里文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"大写繁体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"伊比比奥文"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"伊班文"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"亚洲"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"布里阿特文"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"中亚"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"塔吉克文"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"提格利尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"科罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"土库曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"塔加路族文"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"突尼西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"东加文"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"布鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"朱拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"小写日文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(metaValue_ccp)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"特松加文"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"葛摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"鞑靼文"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"迪尤拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"特威文"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"大溪地文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"San Giorgio/Bila 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"欧洲"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"东欧"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"北欧"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"达萨文"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"西欧"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"维吾尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(metaValue_ko)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"古意大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("kgp"_s),
			$of(u"坎刚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"一般文字"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"乌克兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"西兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"科普特历"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"乌都文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"标准雷西亚拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"卡尔梅克文"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"泽纳加文"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"乌兹别克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"卡西文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 年的德语拼字学"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"低地萨克逊文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"希洛弟纳格里文"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"温达文"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"瓦郎奇蒂文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"民国历"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"越南文"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"和阗文"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"西桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"时间周期（12 小时制与 24 小时制）"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"白俄罗斯文传统拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"沃拉普克文"_s)
		}),
		$$new($ObjectArray, {
			$of("khw"_s),
			$of(u"科瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"古叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"欧斯曼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"基切文"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"钦博拉索海兰盖丘亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"加族文"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"瓦隆文"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"加告兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"赣语"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"北扎扎其文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"里底亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"苏米鲁亚甲文楔形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"沃洛夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"标准摩洛哥塔马塞特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"现代标准阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"加拿大原住民通用字符"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"X-SAMPA 音标"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"加约文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"满族文"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"拉丁文（尖角体活字变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"西利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"安那托利亚象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"葛巴亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"曼尼普里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"拉丁文（盖尔语变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"小写简体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"小写繁体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"科萨文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"小写罗马数字"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"比林文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"苏利南帕马卡方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"吕西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"欧塞奇文"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"梅敦巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"索罗亚斯德教达里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"蒙氏点字"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"莫霍克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"卡库文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"早期现代法文"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"意第绪文"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"莫西文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"敍利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"德瑟雷特文"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"约鲁巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"传统数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"叙利亚文（西方文字变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"鄂图曼土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"叙利亚文（福音体文字变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"瓦伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"壮文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"卡里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"卡伦金文"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"阿法卡文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"注音符号"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"古彼尔姆诸文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"换行样式"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"祖鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"电话簿排序"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"希腊文单调正字法"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"夏拉达文"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"金邦杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"大写日文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"占文"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"吉兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"西马里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"叙利亚文（东方文字变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"缅甸掸文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"爱尔巴桑文"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"古北阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"桑塔利文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"改良排序"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"塔加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"古埃及世俗体"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"古埃及僧侣体"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"史诗梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"帕米瑞拉文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"恩布文"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"古埃及象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"乔治亚语系（阿索他路里和努斯克胡里文）"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"简体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"科米-彼尔米亚克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"古匈牙利文"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"贡根文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"传统德语拼字学"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"科斯雷恩文"_s)
		}),
		$$new($ObjectArray, {
			$of("vec"_s),
			$of(u"威尼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.limb"_s),
			$of(u"林布文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"繁体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"维普森文"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"克佩列文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"高棉数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(metaValue_mai)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"伊洛阔文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"瓦伦西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"塞浦路斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"统一土耳其拉丁字母"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"蒙当文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"古尔穆奇数字"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"多种语言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"瑞士普特尔方言"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"卡多文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"度量单位系统"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"克里克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"格拉哥里文"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"吉尔伯特群岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"通用康沃尔文拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"加勒比文"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"卡尤加文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"卡拉柴-包尔卡尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"印古什文"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"基那来阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"塞拉利昂克里奥尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"达里文"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"卡累利阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"埃菲克文"_s)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"图卢文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(u"数字"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"库鲁科文"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"尚巴拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"巴菲亚文"_s)
		})
	}));
	return data;
}

LocaleNames_yue_Hans::LocaleNames_yue_Hans() {
}

$Class* LocaleNames_yue_Hans::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_yue_Hans, name, initialize, &_LocaleNames_yue_Hans_ClassInfo_, allocate$LocaleNames_yue_Hans);
	return class$;
}

$Class* LocaleNames_yue_Hans::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun