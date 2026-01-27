#include <sun/util/resources/ext/LocaleNames_zh.h>

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

$MethodInfo _LocaleNames_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_zh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_zh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_zh_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_zh",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_zh_MethodInfo_
};

$Object* allocate$LocaleNames_zh($Class* clazz) {
	return $of($alloc(LocaleNames_zh));
}

void LocaleNames_zh::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_zh::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
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
			$of("005"_s),
			$of(u"南美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("009"_s),
			$of(u"大洋洲"_s)
		}),
		$$new($ObjectArray, {
			$of("011"_s),
			$of(u"西非"_s)
		}),
		$$new($ObjectArray, {
			$of("013"_s),
			$of(u"中美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("014"_s),
			$of(u"东非"_s)
		}),
		$$new($ObjectArray, {
			$of("015"_s),
			$of(u"北非"_s)
		}),
		$$new($ObjectArray, {
			$of("017"_s),
			$of(u"中非"_s)
		}),
		$$new($ObjectArray, {
			$of("018"_s),
			$of(u"南部非洲"_s)
		}),
		$$new($ObjectArray, {
			$of("019"_s),
			$of(u"美洲"_s)
		}),
		$$new($ObjectArray, {
			$of("021"_s),
			$of(u"美洲北部"_s)
		}),
		$$new($ObjectArray, {
			$of("029"_s),
			$of(u"加勒比海"_s)
		}),
		$$new($ObjectArray, {
			$of("030"_s),
			$of(u"东亚"_s)
		}),
		$$new($ObjectArray, {
			$of("034"_s),
			$of(u"南亚"_s)
		}),
		$$new($ObjectArray, {
			$of("035"_s),
			$of(u"东南亚"_s)
		}),
		$$new($ObjectArray, {
			$of("039"_s),
			$of(u"南欧"_s)
		}),
		$$new($ObjectArray, {
			$of("053"_s),
			$of(u"澳大利亚和新西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("054"_s),
			$of(u"美拉尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("057"_s),
			$of(u"密克罗尼西亚地区"_s)
		}),
		$$new($ObjectArray, {
			$of("061"_s),
			$of(u"波利尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("142"_s),
			$of(u"亚洲"_s)
		}),
		$$new($ObjectArray, {
			$of("143"_s),
			$of(u"中亚"_s)
		}),
		$$new($ObjectArray, {
			$of("145"_s),
			$of(u"西亚"_s)
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
			$of("155"_s),
			$of(u"西欧"_s)
		}),
		$$new($ObjectArray, {
			$of("419"_s),
			$of(u"拉丁美洲和加勒比海"_s)
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
			$of("AF"_s),
			$of(u"阿富汗"_s)
		}),
		$$new($ObjectArray, {
			$of("AG"_s),
			$of(u"安提瓜和巴布达"_s)
		}),
		$$new($ObjectArray, {
			$of("AI"_s),
			$of(u"安圭拉"_s)
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
			$of("AN"_s),
			$of(u"荷属安的列斯群岛"_s)
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
			$of("AS"_s),
			$of(u"东萨摩亚"_s)
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
			$of("AX"_s),
			$of(u"奥兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("AZ"_s),
			$of(u"阿塞拜疆"_s)
		}),
		$$new($ObjectArray, {
			$of("Arab"_s),
			$of(u"阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Armi"_s),
			$of(u"皇家亚拉姆语"_s)
		}),
		$$new($ObjectArray, {
			$of("Armn"_s),
			$of(u"亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Avst"_s),
			$of(u"阿维斯陀语"_s)
		}),
		$$new($ObjectArray, {
			$of("BA"_s),
			$of(u"波斯尼亚和黑山共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("BB"_s),
			$of(u"巴巴多斯"_s)
		}),
		$$new($ObjectArray, {
			$of("BD"_s),
			$of(u"孟加拉"_s)
		}),
		$$new($ObjectArray, {
			$of("BE"_s),
			$of(u"比利时"_s)
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
			$of("BM"_s),
			$of(u"百慕大"_s)
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
			$of("BR"_s),
			$of(u"巴西"_s)
		}),
		$$new($ObjectArray, {
			$of("BS"_s),
			$of(u"巴哈马"_s)
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
			$of(u"伯里兹"_s)
		}),
		$$new($ObjectArray, {
			$of("Bali"_s),
			$of(u"巴里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Bamu"_s),
			$of(u"巴姆穆语"_s)
		}),
		$$new($ObjectArray, {
			$of("Bass"_s),
			$of(u"巴萨瓦赫语"_s)
		}),
		$$new($ObjectArray, {
			$of("Batk"_s),
			$of(u"巴塔克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Beng"_s),
			$of(u"孟加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Blis"_s),
			$of(u"布列斯符号"_s)
		}),
		$$new($ObjectArray, {
			$of("Bopo"_s),
			$of(u"汉语拼音"_s)
		}),
		$$new($ObjectArray, {
			$of("Brah"_s),
			$of(u"婆罗米文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Brai"_s),
			$of(u"布莱叶盲文"_s)
		}),
		$$new($ObjectArray, {
			$of("Bugi"_s),
			$of(u"布吉文"_s)
		}),
		$$new($ObjectArray, {
			$of("Buhd"_s),
			$of(u"布希德语"_s)
		}),
		$$new($ObjectArray, {
			$of("CA"_s),
			$of(u"加拿大"_s)
		}),
		$$new($ObjectArray, {
			$of("CC"_s),
			$of(u"科库斯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CD"_s),
			$of(u"刚果民主共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CF"_s),
			$of(u"中非共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("CG"_s),
			$of(u"刚果"_s)
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
			$of("CR"_s),
			$of(u"哥斯达黎加"_s)
		}),
		$$new($ObjectArray, {
			$of("CS"_s),
			$of(u"塞尔维亚及黑山"_s)
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
			$of("CX"_s),
			$of(u"圣诞岛"_s)
		}),
		$$new($ObjectArray, {
			$of("CY"_s),
			$of(u"塞浦路斯"_s)
		}),
		$$new($ObjectArray, {
			$of("CZ"_s),
			$of(u"捷克共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("Cakm"_s),
			$of(u"查克马语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cans"_s),
			$of(u"加拿大土著统一符号语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cari"_s),
			$of(u"卡里亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cham"_s),
			$of(u"占语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cher"_s),
			$of(u"彻罗基文"_s)
		}),
		$$new($ObjectArray, {
			$of("Cirt"_s),
			$of(u"色斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("Copt"_s),
			$of(u"克普特语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cprt"_s),
			$of(u"塞浦路斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrl"_s),
			$of(u"西里尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Cyrs"_s),
			$of(u"西里尔文字 (古教会斯拉夫语的变体)"_s)
		}),
		$$new($ObjectArray, {
			$of("DE"_s),
			$of(u"德国"_s)
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
			$of("DM"_s),
			$of(u"多米尼加联邦"_s)
		}),
		$$new($ObjectArray, {
			$of("DO"_s),
			$of(u"多米尼加共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"阿尔及利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Deva"_s),
			$of(u"梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dsrt"_s),
			$of(u"德塞莱特文"_s)
		}),
		$$new($ObjectArray, {
			$of("Dupl"_s),
			$of(u"Duployan 速记"_s)
		}),
		$$new($ObjectArray, {
			$of("EC"_s),
			$of(u"厄瓜多尔"_s)
		}),
		$$new($ObjectArray, {
			$of("EE"_s),
			$of(u"爱沙尼亚"_s)
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
			$of("ER"_s),
			$of(u"厄里特尼亚"_s)
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
			$of("Egyd"_s),
			$of(u"后期埃及语"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyh"_s),
			$of(u"古埃及僧侣书写体"_s)
		}),
		$$new($ObjectArray, {
			$of("Egyp"_s),
			$of(u"古埃及象形文"_s)
		}),
		$$new($ObjectArray, {
			$of("Elba"_s),
			$of(u"爱尔巴桑"_s)
		}),
		$$new($ObjectArray, {
			$of("Ethi"_s),
			$of(u"埃塞俄比亚语"_s)
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
			$of(u"富克兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("FM"_s),
			$of(u"密克罗尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("FO"_s),
			$of(u"法罗群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("FR"_s),
			$of(u"法国"_s)
		}),
		$$new($ObjectArray, {
			$of("GA"_s),
			$of(u"加蓬"_s)
		}),
		$$new($ObjectArray, {
			$of("GB"_s),
			$of(u"英国"_s)
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
			$of("GH"_s),
			$of(u"加纳"_s)
		}),
		$$new($ObjectArray, {
			$of("GI"_s),
			$of(u"直布罗陀"_s)
		}),
		$$new($ObjectArray, {
			$of("GL"_s),
			$of(u"格陵兰"_s)
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
			$of(u"瓜德罗普岛"_s)
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
			$of(u"南乔治亚岛和南桑德韦奇岛"_s)
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
			$of("GW"_s),
			$of(u"几内亚比绍共和国"_s)
		}),
		$$new($ObjectArray, {
			$of("GY"_s),
			$of(u"圭亚那"_s)
		}),
		$$new($ObjectArray, {
			$of("Geok"_s),
			$of(u"努斯克胡里文"_s)
		}),
		$$new($ObjectArray, {
			$of("Geor"_s),
			$of(u"格鲁吉亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Glag"_s),
			$of(u"格拉哥里语"_s)
		}),
		$$new($ObjectArray, {
			$of("Goth"_s),
			$of(u"哥特文"_s)
		}),
		$$new($ObjectArray, {
			$of("Gran"_s),
			$of(u"各兰特哈文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Grek"_s),
			$of(u"希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("Gujr"_s),
			$of(u"古加拉提文"_s)
		}),
		$$new($ObjectArray, {
			$of("Guru"_s),
			$of(u"果鲁穆奇语"_s)
		}),
		$$new($ObjectArray, {
			$of("HK"_s),
			$of(u"香港"_s)
		}),
		$$new($ObjectArray, {
			$of("HM"_s),
			$of(u"赫德和麦克唐纳群岛"_s)
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
			$of("HT"_s),
			$of(u"海地"_s)
		}),
		$$new($ObjectArray, {
			$of("HU"_s),
			$of(u"匈牙利"_s)
		}),
		$$new($ObjectArray, {
			$of("Hang"_s),
			$of(u"韩文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hani"_s),
			$of(u"汉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hano"_s),
			$of(u"汉奴罗语"_s)
		}),
		$$new($ObjectArray, {
			$of("Hans"_s),
			$of(u"简体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hant"_s),
			$of(u"繁体中文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hebr"_s),
			$of(u"希伯来文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hira"_s),
			$of(u"平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("Hmng"_s),
			$of(u"杨松录苗文"_s)
		}),
		$$new($ObjectArray, {
			$of("Hrkt"_s),
			$of(u"片假名或平假名"_s)
		}),
		$$new($ObjectArray, {
			$of("Hung"_s),
			$of(u"古匈牙利语"_s)
		}),
		$$new($ObjectArray, {
			$of("ID"_s),
			$of(u"印度尼西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("IE"_s),
			$of(u"爱尔兰"_s)
		}),
		$$new($ObjectArray, {
			$of("IL"_s),
			$of(u"以色列"_s)
		}),
		$$new($ObjectArray, {
			$of("IN"_s),
			$of(u"印度"_s)
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
			$of("Inds"_s),
			$of(u"印度河文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Ital"_s),
			$of(u"古意大利语"_s)
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
			$of("JP"_s),
			$of(u"日本"_s)
		}),
		$$new($ObjectArray, {
			$of("Java"_s),
			$of(u"爪哇文"_s)
		}),
		$$new($ObjectArray, {
			$of("Jpan"_s),
			$of(u"日文"_s)
		}),
		$$new($ObjectArray, {
			$of("KE"_s),
			$of(u"肯尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("KG"_s),
			$of(u"吉尔吉克斯坦"_s)
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
			$of("KP"_s),
			$of(u"朝鲜"_s)
		}),
		$$new($ObjectArray, {
			$of("KR"_s),
			$of(u"韩国"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"科威特"_s)
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
			$of("Kali"_s),
			$of(u"克耶李文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Kana"_s),
			$of(u"片假名"_s)
		}),
		$$new($ObjectArray, {
			$of("Khar"_s),
			$of(u"卡罗须提文"_s)
		}),
		$$new($ObjectArray, {
			$of("Khmr"_s),
			$of(u"柬埔寨文"_s)
		}),
		$$new($ObjectArray, {
			$of("Knda"_s),
			$of(u"埃纳德文"_s)
		}),
		$$new($ObjectArray, {
			$of("Kore"_s),
			$of(u"韩文"_s)
		}),
		$$new($ObjectArray, {
			$of("Kpel"_s),
			$of(u"克佩列文"_s)
		}),
		$$new($ObjectArray, {
			$of("Kthi"_s),
			$of(u"卡罗须提语"_s)
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
			$of("LI"_s),
			$of(u"列支敦士登"_s)
		}),
		$$new($ObjectArray, {
			$of("LK"_s),
			$of(u"斯里兰卡"_s)
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
			$of("LY"_s),
			$of(u"利比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Lana"_s),
			$of(u"兰拿语"_s)
		}),
		$$new($ObjectArray, {
			$of("Laoo"_s),
			$of(u"老挝语"_s)
		}),
		$$new($ObjectArray, {
			$of("Latf"_s),
			$of(u"拉丁文 (哥特式字体变体)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latg"_s),
			$of(u"拉丁文 (盖尔语变体)"_s)
		}),
		$$new($ObjectArray, {
			$of("Latn"_s),
			$of(u"拉丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("Lepc"_s),
			$of(u"雷布查语"_s)
		}),
		$$new($ObjectArray, {
			$of("Limb"_s),
			$of(u"林布语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lina"_s),
			$of(u"线形文字 A"_s)
		}),
		$$new($ObjectArray, {
			$of("Linb"_s),
			$of(u"线形文字 B"_s)
		}),
		$$new($ObjectArray, {
			$of("Lisu"_s),
			$of(u"傈僳语"_s)
		}),
		$$new($ObjectArray, {
			$of("Loma"_s),
			$of(u"洛马语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lyci"_s),
			$of(u"利西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Lydi"_s),
			$of(u"吕底亚语"_s)
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
			$of("ME"_s),
			$of(u"黑山"_s)
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
			$of("MK"_s),
			$of(u"马其顿王国"_s)
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
			$of("MO"_s),
			$of(u"澳门特区"_s)
		}),
		$$new($ObjectArray, {
			$of("MP"_s),
			$of(u"美属北马里亚纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MQ"_s),
			$of(u"马提尼克岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MR"_s),
			$of(u"毛里塔尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"蒙特塞拉群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("MT"_s),
			$of(u"马耳他"_s)
		}),
		$$new($ObjectArray, {
			$of("MU"_s),
			$of(u"毛里求斯"_s)
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
			$of("MY"_s),
			$of(u"马来西亚"_s)
		}),
		$$new($ObjectArray, {
			$of("MZ"_s),
			$of(u"莫桑比克"_s)
		}),
		$$new($ObjectArray, {
			$of("Mand"_s),
			$of(u"曼达文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mani"_s),
			$of(u"摩尼教文"_s)
		}),
		$$new($ObjectArray, {
			$of("Maya"_s),
			$of(u"玛雅圣符文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mend"_s),
			$of(u"门迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("Merc"_s),
			$of(u"麦若提克文草体"_s)
		}),
		$$new($ObjectArray, {
			$of("Mero"_s),
			$of(u"麦若提克文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mlym"_s),
			$of(u"马来亚拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("Mong"_s),
			$of(u"蒙古文"_s)
		}),
		$$new($ObjectArray, {
			$of("Moon"_s),
			$of(u"月亮体"_s)
		}),
		$$new($ObjectArray, {
			$of("Mtei"_s),
			$of(u"曼尼普尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("Mymr"_s),
			$of(u"缅甸"_s)
		}),
		$$new($ObjectArray, {
			$of("NA"_s),
			$of(u"纳米比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("NC"_s),
			$of(u"新克里多尼亚群岛"_s)
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
			$of("NI"_s),
			$of(u"尼加拉瓜"_s)
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
			$of(u"纽埃岛"_s)
		}),
		$$new($ObjectArray, {
			$of("NZ"_s),
			$of(u"新西兰"_s)
		}),
		$$new($ObjectArray, {
			$of("Narb"_s),
			$of(u"古北阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Nbat"_s),
			$of(u"纳巴泰语"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkgb"_s),
			$of(u"纳西哥巴语"_s)
		}),
		$$new($ObjectArray, {
			$of("Nkoo"_s),
			$of(u"N’Ko (西非书面语言)"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"阿曼"_s)
		}),
		$$new($ObjectArray, {
			$of("Ogam"_s),
			$of(u"欧甘语"_s)
		}),
		$$new($ObjectArray, {
			$of("Olck"_s),
			$of(u"桑塔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("Orkh"_s),
			$of(u"鄂尔浑文"_s)
		}),
		$$new($ObjectArray, {
			$of("Orya"_s),
			$of(u"奥萨格文"_s)
		}),
		$$new($ObjectArray, {
			$of("Osma"_s),
			$of(u"奥斯曼亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("PA"_s),
			$of(u"巴拿马"_s)
		}),
		$$new($ObjectArray, {
			$of("PE"_s),
			$of(u"秘鲁"_s)
		}),
		$$new($ObjectArray, {
			$of("PF"_s),
			$of(u"法属玻利尼西亚"_s)
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
			$of("PL"_s),
			$of(u"波兰"_s)
		}),
		$$new($ObjectArray, {
			$of("PM"_s),
			$of(u"圣皮埃尔和密克隆群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PN"_s),
			$of(u"皮特克恩岛"_s)
		}),
		$$new($ObjectArray, {
			$of("PR"_s),
			$of(u"波多黎哥"_s)
		}),
		$$new($ObjectArray, {
			$of("PS"_s),
			$of(u"巴勒斯坦"_s)
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
			$of("PY"_s),
			$of(u"巴拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("Palm"_s),
			$of(u"帕尔迈拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Perm"_s),
			$of(u"古彼尔姆诸语"_s)
		}),
		$$new($ObjectArray, {
			$of("Phag"_s),
			$of(u"八思巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("Phli"_s),
			$of(u"碑铭体巴列维语"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlp"_s),
			$of(u"诗体巴列维语"_s)
		}),
		$$new($ObjectArray, {
			$of("Phlv"_s),
			$of(u"书体巴列维语"_s)
		}),
		$$new($ObjectArray, {
			$of("Phnx"_s),
			$of(u"腓尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("Plrd"_s),
			$of(u"苗文"_s)
		}),
		$$new($ObjectArray, {
			$of("Prti"_s),
			$of(u"碑铭体帕提亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"卡塔尔"_s)
		}),
		$$new($ObjectArray, {
			$of("RE"_s),
			$of(u"留尼汪岛"_s)
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
			$of("RU"_s),
			$of(u"俄罗斯"_s)
		}),
		$$new($ObjectArray, {
			$of("RW"_s),
			$of(u"卢旺达"_s)
		}),
		$$new($ObjectArray, {
			$of("Rjng"_s),
			$of(u"拉让语"_s)
		}),
		$$new($ObjectArray, {
			$of("Roro"_s),
			$of(u"朗格朗格文"_s)
		}),
		$$new($ObjectArray, {
			$of("Runr"_s),
			$of(u"古代北欧文"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"沙特阿拉伯"_s)
		}),
		$$new($ObjectArray, {
			$of("SB"_s),
			$of(u"所罗门群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("SC"_s),
			$of(u"塞舌尔群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"苏丹"_s)
		}),
		$$new($ObjectArray, {
			$of("SE"_s),
			$of(u"瑞典"_s)
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
			$of("SI"_s),
			$of(u"斯洛文尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("SJ"_s),
			$of(u"斯瓦尔巴特和扬马延岛"_s)
		}),
		$$new($ObjectArray, {
			$of("SK"_s),
			$of(u"斯洛伐克"_s)
		}),
		$$new($ObjectArray, {
			$of("SL"_s),
			$of(u"塞拉里昂"_s)
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
			$of("SR"_s),
			$of(u"苏里南"_s)
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
			$of("SY"_s),
			$of(u"叙利亚"_s)
		}),
		$$new($ObjectArray, {
			$of("SZ"_s),
			$of(u"斯威士兰"_s)
		}),
		$$new($ObjectArray, {
			$of("Samr"_s),
			$of(u"撒玛利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sara"_s),
			$of(u"沙拉堤文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sarb"_s),
			$of(u"古南阿拉伯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Saur"_s),
			$of(u"索拉什特拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sgnw"_s),
			$of(u"书写符号"_s)
		}),
		$$new($ObjectArray, {
			$of("Shaw"_s),
			$of(u"萧伯纳式语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sind"_s),
			$of(u"信德文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sinh"_s),
			$of(u"辛哈拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("Sund"_s),
			$of(u"巽他文"_s)
		}),
		$$new($ObjectArray, {
			$of("Sylo"_s),
			$of(u"Syloti Nagri 书写体"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrc"_s),
			$of(u"叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syre"_s),
			$of(u"福音体叙利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrj"_s),
			$of(u"西叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("Syrn"_s),
			$of(u"东叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("TC"_s),
			$of(u"特克斯群岛和凯科斯群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("TD"_s),
			$of(u"乍得"_s)
		}),
		$$new($ObjectArray, {
			$of("TF"_s),
			$of(u"法属南特立尼达"_s)
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
			$of("TK"_s),
			$of(u"联合群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("TL"_s),
			$of(u"东帝汶"_s)
		}),
		$$new($ObjectArray, {
			$of("TM"_s),
			$of(u"土库曼斯坦"_s)
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
			$of(u"台湾地区"_s)
		}),
		$$new($ObjectArray, {
			$of("TZ"_s),
			$of(u"坦桑尼亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Tagb"_s),
			$of(u"塔格班瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("Tale"_s),
			$of(u"泰乐语"_s)
		}),
		$$new($ObjectArray, {
			$of("Talu"_s),
			$of(u"新傣文"_s)
		}),
		$$new($ObjectArray, {
			$of("Taml"_s),
			$of(u"泰米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tavt"_s),
			$of(u"越南傣语"_s)
		}),
		$$new($ObjectArray, {
			$of("Telu"_s),
			$of(u"泰卢固文"_s)
		}),
		$$new($ObjectArray, {
			$of("Teng"_s),
			$of(u"腾格瓦文字"_s)
		}),
		$$new($ObjectArray, {
			$of("Tfng"_s),
			$of(u"提非纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tglg"_s),
			$of(u"塔加路族文"_s)
		}),
		$$new($ObjectArray, {
			$of("Thaa"_s),
			$of(u"塔安娜语"_s)
		}),
		$$new($ObjectArray, {
			$of("Thai"_s),
			$of(u"泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("Tibt"_s),
			$of(u"西藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("UA"_s),
			$of(u"乌克兰"_s)
		}),
		$$new($ObjectArray, {
			$of("UG"_s),
			$of(u"乌干达"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of(u"美属小奥特兰群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("US"_s),
			$of(u"美国"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"乌拉圭"_s)
		}),
		$$new($ObjectArray, {
			$of("UZ"_s),
			$of(u"乌兹别克斯坦"_s)
		}),
		$$new($ObjectArray, {
			$of("Ugar"_s),
			$of(u"乌加里特文"_s)
		}),
		$$new($ObjectArray, {
			$of("VA"_s),
			$of(u"梵蒂冈"_s)
		}),
		$$new($ObjectArray, {
			$of("VC"_s),
			$of(u"圣文森特和格林纳丁斯"_s)
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
			$of(u"瓦努阿图"_s)
		}),
		$$new($ObjectArray, {
			$of("Vaii"_s),
			$of(u"瓦依语"_s)
		}),
		$$new($ObjectArray, {
			$of("Visp"_s),
			$of(u"可见语言"_s)
		}),
		$$new($ObjectArray, {
			$of("WF"_s),
			$of(u"瓦利斯群岛和富图纳群岛"_s)
		}),
		$$new($ObjectArray, {
			$of("WS"_s),
			$of(u"东萨摩亚"_s)
		}),
		$$new($ObjectArray, {
			$of("Wara"_s),
			$of("Warang Citi"_s)
		}),
		$$new($ObjectArray, {
			$of("Xpeo"_s),
			$of(u"古波斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("Xsux"_s),
			$of(u"苏美尔-阿卡德楔形文字"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"也门"_s)
		}),
		$$new($ObjectArray, {
			$of("YT"_s),
			$of(u"马约特岛"_s)
		}),
		$$new($ObjectArray, {
			$of("Yiii"_s),
			$of(u"彝语"_s)
		}),
		$$new($ObjectArray, {
			$of("ZA"_s),
			$of(u"南非"_s)
		}),
		$$new($ObjectArray, {
			$of("ZM"_s),
			$of(u"赞比亚"_s)
		}),
		$$new($ObjectArray, {
			$of("ZW"_s),
			$of(u"津巴布韦"_s)
		}),
		$$new($ObjectArray, {
			$of("Zinh"_s),
			$of(u"遗传学术语"_s)
		}),
		$$new($ObjectArray, {
			$of("Zmth"_s),
			$of(u"数学记号"_s)
		}),
		$$new($ObjectArray, {
			$of("Zsym"_s),
			$of(u"符号"_s)
		}),
		$$new($ObjectArray, {
			$of("Zxxx"_s),
			$of(u"撤销写入"_s)
		}),
		$$new($ObjectArray, {
			$of("Zyyy"_s),
			$of(u"通用"_s)
		}),
		$$new($ObjectArray, {
			$of("Zzzz"_s),
			$of(u"脚本未知或者无效"_s)
		}),
		$$new($ObjectArray, {
			$of("aa"_s),
			$of(u"阿法文"_s)
		}),
		$$new($ObjectArray, {
			$of("aar"_s),
			$of(u"阿法尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ab"_s),
			$of(u"阿布哈西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("abk"_s),
			$of(u"阿布哈西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"亚齐文"_s)
		}),
		$$new($ObjectArray, {
			$of("ach"_s),
			$of(u"阿乔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("ada"_s),
			$of(u"阿当梅文"_s)
		}),
		$$new($ObjectArray, {
			$of("ady"_s),
			$of(u"阿迪何文"_s)
		}),
		$$new($ObjectArray, {
			$of("ae"_s),
			$of(u"阿维斯陀文"_s)
		}),
		$$new($ObjectArray, {
			$of("af"_s),
			$of(u"南非荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"亚非诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("afh"_s),
			$of(u"阿弗里希利文"_s)
		}),
		$$new($ObjectArray, {
			$of("afr"_s),
			$of(u"南非荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("ain"_s),
			$of(u"阿伊努文"_s)
		}),
		$$new($ObjectArray, {
			$of("ak"_s),
			$of(u"库阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("aka"_s),
			$of(u"库阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("akk"_s),
			$of(u"阿卡德文"_s)
		}),
		$$new($ObjectArray, {
			$of("alb"_s),
			$of(u"阿尔巴尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ale"_s),
			$of(u"阿留申文"_s)
		}),
		$$new($ObjectArray, {
			$of("alg"_s),
			$of(u"其他阿尔贡语系"_s)
		}),
		$$new($ObjectArray, {
			$of("alt"_s),
			$of(u"南阿尔泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("am"_s),
			$of(u"阿姆哈拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("amh"_s),
			$of(u"阿姆哈拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("an"_s),
			$of(u"阿拉贡文"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("anp"_s),
			$of(u"昂加语"_s)
		}),
		$$new($ObjectArray, {
			$of("apa"_s),
			$of(u"阿帕切文"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("ara"_s),
			$of(u"阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("arc"_s),
			$of(u"阿拉米文"_s)
		}),
		$$new($ObjectArray, {
			$of("arg"_s),
			$of(u"阿拉贡文"_s)
		}),
		$$new($ObjectArray, {
			$of("arm"_s),
			$of(u"亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"马普切文"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of(u"阿拉帕霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("art"_s),
			$of(u"其他人工语系"_s)
		}),
		$$new($ObjectArray, {
			$of("arw"_s),
			$of(u"阿拉瓦克文"_s)
		}),
		$$new($ObjectArray, {
			$of("as"_s),
			$of(u"阿萨姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("asm"_s),
			$of(u"阿萨姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("ast"_s),
			$of(u"阿斯图里亚思特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ath"_s),
			$of(u"阿萨帕斯坎语系"_s)
		}),
		$$new($ObjectArray, {
			$of("aus"_s),
			$of(u"澳大利亚语系"_s)
		}),
		$$new($ObjectArray, {
			$of("av"_s),
			$of(u"阿瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ava"_s),
			$of(u"阿瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ave"_s),
			$of(u"阿维斯陀文"_s)
		}),
		$$new($ObjectArray, {
			$of("awa"_s),
			$of(u"阿瓦乔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ay"_s),
			$of(u"艾马拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("aym"_s),
			$of(u"艾马拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("az"_s),
			$of(u"阿塞拜疆文"_s)
		}),
		$$new($ObjectArray, {
			$of("aze"_s),
			$of(u"阿塞拜疆文"_s)
		}),
		$$new($ObjectArray, {
			$of("ba"_s),
			$of(u"巴什客尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"班达文"_s)
		}),
		$$new($ObjectArray, {
			$of("bai"_s),
			$of(u"巴米累克语系"_s)
		}),
		$$new($ObjectArray, {
			$of("bak"_s),
			$of(u"巴什客尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bal"_s),
			$of(u"俾路支文"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"班巴拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("ban"_s),
			$of(u"巴厘语"_s)
		}),
		$$new($ObjectArray, {
			$of("baq"_s),
			$of(u"巴斯克文"_s)
		}),
		$$new($ObjectArray, {
			$of("bas"_s),
			$of(u"巴萨文"_s)
		}),
		$$new($ObjectArray, {
			$of("bat"_s),
			$of(u"其他波罗的语系"_s)
		}),
		$$new($ObjectArray, {
			$of("be"_s),
			$of(u"白俄罗斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("bej"_s),
			$of(u"别札文"_s)
		}),
		$$new($ObjectArray, {
			$of("bel"_s),
			$of(u"白俄罗斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("bem"_s),
			$of(u"别姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("ben"_s),
			$of(u"孟加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("ber"_s),
			$of(u"柏柏尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bg"_s),
			$of(u"保加利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("bh"_s),
			$of(u"比哈尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of(u"博杰普尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bi"_s),
			$of(u"比斯拉马文"_s)
		}),
		$$new($ObjectArray, {
			$of("bih"_s),
			$of(u"比哈尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bik"_s),
			$of(u"毕库尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("bin"_s),
			$of(u"比尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bis"_s),
			$of(u"比斯拉马文"_s)
		}),
		$$new($ObjectArray, {
			$of("bla"_s),
			$of(u"司克司卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("bm"_s),
			$of(u"班巴拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("bn"_s),
			$of(u"孟加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("bnt"_s),
			$of(u"班图文"_s)
		}),
		$$new($ObjectArray, {
			$of("bo"_s),
			$of(u"西藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("bos"_s),
			$of(u"波斯尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("br"_s),
			$of(u"布里多尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bra"_s),
			$of(u"布拉杰文"_s)
		}),
		$$new($ObjectArray, {
			$of("bre"_s),
			$of(u"布里多尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("bs"_s),
			$of(u"波斯尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("btk"_s),
			$of(u"巴塔克语"_s)
		}),
		$$new($ObjectArray, {
			$of("bua"_s),
			$of(u"布里亚特文"_s)
		}),
		$$new($ObjectArray, {
			$of("bug"_s),
			$of(u"布吉语"_s)
		}),
		$$new($ObjectArray, {
			$of("bul"_s),
			$of(u"保加利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("bur"_s),
			$of(u"缅甸文"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"布林文"_s)
		}),
		$$new($ObjectArray, {
			$of("ca"_s),
			$of(u"加泰罗尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"卡多文"_s)
		}),
		$$new($ObjectArray, {
			$of("cai"_s),
			$of(u"其他中美印第安语系"_s)
		}),
		$$new($ObjectArray, {
			$of("car"_s),
			$of(u"巴勒比文"_s)
		}),
		$$new($ObjectArray, {
			$of("cat"_s),
			$of(u"加泰罗尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("cau"_s),
			$of(u"其他高加索语系"_s)
		}),
		$$new($ObjectArray, {
			$of("ce"_s),
			$of(u"车臣文"_s)
		}),
		$$new($ObjectArray, {
			$of("ceb"_s),
			$of(u"宿务文"_s)
		}),
		$$new($ObjectArray, {
			$of("cel"_s),
			$of(u"其他凯尔特语系"_s)
		}),
		$$new($ObjectArray, {
			$of("ch"_s),
			$of(u"查莫罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("cha"_s),
			$of(u"查莫罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("chb"_s),
			$of(u"契布卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("che"_s),
			$of(u"车臣文"_s)
		}),
		$$new($ObjectArray, {
			$of("chg"_s),
			$of(u"查加文"_s)
		}),
		$$new($ObjectArray, {
			$of("chi"_s),
			$of(u"中文"_s)
		}),
		$$new($ObjectArray, {
			$of("chk"_s),
			$of(u"楚吾克文"_s)
		}),
		$$new($ObjectArray, {
			$of("chm"_s),
			$of(u"马里文"_s)
		}),
		$$new($ObjectArray, {
			$of("chn"_s),
			$of(u"契努克文"_s)
		}),
		$$new($ObjectArray, {
			$of("cho"_s),
			$of(u"乔克托文"_s)
		}),
		$$new($ObjectArray, {
			$of("chp"_s),
			$of(u"佩瓦扬文"_s)
		}),
		$$new($ObjectArray, {
			$of("chr"_s),
			$of(u"彻罗基文"_s)
		}),
		$$new($ObjectArray, {
			$of("chu"_s),
			$of(u"教会斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("chv"_s),
			$of(u"楚瓦什文"_s)
		}),
		$$new($ObjectArray, {
			$of("chy"_s),
			$of(u"夏延文"_s)
		}),
		$$new($ObjectArray, {
			$of("cmc"_s),
			$of(u"查米克文"_s)
		}),
		$$new($ObjectArray, {
			$of("co"_s),
			$of(u"科西嘉文"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"科普特文"_s)
		}),
		$$new($ObjectArray, {
			$of("cor"_s),
			$of(u"康沃尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("cos"_s),
			$of(u"科西嘉文"_s)
		}),
		$$new($ObjectArray, {
			$of("cpe"_s),
			$of(u"其他以英文为基础的克里奥尔混合语系"_s)
		}),
		$$new($ObjectArray, {
			$of("cpf"_s),
			$of(u"其他以法文为基础的克里奥尔混合语系"_s)
		}),
		$$new($ObjectArray, {
			$of("cpp"_s),
			$of(u"其他以葡萄牙文为基础的克里奥尔混合语系"_s)
		}),
		$$new($ObjectArray, {
			$of("cr"_s),
			$of(u"克里文"_s)
		}),
		$$new($ObjectArray, {
			$of("cre"_s),
			$of(u"克里文"_s)
		}),
		$$new($ObjectArray, {
			$of("crh"_s),
			$of(u"克里米亚塔塔文"_s)
		}),
		$$new($ObjectArray, {
			$of("crp"_s),
			$of(u"其他克里奥尔混合语系"_s)
		}),
		$$new($ObjectArray, {
			$of("cs"_s),
			$of(u"捷克文"_s)
		}),
		$$new($ObjectArray, {
			$of("csb"_s),
			$of(u"卡舒文"_s)
		}),
		$$new($ObjectArray, {
			$of("cu"_s),
			$of(u"教会斯拉夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("cus"_s),
			$of(u"其他库施特语系"_s)
		}),
		$$new($ObjectArray, {
			$of("cv"_s),
			$of(u"楚瓦什文"_s)
		}),
		$$new($ObjectArray, {
			$of("cy"_s),
			$of(u"威尔士文"_s)
		}),
		$$new($ObjectArray, {
			$of("cze"_s),
			$of(u"捷克文"_s)
		}),
		$$new($ObjectArray, {
			$of("da"_s),
			$of(u"丹麦文"_s)
		}),
		$$new($ObjectArray, {
			$of("dak"_s),
			$of(u"达科他文"_s)
		}),
		$$new($ObjectArray, {
			$of("dan"_s),
			$of(u"丹麦文"_s)
		}),
		$$new($ObjectArray, {
			$of("dar"_s),
			$of(u"达尔格瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("day"_s),
			$of(u"达雅克文"_s)
		}),
		$$new($ObjectArray, {
			$of("de"_s),
			$of(u"德文"_s)
		}),
		$$new($ObjectArray, {
			$of("del"_s),
			$of(u"特拉华文"_s)
		}),
		$$new($ObjectArray, {
			$of("den"_s),
			$of(u"司雷夫文 (阿萨帕斯坎诸语言)"_s)
		}),
		$$new($ObjectArray, {
			$of("dgr"_s),
			$of(u"多格里布文"_s)
		}),
		$$new($ObjectArray, {
			$of("din"_s),
			$of(u"丁卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("div"_s),
			$of(u"迪维希文"_s)
		}),
		$$new($ObjectArray, {
			$of("doi"_s),
			$of(u"多格拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("dra"_s),
			$of(u"其他德拉维语系"_s)
		}),
		$$new($ObjectArray, {
			$of("dsb"_s),
			$of(u"下索布文"_s)
		}),
		$$new($ObjectArray, {
			$of("dua"_s),
			$of(u"都阿拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("dum"_s),
			$of(u"中古荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("dut"_s),
			$of(u"荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("dv"_s),
			$of(u"迪维希文"_s)
		}),
		$$new($ObjectArray, {
			$of("dyu"_s),
			$of(u"迪尤拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("dz"_s),
			$of(u"不丹文"_s)
		}),
		$$new($ObjectArray, {
			$of("dzo"_s),
			$of(u"不丹文"_s)
		}),
		$$new($ObjectArray, {
			$of("ee"_s),
			$of(u"埃维文"_s)
		}),
		$$new($ObjectArray, {
			$of("efi"_s),
			$of(u"埃菲克文"_s)
		}),
		$$new($ObjectArray, {
			$of("egy"_s),
			$of(u"古埃及文"_s)
		}),
		$$new($ObjectArray, {
			$of("eka"_s),
			$of(u"埃克丘克文"_s)
		}),
		$$new($ObjectArray, {
			$of("el"_s),
			$of(u"希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("elx"_s),
			$of(u"艾拉米特文"_s)
		}),
		$$new($ObjectArray, {
			$of("en"_s),
			$of(u"英文"_s)
		}),
		$$new($ObjectArray, {
			$of("eng"_s),
			$of(u"英文"_s)
		}),
		$$new($ObjectArray, {
			$of("enm"_s),
			$of(u"中古英文"_s)
		}),
		$$new($ObjectArray, {
			$of("eo"_s),
			$of(u"世界文"_s)
		}),
		$$new($ObjectArray, {
			$of("epo"_s),
			$of(u"世界文"_s)
		}),
		$$new($ObjectArray, {
			$of("es"_s),
			$of(u"西班牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("est"_s),
			$of(u"爱沙尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("et"_s),
			$of(u"爱沙尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of(u"巴斯克文"_s)
		}),
		$$new($ObjectArray, {
			$of("ewe"_s),
			$of(u"埃维文"_s)
		}),
		$$new($ObjectArray, {
			$of("ewo"_s),
			$of(u"旺杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("fa"_s),
			$of(u"波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("fan"_s),
			$of(u"芳格文"_s)
		}),
		$$new($ObjectArray, {
			$of("fao"_s),
			$of(u"法罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("fat"_s),
			$of(u"芳蒂文"_s)
		}),
		$$new($ObjectArray, {
			$of("ff"_s),
			$of(u"富拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("fi"_s),
			$of(u"芬兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("fij"_s),
			$of(u"斐济文"_s)
		}),
		$$new($ObjectArray, {
			$of("fil"_s),
			$of(u"菲律宾文"_s)
		}),
		$$new($ObjectArray, {
			$of("fin"_s),
			$of(u"芬兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("fiu"_s),
			$of(u"其他芬兰乌戈尔语系"_s)
		}),
		$$new($ObjectArray, {
			$of("fj"_s),
			$of(u"斐济文"_s)
		}),
		$$new($ObjectArray, {
			$of("fo"_s),
			$of(u"法罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("fon"_s),
			$of(u"丰文"_s)
		}),
		$$new($ObjectArray, {
			$of("fr"_s),
			$of(u"法文"_s)
		}),
		$$new($ObjectArray, {
			$of("fre"_s),
			$of(u"法文"_s)
		}),
		$$new($ObjectArray, {
			$of("frm"_s),
			$of(u"中古法文"_s)
		}),
		$$new($ObjectArray, {
			$of("fro"_s),
			$of(u"古法文"_s)
		}),
		$$new($ObjectArray, {
			$of("frr"_s),
			$of(u"北弗里西亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("frs"_s),
			$of(u"东弗里西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("fry"_s),
			$of(u"西弗里斯兰语"_s)
		}),
		$$new($ObjectArray, {
			$of("ful"_s),
			$of(u"富拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("fur"_s),
			$of(u"弗留利文"_s)
		}),
		$$new($ObjectArray, {
			$of("fy"_s),
			$of(u"弗里斯兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("ga"_s),
			$of(u"爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("gaa"_s),
			$of(u"加文"_s)
		}),
		$$new($ObjectArray, {
			$of("gay"_s),
			$of(u"迦约文"_s)
		}),
		$$new($ObjectArray, {
			$of("gba"_s),
			$of(u"葛巴亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("gd"_s),
			$of(u"苏格兰- 盖尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("gem"_s),
			$of(u"其他日尔曼语系"_s)
		}),
		$$new($ObjectArray, {
			$of("geo"_s),
			$of(u"格鲁吉亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ger"_s),
			$of(u"德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gez"_s),
			$of(u"吉兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("gil"_s),
			$of(u"吉尔伯特斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("gl"_s),
			$of(u"加利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("gla"_s),
			$of(u"盖尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("gle"_s),
			$of(u"爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("glg"_s),
			$of(u"加利西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("glv"_s),
			$of(u"马恩文"_s)
		}),
		$$new($ObjectArray, {
			$of("gmh"_s),
			$of(u"中古高地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"瓜拉尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("goh"_s),
			$of(u"古高地德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gon"_s),
			$of(u"岗德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gor"_s),
			$of(u"科洛涅达罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("got"_s),
			$of(u"哥特文"_s)
		}),
		$$new($ObjectArray, {
			$of("grb"_s),
			$of(u"格列博文"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of(u"古希腊文"_s)
		}),
		$$new($ObjectArray, {
			$of("gre"_s),
			$of(u"希腊语, 现代 (1453-)"_s)
		}),
		$$new($ObjectArray, {
			$of("grn"_s),
			$of(u"瓜拉尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("gsw"_s),
			$of(u"瑞士德文"_s)
		}),
		$$new($ObjectArray, {
			$of("gu"_s),
			$of(u"古加拉提文"_s)
		}),
		$$new($ObjectArray, {
			$of("guj"_s),
			$of(u"古加拉提文"_s)
		}),
		$$new($ObjectArray, {
			$of("gv"_s),
			$of(u"马恩文"_s)
		}),
		$$new($ObjectArray, {
			$of("gwi"_s),
			$of(u"吉维克琴文"_s)
		}),
		$$new($ObjectArray, {
			$of("ha"_s),
			$of(u"豪撒文"_s)
		}),
		$$new($ObjectArray, {
			$of("hai"_s),
			$of(u"海达文"_s)
		}),
		$$new($ObjectArray, {
			$of("hat"_s),
			$of(u"海地文"_s)
		}),
		$$new($ObjectArray, {
			$of("hau"_s),
			$of(u"豪撒文"_s)
		}),
		$$new($ObjectArray, {
			$of("haw"_s),
			$of(u"夏威夷文"_s)
		}),
		$$new($ObjectArray, {
			$of("he"_s),
			$of(u"希伯来文"_s)
		}),
		$$new($ObjectArray, {
			$of("heb"_s),
			$of(u"希伯来文"_s)
		}),
		$$new($ObjectArray, {
			$of("her"_s),
			$of(u"赫雷罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("hi"_s),
			$of(u"印地文"_s)
		}),
		$$new($ObjectArray, {
			$of("hil"_s),
			$of(u"希利盖农文"_s)
		}),
		$$new($ObjectArray, {
			$of("him"_s),
			$of(u"赫马查利文"_s)
		}),
		$$new($ObjectArray, {
			$of("hin"_s),
			$of(u"印地文"_s)
		}),
		$$new($ObjectArray, {
			$of("hit"_s),
			$of(u"赫梯文"_s)
		}),
		$$new($ObjectArray, {
			$of("hmn"_s),
			$of(u"赫蒙文"_s)
		}),
		$$new($ObjectArray, {
			$of("hmo"_s),
			$of(u"新里木托文"_s)
		}),
		$$new($ObjectArray, {
			$of("ho"_s),
			$of(u"新里木托文"_s)
		}),
		$$new($ObjectArray, {
			$of("hr"_s),
			$of(u"克罗地亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("hrv"_s),
			$of(u"克罗地亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"上索布文"_s)
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
			$of("hun"_s),
			$of(u"匈牙利文"_s)
		}),
		$$new($ObjectArray, {
			$of("hup"_s),
			$of(u"胡帕文"_s)
		}),
		$$new($ObjectArray, {
			$of("hy"_s),
			$of(u"亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("hz"_s),
			$of(u"赫雷罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("ia"_s),
			$of(u"拉丁国际文"_s)
		}),
		$$new($ObjectArray, {
			$of("iba"_s),
			$of(u"伊班文"_s)
		}),
		$$new($ObjectArray, {
			$of("ibo"_s),
			$of(u"伊博文"_s)
		}),
		$$new($ObjectArray, {
			$of("ice"_s),
			$of(u"冰岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("id"_s),
			$of(u"印度尼西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ido"_s),
			$of(u"伊多文"_s)
		}),
		$$new($ObjectArray, {
			$of("ie"_s),
			$of(u"拉丁国际文"_s)
		}),
		$$new($ObjectArray, {
			$of("ig"_s),
			$of(u"伊博文"_s)
		}),
		$$new($ObjectArray, {
			$of("ii"_s),
			$of(u"四川彝文"_s)
		}),
		$$new($ObjectArray, {
			$of("iii"_s),
			$of(u"四川彝文"_s)
		}),
		$$new($ObjectArray, {
			$of("ijo"_s),
			$of(u"伊乔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ik"_s),
			$of(u"依奴皮维克文"_s)
		}),
		$$new($ObjectArray, {
			$of("iku"_s),
			$of(u"爱斯基摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("ile"_s),
			$of(u"拉丁国际文"_s)
		}),
		$$new($ObjectArray, {
			$of("ilo"_s),
			$of(u"伊洛干诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("in"_s),
			$of(u"印度尼西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ina"_s),
			$of(u"拉丁国际语 (国际辅助语联盟)"_s)
		}),
		$$new($ObjectArray, {
			$of("inc"_s),
			$of(u"其他印度语系"_s)
		}),
		$$new($ObjectArray, {
			$of("ind"_s),
			$of(u"印度尼西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ine"_s),
			$of(u"其他印欧语系"_s)
		}),
		$$new($ObjectArray, {
			$of("inh"_s),
			$of(u"印古什文"_s)
		}),
		$$new($ObjectArray, {
			$of("io"_s),
			$of(u"伊多文"_s)
		}),
		$$new($ObjectArray, {
			$of("ipk"_s),
			$of(u"依奴皮维克文"_s)
		}),
		$$new($ObjectArray, {
			$of("ira"_s),
			$of(u"伊朗文"_s)
		}),
		$$new($ObjectArray, {
			$of("iro"_s),
			$of(u"伊洛魁语系"_s)
		}),
		$$new($ObjectArray, {
			$of("is"_s),
			$of(u"冰岛文"_s)
		}),
		$$new($ObjectArray, {
			$of("it"_s),
			$of(u"意大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("ita"_s),
			$of(u"意大利文"_s)
		}),
		$$new($ObjectArray, {
			$of("iu"_s),
			$of(u"爱斯基摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("iw"_s),
			$of(u"希伯来文"_s)
		}),
		$$new($ObjectArray, {
			$of("ja"_s),
			$of(u"日文"_s)
		}),
		$$new($ObjectArray, {
			$of("jav"_s),
			$of(u"爪哇文"_s)
		}),
		$$new($ObjectArray, {
			$of("jbo"_s),
			$of(u"逻辑文"_s)
		}),
		$$new($ObjectArray, {
			$of("ji"_s),
			$of(u"依地文"_s)
		}),
		$$new($ObjectArray, {
			$of("jpn"_s),
			$of(u"日文"_s)
		}),
		$$new($ObjectArray, {
			$of("jpr"_s),
			$of(u"犹太波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("jrb"_s),
			$of(u"犹太阿拉伯文"_s)
		}),
		$$new($ObjectArray, {
			$of("jv"_s),
			$of(u"爪哇文"_s)
		}),
		$$new($ObjectArray, {
			$of("ka"_s),
			$of(u"格鲁吉亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaa"_s),
			$of(u"卡拉卡尔帕克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kab"_s),
			$of(u"卡比尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("kac"_s),
			$of(u"卡琴文"_s)
		}),
		$$new($ObjectArray, {
			$of("kal"_s),
			$of(u"格陵兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("kam"_s),
			$of(u"卡姆巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("kan"_s),
			$of(u"卡纳塔克语"_s)
		}),
		$$new($ObjectArray, {
			$of("kar"_s),
			$of(u"喀伦文"_s)
		}),
		$$new($ObjectArray, {
			$of("kas"_s),
			$of(u"克什米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("kau"_s),
			$of(u"卡努里文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaw"_s),
			$of(u"卡威文"_s)
		}),
		$$new($ObjectArray, {
			$of("kaz"_s),
			$of(u"哈萨克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kbd"_s),
			$of(u"卡巴尔达文"_s)
		}),
		$$new($ObjectArray, {
			$of("kg"_s),
			$of(u"刚果文"_s)
		}),
		$$new($ObjectArray, {
			$of("kha"_s),
			$of(u"卡西文"_s)
		}),
		$$new($ObjectArray, {
			$of("khi"_s),
			$of(u"其他科伊桑语系"_s)
		}),
		$$new($ObjectArray, {
			$of("khm"_s),
			$of(u"中高棉语"_s)
		}),
		$$new($ObjectArray, {
			$of("kho"_s),
			$of(u"和田文"_s)
		}),
		$$new($ObjectArray, {
			$of("ki"_s),
			$of(u"吉库尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("kik"_s),
			$of(u"吉库尤文"_s)
		}),
		$$new($ObjectArray, {
			$of("kin"_s),
			$of(u"卢旺达文"_s)
		}),
		$$new($ObjectArray, {
			$of("kir"_s),
			$of(u"吉尔吉斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("kj"_s),
			$of(u"卡湾亚马文"_s)
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
			$of(u"柬埔寨文"_s)
		}),
		$$new($ObjectArray, {
			$of("kmb"_s),
			$of(u"金邦杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("kn"_s),
			$of(u"埃纳德文"_s)
		}),
		$$new($ObjectArray, {
			$of("ko"_s),
			$of(u"朝鲜文"_s)
		}),
		$$new($ObjectArray, {
			$of("kok"_s),
			$of(u"刚卡尼文"_s)
		}),
		$$new($ObjectArray, {
			$of("kom"_s),
			$of(u"科米文"_s)
		}),
		$$new($ObjectArray, {
			$of("kon"_s),
			$of(u"刚果文"_s)
		}),
		$$new($ObjectArray, {
			$of("kor"_s),
			$of(u"朝鲜文"_s)
		}),
		$$new($ObjectArray, {
			$of("kos"_s),
			$of(u"科斯拉伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("kpe"_s),
			$of(u"克佩勒语"_s)
		}),
		$$new($ObjectArray, {
			$of("kr"_s),
			$of(u"卡努里文"_s)
		}),
		$$new($ObjectArray, {
			$of("krc"_s),
			$of(u"卡拉恰伊巴尔卡尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("krl"_s),
			$of(u"卡累利阿文"_s)
		}),
		$$new($ObjectArray, {
			$of("kro"_s),
			$of(u"克鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("kru"_s),
			$of(u"库鲁克文"_s)
		}),
		$$new($ObjectArray, {
			$of("ks"_s),
			$of(u"克什米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ku"_s),
			$of(u"库尔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("kua"_s),
			$of(u"宽亚玛语"_s)
		}),
		$$new($ObjectArray, {
			$of("kum"_s),
			$of(u"库梅克文"_s)
		}),
		$$new($ObjectArray, {
			$of("kur"_s),
			$of(u"库尔德文"_s)
		}),
		$$new($ObjectArray, {
			$of("kut"_s),
			$of(u"库特内文"_s)
		}),
		$$new($ObjectArray, {
			$of("kv"_s),
			$of(u"科米文"_s)
		}),
		$$new($ObjectArray, {
			$of("kw"_s),
			$of(u"康沃尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ky"_s),
			$of(u"吉尔吉斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("la"_s),
			$of(u"拉丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("lad"_s),
			$of(u"拉迪诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("lah"_s),
			$of(u"拉亨达文"_s)
		}),
		$$new($ObjectArray, {
			$of("lam"_s),
			$of(u"兰巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("lao"_s),
			$of(u"老挝文"_s)
		}),
		$$new($ObjectArray, {
			$of("lat"_s),
			$of(u"拉丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("lav"_s),
			$of(u"拉托维亚文 (列托)"_s)
		}),
		$$new($ObjectArray, {
			$of("lb"_s),
			$of(u"卢森堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("lez"_s),
			$of(u"莱兹依昂文"_s)
		}),
		$$new($ObjectArray, {
			$of("lg"_s),
			$of(u"干达文"_s)
		}),
		$$new($ObjectArray, {
			$of("li"_s),
			$of(u"林堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("lim"_s),
			$of(u"林堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("lin"_s),
			$of(u"林加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lit"_s),
			$of(u"立陶宛文"_s)
		}),
		$$new($ObjectArray, {
			$of("ln"_s),
			$of(u"林加拉文"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"老挝文"_s)
		}),
		$$new($ObjectArray, {
			$of("lol"_s),
			$of(u"芒戈文"_s)
		}),
		$$new($ObjectArray, {
			$of("loz"_s),
			$of(u"洛兹文"_s)
		}),
		$$new($ObjectArray, {
			$of("lt"_s),
			$of(u"立陶宛文"_s)
		}),
		$$new($ObjectArray, {
			$of("ltz"_s),
			$of(u"卢森堡文"_s)
		}),
		$$new($ObjectArray, {
			$of("lu"_s),
			$of(u"卢巴-加丹加"_s)
		}),
		$$new($ObjectArray, {
			$of("lua"_s),
			$of(u"鲁巴鲁瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("lub"_s),
			$of(u"卢巴-加丹加文"_s)
		}),
		$$new($ObjectArray, {
			$of("lug"_s),
			$of(u"干达文"_s)
		}),
		$$new($ObjectArray, {
			$of("lui"_s),
			$of(u"路易塞诺文"_s)
		}),
		$$new($ObjectArray, {
			$of("lun"_s),
			$of(u"隆达文"_s)
		}),
		$$new($ObjectArray, {
			$of("luo"_s),
			$of(u"卢奥文"_s)
		}),
		$$new($ObjectArray, {
			$of("lus"_s),
			$of(u"卢晒文"_s)
		}),
		$$new($ObjectArray, {
			$of("lv"_s),
			$of(u"拉托维亚文(列托)"_s)
		}),
		$$new($ObjectArray, {
			$of("mac"_s),
			$of(u"马其顿文"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"摩洛哥迪拉姆"_s)
		}),
		$$new($ObjectArray, {
			$of("mag"_s),
			$of(u"马加伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("mah"_s),
			$of(u"马绍尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("mai"_s),
			$of(u"迈蒂利文"_s)
		}),
		$$new($ObjectArray, {
			$of("mak"_s),
			$of(u"望加锡文"_s)
		}),
		$$new($ObjectArray, {
			$of("mal"_s),
			$of(u"马来亚拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("man"_s),
			$of(u"曼丁哥文"_s)
		}),
		$$new($ObjectArray, {
			$of("mao"_s),
			$of(u"毛利文"_s)
		}),
		$$new($ObjectArray, {
			$of("map"_s),
			$of(u"澳斯特罗尼西亚语系"_s)
		}),
		$$new($ObjectArray, {
			$of("mar"_s),
			$of(u"马拉地文"_s)
		}),
		$$new($ObjectArray, {
			$of("mas"_s),
			$of(u"萨伊语"_s)
		}),
		$$new($ObjectArray, {
			$of("may"_s),
			$of(u"马来文"_s)
		}),
		$$new($ObjectArray, {
			$of("mdf"_s),
			$of(u"莫克沙文"_s)
		}),
		$$new($ObjectArray, {
			$of("mdr"_s),
			$of(u"曼达尔"_s)
		}),
		$$new($ObjectArray, {
			$of("men"_s),
			$of(u"门迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("mg"_s),
			$of(u"马尔加什文"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"中古爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("mh"_s),
			$of(u"马绍尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("mi"_s),
			$of(u"毛利文"_s)
		}),
		$$new($ObjectArray, {
			$of("mic"_s),
			$of(u"米克马克文"_s)
		}),
		$$new($ObjectArray, {
			$of("min"_s),
			$of(u"米南卡保文"_s)
		}),
		$$new($ObjectArray, {
			$of("mis"_s),
			$of(u"各种不同语系"_s)
		}),
		$$new($ObjectArray, {
			$of("mk"_s),
			$of(u"马其顿文"_s)
		}),
		$$new($ObjectArray, {
			$of("mkh"_s),
			$of(u"其他孟高棉语系"_s)
		}),
		$$new($ObjectArray, {
			$of("ml"_s),
			$of(u"马来亚拉姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("mlg"_s),
			$of(u"马尔加什文"_s)
		}),
		$$new($ObjectArray, {
			$of("mlt"_s),
			$of(u"马耳他文"_s)
		}),
		$$new($ObjectArray, {
			$of("mn"_s),
			$of(u"蒙古文"_s)
		}),
		$$new($ObjectArray, {
			$of("mnc"_s),
			$of(u"满文"_s)
		}),
		$$new($ObjectArray, {
			$of("mni"_s),
			$of(u"曼尼普里文"_s)
		}),
		$$new($ObjectArray, {
			$of("mno"_s),
			$of(u"马诺博语系"_s)
		}),
		$$new($ObjectArray, {
			$of("mo"_s),
			$of(u"摩尔多瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("moh"_s),
			$of(u"摩霍克文"_s)
		}),
		$$new($ObjectArray, {
			$of("mon"_s),
			$of(u"蒙古文"_s)
		}),
		$$new($ObjectArray, {
			$of("mos"_s),
			$of(u"莫西文"_s)
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
			$of(u"马耳他文"_s)
		}),
		$$new($ObjectArray, {
			$of("mul"_s),
			$of(u"多种语系"_s)
		}),
		$$new($ObjectArray, {
			$of("mun"_s),
			$of(u"蒙达语系"_s)
		}),
		$$new($ObjectArray, {
			$of("mus"_s),
			$of(u"克里克文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwl"_s),
			$of(u"米兰德斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("mwr"_s),
			$of(u"马尔瓦利文"_s)
		}),
		$$new($ObjectArray, {
			$of("my"_s),
			$of(u"缅甸文"_s)
		}),
		$$new($ObjectArray, {
			$of("myn"_s),
			$of(u"玛雅语系"_s)
		}),
		$$new($ObjectArray, {
			$of("myv"_s),
			$of(u"俄日亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("na"_s),
			$of(u"瑙鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("nah"_s),
			$of(u"纳瓦特尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("nai"_s),
			$of(u"其他北美印第安语系"_s)
		}),
		$$new($ObjectArray, {
			$of("nap"_s),
			$of(u"拿波里文"_s)
		}),
		$$new($ObjectArray, {
			$of("nau"_s),
			$of(u"瑙鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("nav"_s),
			$of(u"纳瓦霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("nb"_s),
			$of(u"挪威博克马尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("nbl"_s),
			$of(u"恩德贝勒语, 南部"_s)
		}),
		$$new($ObjectArray, {
			$of("nd"_s),
			$of(u"北恩德比利文"_s)
		}),
		$$new($ObjectArray, {
			$of("nde"_s),
			$of(u"恩德贝勒语, 北部"_s)
		}),
		$$new($ObjectArray, {
			$of("ndo"_s),
			$of(u"恩东加文"_s)
		}),
		$$new($ObjectArray, {
			$of("nds"_s),
			$of(u"低地德文; 低地撒克逊文"_s)
		}),
		$$new($ObjectArray, {
			$of("ne"_s),
			$of(u"尼泊尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("nep"_s),
			$of(u"尼泊尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("new"_s),
			$of(u"尼瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ng"_s),
			$of(u"恩东加文"_s)
		}),
		$$new($ObjectArray, {
			$of("nia"_s),
			$of(u"尼亚斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("nic"_s),
			$of(u"尼加拉瓜科多巴"_s)
		}),
		$$new($ObjectArray, {
			$of("niu"_s),
			$of(u"纽埃文"_s)
		}),
		$$new($ObjectArray, {
			$of("nl"_s),
			$of(u"荷兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("nn"_s),
			$of(u"挪威尼诺斯克文"_s)
		}),
		$$new($ObjectArray, {
			$of("nno"_s),
			$of(u"挪威尼诺斯克文"_s)
		}),
		$$new($ObjectArray, {
			$of("no"_s),
			$of(u"挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nob"_s),
			$of(u"挪威博克马尔语"_s)
		}),
		$$new($ObjectArray, {
			$of("nog"_s),
			$of(u"诺盖文"_s)
		}),
		$$new($ObjectArray, {
			$of("non"_s),
			$of(u"古诺尔斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("nor"_s),
			$of(u"挪威文"_s)
		}),
		$$new($ObjectArray, {
			$of("nqo"_s),
			$of(u"N’Ko (西非书面语言)"_s)
		}),
		$$new($ObjectArray, {
			$of("nr"_s),
			$of(u"南恩德比利文"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of(u"北索托文"_s)
		}),
		$$new($ObjectArray, {
			$of("nub"_s),
			$of(u"努比亚语系"_s)
		}),
		$$new($ObjectArray, {
			$of("nv"_s),
			$of(u"纳瓦霍文"_s)
		}),
		$$new($ObjectArray, {
			$of("nwc"_s),
			$of(u"尼瓦尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ny"_s),
			$of(u"尼扬扎文"_s)
		}),
		$$new($ObjectArray, {
			$of("nya"_s),
			$of(u"齐切瓦语"_s)
		}),
		$$new($ObjectArray, {
			$of("nym"_s),
			$of(u"尼亚姆韦齐文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyn"_s),
			$of(u"尼昂科勒文"_s)
		}),
		$$new($ObjectArray, {
			$of("nyo"_s),
			$of(u"尼约罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("nzi"_s),
			$of(u"恩济马文"_s)
		}),
		$$new($ObjectArray, {
			$of("oc"_s),
			$of(u"奥西坦文"_s)
		}),
		$$new($ObjectArray, {
			$of("oci"_s),
			$of(u"奥西坦文 (1500 后)"_s)
		}),
		$$new($ObjectArray, {
			$of("oj"_s),
			$of(u"奥吉布瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("oji"_s),
			$of(u"奥吉布瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("om"_s),
			$of(u"阿曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("or"_s),
			$of(u"欧里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("ori"_s),
			$of(u"欧里亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("orm"_s),
			$of(u"阿曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("os"_s),
			$of(u"奥塞梯文"_s)
		}),
		$$new($ObjectArray, {
			$of("osa"_s),
			$of(u"奥萨格语"_s)
		}),
		$$new($ObjectArray, {
			$of("oss"_s),
			$of(u"奥塞梯文"_s)
		}),
		$$new($ObjectArray, {
			$of("ota"_s),
			$of(u"奥托曼土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("oto"_s),
			$of(u"奥托米语系"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"旁遮普文"_s)
		}),
		$$new($ObjectArray, {
			$of("paa"_s),
			$of(u"其他巴布亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("pag"_s),
			$of(u"邦阿西楠语"_s)
		}),
		$$new($ObjectArray, {
			$of("pal"_s),
			$of(u"帕拉维文"_s)
		}),
		$$new($ObjectArray, {
			$of("pam"_s),
			$of(u"邦板牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("pan"_s),
			$of(u"旁遮普文"_s)
		}),
		$$new($ObjectArray, {
			$of("pap"_s),
			$of(u"帕皮亚门托文"_s)
		}),
		$$new($ObjectArray, {
			$of("pau"_s),
			$of(u"帕劳文"_s)
		}),
		$$new($ObjectArray, {
			$of("peo"_s),
			$of(u"古老波斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("per"_s),
			$of(u"波斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("phi"_s),
			$of(u"其他菲律宾语系"_s)
		}),
		$$new($ObjectArray, {
			$of("phn"_s),
			$of(u"腓尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("pi"_s),
			$of(u"巴利文"_s)
		}),
		$$new($ObjectArray, {
			$of("pl"_s),
			$of(u"波兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("pli"_s),
			$of(u"巴利文"_s)
		}),
		$$new($ObjectArray, {
			$of("pol"_s),
			$of(u"波兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("pon"_s),
			$of(u"波纳佩文"_s)
		}),
		$$new($ObjectArray, {
			$of("por"_s),
			$of(u"葡萄牙文"_s)
		}),
		$$new($ObjectArray, {
			$of("pra"_s),
			$of(u"普拉克里特诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("pro"_s),
			$of(u"普罗文斯文"_s)
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
			$of("pus"_s),
			$of(u"普什图文"_s)
		}),
		$$new($ObjectArray, {
			$of("qu"_s),
			$of(u"盖丘亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("que"_s),
			$of(u"盖丘亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("raj"_s),
			$of(u"拉贾斯坦文"_s)
		}),
		$$new($ObjectArray, {
			$of("rap"_s),
			$of(u"拉帕努伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("rar"_s),
			$of(u"拉罗汤加文"_s)
		}),
		$$new($ObjectArray, {
			$of("rm"_s),
			$of(u"里托罗曼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("rn"_s),
			$of(u"基隆迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("ro"_s),
			$of(u"罗马尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("roa"_s),
			$of(u"其他拉丁语系"_s)
		}),
		$$new($ObjectArray, {
			$of("roh"_s),
			$of(u"罗曼什语"_s)
		}),
		$$new($ObjectArray, {
			$of("rom"_s),
			$of(u"吉普赛文"_s)
		}),
		$$new($ObjectArray, {
			$of("ru"_s),
			$of(u"俄文"_s)
		}),
		$$new($ObjectArray, {
			$of("rum"_s),
			$of(u"罗马尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("run"_s),
			$of(u"基隆迪文"_s)
		}),
		$$new($ObjectArray, {
			$of("rup"_s),
			$of(u"亚美尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("rus"_s),
			$of(u"俄文"_s)
		}),
		$$new($ObjectArray, {
			$of("rw"_s),
			$of(u"卢旺达文"_s)
		}),
		$$new($ObjectArray, {
			$of("sa"_s),
			$of(u"梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("sad"_s),
			$of(u"散达维文"_s)
		}),
		$$new($ObjectArray, {
			$of("sag"_s),
			$of(u"桑戈文"_s)
		}),
		$$new($ObjectArray, {
			$of("sah"_s),
			$of(u"雅库特文"_s)
		}),
		$$new($ObjectArray, {
			$of("sai"_s),
			$of(u"其他南美印第安文"_s)
		}),
		$$new($ObjectArray, {
			$of("sal"_s),
			$of(u"萨利什文"_s)
		}),
		$$new($ObjectArray, {
			$of("sam"_s),
			$of(u"萨玛利亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("san"_s),
			$of(u"梵文"_s)
		}),
		$$new($ObjectArray, {
			$of("sas"_s),
			$of(u"萨萨克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sat"_s),
			$of(u"桑塔利文"_s)
		}),
		$$new($ObjectArray, {
			$of("sc"_s),
			$of(u"撒丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("scn"_s),
			$of(u"西西里文"_s)
		}),
		$$new($ObjectArray, {
			$of("sco"_s),
			$of(u"苏格兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("sd"_s),
			$of(u"苏丹文"_s)
		}),
		$$new($ObjectArray, {
			$of("se"_s),
			$of(u"北沙密文"_s)
		}),
		$$new($ObjectArray, {
			$of("sel"_s),
			$of(u"塞尔库普文"_s)
		}),
		$$new($ObjectArray, {
			$of("sem"_s),
			$of(u"其他闪族语系"_s)
		}),
		$$new($ObjectArray, {
			$of("sg"_s),
			$of(u"桑戈文"_s)
		}),
		$$new($ObjectArray, {
			$of("sga"_s),
			$of(u"古爱尔兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("sgn"_s),
			$of(u"手语"_s)
		}),
		$$new($ObjectArray, {
			$of("shn"_s),
			$of(u"掸文"_s)
		}),
		$$new($ObjectArray, {
			$of("si"_s),
			$of(u"僧伽罗文"_s)
		}),
		$$new($ObjectArray, {
			$of("sid"_s),
			$of(u"悉达摩文"_s)
		}),
		$$new($ObjectArray, {
			$of("sin"_s),
			$of(u"辛哈拉语"_s)
		}),
		$$new($ObjectArray, {
			$of("sio"_s),
			$of(u"苏语诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("sit"_s),
			$of(u"汉藏诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("sk"_s),
			$of(u"斯洛伐克文"_s)
		}),
		$$new($ObjectArray, {
			$of("sl"_s),
			$of(u"斯洛文尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sla"_s),
			$of(u"其他斯拉夫语系"_s)
		}),
		$$new($ObjectArray, {
			$of("slo"_s),
			$of(u"斯洛伐克文"_s)
		}),
		$$new($ObjectArray, {
			$of("slv"_s),
			$of(u"斯洛文尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sm"_s),
			$of(u"萨摩亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"南萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("sme"_s),
			$of(u"北沙密文"_s)
		}),
		$$new($ObjectArray, {
			$of("smi"_s),
			$of(u"其他萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("smj"_s),
			$of(u"律勒欧萨莫斯语"_s)
		}),
		$$new($ObjectArray, {
			$of("smn"_s),
			$of(u"伊纳里萨米语"_s)
		}),
		$$new($ObjectArray, {
			$of("smo"_s),
			$of(u"萨摩亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("sms"_s),
			$of(u"斯科特萨米文"_s)
		}),
		$$new($ObjectArray, {
			$of("sn"_s),
			$of(u"塞内加尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("sna"_s),
			$of(u"修纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("snd"_s),
			$of(u"信德文"_s)
		}),
		$$new($ObjectArray, {
			$of("snk"_s),
			$of(u"索尼基文"_s)
		}),
		$$new($ObjectArray, {
			$of("so"_s),
			$of(u"索马里文"_s)
		}),
		$$new($ObjectArray, {
			$of("sog"_s),
			$of(u"古粟特语"_s)
		}),
		$$new($ObjectArray, {
			$of("som"_s),
			$of(u"索马里文"_s)
		}),
		$$new($ObjectArray, {
			$of("son"_s),
			$of(u"桑海文"_s)
		}),
		$$new($ObjectArray, {
			$of("sot"_s),
			$of(u"索托语, 南部"_s)
		}),
		$$new($ObjectArray, {
			$of("spa"_s),
			$of(u"西班牙文"_s)
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
			$of("srd"_s),
			$of(u"撒丁文"_s)
		}),
		$$new($ObjectArray, {
			$of("srn"_s),
			$of(u"Sranan Tongo (源于克里奥尔语)"_s)
		}),
		$$new($ObjectArray, {
			$of("srp"_s),
			$of(u"塞尔维亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("srr"_s),
			$of(u"谢列尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of(u"辛辛那提文"_s)
		}),
		$$new($ObjectArray, {
			$of("ssa"_s),
			$of(u"非洲撒哈拉沙漠边缘地带语言"_s)
		}),
		$$new($ObjectArray, {
			$of("ssw"_s),
			$of(u"斯瓦特文"_s)
		}),
		$$new($ObjectArray, {
			$of("st"_s),
			$of(u"塞索托文"_s)
		}),
		$$new($ObjectArray, {
			$of("su"_s),
			$of(u"苏丹文"_s)
		}),
		$$new($ObjectArray, {
			$of("suk"_s),
			$of(u"苏库马文"_s)
		}),
		$$new($ObjectArray, {
			$of("sun"_s),
			$of(u"巽他文"_s)
		}),
		$$new($ObjectArray, {
			$of("sus"_s),
			$of(u"苏苏文"_s)
		}),
		$$new($ObjectArray, {
			$of("sux"_s),
			$of(u"苏马文"_s)
		}),
		$$new($ObjectArray, {
			$of("sv"_s),
			$of(u"瑞典文"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"斯瓦希里文"_s)
		}),
		$$new($ObjectArray, {
			$of("swa"_s),
			$of(u"斯瓦希里文"_s)
		}),
		$$new($ObjectArray, {
			$of("swe"_s),
			$of(u"瑞典文"_s)
		}),
		$$new($ObjectArray, {
			$of("syc"_s),
			$of(u"古典叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("syr"_s),
			$of(u"叙利亚语"_s)
		}),
		$$new($ObjectArray, {
			$of("ta"_s),
			$of(u"泰米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("tah"_s),
			$of(u"塔希提文"_s)
		}),
		$$new($ObjectArray, {
			$of("tai"_s),
			$of(u"傣语诸语言 (其他)"_s)
		}),
		$$new($ObjectArray, {
			$of("tam"_s),
			$of(u"泰米尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("tat"_s),
			$of(u"鞑靼文"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"泰卢固文"_s)
		}),
		$$new($ObjectArray, {
			$of("tel"_s),
			$of(u"泰卢固文"_s)
		}),
		$$new($ObjectArray, {
			$of("tem"_s),
			$of(u"滕内语"_s)
		}),
		$$new($ObjectArray, {
			$of("ter"_s),
			$of(u"特列纳文"_s)
		}),
		$$new($ObjectArray, {
			$of("tet"_s),
			$of(u"特塔姆文"_s)
		}),
		$$new($ObjectArray, {
			$of("tg"_s),
			$of(u"塔吉克文"_s)
		}),
		$$new($ObjectArray, {
			$of("tgk"_s),
			$of(u"塔吉克文"_s)
		}),
		$$new($ObjectArray, {
			$of("tgl"_s),
			$of(u"塔加路族文"_s)
		}),
		$$new($ObjectArray, {
			$of("th"_s),
			$of(u"泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("tha"_s),
			$of(u"泰文"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"提格里尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("tib"_s),
			$of(u"西藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("tig"_s),
			$of(u"提格雷文"_s)
		}),
		$$new($ObjectArray, {
			$of("tir"_s),
			$of(u"提格里尼亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("tiv"_s),
			$of(u"蒂夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("tk"_s),
			$of(u"土库曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tkl"_s),
			$of(u"托克劳文"_s)
		}),
		$$new($ObjectArray, {
			$of("tl"_s),
			$of(u"塔加路族文"_s)
		}),
		$$new($ObjectArray, {
			$of("tlh"_s),
			$of(u"克林贡文"_s)
		}),
		$$new($ObjectArray, {
			$of("tli"_s),
			$of(u"特林吉特文"_s)
		}),
		$$new($ObjectArray, {
			$of("tmh"_s),
			$of(u"塔马奇克文"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of(u"突尼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("to"_s),
			$of(u"汤加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tog"_s),
			$of(u"汤加文 (尼亚萨地区)"_s)
		}),
		$$new($ObjectArray, {
			$of("ton"_s),
			$of(u"汤加语 (汤加岛)"_s)
		}),
		$$new($ObjectArray, {
			$of("tpi"_s),
			$of(u"托克皮辛文"_s)
		}),
		$$new($ObjectArray, {
			$of("tr"_s),
			$of(u"土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("ts"_s),
			$of(u"特松加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tsi"_s),
			$of(u"蒂姆西亚文"_s)
		}),
		$$new($ObjectArray, {
			$of("tsn"_s),
			$of(u"突尼斯文"_s)
		}),
		$$new($ObjectArray, {
			$of("tso"_s),
			$of(u"特松加文"_s)
		}),
		$$new($ObjectArray, {
			$of("tt"_s),
			$of(u"鞑靼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tuk"_s),
			$of(u"土库曼文"_s)
		}),
		$$new($ObjectArray, {
			$of("tum"_s),
			$of(u"通布卡文"_s)
		}),
		$$new($ObjectArray, {
			$of("tup"_s),
			$of(u"图皮语系"_s)
		}),
		$$new($ObjectArray, {
			$of("tur"_s),
			$of(u"土耳其文"_s)
		}),
		$$new($ObjectArray, {
			$of("tut"_s),
			$of(u"阿尔泰诸语言 (其他)"_s)
		}),
		$$new($ObjectArray, {
			$of("tvl"_s),
			$of(u"图瓦卢文"_s)
		}),
		$$new($ObjectArray, {
			$of("tw"_s),
			$of(u"契维文"_s)
		}),
		$$new($ObjectArray, {
			$of("twi"_s),
			$of(u"契维文"_s)
		}),
		$$new($ObjectArray, {
			$of("ty"_s),
			$of(u"塔希提文"_s)
		}),
		$$new($ObjectArray, {
			$of("tyv"_s),
			$of(u"图瓦文"_s)
		}),
		$$new($ObjectArray, {
			$of("udm"_s),
			$of(u"乌德穆尔特文"_s)
		}),
		$$new($ObjectArray, {
			$of("ug"_s),
			$of(u"维吾尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("uga"_s),
			$of(u"乌加里特文"_s)
		}),
		$$new($ObjectArray, {
			$of("uig"_s),
			$of(u"维吾尔文"_s)
		}),
		$$new($ObjectArray, {
			$of("uk"_s),
			$of(u"乌克兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("ukr"_s),
			$of(u"乌克兰文"_s)
		}),
		$$new($ObjectArray, {
			$of("umb"_s),
			$of(u"翁本杜文"_s)
		}),
		$$new($ObjectArray, {
			$of("und"_s),
			$of(u"未定语种"_s)
		}),
		$$new($ObjectArray, {
			$of("ur"_s),
			$of(u"乌尔都文"_s)
		}),
		$$new($ObjectArray, {
			$of("urd"_s),
			$of(u"乌尔都文"_s)
		}),
		$$new($ObjectArray, {
			$of("uz"_s),
			$of(u"乌兹别克文"_s)
		}),
		$$new($ObjectArray, {
			$of("uzb"_s),
			$of(u"乌兹别克文"_s)
		}),
		$$new($ObjectArray, {
			$of("vai"_s),
			$of(u"瓦伊文"_s)
		}),
		$$new($ObjectArray, {
			$of("ve"_s),
			$of(u"文达文"_s)
		}),
		$$new($ObjectArray, {
			$of("ven"_s),
			$of(u"文达文"_s)
		}),
		$$new($ObjectArray, {
			$of("vi"_s),
			$of(u"越南文"_s)
		}),
		$$new($ObjectArray, {
			$of("vie"_s),
			$of(u"越南文"_s)
		}),
		$$new($ObjectArray, {
			$of("vo"_s),
			$of(u"沃拉普克文"_s)
		}),
		$$new($ObjectArray, {
			$of("vol"_s),
			$of(u"沃拉普克文"_s)
		}),
		$$new($ObjectArray, {
			$of("vot"_s),
			$of(u"沃提克文"_s)
		}),
		$$new($ObjectArray, {
			$of("wa"_s),
			$of(u"瓦龙文"_s)
		}),
		$$new($ObjectArray, {
			$of("wak"_s),
			$of(u"瓦卡什诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("wal"_s),
			$of(u"瓦拉莫文"_s)
		}),
		$$new($ObjectArray, {
			$of("war"_s),
			$of(u"瓦赖文"_s)
		}),
		$$new($ObjectArray, {
			$of("was"_s),
			$of(u"瓦绍文"_s)
		}),
		$$new($ObjectArray, {
			$of("wel"_s),
			$of(u"威尔士文"_s)
		}),
		$$new($ObjectArray, {
			$of("wen"_s),
			$of(u"索布诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("wln"_s),
			$of(u"瓦龙文"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of(u"沃尔夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("wol"_s),
			$of(u"沃尔夫文"_s)
		}),
		$$new($ObjectArray, {
			$of("xal"_s),
			$of(u"卡尔梅克文"_s)
		}),
		$$new($ObjectArray, {
			$of("xh"_s),
			$of(u"班图文"_s)
		}),
		$$new($ObjectArray, {
			$of("xho"_s),
			$of(u"班图文"_s)
		}),
		$$new($ObjectArray, {
			$of("yao"_s),
			$of(u"瑶族文"_s)
		}),
		$$new($ObjectArray, {
			$of("yap"_s),
			$of(u"雅浦文"_s)
		}),
		$$new($ObjectArray, {
			$of("yi"_s),
			$of(u"依地文"_s)
		}),
		$$new($ObjectArray, {
			$of("yid"_s),
			$of(u"依地文"_s)
		}),
		$$new($ObjectArray, {
			$of("yo"_s),
			$of(u"约鲁巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("yor"_s),
			$of(u"约鲁巴文"_s)
		}),
		$$new($ObjectArray, {
			$of("ypk"_s),
			$of(u"尤皮克诸语言"_s)
		}),
		$$new($ObjectArray, {
			$of("za"_s),
			$of(u"藏文"_s)
		}),
		$$new($ObjectArray, {
			$of("zap"_s),
			$of(u"萨波蒂克文"_s)
		}),
		$$new($ObjectArray, {
			$of("zbl"_s),
			$of(u"布列斯符号"_s)
		}),
		$$new($ObjectArray, {
			$of("zen"_s),
			$of(u"泽纳加文"_s)
		}),
		$$new($ObjectArray, {
			$of("zh"_s),
			$of(u"中文"_s)
		}),
		$$new($ObjectArray, {
			$of("zha"_s),
			$of(u"壮文"_s)
		}),
		$$new($ObjectArray, {
			$of("znd"_s),
			$of(u"赞德文"_s)
		}),
		$$new($ObjectArray, {
			$of("zu"_s),
			$of(u"祖鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("zul"_s),
			$of(u"祖鲁文"_s)
		}),
		$$new($ObjectArray, {
			$of("zun"_s),
			$of(u"祖尼语"_s)
		}),
		$$new($ObjectArray, {
			$of("zxx"_s),
			$of(u"无语言内容"_s)
		}),
		$$new($ObjectArray, {
			$of("zza"_s),
			$of(u"扎扎语"_s)
		})
	});
}

LocaleNames_zh::LocaleNames_zh() {
}

$Class* LocaleNames_zh::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_zh, name, initialize, &_LocaleNames_zh_ClassInfo_, allocate$LocaleNames_zh);
	return class$;
}

$Class* LocaleNames_zh::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun