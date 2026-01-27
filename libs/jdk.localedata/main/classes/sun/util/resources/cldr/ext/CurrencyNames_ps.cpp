#include <sun/util/resources/cldr/ext/CurrencyNames_ps.h>

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

$MethodInfo _CurrencyNames_ps_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ps, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ps, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ps_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ps",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ps_MethodInfo_
};

$Object* allocate$CurrencyNames_ps($Class* clazz) {
	return $of($alloc(CurrencyNames_ps));
}

void CurrencyNames_ps::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ps::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AFN"_s),
			$of(u"؋"_s)
		}),
		$$new($ObjectArray, {
			$of("SGD"_s),
			$of("SGD"_s)
		}),
		$$new($ObjectArray, {
			$of("THB"_s),
			$of("THB"_s)
		}),
		$$new($ObjectArray, {
			$of("USD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"متحده عرب امارات درهم"_s)
		}),
		$$new($ObjectArray, {
			$of("afa"_s),
			$of(u"افغانۍ (1927–2002)"_s)
		}),
		$$new($ObjectArray, {
			$of("afn"_s),
			$of(u"افغانۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("all"_s),
			$of(u"البانوي لک"_s)
		}),
		$$new($ObjectArray, {
			$of("amd"_s),
			$of(u"ارمينيايي ډرام"_s)
		}),
		$$new($ObjectArray, {
			$of("ang"_s),
			$of(u"هالېنډي انټيليايي ګيلډر"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"انګولي کوانزا"_s)
		}),
		$$new($ObjectArray, {
			$of("ars"_s),
			$of(u"ارجنټاين پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"آسترالوي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("awg"_s),
			$of(u"اروبايي فلورن"_s)
		}),
		$$new($ObjectArray, {
			$of("azn"_s),
			$of(u"آزربايجاني منت"_s)
		}),
		$$new($ObjectArray, {
			$of("bam"_s),
			$of(u"بوسنيا هرزګوينيايي بدلېدونکې مارک"_s)
		}),
		$$new($ObjectArray, {
			$of("bbd"_s),
			$of(u"باربيډين ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("bdt"_s),
			$of(u"بنګالۍ ټاکه"_s)
		}),
		$$new($ObjectArray, {
			$of("bgn"_s),
			$of(u"بلغاري ليو"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"بحريني دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"برونډي فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("bmd"_s),
			$of(u"برمودا ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("bnd"_s),
			$of(u"برونايي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("bob"_s),
			$of(u"بوليوي بوليويانو"_s)
		}),
		$$new($ObjectArray, {
			$of("brl"_s),
			$of(u"برازيلي ريل"_s)
		}),
		$$new($ObjectArray, {
			$of("bsd"_s),
			$of(u"بهاماسي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("btn"_s),
			$of(u"بهوټانۍ انګولټرم"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"بوټسواني پولا"_s)
		}),
		$$new($ObjectArray, {
			$of("byn"_s),
			$of(u"بلاروسي روبل"_s)
		}),
		$$new($ObjectArray, {
			$of("bzd"_s),
			$of(u"بليز ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"کاناډايي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"کانګولي فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"سويسي فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("clp"_s),
			$of(u"چلي پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cnh"_s),
			$of(u"چيني يوان (آف شور)"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"چيني يوان"_s)
		}),
		$$new($ObjectArray, {
			$of("cop"_s),
			$of(u"کولمبين پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("crc"_s),
			$of(u"کوسټا ريکن کولون"_s)
		}),
		$$new($ObjectArray, {
			$of("cuc"_s),
			$of(u"کيوبايي بدلېدونکي پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cup"_s),
			$of(u"کيوبايي پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"کيپ وردين اسکوډو"_s)
		}),
		$$new($ObjectArray, {
			$of("czk"_s),
			$of(u"چيک کرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"جبوتي فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("dkk"_s),
			$of(u"ډنمارکي کرون"_s)
		}),
		$$new($ObjectArray, {
			$of("dop"_s),
			$of(u"دومينيکا پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"الجيرين دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"مصري پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ايريټرين نکفا"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ايتهوپيايي بر"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"يورو"_s)
		}),
		$$new($ObjectArray, {
			$of("fjd"_s),
			$of(u"فجي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("fkp"_s),
			$of(u"پاکلېنډ ټاپوګانو پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"برتانوې پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("gel"_s),
			$of(u"جارجیاېي لارې"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ګانين سيډي"_s)
		}),
		$$new($ObjectArray, {
			$of("gip"_s),
			$of(u"جبل الطارقي پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"ګيمبين دلاسې"_s)
		}),
		$$new($ObjectArray, {
			$of("gnf"_s),
			$of(u"ګنې فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("gtq"_s),
			$of(u"ګويټيمالن کوټزل"_s)
		}),
		$$new($ObjectArray, {
			$of("gyd"_s),
			$of(u"ګايانيز ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("hkd"_s),
			$of(u"هانګ کانګ ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("hnl"_s),
			$of(u"هونډوران ليمپيرا"_s)
		}),
		$$new($ObjectArray, {
			$of("hrk"_s),
			$of(u"کروشيايي کونا"_s)
		}),
		$$new($ObjectArray, {
			$of("htg"_s),
			$of(u"هيټي ګورډ"_s)
		}),
		$$new($ObjectArray, {
			$of("huf"_s),
			$of(u"هنګري فورنټ"_s)
		}),
		$$new($ObjectArray, {
			$of("idr"_s),
			$of(u"انډونيشي روپيا"_s)
		}),
		$$new($ObjectArray, {
			$of("ils"_s),
			$of(u"اسرايلي نيو شيکل"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"هندي روپۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("iqd"_s),
			$of(u"عراقي دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("irr"_s),
			$of(u"ايراني ريال"_s)
		}),
		$$new($ObjectArray, {
			$of("isk"_s),
			$of(u"آيسلېنډي کرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("jmd"_s),
			$of(u"جمايکايي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("jod"_s),
			$of(u"اردني دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"جاپاني ين"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"کينيايي شيلنګ"_s)
		}),
		$$new($ObjectArray, {
			$of("kgs"_s),
			$of(u"کرغزستاني سوم"_s)
		}),
		$$new($ObjectArray, {
			$of("khr"_s),
			$of(u"کمبوډي ريل"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"کوموري فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("kpw"_s),
			$of(u"شمالي کوريايي وان"_s)
		}),
		$$new($ObjectArray, {
			$of("krw"_s),
			$of(u"جنوبي کوريايي وان"_s)
		}),
		$$new($ObjectArray, {
			$of("kwd"_s),
			$of(u"کويتي دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("kyd"_s),
			$of(u"کيمن ټاپوګانو ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("kzt"_s),
			$of(u"قازقستاني ټينج"_s)
		}),
		$$new($ObjectArray, {
			$of("lak"_s),
			$of(u"لاشې کپ"_s)
		}),
		$$new($ObjectArray, {
			$of("lbp"_s),
			$of(u"لبناني پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("lkr"_s),
			$of(u"سري لنکن روپۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"لايبيرين ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ليبياېي دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"مراکشي درهم"_s)
		}),
		$$new($ObjectArray, {
			$of("mdl"_s),
			$of(u"مالډوي ليو"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ملاګاسي ارياري"_s)
		}),
		$$new($ObjectArray, {
			$of("mkd"_s),
			$of(u"مسيډونايي دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("mmk"_s),
			$of(u"ميانماري کيات"_s)
		}),
		$$new($ObjectArray, {
			$of("mnt"_s),
			$of(u"منګوليايي توګريک"_s)
		}),
		$$new($ObjectArray, {
			$of("mop"_s),
			$of(u"مکانيس پټاکا"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"موريشيسي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"موريشيسي روپۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("mvr"_s),
			$of(u"مالديپي روپيا"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"ملاوي کواچا"_s)
		}),
		$$new($ObjectArray, {
			$of("mxn"_s),
			$of(u"ميکسيکن پيسو"_s)
		}),
		$$new($ObjectArray, {
			$of("myr"_s),
			$of(u"ملايشي رنګټ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"موزمبيقي ميټيکل"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"نيميبيايي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"نايجيري نايرا"_s)
		}),
		$$new($ObjectArray, {
			$of("nio"_s),
			$of(u"نيکاراګون کورډوبا"_s)
		}),
		$$new($ObjectArray, {
			$of("nok"_s),
			$of(u"نارويجين کرون"_s)
		}),
		$$new($ObjectArray, {
			$of("npr"_s),
			$of(u"نيپالي روپۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("nzd"_s),
			$of(u"نيوزي لينډي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("omr"_s),
			$of(u"عماني ريال"_s)
		}),
		$$new($ObjectArray, {
			$of("pab"_s),
			$of(u"پانامۍ بالبوا"_s)
		}),
		$$new($ObjectArray, {
			$of("pen"_s),
			$of(u"پيروين سول"_s)
		}),
		$$new($ObjectArray, {
			$of("pgk"_s),
			$of(u"پاپوا نيوګاني کينا"_s)
		}),
		$$new($ObjectArray, {
			$of("php"_s),
			$of(u"فلپاينۍ پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("pkr"_s),
			$of(u"پاکستانۍ کلداره"_s)
		}),
		$$new($ObjectArray, {
			$of("pln"_s),
			$of(u"پولينډي زلوټي"_s)
		}),
		$$new($ObjectArray, {
			$of("pyg"_s),
			$of(u"پيراګوين ګوراني"_s)
		}),
		$$new($ObjectArray, {
			$of("qar"_s),
			$of(u"قطري ريال"_s)
		}),
		$$new($ObjectArray, {
			$of("ron"_s),
			$of(u"روماني ليو"_s)
		}),
		$$new($ObjectArray, {
			$of("rsd"_s),
			$of(u"سربيايي دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("rub"_s),
			$of(u"روسي روبل"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"روانډي فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"سعودي ريال"_s)
		}),
		$$new($ObjectArray, {
			$of("sbd"_s),
			$of(u"سولومن ټاپوګانو ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"سيچيليسي روپۍ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"سوډاني پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("sek"_s),
			$of(u"سويډني کرونا"_s)
		}),
		$$new($ObjectArray, {
			$of("sgd"_s),
			$of(u"سنګاپور ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"سينټ هيلينا پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"سيرا ليوني ليون"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"سومالي شيلنګ"_s)
		}),
		$$new($ObjectArray, {
			$of("srd"_s),
			$of(u"سورينيمي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("ssp"_s),
			$of(u"جنوب سوډاني پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"ساو ټوم او پرينسپي ډوبرا"_s)
		}),
		$$new($ObjectArray, {
			$of("syp"_s),
			$of(u"سوريايي پونډ"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"سوازي ليلانګيني"_s)
		}),
		$$new($ObjectArray, {
			$of("thb"_s),
			$of(u"تهايي بات"_s)
		}),
		$$new($ObjectArray, {
			$of("tjs"_s),
			$of(u"تاجکستاني سوموني"_s)
		}),
		$$new($ObjectArray, {
			$of("tmt"_s),
			$of(u"ترکمانستاني منت"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"تيونسې دينار"_s)
		}),
		$$new($ObjectArray, {
			$of("top"_s),
			$of(u"ټونګن پانګا"_s)
		}),
		$$new($ObjectArray, {
			$of("try"_s),
			$of(u"ترکي ليرا"_s)
		}),
		$$new($ObjectArray, {
			$of("ttd"_s),
			$of(u"ټرينيډاډ او ټوباګو ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("twd"_s),
			$of(u"نيو تائيواني ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"تنزاني شيلنګ"_s)
		}),
		$$new($ObjectArray, {
			$of("uah"_s),
			$of(u"اوکرايني هريونيا"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"يوګانډي شيلنګ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"امريکايي ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("uyu"_s),
			$of(u"يوراګوي پسو"_s)
		}),
		$$new($ObjectArray, {
			$of("uzs"_s),
			$of(u"ازبکستاني سوم"_s)
		}),
		$$new($ObjectArray, {
			$of("ves"_s),
			$of(u"وينزويلي بوليوار"_s)
		}),
		$$new($ObjectArray, {
			$of("vnd"_s),
			$of(u"ويتنامي ډونګ"_s)
		}),
		$$new($ObjectArray, {
			$of("vuv"_s),
			$of(u"ونواتو واتو"_s)
		}),
		$$new($ObjectArray, {
			$of("wst"_s),
			$of(u"سموون تالا"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"مرکزي افريقايي CFA فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("xcd"_s),
			$of(u"ختيځ کربين ډالر"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"ختيځ افريقايي CFA فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("xpf"_s),
			$of(u"CFP فرانک"_s)
		}),
		$$new($ObjectArray, {
			$of("xxx"_s),
			$of(u"نامعلومه مروجه پېسې"_s)
		}),
		$$new($ObjectArray, {
			$of("yer"_s),
			$of(u"يمني ريال"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"جنوبي افريقاېي رنډ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"زيمبي کواچا"_s)
		})
	}));
	return data;
}

CurrencyNames_ps::CurrencyNames_ps() {
}

$Class* CurrencyNames_ps::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ps, name, initialize, &_CurrencyNames_ps_ClassInfo_, allocate$CurrencyNames_ps);
	return class$;
}

$Class* CurrencyNames_ps::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun