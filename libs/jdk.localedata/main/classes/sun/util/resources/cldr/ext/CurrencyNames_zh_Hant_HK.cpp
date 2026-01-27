#include <sun/util/resources/cldr/ext/CurrencyNames_zh_Hant_HK.h>

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

$MethodInfo _CurrencyNames_zh_Hant_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zh_Hant_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zh_Hant_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zh_Hant_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zh_Hant_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zh_Hant_HK_MethodInfo_
};

$Object* allocate$CurrencyNames_zh_Hant_HK($Class* clazz) {
	return $of($alloc(CurrencyNames_zh_Hant_HK));
}

void CurrencyNames_zh_Hant_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zh_Hant_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KRW"_s),
			$of(u"₩"_s)
		}),
		$$new($ObjectArray, {
			$of("TWD"_s),
			$of("NT$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"阿拉伯聯合酋長國迪爾汗"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"澳元"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"阿魯巴盾"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"亞塞拜疆馬納特"_s)
		}),
		$$new($ObjectArray, {
			$of("bad"_s),
			$of(u"波斯尼亞-赫塞哥維納第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"波斯尼亞-赫塞哥維納可轉換馬克"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"巴巴多斯元"_s)
		}),
		$$new($ObjectArray, {
			$of("bec"_s),
			$of(u"比利時法郎（可兌換）"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"布隆迪法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"百慕達元"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"博茨瓦納普拉"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"伯利茲元"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"加拿大元"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"哥斯達黎加科郎"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"佛得角埃斯庫多"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"吉布提法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"多米尼加披索"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"埃塞俄比亞比爾"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"格魯吉亞拉里"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"加納塞地"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"岡比亞達拉西"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"危地馬拉格查爾"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"港元"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"克羅地亞庫納"_s)
		}),
		$$new($ObjectArray, {
			$of("itl"_s),
			$of(u"意大利里拉"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"肯雅先令"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"柬埔寨里爾"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"北韓圜"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"哈薩克坦吉"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"老撾基普"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"利比利亞元"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"摩爾多瓦列伊"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"毛里塔尼亞烏吉亞 (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"毛里塔尼亞烏吉亞"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"毛里裘斯盧布"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"馬爾代夫盧非亞"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"莫桑比克梅蒂卡爾"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"尼日利亞奈拉"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"紐西蘭元"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"阿曼里奧"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"巴布亞新幾內亞基那"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"卡塔爾里亞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"塞爾維亞第納爾"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"盧旺達法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"沙特阿拉伯里亞爾"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"所羅門群島元"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"塞舌爾盧比"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"新加坡元"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"塞拉利昂利昂"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"索馬里先令"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"蘇里南元"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"聖多美和普林西比多布拉 (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"聖多美和普林西比多布拉"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"敍利亞鎊"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"斯威士蘭里朗吉尼"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"湯加潘加"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"千里達和多巴哥元"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"坦桑尼亞先令"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"瓦努阿圖瓦圖"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"中非法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"東加勒比元"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"多哥非洲共同體法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"太平洋法郎"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"也門里雅"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"贊比亞克瓦查"_s)
		})
	}));
	return data;
}

CurrencyNames_zh_Hant_HK::CurrencyNames_zh_Hant_HK() {
}

$Class* CurrencyNames_zh_Hant_HK::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zh_Hant_HK, name, initialize, &_CurrencyNames_zh_Hant_HK_ClassInfo_, allocate$CurrencyNames_zh_Hant_HK);
	return class$;
}

$Class* CurrencyNames_zh_Hant_HK::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun