#include <sun/util/resources/cldr/ext/LocaleNames_zh_Hant.h>

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

$MethodInfo _LocaleNames_zh_Hant_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zh_Hant, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zh_Hant, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zh_Hant_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zh_Hant",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_Hant_MethodInfo_
};

$Object* allocate$LocaleNames_zh_Hant($Class* clazz) {
	return $of($alloc(LocaleNames_zh_Hant));
}

void LocaleNames_zh_Hant::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zh_Hant::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ar, u"阿拉伯文"_s);
	$var($String, metaValue_bn, u"孟加拉文"_s);
	$var($String, metaValue_bo, u"藏文"_s);
	$var($String, metaValue_el, u"希臘文"_s);
	$var($String, metaValue_ff, u"富拉文"_s);
	$var($String, metaValue_gu, u"古吉拉特文"_s);
	$var($String, metaValue_he, u"希伯來文"_s);
	$var($String, metaValue_hi, u"印地文"_s);
	$var($String, metaValue_hy, u"亞美尼亞文"_s);
	$var($String, metaValue_ja, u"日文"_s);
	$var($String, metaValue_jv, u"爪哇文"_s);
	$var($String, metaValue_ka, u"喬治亞文"_s);
	$var($String, metaValue_km, u"高棉文"_s);
	$var($String, metaValue_kn, u"坎那達文"_s);
	$var($String, metaValue_ko, u"韓文"_s);
	$var($String, metaValue_la, u"拉丁文"_s);
	$var($String, metaValue_ml, u"馬來亞拉姆文"_s);
	$var($String, metaValue_mn, u"蒙古文"_s);
	$var($String, metaValue_mr, u"馬拉地文"_s);
	$var($String, metaValue_my, u"緬甸文"_s);
	$var($String, metaValue_or, u"歐迪亞文"_s);
	$var($String, metaValue_sa, u"梵文"_s);
	$var($String, metaValue_sd, u"信德文"_s);
	$var($String, metaValue_su, u"巽他文"_s);
	$var($String, metaValue_ta, u"坦米爾文"_s);
	$var($String, metaValue_te, u"泰盧固文"_s);
	$var($String, metaValue_th, u"泰文"_s);
	$var($String, metaValue_ban, u"峇里文"_s);
	$var($String, metaValue_bas, u"巴薩文"_s);
	$var($String, metaValue_bax, u"巴姆穆文"_s);
	$var($String, metaValue_bug, u"布吉斯文"_s);
	$var($String, metaValue_ccp, u"查克馬文"_s);
	$var($String, metaValue_chr, u"柴羅基文"_s);
	$var($String, metaValue_cop, u"科普特文"_s);
	$var($String, metaValue_gon, u"岡德文"_s);
	$var($String, metaValue_mai, u"邁蒂利文"_s);
	$var($String, metaValue_men, u"門德文"_s);
	$var($String, metaValue_mni, u"曼尼普爾文"_s);
	$var($String, metaValue_osa, u"歐塞奇文"_s);
	$var($String, metaValue_peo, u"古波斯文"_s);
	$var($String, metaValue_phn, u"腓尼基文"_s);
	$var($String, metaValue_sat, u"桑塔利文"_s);
	$var($String, metaValue_saz, u"索拉什特拉文"_s);
	$var($String, metaValue_ssy, u"薩霍文"_s);
	$var($String, metaValue_uga, u"烏加列文"_s);
	$var($String, metaValue_Zsye, u"表情符號"_s);
	$var($String, metaValue_key_nu, u"數字"_s);
	$var($String, metaValue_type_nu_taml, u"坦米爾數字"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"科隆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"歐甘文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"米蘭德斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"符號"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"阿燦文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"馬瓦里文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"蘭納文數字"_s)
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
			$of("Zsye"_s),
			$of(metaValue_Zsye)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"南島文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"雷西亞尼瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("xmf"_s),
			$of(u"明格列爾文"_s)
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
			$of(u"拉賈斯坦諸文"_s)
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
			$of("type.nu.sind"_s),
			$of(u"信德數字"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"特索文"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"復活島文"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"泰雷諾文"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"阿森松島"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"拉羅通加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"泰頓文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"卡布佛得鲁向風群島方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"僧伽羅數字"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"安道爾"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"阿拉伯聯合大公國"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"佛蘭芒文"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"阿富汗"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"安地卡及巴布達"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"默文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"衣索比亞曆"_s)
		}),
		$$new($ObjectArray, {
			$of("glk"_s),
			$of(u"吉拉基文"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"安奎拉"_s)
		}),
		$$new($ObjectArray, {
			$of("key.tz"_s),
			$of(u"時區"_s)
		}),
		$$new($ObjectArray, {
			$of("AL"_s),
			$of(u"阿爾巴尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("AM"_s),
			$of(u"亞美尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"談格瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("AO"_s),
			$of(u"安哥拉"_s)
		}),
		$$new($ObjectArray, {
			$of("AQ"_s),
			$of(u"南極洲"_s)
		}),
		$$new($ObjectArray, {
			$of("AR"_s),
			$of(u"阿根廷"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"帕提亞文（碑銘體）"_s)
		}),
		$$new($ObjectArray, {
			$of("AS"_s),
			$of(u"美屬薩摩亞"_s)
		}),
		$$new($ObjectArray, {
			$of("AT"_s),
			$of(u"奧地利"_s)
		}),
		$$new($ObjectArray, {
			$of("AU"_s),
			$of(u"澳洲"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"荷屬阿魯巴"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"奧蘭群島"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"姆耶內文"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"亞塞拜然"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"亞美尼亞東部"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波士尼亞與赫塞哥維納"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"巴貝多"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"宿霧文"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"孟加拉"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"庫密克文"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"比利時"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"中古高地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"布吉納法索"_s)
		}),
		$$new($ObjectArray, {
			$of("BG"_s),
			$of(u"保加利亞"_s)
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
			$of(u"貝南"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"聖巴瑟米"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"百慕達"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"庫特奈文"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"厄爾茲亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"汶萊"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"玻利維亞"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"荷蘭加勒比區"_s)
		}),
		$$new($ObjectArray, {
			$of("BR"_s),
			$of(u"巴西"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"巴哈馬"_s)
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
			$of(u"布威島"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"波札那"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"白俄羅斯"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"貝里斯"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"視覺語音文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"波斯曆"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hebr"_s),
			$of(u"希伯來數字"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"加拿大"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科克斯（基靈）群島"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"馬贊德蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"剛果（金夏沙）"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"中非共和國"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"剛果（布拉薩）"_s)
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
			$of(u"庫克群島"_s)
		}),
		$$new($ObjectArray, {
			$of("CL"_s),
			$of(u"智利"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"凱提文"_s)
		}),
		$$new($ObjectArray, {
			$of("CM"_s),
			$of(u"喀麥隆"_s)
		}),
		$$new($ObjectArray, {
			$of("CN"_s),
			$of(u"中國"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"哥倫比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"克里派頓島"_s)
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
			$of(u"維德角"_s)
		}),
		$$new($ObjectArray, {
			$of("CW"_s),
			$of(u"庫拉索"_s)
		}),
		$$new($ObjectArray, {
			$of("CX"_s),
			$of(u"聖誕島"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"賽普勒斯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"峇里文數字"_s)
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
			$of("Ahom"_s),
			$of(u"阿洪姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"鮑欽豪文"_s)
		}),
		$$new($ObjectArray, {
			$of("vls"_s),
			$of(u"西佛蘭德文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"古典沃拉普克文"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"德國"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"古高地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"亞齊文"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"奇加文"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"迪亞哥加西亞島"_s)
		}),
		$$new($ObjectArray, {
			$of("gom"_s),
			$of(u"孔卡尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"梵文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"吉布地"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(metaValue_gon)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"丹麥"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"阿僑利文"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"盲人用點字"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"婆羅米文"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"多米尼克"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"小寫亞美尼亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"多明尼加共和國"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"科隆達羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"哥德文"_s)
		}),
		$$new($ObjectArray, {
			$of("vmf"_s),
			$of(u"美茵-法蘭克尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(metaValue_mni)
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
			$of(u"阿爾及利亞"_s)
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
			$of(u"巴列維文"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"休達與梅利利亞"_s)
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
			$of(u"帕皮阿門托文"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"阿當莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"愛沙尼亞"_s)
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
			$of(u"處奇斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"契奴克文"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"馬里文"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"奇佩瓦揚文"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"喬克托文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"數學粗體數字"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(metaValue_chr)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"厄利垂亞"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"西班牙"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"衣索比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"歐盟"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"埃蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.gregorian"_s),
			$of(u"公曆"_s)
		}),
		$$new($ObjectArray, {
			$of("EZ"_s),
			$of(u"歐元區"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"沙伊安文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"古吉拉特數字"_s)
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
			$of(u"芬蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("FJ"_s),
			$of(u"斐濟"_s)
		}),
		$$new($ObjectArray, {
			$of("FK"_s),
			$of(u"福克蘭群島"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"密克羅尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"區域變異"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"法羅群島"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"法國"_s)
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
			$of(u"托克勞文"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"格列博文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"謙柯字母"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"印度國曆"_s)
		}),
		$$new($ObjectArray, {
			$of("rgn"_s),
			$of(u"羅馬格諾里文"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"古希臘文"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"加彭"_s)
		}),
		$$new($ObjectArray, {
			$of("tkr"_s),
			$of(u"查庫爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"沃提克文"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"英國"_s)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"奈及利亞皮欽文"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"格瑞那達"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"喬治亞"_s)
		}),
		$$new($ObjectArray, {
			$of("GF"_s),
			$of(u"法屬圭亞那"_s)
		}),
		$$new($ObjectArray, {
			$of("GG"_s),
			$of(u"根息"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"迦納"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"傣哪文"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"直布羅陀"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"阿弗里希利文"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"格陵蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"中古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"甘比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"幾內亞"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"瓜地洛普"_s)
		}),
		$$new($ObjectArray, {
			$of("GQ"_s),
			$of(u"赤道幾內亞"_s)
		}),
		$$new($ObjectArray, {
			$of("GR"_s),
			$of(u"希臘"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"南喬治亞與南三明治群島"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"瓜地馬拉"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"關島"_s)
		}),
		$$new($ObjectArray, {
			$of("pdc"_s),
			$of(u"賓夕法尼亞德文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"數學等寬數字"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"幾內亞比索"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"特林基特文"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"克林貢文"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"西雙版納新傣文"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"蓋亞那"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"中庫德文"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"無語言內容"_s)
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
			$of(u"門諾低地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"中國香港特別行政區"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"瓦依文"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"赫德島及麥唐納群島"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"宏都拉斯"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"克羅埃西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"亞罕文"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"德文（瑞士）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"烏姆庫拉曆"_s)
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
			$of(u"里菲亞諾文"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"塔馬奇克文"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"加那利群島"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"閩南語"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of(metaValue_ff)
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
			$of(u"克耶數字"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"愛爾蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"拿波里文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"蘇利南恩都卡方言"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"納馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"索朗桑朋數字"_s)
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
			$of(u"納巴泰文字"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"曼島"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"印度"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.eor"_s),
			$of(u"歐洲排序規則"_s)
		}),
		$$new($ObjectArray, {
			$of("IO"_s),
			$of(u"英屬印度洋領地"_s)
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
			$of(u"冰島"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"義大利"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"數學符號"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.thai"_s),
			$of(u"泰文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("vro"_s),
			$of(u"佛羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("guc"_s),
			$of(u"瓦尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POSIX"_s),
			$of(u"電腦"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"孟加拉數字"_s)
		}),
		$$new($ObjectArray, {
			$of("pfl"_s),
			$of(u"普法爾茨德文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"西里爾數字"_s)
		}),
		$$new($ObjectArray, {
			$of("JE"_s),
			$of(u"澤西島"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic"_s),
			$of(u"伊斯蘭曆"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(metaValue_bn)
		}),
		$$new($ObjectArray, {
			$of("JM"_s),
			$of(u"牙買加"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"易卡發音塞爾維亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"約旦"_s)
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
			$of(u"中世紀晚期法文（至1606年）"_s)
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
			$of(u"東加文（尼亞薩）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"坎那達數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"克耶李文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"悉曇文字"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"高地德文（瑞士）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"發音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("izh"_s),
			$of(u"英格里亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"佛曆"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"肯亞"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"拉丁美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"吉爾吉斯"_s)
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
			$of(u"聖克里斯多福及尼維斯"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"繼承文字（Unicode）"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"北韓"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"南韓"_s)
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
			$of(u"開曼群島"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"哈薩克"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"寮國"_s)
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
			$of(u"聖露西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"西里爾文（古教會斯拉夫文變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"圭契文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"俄羅斯文拼字（1917年後）"_s)
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
			$of(u"斯里蘭卡"_s)
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
			$of(u"賴比瑞亞"_s)
		}),
		$$new($ObjectArray, {
			$of("esu"_s),
			$of(u"中尤皮克文"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"賴索托"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"巴列維文（書體）"_s)
		}),
		$$new($ObjectArray, {
			$of("LT"_s),
			$of(u"立陶宛"_s)
		}),
		$$new($ObjectArray, {
			$of("LU"_s),
			$of(u"盧森堡"_s)
		}),
		$$new($ObjectArray, {
			$of("LV"_s),
			$of(u"拉脫維亞"_s)
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
			$of(u"利比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"拉迪諾文"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"溫舊文"_s)
		}),
		$$new($ObjectArray, {
			$of("akz"_s),
			$of(u"阿拉巴馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"傳統梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(metaValue_hi)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"拉亨達文"_s)
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
			$of(u"摩納哥"_s)
		}),
		$$new($ObjectArray, {
			$of("MD"_s),
			$of(u"摩爾多瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("Nshu"_s),
			$of(u"女書文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"蒙特內哥羅"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"法屬聖馬丁"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"蘭巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"馬達加斯加"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(metaValue_th)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"馬紹爾群島"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"阿留申文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"瓦伊文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"北馬其頓"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"數學雙重數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"馬利"_s)
		}),
		$$new($ObjectArray, {
			$of("MM"_s),
			$of(u"緬甸"_s)
		}),
		$$new($ObjectArray, {
			$of("MN"_s),
			$of(u"蒙古"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"尼瓦爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"中國澳門特別行政區"_s)
		}),
		$$new($ObjectArray, {
			$of("aln"_s),
			$of(u"蓋格阿爾巴尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"北馬利安納群島"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"馬丁尼克"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"茅利塔尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙哲臘"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"馬爾他"_s)
		}),
		$$new($ObjectArray, {
			$of("cps"_s),
			$of(u"卡皮茲文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"聯合國地名專家組"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"模里西斯"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"南阿爾泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"馬爾地夫"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"馬拉威"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"墨西哥"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"日本曆"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"馬來西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"莫三比克"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"巴列維文（碑銘體）"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"納米比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("202"_s),
			$of(u"撒哈拉撒沙漠以南非洲"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.hebrew"_s),
			$of(u"希伯來曆"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"字典排序"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"新喀里多尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("%%WADEGILE"_s),
			$of(u"威妥瑪式拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("tru"_s),
			$of(u"圖羅尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"統一康沃爾文修訂拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"尼日"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"諾福克島"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"奈及利亞"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"太魯閣文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"巴列維文（聖詩體）"_s)
		}),
		$$new($ObjectArray, {
			$of("NI"_s),
			$of(u"尼加拉瓜"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"楊松錄苗文"_s)
		}),
		$$new($ObjectArray, {
			$of("NL"_s),
			$of(u"荷蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("NO"_s),
			$of(u"挪威"_s)
		}),
		$$new($ObjectArray, {
			$of("NP"_s),
			$of(u"尼泊爾"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"諾魯"_s)
		}),
		$$new($ObjectArray, {
			$of("tsd"_s),
			$of(u"特薩克尼恩文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(metaValue_phn)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"紐埃島"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"蘭博文"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"欽西安文"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"紐西蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"麥羅埃文（曲線字體）"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"1945 年巴西葡萄牙文拼字標準"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"吉普賽文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"麥羅埃文"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"土耳其文（克里米亞半島）"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"阿曼"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"俄羅斯文拼字（1708 年）"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"昂加文"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"塞席爾克里奧爾法文"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(metaValue_peo)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"帕哈苗數字"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"巴拿馬"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"伊斯蘭民用曆"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"卡舒布文"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"秘魯"_s)
		}),
		$$new($ObjectArray, {
			$of("ttt"_s),
			$of(u"穆斯林塔特文"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法屬玻里尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"巴布亞紐幾內亞"_s)
		}),
		$$new($ObjectArray, {
			$of("PH"_s),
			$of(u"菲律賓"_s)
		}),
		$$new($ObjectArray, {
			$of("PK"_s),
			$of(u"巴基斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"波蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"依汪都文"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"聖皮埃與密克隆群島"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特肯群島"_s)
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
			$of(u"巴勒斯坦自治區"_s)
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
			$of(u"尼亞斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"小寫希臘數字"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"巴拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"圖姆布卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(metaValue_he)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"卡達"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"蘇格蘭標準英文"_s)
		}),
		$$new($ObjectArray, {
			$of("jam"_s),
			$of(u"牙買加克里奧爾英文"_s)
		}),
		$$new($ObjectArray, {
			$of("pms"_s),
			$of(u"皮埃蒙特文"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"紐埃文"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"大洋洲邊疆群島"_s)
		}),
		$$new($ObjectArray, {
			$of("ext"_s),
			$of(u"埃斯特雷馬杜拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"列茲干文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"阿洪姆數字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA 拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"塔卡里數字"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"吐瓦魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"傣擔文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"卡布佛得鲁背風群島方言"_s)
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
			$of(u"新共同語言"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"邏輯文"_s)
		}),
		$$new($ObjectArray, {
			$of("pnt"_s),
			$of(u"旁狄希臘文"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"拉讓文"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"大洋洲"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURSILV"_s),
			$of(u"瑞士蘇瑟瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("RO"_s),
			$of(u"羅馬尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("RS"_s),
			$of(u"塞爾維亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Mroo"_s),
			$of(u"謬文"_s)
		}),
		$$new($ObjectArray, {
			$of("RU"_s),
			$of(u"俄羅斯"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"盧安達"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"新傣仂文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"梅泰爾科字母"_s)
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
			$of(u"卡羅須提文"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙烏地阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"波那貝文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"曼底安文"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"索羅門群島"_s)
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
			$of(u"塞席爾"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"蘇丹"_s)
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
			$of(u"東非"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"阿拉米文"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"洛馬文"_s)
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
			$of(u"聖赫勒拿島"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"強制換行樣式"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"中非"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"斯洛維尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"緬甸傣族數字"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"非洲南部"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"挪威屬斯瓦巴及尖棉"_s)
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
			$of(u"獅子山"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"聖馬利諾"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"塞內加爾"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"索馬利亞"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"馬普切文"_s)
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
			$of(u"蘇利南"_s)
		}),
		$$new($ObjectArray, {
			$of("aro"_s),
			$of(u"阿拉奧納文"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"南蘇丹"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"聖多美普林西比"_s)
		}),
		$$new($ObjectArray, {
			$of("arq"_s),
			$of(u"阿爾及利亞阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"薩爾瓦多"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"納吉迪阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("SX"_s),
			$of(u"荷屬聖馬丁"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"敘利亞"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"瑤文"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"史瓦帝尼"_s)
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
			$of(u"羅圖馬島文"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"特里斯坦達庫尼亞群島"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"阿蘇文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"美制度量單位系統"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"北美"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"土克斯及開科斯群島"_s)
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
			$of("Qaag"_s),
			$of(u"佐基文"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法屬南部屬地"_s)
		}),
		$$new($ObjectArray, {
			$of("ase"_s),
			$of(u"美國手語"_s)
		}),
		$$new($ObjectArray, {
			$of("TG"_s),
			$of(u"多哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TH"_s),
			$of(u"泰國"_s)
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
			$of(u"托克勞群島"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"東帝汶"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"耶姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"韓文子音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"土庫曼"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"布恩特林方言"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"突尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"東加"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"現代沃拉普克文"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"土耳其"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"千里達及托巴哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"吐瓦魯"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"台灣"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"阿斯圖里亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("rue"_s),
			$of(u"盧森尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("rug"_s),
			$of(u"羅維阿納文"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"鄂爾渾文"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"坦尚尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"夸西奧文"_s)
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
			$of(u"烏克蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("lij"_s),
			$of(u"利古里亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"羅馬尼亞語系"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"東亞"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"圖瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"史瓦希里文（剛果）"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"南亞"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"海達文"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"東南亞"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"烏干達"_s)
		}),
		$$new($ObjectArray, {
			$of("hak"_s),
			$of(u"客家話"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.pinyin"_s),
			$of(u"拼音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"南歐"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"錫蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"美國本土外小島嶼"_s)
		}),
		$$new($ObjectArray, {
			$of("liv"_s),
			$of(u"利伏尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("UN"_s),
			$of(u"聯合國"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"美國"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"夏威夷文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"白俄羅斯文（學術）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"簡體中文排序 - GB2312"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"烏拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("prg"_s),
			$of(u"普魯士文"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"烏茲別克"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"中阿特拉斯塔馬塞特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"筆畫排序"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"恩甘澎文"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"梵蒂岡"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"古普羅旺斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"聖文森及格瑞那丁"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"委內瑞拉"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"英屬維京群島"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"美屬維京群島"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of(u"索永布文字"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"越南"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"萬那杜"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of(metaValue_bo)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"諾蓋文"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"羅瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"古諾爾斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"澳洲與紐西蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"亞美尼亞西部"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"美拉尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"瓦利斯群島和富圖那群島"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"傳統排序"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"密克羅尼西亞群島"_s)
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
			$of(u"諾維亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"金融數字"_s)
		}),
		$$new($ObjectArray, {
			$of("avk"_s),
			$of(u"科塔瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"平文式羅馬字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"舊制排序"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"瓦爾瑟文"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"薩摩亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(metaValue_bas)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"曼尼普爾數字"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"瓦拉莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"瓦紹文"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"偽區域"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"瓦瑞文"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"偽比迪"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"阿瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"玻里尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"標準拼寫"_s)
		}),
		$$new($ObjectArray, {
			$of("XK"_s),
			$of(u"科索沃"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.brah"_s),
			$of(u"婆羅米數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"非書寫語言"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(metaValue_sat)
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
			$of(u"葉門"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"曼德文字 (N’Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"標準排序"_s)
		}),
		$$new($ObjectArray, {
			$of("lmo"_s),
			$of(u"倫巴底文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of(u"札那巴札爾文字"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"芳族文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of(u"安尼巴朗卡方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"雷西亞方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"瑞士蘇希瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"芳蒂文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"手語書寫符號"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"馬約特島"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cham"_s),
			$of(u"占文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"南非"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"巽他數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"寬鬆換行樣式"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"天城文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"喬治亞數字"_s)
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
			$of(u"尚比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"漢語拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"辛巴威"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"未知區域"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"古北歐文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"公制"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"ISO 8601 國際曆法"_s)
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
			$of(u"泰盧固數字"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"路易斯安那克里奧爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"洛齊文"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"納西格巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"馬恰美文"_s)
		}),
		$$new($ObjectArray, {
			$of("hif"_s),
			$of(u"斐濟印地文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"大寫簡體中文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"希利蓋農文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"阿拉伯-印度擴充數字"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"努埃爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"達科他文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"全形數字"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"赫梯文"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"達爾格瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"台塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"瑪雅象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"北盧爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(metaValue_Zsye)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(metaValue_cop)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"古尼瓦爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"烏德穆爾特文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(metaValue_km)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"伊斯蘭新月曆"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"林佈文"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"桑達韋文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"羅馬數字"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"雅庫特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"夏拉達數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ltg"_s),
			$of(u"拉特加萊文"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"薩瑪利亞阿拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Aghb"_s),
			$of(u"高加索阿爾巴尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOUSE"_s),
			$of(u"利物浦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("saq"_s),
			$of(u"薩布魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"撒撒克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(metaValue_sat)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"提非納文"_s)
		}),
		$$new($ObjectArray, {
			$of("saz"_s),
			$of(metaValue_saz)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"猶太教-波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"原始數字"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"甘拜文"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"古魯穆奇文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"阿魯庫方言"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"魯巴魯魯亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"比斯開方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"提爾胡塔數字"_s)
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
			$of(u"路易塞諾文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"尼揚科萊文"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"尼揚韋齊文"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"盧恩達文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"尼奧囉文"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"盧奧文"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"菲律賓文"_s)
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
			$of(u"米佐文"_s)
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
			$of("type.nu.wara"_s),
			$of(u"瓦蘭齊地數字"_s)
		}),
		$$new($ObjectArray, {
			$of("fit"_s),
			$of(u"托爾訥芬蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"盧雅文"_s)
		}),
		$$new($ObjectArray, {
			$of("bar"_s),
			$of(u"巴伐利亞文"_s)
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
			$of("%%ABL1943"_s),
			$of(u"1943 年拼字標準"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"猶太阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"尼茲馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"蘇格蘭文"_s)
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
			$of(u"阿布哈茲文"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"波斯體"_s)
		}),
		$$new($ObjectArray, {
			$of("bbc"_s),
			$of(u"巴塔克托巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"阿維斯塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"南非荷蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"阿坎文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"查克馬數字"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"戈馬拉文"_s)
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
			$of(u"阿拉貢文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"雷西亞史托維薩方言"_s)
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
			$of(u"阿薩姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("sdc"_s),
			$of(u"薩丁尼亞-薩薩里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"線性文字（A）"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"阿瓦爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"線性文字（B）"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"南庫德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"艾馬拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"亞塞拜然文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"克吉奇文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"雷西亞歐西亞柯方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"巴什喀爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"部首筆畫排序"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"白俄羅斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"保加利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"比斯拉馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"爪哇文數字"_s)
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
			$of(metaValue_bo)
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
			$of("Bhks"_s),
			$of(metaValue_sa)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"波士尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"塞訥卡文"_s)
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
			$of(u"寮國數字"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"賽納文"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"西非書面語言 (N’Ko)"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"塞爾庫普文"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"加泰蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"東桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"車臣文"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"查莫洛文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"已修訂的拼字學"_s)
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
			$of(u"奈恩加圖文"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"楚瓦什文"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"威爾斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"衣索比亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"彞文"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"丹麥文"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"德文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"標準貨幣格式"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"貝扎文"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"丁卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("jut"_s),
			$of(u"日德蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(metaValue_bug)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"別姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"古愛爾蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"蒙古數字"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"迪維西文"_s)
		}),
		$$new($ObjectArray, {
			$of("bew"_s),
			$of(u"貝塔維文"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"宗卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"貝納文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"農曆"_s)
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
			$of(u"扎爾馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("sgs"_s),
			$of(u"薩莫吉希亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"希臘數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"埃維文"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"富特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"一般換行樣式"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"摩爾多瓦文"_s)
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
			$of(u"巴達加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lzz"_s),
			$of(u"拉茲文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"繁體中文排序 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"愛沙尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"標上注音符號的漢字"_s)
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
			$of(u"韓文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"撒馬利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"希爾哈文"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"上索布文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"漢字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"愛爾蘭阿爾斯特方言"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"撣文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"哈努諾文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"簡體"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"阿拉伯數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁體"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(metaValue_ff)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"阿拉伯文（查德）"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"湘語"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"芬蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"斐濟文"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"豐文"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"西俾路支文"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"粵語"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"法羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"美國地名委員會"_s)
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
			$of(u"希達摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"西弗里西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"愛爾蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"蘇格蘭蓋爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"加利西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of(metaValue_gon)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"瓜拉尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"博傑普爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"未知語言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"衣索比亞曆 (Amete Alem)"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(metaValue_gu)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"伊斯蘭天文曆"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"曼島文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"奧斯曼亞數字"_s)
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
			$of(metaValue_hi)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"胡帕文"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"比科爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"比尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"西里莫圖土文"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"克羅埃西亞文"_s)
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
			$of(u"赫雷羅文"_s)
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
			$of(u"國際文"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"韓文字母"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"印尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"西藏數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"國際文（E）"_s)
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
			$of(u"羅曼什文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"1990 年葡語書寫協議的拼寫"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"依奴皮維克文"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"古法文"_s)
		}),
		$$new($ObjectArray, {
			$of("frp"_s),
			$of(u"法蘭克-普羅旺斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"伊多文"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"東弗里西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("bjn"_s),
			$of(u"班亞爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"北弗里西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"冰島文"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"義大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"因紐特文"_s)
		}),
		$$new($ObjectArray, {
			$of("sli"_s),
			$of(u"下西利西亞文"_s)
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
			$of(u"多格來文"_s)
		}),
		$$new($ObjectArray, {
			$of("sly"_s),
			$of(u"塞拉亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"西納文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"康姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"南薩米文"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(metaValue_jv)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"簫柏納字符"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"佛教混合梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"馬都拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"魯勒薩米文"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"馬加伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"馬法文"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(metaValue_mai)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"伊納里薩米文"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"錫克錫卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"望加錫文"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"吳語"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"斯科特薩米文"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"曼丁哥文"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"剛果文"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"歌德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"吉庫尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"馬賽文"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"廣亞馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"哈薩克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"格陵蘭文"_s)
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
			$of(u"喀什米爾文"_s)
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
			$of(u"阿維斯陀文"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"庫德文"_s)
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
			$of(u"吉爾吉斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"索尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of(u"木爾坦文"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of(u"哈特拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"盧森堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"馬來亞拉姆數字"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"干達文"_s)
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
			$of(u"英制度量單位系統"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"老傣文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"立陶宛文"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"魯巴加丹加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"拉脫維亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"索格底亞納文"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}，{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"馬達加斯加文"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"馬紹爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"預設 Unicode 排序"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"毛利文"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"馬其頓文"_s)
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
			$of(metaValue_mr)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"馬來文"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"馬爾他文"_s)
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
			$of(u"馬巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"下索布文"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"皇室亞美尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"諾魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"一般用途搜尋"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"巴克摩挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北地畢列文"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"尼泊爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"恩東加文"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"曼達文"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"荷蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"耐諾斯克挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南地畢列文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"莫笛數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"納瓦霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"卡拉卡爾帕克文"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"尼揚賈文"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"卡琴文"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"卡比爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"希臘文多調正字法"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"奧克西坦文"_s)
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
			$of(u"早期現代英語"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"奧杰布瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"梅魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"亞美尼亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"奧羅莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"卡威文"_s)
		}),
		$$new($ObjectArray, {
			$of("dtp"_s),
			$of(u"中部杜順文"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(metaValue_mr)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"奧塞提文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"美國國會圖書館標準方案羅馬化（1997年版）"_s)
		}),
		$$new($ObjectArray, {
			$of("bpy"_s),
			$of(u"比什奴普萊利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"卡巴爾達文"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"克里奧文（模里西斯）"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"蘇拉南東墎文"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"旁遮普文"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"杜亞拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"塞雷爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"雷西亞利波瓦方言"_s)
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
			$of(u"巴赫蒂亞里文"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"波蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"中古荷蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.saur"_s),
			$of(u"索拉什特拉文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.dangi"_s),
			$of(u"檀紀曆"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALLADER"_s),
			$of(u"瑞士瓦勒德方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ps"_s),
			$of(u"普什圖文"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"葡萄牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"中古愛爾蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"排序"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"波赫力字母"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"卡塔布文"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"馬夸文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cf"_s),
			$of(u"貨幣格式"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.nkoo"_s),
			$of(u"曼德數字"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"布拉杰文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"曆法"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"米茲泰爾方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"寮國文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"瑞士蘇邁拉方言"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"美塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24 小時制 (0–23)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24 小時制 (1–24)"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("brh"_s),
			$of(u"布拉維文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"緬甸數字"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"蓋楚瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"薩波特克文"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"博多文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"藍拿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"馬孔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"吠陀梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("stq"_s),
			$of(u"沙特菲士蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"衣索比亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"香港語言學學會粵語拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12 小時制 (1–12)"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12 小時制 (0–11)"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"羅曼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"隆迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"貨幣"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"羅馬尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(metaValue_ssy)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"歐迪亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"中文十進位數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"俄文"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"阿庫色文"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"盧安達文"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"布列斯符號"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"卡布威爾第文"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"米克馬克文"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"蘇庫馬文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"杜普洛伊速記"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(metaValue_sa)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"統一康沃爾文拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"撒丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"蘇蘇文"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(metaValue_sd)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北薩米文"_s)
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
			$of(u"塞爾維亞克羅埃西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("ken"_s),
			$of(u"肯揚文"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"僧伽羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"蘇美文"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"斯洛伐克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"斯洛維尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"格蘭他文字"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"薩摩亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"紹納文"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"索馬利文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"阿拉伯-印度數字"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"阿爾巴尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"塞爾維亞文"_s)
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
			$of(u"會計貨幣格式"_s)
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
			$of(u"大寫繁體中文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"伊比比奧文"_s)
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
			$of(u"亞洲"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"布里阿特文"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"中亞"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(metaValue_te)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"西亞"_s)
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
			$of(u"提格利尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"科羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"土庫曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"塔加路族文"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"塞茲瓦納文"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"東加文"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"布魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"朱拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"小寫日文數字"_s)
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
			$of(u"韃靼文"_s)
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
			$of(u"聖喬治/比拉方言"_s)
		}),
		$$new($ObjectArray, {
			$of("150"_s),
			$of(u"歐洲"_s)
		}),
		$$new($ObjectArray, {
			$of("151"_s),
			$of(u"東歐"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"數學無襯線粗體數字"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"北歐"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"達薩文"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"西歐"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"維吾爾文"_s)
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
			$of(u"坎剛文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"一般文字"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"烏克蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("zea"_s),
			$of(u"西蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"科普特曆"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"烏都文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"標準雷西亞拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"卡爾梅克文"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"澤納加文"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"烏茲別克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"卡西文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 年的德語拼字學"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"低地薩克遜文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"希洛弟納格里文"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"溫達文"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"瓦郎奇蒂文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"國曆"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"越南文"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"和闐文"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"西桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"時間週期（12 小時制與 24 小時制）"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"白俄羅斯文傳統拼字"_s)
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
			$of(u"古敘利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"數學無襯線數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"歐斯曼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"基切文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(u"馬薩拉姆貢地數字"_s)
		}),
		$$new($ObjectArray, {
			$of("qug"_s),
			$of(u"欽博拉索海蘭蓋丘亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"Vote 尼瓦爾文"_s)
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
			$of(u"加告茲文"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"敘利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(metaValue_el)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"贛語"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"北紮紮其文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"里底亞語"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"蘇米魯亞甲文楔形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"沃洛夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"標準摩洛哥塔馬塞特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"現代標準阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"加拿大原住民通用字符"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"X-SAMPA 音標"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"加約文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(metaValue_mn)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"滿族文"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"拉丁文（尖角體活字變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"西利西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"安那托利亞象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"葛巴亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(metaValue_mni)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(metaValue_la)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"拉丁文（蓋爾語變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"小寫簡體中文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"小寫繁體中文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"科薩文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"小寫羅馬數字"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"比林文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"蘇利南帕馬卡方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"呂西亞語"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(metaValue_osa)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"梅敦巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("gbz"_s),
			$of(u"索羅亞斯德教達里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"蒙氏點字"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"莫霍克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"卡庫文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"早期現代法文"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"意第緒文"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"莫西文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"敍利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"德瑟雷特文"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"約魯巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"傳統數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"敘利亞文（西方文字變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"鄂圖曼土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"敘利亞文（福音體文字變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"瓦伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"壯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"卡里亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"卡倫金文"_s)
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
			$of(u"注音符號"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"古彼爾姆諸文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"換行樣式"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"祖魯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"電話簿排序"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"希臘文單調正字法"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"夏拉達文"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"金邦杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"大寫日文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"占文"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"吉茲文"_s)
		}),
		$$new($ObjectArray, {
			$of("mrj"_s),
			$of(u"西馬里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"敘利亞文（東方文字變體）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrshan"_s),
			$of(u"緬甸撣文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"愛爾巴桑文"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"古北阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.olck"_s),
			$of(u"桑塔利文數字"_s)
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
			$of(u"古埃及世俗體"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"古埃及僧侶體"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"史詩梵文"_s)
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
			$of(u"喬治亞語系（阿索他路里和努斯克胡里文）"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"簡體中文"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"科米-彼爾米亞克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"古匈牙利文"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"貢根文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"傳統德語拼字學"_s)
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
			$of(u"林布文數字"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hant"_s),
			$of(u"繁體中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(metaValue_su)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"維普森文"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"克佩列文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"高棉數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(metaValue_mai)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"伊洛闊文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VALENCIA"_s),
			$of(u"瓦倫西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"塞浦路斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"統一土耳其拉丁字母"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"耶卡發音塞爾維亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"蒙當文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"古爾穆奇數字"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"多種語言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"瑞士普特爾方言"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"卡多文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"度量單位系統"_s)
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
			$of(u"吉爾伯特群島文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"通用康沃爾文拼字"_s)
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
			$of(u"卡拉柴-包爾卡爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"印古什文"_s)
		}),
		$$new($ObjectArray, {
			$of("krj"_s),
			$of(u"基那來阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"塞拉利昂克裏奧爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"卡累利阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of(u"牛津英文字典拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"埃菲克文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("tcy"_s),
			$of(u"圖盧文"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"庫魯科文"_s)
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
			$of(u"巴菲亞文"_s)
		})
	}));
	return data;
}

LocaleNames_zh_Hant::LocaleNames_zh_Hant() {
}

$Class* LocaleNames_zh_Hant::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_Hant, name, initialize, &_LocaleNames_zh_Hant_ClassInfo_, allocate$LocaleNames_zh_Hant);
	return class$;
}

$Class* LocaleNames_zh_Hant::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun