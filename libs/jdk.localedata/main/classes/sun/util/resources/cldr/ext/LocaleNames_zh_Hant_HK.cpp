#include <sun/util/resources/cldr/ext/LocaleNames_zh_Hant_HK.h>

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

$MethodInfo _LocaleNames_zh_Hant_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zh_Hant_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zh_Hant_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zh_Hant_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zh_Hant_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_Hant_HK_MethodInfo_
};

$Object* allocate$LocaleNames_zh_Hant_HK($Class* clazz) {
	return $of($alloc(LocaleNames_zh_Hant_HK));
}

void LocaleNames_zh_Hant_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zh_Hant_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_ka, u"格魯吉亞文"_s);
	$var($String, metaValue_kn, u"坎納達文"_s);
	$var($String, metaValue_lo, u"老撾文"_s);
	$var($String, metaValue_ml, u"馬拉雅拉姆文"_s);
	$var($String, metaValue_or, u"奧里雅文"_s);
	$var($String, metaValue_ta, u"泰米爾文"_s);
	$var($String, metaValue_type_nu_taml, u"泰米爾數字"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"奧地利德文"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"巴勒斯坦領土"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"瓦爾皮里文"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"洪都拉斯"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"盧歐文"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"苗語"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"克羅地亞"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"克羅地亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"瑞士德文"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"巴西葡萄牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"也門"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"西非書面語言（N’ko）"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"卡塔爾"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"蘇格蘭標準英語"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"墨西哥西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"馬約特"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"歐洲西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"阿法爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"阿拉伯聯合酋長國"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"馬恩島"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"比利時荷蘭文"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"安提瓜和巴布達"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"埃塞俄比亞曆"_s)
		}),
		$$new($ObjectArray, {
			$of("IT"_s),
			$of(u"意大利"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"意大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"格魯吉亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"埃塞俄比亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"贊比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"阿魯巴"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"美國英文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"亞塞拜疆"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"阿塞拜疆文"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"津巴布韋"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波斯尼亞和黑塞哥維那"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"巴什基爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"巴巴多斯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"奧里亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"布基納法索"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"盧旺達"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"盧旺達文"_s)
		}),
		$$new($ObjectArray, {
			$of("BI"_s),
			$of(u"布隆迪"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"貝寧"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"澳洲英文"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"聖巴泰勒米"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙地阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"卡納達數字"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"所羅門群島"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"塞舌爾"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"布里多尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"波斯尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"中美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"瑞士德語"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"鮑威特島"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"博茨瓦納"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(metaValue_ka)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"斯洛文尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"老撾數字"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"斯瓦爾巴特群島及揚馬延島"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"伯利茲"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"塞拉利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"斯洛文尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"肯尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"修納文"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"索馬里"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"索馬里文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"加泰隆尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"蘇里南"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科科斯 (基林) 群島"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"聖多美和普林西比"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"科摩羅"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(metaValue_kn)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"聖基茨和尼維斯"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"加拿大法文"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"科特迪瓦"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"斯威士蘭"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"已修訂拼字法"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.reformed"_s),
			$of(u"改革版排序"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"瑞士法文"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"克里珀頓島"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"美制"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"哥斯達黎加"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"特克斯和凱科斯群島"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"乍得"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"西里爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法屬南部領地"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"佛得角"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"老撾"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"塞浦路斯"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"加拿大英文"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"加勒比"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"聖盧西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"埃塞俄比亞數字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"馬拉雅拉姆數字"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"突尼西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"湯加"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"湯加文"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"列支敦士登"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"歐洲葡萄牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"千里達和多巴哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"圖瓦盧"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(metaValue_lo)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"英制"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"天城體數字"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"吉布提"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"利比里亞"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"坦桑尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"萊索托"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"傳統德國拼字法"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"多米尼加共和國"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"阿羅馬尼亞語"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"剛果史瓦希里文"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"拉丁美洲西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"它拿字母"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"僧伽羅文"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"黑山"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"馬拉加斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"烏爾都文"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"厄瓜多爾"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(metaValue_ml)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"馬里"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.gb2312han"_s),
			$of(u"簡體中文排序 (GB2312)"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"摩爾多瓦羅馬尼亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"毛里塔尼亞"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙特塞拉特"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 德國拼字法"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"馬耳他"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"馬耳他文"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"毛里裘斯"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"馬爾代夫"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"馬拉維"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"世界語"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"厄立特里亞"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"莫桑比克"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"聖文森特和格林納丁斯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"繁體中文排序 (Big5)"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"埃塞俄比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"英屬維爾京群島"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"美屬維爾京群島"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.dictionary"_s),
			$of(u"詞典排序"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"尼日爾"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"尼日利亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"簡體字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁體字"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"南阿塞拜疆文"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"瓦努阿圖"_s)
		}),
		$$new($ObjectArray, {
			$of("NR"_s),
			$of(u"瑙魯"_s)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"尼瓦爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"廣東話"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"度量衡系統"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(metaValue_ta)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"吉爾伯特文"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"敍利亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"澳大拉西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("kiu"_s),
			$of(u"扎扎其文"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"克里米亞韃靼文"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"加蓬"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"摩洛哥標準塔馬齊格特文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(metaValue_type_nu_taml)
		}),
		$$new($ObjectArray, {
			$of("pcm"_s),
			$of(u"尼日利亞皮欽文"_s)
		}),
		$$new($ObjectArray, {
			$of("GD"_s),
			$of(u"格林納達"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"格魯吉亞"_s)
		}),
		$$new($ObjectArray, {
			$of("GH"_s),
			$of(u"加納"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(metaValue_or)
		}),
		$$new($ObjectArray, {
			$of("kri"_s),
			$of(u"克裡奧爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"達利文"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"加里西亞文"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"塞舌爾克里奧爾法文"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"岡比亞"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"波利尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"拉丁字母"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"埃塞俄比亞阿美德阿萊姆曆"_s)
		}),
		$$new($ObjectArray, {
			$of("GS"_s),
			$of(u"南佐治亞島與南桑威奇群島"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"危地馬拉"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"猶太波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"毛里裘斯克里奧爾文"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"幾內亞比紹"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"圭亞那"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"古木基文"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"英國英文"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法屬波利尼西亞"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"巴布亞新幾內亞"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特凱恩島"_s)
		})
	}));
	return data;
}

LocaleNames_zh_Hant_HK::LocaleNames_zh_Hant_HK() {
}

$Class* LocaleNames_zh_Hant_HK::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh_Hant_HK, name, initialize, &_LocaleNames_zh_Hant_HK_ClassInfo_, allocate$LocaleNames_zh_Hant_HK);
	return class$;
}

$Class* LocaleNames_zh_Hant_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun