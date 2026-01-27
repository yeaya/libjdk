#include <sun/util/resources/cldr/ext/LocaleNames_zh.h>

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

$MethodInfo _LocaleNames_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_zh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_MethodInfo_
};

$Object* allocate$LocaleNames_zh($Class* clazz) {
	return $of($alloc(LocaleNames_zh));
}

void LocaleNames_zh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_zh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($String, metaValue_key_nu, u"数字"_s);
	$var($String, metaValue_type_nu_gong, u"马萨拉姆冈德数字"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ksh"_s),
			$of(u"科隆语"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"欧甘文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"米兰德斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"符号"_s)
		}),
		$$new($ObjectArray, {
			$of("cch"_s),
			$of(u"阿灿语"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"马尔瓦里语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lanatham"_s),
			$of(u"兰纳文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"塔格班瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsye"_s),
			$of(u"表情符号"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NJIVA"_s),
			$of(u"Gniva/Njiva 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ccp"_s),
			$of(u"查克玛语"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"古埃及语"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"拉贾斯坦语"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"八思巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"泰姆奈语"_s)
		}),
		$$new($ObjectArray, {
			$of("Medf"_s),
			$of(u"梅德法伊德林文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sind"_s),
			$of(u"库达瓦迪数字"_s)
		}),
		$$new($ObjectArray, {
			$of("teo"_s),
			$of(u"特索语"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"拉帕努伊语"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"特伦诺语"_s)
		}),
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"阿森松岛"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"拉罗汤加语"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"德顿语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BARLA"_s),
			$of(u"佛得角语向风方言组"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sinh"_s),
			$of(u"僧伽罗文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("AD"_s),
			$of(u"安道尔"_s)
		}),
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"阿拉伯联合酋长国"_s)
		}),
		$$new($ObjectArray, {
			$of("nl_BE"_s),
			$of(u"弗拉芒语"_s)
		}),
		$$new($ObjectArray, {
			$of("AF"_s),
			$of(u"阿富汗"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"安提瓜和巴布达"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mroo"_s),
			$of(u"谬文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic"_s),
			$of(u"埃塞俄比亚历"_s)
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
			$of(u"腾格瓦文字"_s)
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
			$of(u"帕提亚文碑铭体"_s)
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
			$of(u"澳大利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("AW"_s),
			$of(u"阿鲁巴"_s)
		}),
		$$new($ObjectArray, {
			$of("en_US"_s),
			$of(u"美国英语"_s)
		}),
		$$new($ObjectArray, {
			$of("AX"_s),
			$of(u"奥兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("mye"_s),
			$of(u"姆耶内语"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"阿塞拜疆"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVELA"_s),
			$of(u"东亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波斯尼亚和黑塞哥维那"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"巴巴多斯"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"宿务语"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"孟加拉国"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"库梅克语"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"比利时"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"中古高地德语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogo"_s),
			$of(u"古粟特文"_s)
		}),
		$$new($ObjectArray, {
			$of("BF"_s),
			$of(u"布基纳法索"_s)
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
			$of(u"布隆迪"_s)
		}),
		$$new($ObjectArray, {
			$of("BJ"_s),
			$of(u"贝宁"_s)
		}),
		$$new($ObjectArray, {
			$of("BL"_s),
			$of(u"圣巴泰勒米"_s)
		}),
		$$new($ObjectArray, {
			$of("BM"_s),
			$of(u"百慕大"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"库特奈语"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"厄尔兹亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("BN"_s),
			$of(u"文莱"_s)
		}),
		$$new($ObjectArray, {
			$of("BO"_s),
			$of(u"玻利维亚"_s)
		}),
		$$new($ObjectArray, {
			$of("BQ"_s),
			$of(u"荷属加勒比区"_s)
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
			$of(u"索加语"_s)
		}),
		$$new($ObjectArray, {
			$of("BT"_s),
			$of(u"不丹"_s)
		}),
		$$new($ObjectArray, {
			$of("BV"_s),
			$of(u"布韦岛"_s)
		}),
		$$new($ObjectArray, {
			$of("BW"_s),
			$of(u"博茨瓦纳"_s)
		}),
		$$new($ObjectArray, {
			$of("BY"_s),
			$of(u"白俄罗斯"_s)
		}),
		$$new($ObjectArray, {
			$of("BZ"_s),
			$of(u"伯利兹"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"可见语言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.persian"_s),
			$of(u"波斯历"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CREISS"_s),
			$of(u"克雷桑方言"_s)
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
			$of("Kits"_s),
			$of(u"契丹小字"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科科斯（基林）群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"马赞德兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"刚果（金）"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"中非共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"刚果（布）"_s)
		}),
		$$new($ObjectArray, {
			$of("CH"_s),
			$of(u"瑞士"_s)
		}),
		$$new($ObjectArray, {
			$of("CI"_s),
			$of(u"科特迪瓦"_s)
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
			$of(u"中国"_s)
		}),
		$$new($ObjectArray, {
			$of("CO"_s),
			$of(u"哥伦比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("CP"_s),
			$of(u"克利珀顿岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CR"_s),
			$of(u"哥斯达黎加"_s)
		}),
		$$new($ObjectArray, {
			$of("CU"_s),
			$of(u"古巴"_s)
		}),
		$$new($ObjectArray, {
			$of("CV"_s),
			$of(u"佛得角"_s)
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
			$of(u"塞浦路斯"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.bali"_s),
			$of(u"巴厘文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"捷克"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"艾卡朱克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Ahom"_s),
			$of("Ahom"_s)
		}),
		$$new($ObjectArray, {
			$of("Pauc"_s),
			$of(u"包金豪文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RIGIK"_s),
			$of(u"古典沃拉普克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sogd"_s),
			$of(u"粟特文"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"德国"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"古高地德语"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"亚齐语"_s)
		}),
		$$new($ObjectArray, {
			$of("cgg"_s),
			$of(u"奇加语"_s)
		}),
		$$new($ObjectArray, {
			$of("DG"_s),
			$of(u"迪戈加西亚岛"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.deva"_s),
			$of(u"梵文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("DJ"_s),
			$of(u"吉布提"_s)
		}),
		$$new($ObjectArray, {
			$of("DK"_s),
			$of(u"丹麦"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"阿乔利语"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"冈德语"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"布莱叶盲文"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"婆罗米文字"_s)
		}),
		$$new($ObjectArray, {
			$of("DM"_s),
			$of(u"多米尼克"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armnlow"_s),
			$of(u"亚美尼亚小写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"多米尼加共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"哥伦打洛语"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"哥特语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"曼尼普尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"祖尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"提格雷语"_s)
		}),
		$$new($ObjectArray, {
			$of("Takr"_s),
			$of(u"泰克里文"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"阿尔及利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"邦阿西南语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.hwidth"_s),
			$of(u"半角"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"巴拉维语"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"休达及梅利利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"奇布查语"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"邦板牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"厄瓜多尔"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"帕皮阿门托语"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"阿当梅语"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"爱沙尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"蒂夫语"_s)
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
			$of(u"察合台语"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"帕劳语"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"楚克语"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"奇努克混合语"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"马里语"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"奇佩维安语"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"乔克托语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathbold"_s),
			$of(u"数学粗体数字"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"切罗基语"_s)
		}),
		$$new($ObjectArray, {
			$of("ER"_s),
			$of(u"厄立特里亚"_s)
		}),
		$$new($ObjectArray, {
			$of("ES"_s),
			$of(u"西班牙"_s)
		}),
		$$new($ObjectArray, {
			$of("ET"_s),
			$of(u"埃塞俄比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("EU"_s),
			$of(u"欧盟"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"埃兰语"_s)
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
			$of(u"夏延语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gujr"_s),
			$of(u"古吉拉特数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Inds"_s),
			$of(u"印度河文字"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"阿迪格语"_s)
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
			$of(u"密克罗尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("key.va"_s),
			$of(u"语言区域别名"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"法罗群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"泰米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"法国"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"克佩列文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SIMPLE"_s),
			$of(u"简单英语"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"托克劳语"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"格列博语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%DAJNKO"_s),
			$of(u"达金科字母"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.indian"_s),
			$of(u"印度国定历"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"古希腊语"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"加蓬"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"沃提克语"_s)
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
			$of(u"格林纳达"_s)
		}),
		$$new($ObjectArray, {
			$of("GE"_s),
			$of(u"格鲁吉亚"_s)
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
			$of(u"加纳"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"泰乐文"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"直布罗陀"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"阿弗里希利语"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"格陵兰"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"中古英语"_s)
		}),
		$$new($ObjectArray, {
			$of("GM"_s),
			$of(u"冈比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("GN"_s),
			$of(u"几内亚"_s)
		}),
		$$new($ObjectArray, {
			$of("GP"_s),
			$of(u"瓜德罗普"_s)
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
			$of(u"南乔治亚和南桑威奇群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("GT"_s),
			$of(u"危地马拉"_s)
		}),
		$$new($ObjectArray, {
			$of("GU"_s),
			$of(u"关岛"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathmono"_s),
			$of(u"数学等宽数字"_s)
		}),
		$$new($ObjectArray, {
			$of("GW"_s),
			$of(u"几内亚比绍"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"特林吉特语"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"克林贡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"新傣文"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"圭亚那"_s)
		}),
		$$new($ObjectArray, {
			$of("ckb"_s),
			$of(u"中库尔德语"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"无语言内容"_s)
		}),
		$$new($ObjectArray, {
			$of("Jurc"_s),
			$of(u"女真文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VIVARAUP"_s),
			$of(u"维瓦鲁普方言"_s)
		}),
		$$new($ObjectArray, {
			$of("de_AT"_s),
			$of(u"奥地利德语"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"中国香港特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"瓦依文"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"赫德岛和麦克唐纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("HN"_s),
			$of(u"洪都拉斯"_s)
		}),
		$$new($ObjectArray, {
			$of("HR"_s),
			$of(u"克罗地亚"_s)
		}),
		$$new($ObjectArray, {
			$of("agq"_s),
			$of(u"亚罕语"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"瑞士德语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-umalqura"_s),
			$of(u"伊斯兰历（乌姆库拉）"_s)
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
			$of("tmh"_s),
			$of(u"塔马奇克语"_s)
		}),
		$$new($ObjectArray, {
			$of("IC"_s),
			$of(u"加纳利群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("nan"_s),
			$of(u"闽南语"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"印度尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"古波斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Adlm"_s),
			$of(u"阿德拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.kali"_s),
			$of(u"克耶字母数字"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"爱尔兰"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"那不勒斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NDYUKA"_s),
			$of(u"Ndyuka 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("naq"_s),
			$of(u"纳马语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sora"_s),
			$of(u"素拉僧平数字"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"扎扎语"_s)
		}),
		$$new($ObjectArray, {
			$of("Tang"_s),
			$of(u"唐古特文"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"以色列"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"纳巴泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("IM"_s),
			$of(u"马恩岛"_s)
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
			$of(u"意大利"_s)
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
			$of("%%POSIX"_s),
			$of(u"电脑"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.beng"_s),
			$of(u"孟加拉数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cyrl"_s),
			$of(u"斯拉夫数字"_s)
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
			$of("JM"_s),
			$of(u"牙买加"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"孟加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EKAVSK"_s),
			$of(u"塞尔维亚语伊卡维亚发音"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"约旦"_s)
		}),
		$$new($ObjectArray, {
			$of("JP"_s),
			$of(u"日本"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1606NICT"_s),
			$of(u"1606 年前中后期法文"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"阿伊努语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KOCIEWIE"_s),
			$of(u"科奇韦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"门迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("guz"_s),
			$of(u"古西语"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"尼亚萨汤加语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.knda"_s),
			$of(u"卡纳达数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kali"_s),
			$of(u"克耶李文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sidd"_s),
			$of(u"悉昙"_s)
		}),
		$$new($ObjectArray, {
			$of("de_CH"_s),
			$of(u"瑞士高地德语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonetic"_s),
			$of(u"语音排序"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.buddhist"_s),
			$of(u"佛历"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"肯尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"拉丁美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"吉尔吉斯斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("KH"_s),
			$of(u"柬埔寨"_s)
		}),
		$$new($ObjectArray, {
			$of("KI"_s),
			$of(u"基里巴斯"_s)
		}),
		$$new($ObjectArray, {
			$of("KM"_s),
			$of(u"科摩罗"_s)
		}),
		$$new($ObjectArray, {
			$of("KN"_s),
			$of(u"圣基茨和尼维斯"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"卡纳达文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"遗传学术语"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CA"_s),
			$of(u"加拿大法语"_s)
		}),
		$$new($ObjectArray, {
			$of("KP"_s),
			$of(u"朝鲜"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"韩国"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"波拉德音标文字"_s)
		}),
		$$new($ObjectArray, {
			$of("fr_CH"_s),
			$of(u"瑞士法语"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"科威特"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"托克皮辛语"_s)
		}),
		$$new($ObjectArray, {
			$of("KY"_s),
			$of(u"开曼群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("KZ"_s),
			$of(u"哈萨克斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"西里尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("LA"_s),
			$of(u"老挝"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"黎巴嫩"_s)
		}),
		$$new($ObjectArray, {
			$of("LC"_s),
			$of(u"圣卢西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"腓尼基语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"西里尔文字（古教会斯拉夫文的变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"哥威迅语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LUNA1918"_s),
			$of(u"俄文拼字（1918年起）"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"低地德语"_s)
		}),
		$$new($ObjectArray, {
			$of("LI"_s),
			$of(u"列支敦士登"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"斯里兰卡"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"阿卡德语"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"科普特语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmnp"_s),
			$of(u"尼亚肯蒲丘苗文"_s)
		}),
		$$new($ObjectArray, {
			$of("LR"_s),
			$of(u"利比里亚"_s)
		}),
		$$new($ObjectArray, {
			$of("LS"_s),
			$of(u"莱索托"_s)
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
			$of(u"索朗桑朋文"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"利比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"拉迪诺语"_s)
		}),
		$$new($ObjectArray, {
			$of("vun"_s),
			$of(u"温旧语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LAUKIKA"_s),
			$of(u"传统梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"印度-雅利安语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mahj"_s),
			$of(u"默哈金文"_s)
		}),
		$$new($ObjectArray, {
			$of("lag"_s),
			$of(u"朗吉语"_s)
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
			$of(u"女书"_s)
		}),
		$$new($ObjectArray, {
			$of("ME"_s),
			$of(u"黑山"_s)
		}),
		$$new($ObjectArray, {
			$of("MF"_s),
			$of(u"法属圣马丁"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"兰巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("MG"_s),
			$of(u"马达加斯加"_s)
		}),
		$$new($ObjectArray, {
			$of("MH"_s),
			$of(u"马绍尔群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"阿留申语"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.vaii"_s),
			$of(u"瓦伊文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("MK"_s),
			$of(u"北马其顿"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathdbl"_s),
			$of(u"数学空心数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ML"_s),
			$of(u"马里"_s)
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
			$of(u"尼瓦尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"中国澳门特别行政区"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"北马里亚纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"马提尼克"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"毛里塔尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙特塞拉特"_s)
		}),
		$$new($ObjectArray, {
			$of("Chrs"_s),
			$of(u"花拉子模文"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"马耳他"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.ungegn"_s),
			$of(u"联合国地名专家组 (UNGEGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"毛里求斯"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"南阿尔泰语"_s)
		}),
		$$new($ObjectArray, {
			$of("MV"_s),
			$of(u"马尔代夫"_s)
		}),
		$$new($ObjectArray, {
			$of("MW"_s),
			$of(u"马拉维"_s)
		}),
		$$new($ObjectArray, {
			$of("MX"_s),
			$of(u"墨西哥"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.japanese"_s),
			$of(u"和历"_s)
		}),
		$$new($ObjectArray, {
			$of("MY"_s),
			$of(u"马来西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"莫桑比克"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"巴列维文碑铭体"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"纳米比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ARANES"_s),
			$of(u"阿兰方言"_s)
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
			$of(u"WG 威氏拼音法"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCRCOR"_s),
			$of(u"统一和修订的拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("NE"_s),
			$of(u"尼日尔"_s)
		}),
		$$new($ObjectArray, {
			$of("NF"_s),
			$of(u"诺福克岛"_s)
		}),
		$$new($ObjectArray, {
			$of("NG"_s),
			$of(u"尼日利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("trv"_s),
			$of(u"赛德克语"_s)
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
			$of(u"瑙鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("NU"_s),
			$of(u"纽埃"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"腓尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("rof"_s),
			$of(u"兰博语"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"钦西安语"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"新西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"麦罗埃草书"_s)
		}),
		$$new($ObjectArray, {
			$of("%%COLB1945"_s),
			$of(u"1945年葡萄牙-巴西正写法协定"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"吉普赛语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"麦若提克文"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"克里米亚土耳其语"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRMISTR"_s),
			$of(u"格米斯特方言"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"阿曼"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PETR1708"_s),
			$of(u"俄文拼字（1708年）"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"昂加语"_s)
		}),
		$$new($ObjectArray, {
			$of("crs"_s),
			$of(u"塞舌尔克里奥尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmnp"_s),
			$of(u"尼亚肯蒲丘苗文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"古波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hmng"_s),
			$of(u"杨松录苗文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"巴拿马"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-civil"_s),
			$of(u"伊斯兰希吉来日历"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"卡舒比语"_s)
		}),
		$$new($ObjectArray, {
			$of("en_GB"_s),
			$of(u"英国英语"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"秘鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法属波利尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("PG"_s),
			$of(u"巴布亚新几内亚"_s)
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
			$of("%%NICARD"_s),
			$of(u"尼斯方言"_s)
		}),
		$$new($ObjectArray, {
			$of("PL"_s),
			$of(u"波兰"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"埃翁多语"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"圣皮埃尔和密克隆群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特凯恩群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"波多黎各"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"巴勒斯坦领土"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"巴厘文"_s)
		}),
		$$new($ObjectArray, {
			$of("PT"_s),
			$of(u"葡萄牙"_s)
		}),
		$$new($ObjectArray, {
			$of("PW"_s),
			$of(u"帕劳"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"尼亚斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.greklow"_s),
			$of(u"希腊小写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("PY"_s),
			$of(u"巴拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"通布卡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"希伯来文"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"卡塔尔"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SCOTLAND"_s),
			$of(u"苏格兰标准英文"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"纽埃语"_s)
		}),
		$$new($ObjectArray, {
			$of("QO"_s),
			$of(u"大洋洲边远群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"列兹金语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ahom"_s),
			$of(u"阿霍姆数字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONUPA"_s),
			$of(u"UPA 音标"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.takr"_s),
			$of(u"泰克里数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"图瓦卢语"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"越南傣文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOTAV"_s),
			$of(u"佛得角语背风方言组"_s)
		}),
		$$new($ObjectArray, {
			$of("Maka"_s),
			$of(u"望加锡文"_s)
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
			$of("003"_s),
			$of(u"北美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"留尼汪"_s)
		}),
		$$new($ObjectArray, {
			$of("005"_s),
			$of(u"南美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"逻辑语"_s)
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
			$of("Elym"_s),
			$of(u"埃利迈文"_s)
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
			$of(u"卢旺达"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.talu"_s),
			$of(u"新傣仂文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%METELKO"_s),
			$of(u"梅特尔科字母"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"摩尼教文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"乌加里特文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"卡罗须提文"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙特阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"波纳佩语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"阿拉米文"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"所罗门群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("twq"_s),
			$of(u"北桑海语"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"西非"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"塞舌尔"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"苏丹"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"中美洲"_s)
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
			$of(u"阿拉米语"_s)
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
			$of(u"圣赫勒拿"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.strict"_s),
			$of(u"严格换行符样式"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"中非"_s)
		}),
		$$new($ObjectArray, {
			$of("SI"_s),
			$of(u"斯洛文尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymrtlng"_s),
			$of(u"缅甸泰兰数字"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"南部非洲"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"斯瓦尔巴和扬马延"_s)
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
			$of("Bamu"_s),
			$of(u"巴姆穆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Wole"_s),
			$of(u"沃莱艾文"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"塞拉利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("SM"_s),
			$of(u"圣马力诺"_s)
		}),
		$$new($ObjectArray, {
			$of("SN"_s),
			$of(u"塞内加尔"_s)
		}),
		$$new($ObjectArray, {
			$of("SO"_s),
			$of(u"索马里"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"马普切语"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"阿拉帕霍语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.taml"_s),
			$of(u"传统泰米尔数字"_s)
		}),
		$$new($ObjectArray, {
			$of("SR"_s),
			$of(u"苏里南"_s)
		}),
		$$new($ObjectArray, {
			$of("SS"_s),
			$of(u"南苏丹"_s)
		}),
		$$new($ObjectArray, {
			$of("ST"_s),
			$of(u"圣多美和普林西比"_s)
		}),
		$$new($ObjectArray, {
			$of("SV"_s),
			$of(u"萨尔瓦多"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"纳吉迪阿拉伯语"_s)
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
			$of(u"瑶族语"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"斯威士兰"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"阿拉瓦克语"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"雅浦语"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"特里斯坦-达库尼亚群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("asa"_s),
			$of(u"帕雷语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.ussystem"_s),
			$of(u"美制"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"美洲北部"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"特克斯和凯科斯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("yav"_s),
			$of(u"洋卞语"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"乍得"_s)
		}),
		$$new($ObjectArray, {
			$of("Qaag"_s),
			$of("Zawgyi"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法属南部领地"_s)
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
			$of(u"塔吉克斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"加勒比地区"_s)
		}),
		$$new($ObjectArray, {
			$of("TK"_s),
			$of(u"托克劳"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"东帝汶"_s)
		}),
		$$new($ObjectArray, {
			$of("ybb"_s),
			$of(u"耶姆巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.searchjl"_s),
			$of(u"按韩文字开首辅音来搜索"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"土库曼斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOONT"_s),
			$of(u"布恩特林方言"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"突尼斯"_s)
		}),
		$$new($ObjectArray, {
			$of("TO"_s),
			$of(u"汤加"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NULIK"_s),
			$of(u"现代沃拉普克语"_s)
		}),
		$$new($ObjectArray, {
			$of("TR"_s),
			$of(u"土耳其"_s)
		}),
		$$new($ObjectArray, {
			$of("TT"_s),
			$of(u"特立尼达和多巴哥"_s)
		}),
		$$new($ObjectArray, {
			$of("TV"_s),
			$of(u"图瓦卢"_s)
		}),
		$$new($ObjectArray, {
			$of("TW"_s),
			$of(u"台湾"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"阿斯图里亚斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"鄂尔浑文"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"坦桑尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("nmg"_s),
			$of(u"夸西奥语"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"未知文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"信德文"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"乌克兰"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"阿罗马尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"东亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"图瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"刚果斯瓦希里语"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"南亚"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"海达语"_s)
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
			$of(u"客家语"_s)
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
			$of(u"僧伽罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"美国本土外小岛屿"_s)
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
			$of(u"夏威夷语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1959ACAD"_s),
			$of(u"学术"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IVANCHOV"_s),
			$of(u"伊万乔夫方言"_s)
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
			$of(u"普鲁士语"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"乌兹别克斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("tzm"_s),
			$of(u"塔马齐格特语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.stroke"_s),
			$of(u"笔画排序"_s)
		}),
		$$new($ObjectArray, {
			$of("nnh"_s),
			$of(u"恩甘澎语"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"梵蒂冈"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"古普罗文斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"圣文森特和格林纳丁斯"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HSISTEMO"_s),
			$of(u"赫西斯特莫方言"_s)
		}),
		$$new($ObjectArray, {
			$of("VE"_s),
			$of(u"委内瑞拉"_s)
		}),
		$$new($ObjectArray, {
			$of("VG"_s),
			$of(u"英属维尔京群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("VI"_s),
			$of(u"美属维尔京群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LEMOSIN"_s),
			$of(u"利姆赞方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Soyo"_s),
			$of(u"索永布文"_s)
		}),
		$$new($ObjectArray, {
			$of("VN"_s),
			$of(u"越南"_s)
		}),
		$$new($ObjectArray, {
			$of("VU"_s),
			$of(u"瓦努阿图"_s)
		}),
		$$new($ObjectArray, {
			$of("Marc"_s),
			$of(u"大玛尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"诺盖语"_s)
		}),
		$$new($ObjectArray, {
			$of("rwk"_s),
			$of(u"罗瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"古诺尔斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"澳大拉西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AREVMDA"_s),
			$of(u"西亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"美拉尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"瓦利斯和富图纳"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.traditional"_s),
			$of(u"传统排序"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"密克罗尼西亚地区"_s)
		}),
		$$new($ObjectArray, {
			$of("jgo"_s),
			$of(u"恩艮巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("lkt"_s),
			$of(u"拉科塔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.finance"_s),
			$of(u"金融数字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HEPBURN"_s),
			$of(u"赫伯恩罗马字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.compat"_s),
			$of(u"基于兼容性沿用既往排序"_s)
		}),
		$$new($ObjectArray, {
			$of("wae"_s),
			$of(u"瓦尔瑟语"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"巴萨文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mtei"_s),
			$of(u"曼尼普尔数字"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"瓦拉莫语"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"瓦绍语"_s)
		}),
		$$new($ObjectArray, {
			$of("XA"_s),
			$of(u"伪地区"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"瓦瑞语"_s)
		}),
		$$new($ObjectArray, {
			$of("XB"_s),
			$of(u"伪双向语言地区"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"阿瓦德语"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"玻利尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KSCOR"_s),
			$of(u"标准正写法"_s)
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
			$of(u"古吉拉特文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"非书面文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"桑塔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("wbp"_s),
			$of(u"瓦尔皮瑞语"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"巴塔克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"布列斯符号"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"也门"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"西非书面文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.standard"_s),
			$of(u"标准排序"_s)
		}),
		$$new($ObjectArray, {
			$of("Zanb"_s),
			$of(u"札那巴札尔方块文字"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"芳格语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BALANKA"_s),
			$of(u"阿尼语Balanka方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ROZAJ"_s),
			$of(u"雷西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SUTSILV"_s),
			$of(u"瑞士苏希瓦方言"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"芳蒂语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"书写符号"_s)
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
			$of("%%NEWFOUND"_s),
			$of(u"纽芬兰方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"南非"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.sund"_s),
			$of(u"苏丹文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.loose"_s),
			$of(u"宽松换行符样式"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"天城文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.geor"_s),
			$of(u"格鲁吉亚数字"_s)
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
			$of(u"赞比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PINYIN"_s),
			$of(u"拼音罗马字"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"津巴布韦"_s)
		}),
		$$new($ObjectArray, {
			$of("ZZ"_s),
			$of(u"未知地区"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"古代北欧文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.metric"_s),
			$of(u"公制"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.iso8601"_s),
			$of(u"国际标准历法"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"蒙戈语"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"北索托语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.telu"_s),
			$of(u"泰卢固数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lou"_s),
			$of(u"路易斯安那克里奥尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"洛齐语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONKIRSH"_s),
			$of(u"丰吉什方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"纳西格巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ASANTE"_s),
			$of(u"阿散蒂方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AUVERN"_s),
			$of(u"自动钻机"_s)
		}),
		$$new($ObjectArray, {
			$of("jmc"_s),
			$of(u"马切姆语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hansfin"_s),
			$of(u"简体中文大写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"希利盖农语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arabext"_s),
			$of(u"扩展阿拉伯-印度数字"_s)
		}),
		$$new($ObjectArray, {
			$of("nus"_s),
			$of(u"努埃尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"达科他语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.fullwide"_s),
			$of(u"全角数字"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"赫梯语"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"达尔格瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("dav"_s),
			$of(u"台塔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"玛雅圣符文"_s)
		}),
		$$new($ObjectArray, {
			$of("lrc"_s),
			$of(u"北卢尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.emoji"_s),
			$of(u"表情符号排序"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"克普特文"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"古典尼瓦尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"乌德穆尔特语"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"高棉文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONNAPA"_s),
			$of(u"福纳帕方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-rgsa"_s),
			$of(u"沙特阿拉伯伊斯兰历"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"林布文"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"桑达韦语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.roman"_s),
			$of(u"罗马数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"萨哈语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.shrd"_s),
			$of(u"夏拉达数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"萨马利亚阿拉姆语"_s)
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
			$of(u"桑布鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"萨萨克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"桑塔利语"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"提非纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.npinyin"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"犹太波斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.native"_s),
			$of(u"当地数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sba"_s),
			$of(u"甘拜语"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"果鲁穆奇文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALUKU"_s),
			$of(u"阿鲁库方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.diak"_s),
			$of(u"迪维西阿库鲁数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"卢巴-卢拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISCAYAN"_s),
			$of(u"比斯开方言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tirh"_s),
			$of(u"迈蒂利数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.d0.fwidth"_s),
			$of(u"全角"_s)
		}),
		$$new($ObjectArray, {
			$of("sbp"_s),
			$of(u"桑古语"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"卢伊塞诺语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRITAL"_s),
			$of(u"格里陶方言"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"尼昂科勒语"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"尼扬韦齐语"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"隆达语"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"尼奥罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"卢奥语"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"菲律宾语"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"苗语"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"特拉华语"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"米佐语"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"俾路支语"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"史拉维语"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"巴厘语"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"乌加里特语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wara"_s),
			$of(u"瓦郎奇蒂数字"_s)
		}),
		$$new($ObjectArray, {
			$of("luy"_s),
			$of(u"卢雅语"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"巴萨语"_s)
		}),
		$$new($ObjectArray, {
			$of("bax"_s),
			$of(u"巴姆穆语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ABL1943"_s),
			$of(u"1943年正写法构想"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"犹太阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("es_ES"_s),
			$of(u"欧洲西班牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"恩济马语"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"苏格兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"西西里语"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"阿法尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"阿布哈西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Aran"_s),
			$of(u"波斯体"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"阿维斯塔语"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"南非荷兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"阿肯语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.cakm"_s),
			$of(u"查克玛数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bbj"_s),
			$of(u"戈马拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"阿姆哈拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"阿拉贡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SOLBA"_s),
			$of(u"Stolvizza/Solbica 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"日文"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"假名表"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"阿萨姆语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"线形文字（A）"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"阿瓦尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"线形文字（B）"_s)
		}),
		$$new($ObjectArray, {
			$of("sdh"_s),
			$of(u"南库尔德语"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"艾马拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"阿塞拜疆语"_s)
		}),
		$$new($ObjectArray, {
			$of("Rohg"_s),
			$of(u"哈乃斐罗兴亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khoj"_s),
			$of(u"克吉奇文字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CISAUP"_s),
			$of(u"西萨普方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OSOJS"_s),
			$of(u"Oseacco/Osojane 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UNIFON"_s),
			$of(u"Unifon音位字母"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"巴什基尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.unihan"_s),
			$of(u"部首笔画排序"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"白俄罗斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"保加利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"比斯拉马语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.java"_s),
			$of(u"爪哇文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"班巴拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"孟加拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"藏语"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"多格里布语"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"布列塔尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"波斯尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Bhks"_s),
			$of(u"拜克舒克文"_s)
		}),
		$$new($ObjectArray, {
			$of("see"_s),
			$of(u"塞内卡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"缅甸文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.laoo"_s),
			$of(u"老挝数字"_s)
		}),
		$$new($ObjectArray, {
			$of("seh"_s),
			$of(u"塞纳语"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"西非书面文字（N’Ko）"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"塞尔库普语"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"加泰罗尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("ses"_s),
			$of(u"东桑海语"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"车臣语"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"查莫罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%REVISED"_s),
			$of(u"修订的拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"科西嘉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"奥里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"克里族语"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"捷克语"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"教会斯拉夫语"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"楚瓦什语"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"威尔士语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.ethi"_s),
			$of(u"埃塞俄比亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"彝文"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"丹麦语"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_PT"_s),
			$of(u"欧洲葡萄牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"德语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.standard"_s),
			$of(u"标准货币格式"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"贝沙语"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"丁卡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"布吉文"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"本巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"古爱尔兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mong"_s),
			$of(u"蒙古文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"迪维希语"_s)
		}),
		$$new($ObjectArray, {
			$of("es_419"_s),
			$of(u"拉丁美洲西班牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"宗卡语"_s)
		}),
		$$new($ObjectArray, {
			$of("bez"_s),
			$of(u"贝纳语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.chinese"_s),
			$of(u"农历"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"傈僳文"_s)
		}),
		$$new($ObjectArray, {
			$of("dje"_s),
			$of(u"哲尔马语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.grek"_s),
			$of(u"希腊数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"埃维语"_s)
		}),
		$$new($ObjectArray, {
			$of("bfd"_s),
			$of(u"巴非特语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.lb.normal"_s),
			$of(u"正常换行符样式"_s)
		}),
		$$new($ObjectArray, {
			$of("ro_MD"_s),
			$of(u"摩尔多瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"希腊语"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"英语"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"世界语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.big5han"_s),
			$of(u"繁体中文排序 - Big5"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"西班牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"爱沙尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hanb"_s),
			$of(u"汉语注音"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"巴斯克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"布希德文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"谚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"撒马利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("shi"_s),
			$of(u"希尔哈语"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"上索布语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"汉字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ULSTER"_s),
			$of(u"阿尔斯特方言"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"掸语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"汉奴罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"波斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"简体"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.latn"_s),
			$of(u"西方数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁体"_s)
		}),
		$$new($ObjectArray, {
			$of("az_Arab"_s),
			$of(u"南阿塞拜疆语"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"富拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("shu"_s),
			$of(u"乍得阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("hsn"_s),
			$of(u"湘语"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"芬兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"斐济语"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"丰语"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"西俾路支语"_s)
		}),
		$$new($ObjectArray, {
			$of("yue"_s),
			$of(u"粤语"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"法罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.m0.bgn"_s),
			$of(u"美国地名委员会 (BGN)"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"翁本杜语"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"法语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AKUAPEM"_s),
			$of(u"阿夸佩姆方言"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"悉达摩语"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"西弗里西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"爱尔兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("Wcho"_s),
			$of(u"万秋文"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"苏格兰盖尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Gong"_s),
			$of(u"贡贾拉贡德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"加利西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Gonm"_s),
			$of(u"马萨拉姆冈德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"瓜拉尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"博杰普尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"未知语言"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.ethiopic-amete-alem"_s),
			$of(u"埃塞俄比亚阿米特阿莱姆日历"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"古吉拉特语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.islamic-tbla"_s),
			$of(u"伊斯兰天文历"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"马恩语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.osma"_s),
			$of(u"奥斯曼数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"豪萨语"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"希伯来语"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"印地语"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"胡帕语"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"比科尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"比尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"希里莫图语"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"克罗地亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("ht"_s),
			$of(u"海地克里奥尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("hu"_s),
			$of(u"匈牙利语"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"亚美尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"赫雷罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("frc"_s),
			$of(u"卡真法语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONIPA"_s),
			$of(u"国际音标"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"国际语"_s)
		}),
		$$new($ObjectArray, {
			$of("Jamo"_s),
			$of(u"韩文字母"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"印度尼西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tibt"_s),
			$of(u"藏文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"国际文字（E）"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GASCON"_s),
			$of(u"加斯科方言"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"伊博语"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"四川彝语"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"中古法语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%RUMGR"_s),
			$of(u"罗曼什文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%AO1990"_s),
			$of(u"1990年葡萄牙语正写法协议"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"伊努皮克语"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"古法语"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"伊多语"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"东弗里西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"北弗里西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"冰岛语"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"意大利语"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"因纽特语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%CORNU"_s),
			$of(u"科尔尼方言"_s)
		}),
		$$new($ObjectArray, {
			$of("%%HOGNORSK"_s),
			$of(u"高地挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"日语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"马拉雅拉姆文"_s)
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
			$of(u"多格拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lepc"_s),
			$of(u"雷布查文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("bkm"_s),
			$of(u"科姆语"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"南萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"爪哇语"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"萧伯纳式文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAUDDHA"_s),
			$of(u"佛陀梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"马都拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"吕勒萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"摩揭陀语"_s)
		}),
		$$new($ObjectArray, {
			$of("maf"_s),
			$of(u"马法语"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"迈蒂利语"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"伊纳里萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"格鲁吉亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"西克西卡语"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"望加锡语"_s)
		}),
		$$new($ObjectArray, {
			$of("wuu"_s),
			$of(u"吴语"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"斯科特萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"曼丁哥语"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"刚果语"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"哥特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"吉库尤语"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"马赛语"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"宽亚玛语"_s)
		}),
		$$new($ObjectArray, {
			$of("kk"_s),
			$of(u"哈萨克语"_s)
		}),
		$$new($ObjectArray, {
			$of("kl"_s),
			$of(u"格陵兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("km"_s),
			$of(u"高棉语"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"卡纳达语"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"韩语"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"卡努里语"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"克什米尔语"_s)
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
			$of(u"库尔德语"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"科米语"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"康沃尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"柯尔克孜语"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"索宁克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mult"_s),
			$of(u"穆尔坦文"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"拉丁语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hatr"_s),
			$of(u"哈特兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"卢森堡语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mlym"_s),
			$of(u"马拉雅拉姆数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"卢干达语"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"朗格朗格文"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"林堡语"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"林加拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"弗留利语"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"老挝语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ms.uksystem"_s),
			$of(u"英制"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.lana"_s),
			$of(u"老傣文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"立陶宛语"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"鲁巴加丹加语"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"拉脱维亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"粟特语"_s)
		}),
		$$new($ObjectArray, {
			$of("ListCompositionPattern"_s),
			$of(u"{0}，{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"马拉加斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"马绍尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.ducet"_s),
			$of(u"默认 Unicode 排序"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"毛利语"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"马其顿语"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"马拉雅拉姆语"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"蒙古语"_s)
		}),
		$$new($ObjectArray, {
			$of("mr"_s),
			$of(u"马拉地语"_s)
		}),
		$$new($ObjectArray, {
			$of("ms"_s),
			$of(u"马来语"_s)
		}),
		$$new($ObjectArray, {
			$of("mt"_s),
			$of(u"马耳他语"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"缅甸语"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"索拉什特拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"莫克沙语"_s)
		}),
		$$new($ObjectArray, {
			$of("mde"_s),
			$of(u"马坝语"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"下索布语"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"皇室亚拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"瑙鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.search"_s),
			$of(u"常规搜索"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"书面挪威语"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北恩德贝勒语"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"尼泊尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"恩东加语"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"曼达尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"荷兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"挪威尼诺斯克语"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"挪威语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PROVENC"_s),
			$of(u"普罗旺斯方言"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南恩德贝勒语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.modi"_s),
			$of(u"莫迪数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Osge"_s),
			$of(u"欧塞奇文"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"纳瓦霍语"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"卡拉卡尔帕克语"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"齐切瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"克钦语"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"卡拜尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%POLYTON"_s),
			$of(u"多音字母"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"奥克语"_s)
		}),
		$$new($ObjectArray, {
			$of("kaj"_s),
			$of(u"卡捷语"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"卡姆巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"门德语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%EMODENG"_s),
			$of(u"近代英语"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"奥吉布瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("mer"_s),
			$of(u"梅鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.armn"_s),
			$of(u"亚美尼亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"奥罗莫语"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"卡威语"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"奥里亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Modi"_s),
			$of(u"莫迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"奥塞梯语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ALALC97"_s),
			$of(u"1997 版 ALA-LC 罗马字"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"卡巴尔德语"_s)
		}),
		$$new($ObjectArray, {
			$of("mfe"_s),
			$of(u"毛里求斯克里奥尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"苏里南汤加语"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"旁遮普语"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"杜阿拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"塞雷尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LIPAW"_s),
			$of(u"雷西亚 Lipovaz 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("kbl"_s),
			$of(u"加涅姆布语"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"巴利语"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"波兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"中古荷兰语"_s)
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
			$of(u"普什图语"_s)
		}),
		$$new($ObjectArray, {
			$of("pt"_s),
			$of(u"葡萄牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"中古爱尔兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.co"_s),
			$of(u"排序"_s)
		}),
		$$new($ObjectArray, {
			$of("pt_BR"_s),
			$of(u"巴西葡萄牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BOHORIC"_s),
			$of(u"博霍里奇字母"_s)
		}),
		$$new($ObjectArray, {
			$of("kcg"_s),
			$of(u"卡塔布语"_s)
		}),
		$$new($ObjectArray, {
			$of("mgh"_s),
			$of(u"马库阿语"_s)
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
			$of(u"布拉杰语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ca"_s),
			$of(u"日历"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JAUER"_s),
			$of(u"米施泰尔方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"老挝文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SURMIRAN"_s),
			$of(u"瑞士苏迈拉方言"_s)
		}),
		$$new($ObjectArray, {
			$of("mgo"_s),
			$of(u"梅塔语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h23"_s),
			$of(u"24小时制（0–23）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h24"_s),
			$of(u"24小时制（1–24）"_s)
		}),
		$$new($ObjectArray, {
			$of("ssy"_s),
			$of(u"萨霍语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mymr"_s),
			$of(u"缅甸数字"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"克丘亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"萨波蒂克语"_s)
		}),
		$$new($ObjectArray, {
			$of("brx"_s),
			$of(u"博多语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"兰拿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kde"_s),
			$of(u"马孔德语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%VAIDIKA"_s),
			$of(u"吠陀梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"埃塞俄比亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%JYUTPING"_s),
			$of(u"粤语拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h12"_s),
			$of(u"12小时制（1–12）"_s)
		}),
		$$new($ObjectArray, {
			$of("type.hc.h11"_s),
			$of(u"12小时制（0–11）"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"罗曼什语"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"隆迪语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.cu"_s),
			$of(u"货币"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"罗马尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SAAHO"_s),
			$of(u"萨霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.orya"_s),
			$of(u"奥里亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hanidec"_s),
			$of(u"中文十进制数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"俄语"_s)
		}),
		$$new($ObjectArray, {
			$of("bss"_s),
			$of(u"阿库色语"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"卢旺达语"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"布里斯符号"_s)
		}),
		$$new($ObjectArray, {
			$of("kea"_s),
			$of(u"卡布佛得鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"密克马克语"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"苏库马语"_s)
		}),
		$$new($ObjectArray, {
			$of("en_AU"_s),
			$of(u"澳大利亚英语"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"杜普洛伊速记"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"梵语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%UCCOR"_s),
			$of(u"统一的拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"萨丁语"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"苏苏语"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"信德语"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北方萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"米南佳保语"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"桑戈语"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"塞尔维亚-克罗地亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"僧伽罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"苏美尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"斯洛伐克语"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"斯洛文尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"格兰塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"萨摩亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BASICENG"_s),
			$of(u"基本英语"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"绍纳语"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"索马里语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.arab"_s),
			$of(u"阿拉伯-印度数字"_s)
		}),
		$$new($ObjectArray, {
			$of("sq"_s),
			$of(u"阿尔巴尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("sr"_s),
			$of(u"塞尔维亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("ListKeyTypePattern"_s),
			$of(u"{0}：{1}"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"斯瓦蒂语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.cf.account"_s),
			$of(u"会计货币格式"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"南索托语"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"爪哇文"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"巽他语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%NEDIS"_s),
			$of(u"Natisone 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"瑞典语"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"斯瓦希里语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.wcho"_s),
			$of(u"万秋数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hantfin"_s),
			$of(u"繁体中文大写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("ibb"_s),
			$of(u"伊比比奥语"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"伊班语"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"泰米尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"亚洲"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"布里亚特语"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"中亚"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"泰卢固语"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"塔吉克语"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"泰语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%SPANGLIS"_s),
			$of(u"西班牙式英语"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"提格利尼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"布吉语"_s)
		}),
		$$new($ObjectArray, {
			$of("kfo"_s),
			$of(u"克罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("en_CA"_s),
			$of(u"加拿大英语"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"土库曼语"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"他加禄语"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"茨瓦纳语"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"汤加语"_s)
		}),
		$$new($ObjectArray, {
			$of("bum"_s),
			$of(u"布鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("dyo"_s),
			$of(u"朱拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpan"_s),
			$of(u"日文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"土耳其语"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"聪加语"_s)
		}),
		$$new($ObjectArray, {
			$of("swb"_s),
			$of(u"科摩罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"查克马文"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"鞑靼语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%XSISTEMO"_s),
			$of(u"西西斯特莫方言"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"迪尤拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"契维语"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"塔希提语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BISKE"_s),
			$of(u"圣乔治/比拉方言"_s)
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
			$of("type.nu.rohg"_s),
			$of(u"哈乃斐罗兴亚数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsanb"_s),
			$of(u"数学无衬线粗体数字"_s)
		}),
		$$new($ObjectArray, {
			$of("154"_s),
			$of(u"北欧"_s)
		}),
		$$new($ObjectArray, {
			$of("dzg"_s),
			$of(u"达扎葛语"_s)
		}),
		$$new($ObjectArray, {
			$of("155"_s),
			$of(u"西欧"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"维吾尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"古意大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"韩文"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"通用"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"乌克兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.coptic"_s),
			$of(u"科普特历"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"乌尔都语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1994"_s),
			$of(u"标准雷西亚拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"卡尔梅克语"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"泽纳加语"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"乌兹别克语"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"卡西语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1996"_s),
			$of(u"1996 年德文拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("nds_NL"_s),
			$of(u"低萨克森语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"锡尔赫特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"文达语"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of(u"瓦郎奇蒂文字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.ca.roc"_s),
			$of(u"民国纪年"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"越南语"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"和田语"_s)
		}),
		$$new($ObjectArray, {
			$of("khq"_s),
			$of(u"西桑海语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.hc"_s),
			$of(u"小时制（12或24）"_s)
		}),
		$$new($ObjectArray, {
			$of("%%TARASK"_s),
			$of(u"Taraskievica 拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"沃拉普克语"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"古典叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.mathsans"_s),
			$of(u"数学无衬线数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"奥斯曼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("quc"_s),
			$of(u"基切语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gonm"_s),
			$of(metaValue_type_nu_gong)
		}),
		$$new($ObjectArray, {
			$of("Newa"_s),
			$of(u"尼瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"加族语"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"瓦隆语"_s)
		}),
		$$new($ObjectArray, {
			$of("gag"_s),
			$of(u"加告兹语"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.gong"_s),
			$of(metaValue_type_nu_gong)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("gan"_s),
			$of(u"赣语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"吕底亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"苏美尔-阿卡德楔形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"沃洛夫语"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"标准摩洛哥塔马塞特语"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"现代标准阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"加拿大土著统一音节"_s)
		}),
		$$new($ObjectArray, {
			$of("%%FONXSAMP"_s),
			$of(u"X-SAMPA 音标"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"迦约语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"蒙古文"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"满语"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"拉丁文（哥特式字体变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("Hluw"_s),
			$of(u"安那托利亚象形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"格巴亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"曼尼普尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"拉丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"拉丁文（盖尔文变体）"_s)
		}),
		$$new($ObjectArray, {
			$of("Nand"_s),
			$of(u"楠迪梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hans"_s),
			$of(u"简体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.hant"_s),
			$of(u"繁体中文数字"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"科萨语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.romanlow"_s),
			$of(u"罗马小写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"比林语"_s)
		}),
		$$new($ObjectArray, {
			$of("Dogr"_s),
			$of(u"多格拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAMAKA"_s),
			$of(u"Pamaka 方言"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"奥塞治语"_s)
		}),
		$$new($ObjectArray, {
			$of("byv"_s),
			$of(u"梅敦巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"韩文语系"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"摩霍克语"_s)
		}),
		$$new($ObjectArray, {
			$of("kkj"_s),
			$of(u"卡库语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1694ACAD"_s),
			$of(u"早期现代法文"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"意第绪语"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"莫西语"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"德塞莱特文"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"约鲁巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.traditional"_s),
			$of(u"传统数字"_s)
		}),
		$$new($ObjectArray, {
			$of("es_MX"_s),
			$of(u"墨西哥西班牙语"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"西叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"奥斯曼土耳其语"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"福音体叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"瓦伊语"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"壮语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"卡里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("kln"_s),
			$of(u"卡伦金语"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Afak"_s),
			$of(u"阿法卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"汉语拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"古彼尔姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("key.lb"_s),
			$of(u"换行符样式"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"祖鲁语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.co.phonebook"_s),
			$of(u"电话簿排序"_s)
		}),
		$$new($ObjectArray, {
			$of("%%MONOTON"_s),
			$of(u"单音字母"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"格鲁吉亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Shrd"_s),
			$of(u"夏拉达文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%LENGADOC"_s),
			$of(u"隆格多克方言"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"金邦杜语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.jpanfin"_s),
			$of(u"日文大写数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"占文"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"吉兹语"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"东叙利亚文"_s)
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
			$of(u"古北方阿拉伯文"_s)
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
			$of(u"塔加路文"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyd"_s),
			$of(u"后期埃及文"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"古埃及僧侣书写体"_s)
		}),
		$$new($ObjectArray, {
			$of("Yezi"_s),
			$of(u"雅兹迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%ITIHASA"_s),
			$of(u"史诗梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"帕尔迈拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("ebu"_s),
			$of(u"恩布语"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"古埃及象形文"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"格鲁吉亚文（教堂体）"_s)
		}),
		$$new($ObjectArray, {
			$of("zh_Hans"_s),
			$of(u"简体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("koi"_s),
			$of(u"科米-彼尔米亚克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"古匈牙利文"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"孔卡尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%1901"_s),
			$of(u"传统德文拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"科斯拉伊语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH2"_s),
			$of(u"帕哈苗文2代"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH3"_s),
			$of(u"帕哈苗文3代"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PAHAWH4"_s),
			$of(u"帕哈苗文4代"_s)
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
			$of(u"巽他文"_s)
		}),
		$$new($ObjectArray, {
			$of("vep"_s),
			$of(u"维普森语"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"克佩列语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%GRCLASS"_s),
			$of(u"粗粒级"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.khmr"_s),
			$of(u"高棉数字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tirh"_s),
			$of(u"迈蒂利文"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"伊洛卡诺语"_s)
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
			$of("Diak"_s),
			$of(u"迪维西阿库鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BAKU1926"_s),
			$of(u"统一土耳其拉丁字母"_s)
		}),
		$$new($ObjectArray, {
			$of("%%IJEKAVSK"_s),
			$of(u"塞尔维亚语伊吉卡维亚发音"_s)
		}),
		$$new($ObjectArray, {
			$of("mua"_s),
			$of(u"蒙当语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.guru"_s),
			$of(u"果鲁穆奇数字"_s)
		}),
		$$new($ObjectArray, {
			$of("%%BORNHOLM"_s),
			$of(u"博恩霍尔姆方言"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"多语种"_s)
		}),
		$$new($ObjectArray, {
			$of("%%PUTER"_s),
			$of(u"瑞士普特尔方言"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"卡多语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.ms"_s),
			$of(u"度量衡制"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"克里克语"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"格拉哥里文"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"吉尔伯特语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%KKCOR"_s),
			$of(u"常用拼字"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"切罗基文"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"加勒比语"_s)
		}),
		$$new($ObjectArray, {
			$of("cay"_s),
			$of(u"卡尤加语"_s)
		}),
		$$new($ObjectArray, {
			$of("type.nu.tamldec"_s),
			$of(u"泰米尔数字"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"卡拉恰伊巴尔卡尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"印古什语"_s)
		}),
		$$new($ObjectArray, {
			$of("fa_AF"_s),
			$of(u"达里语"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"卡累利阿语"_s)
		}),
		$$new($ObjectArray, {
			$of("%%OXENDICT"_s),
			$of(u"《牛津英语词典》拼法"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"埃菲克语"_s)
		}),
		$$new($ObjectArray, {
			$of("key.nu"_s),
			$of(metaValue_key_nu)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"库鲁克语"_s)
		}),
		$$new($ObjectArray, {
			$of("ksb"_s),
			$of(u"香巴拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"泰卢固文"_s)
		}),
		$$new($ObjectArray, {
			$of("ksf"_s),
			$of(u"巴菲亚语"_s)
		})
	}));
	return data;
}

LocaleNames_zh::LocaleNames_zh() {
}

$Class* LocaleNames_zh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh, name, initialize, &_LocaleNames_zh_ClassInfo_, allocate$LocaleNames_zh);
	return class$;
}

$Class* LocaleNames_zh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun