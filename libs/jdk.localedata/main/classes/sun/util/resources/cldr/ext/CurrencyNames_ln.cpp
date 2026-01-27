#include <sun/util/resources/cldr/ext/CurrencyNames_ln.h>

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

$MethodInfo _CurrencyNames_ln_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ln, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ln, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ln_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ln",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ln_MethodInfo_
};

$Object* allocate$CurrencyNames_ln($Class* clazz) {
	return $of($alloc(CurrencyNames_ln));
}

void CurrencyNames_ln::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ln::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("FC"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirihamɛ ya Lémila alabo"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza ya Angóla"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Dolarɛ ya Ositali"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinarɛ ya Bahrɛnɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Falánga ya Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula ya Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dolarɛ ya Kanadá"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Falánga ya Kongó"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Falánga ya Swisɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuanɛ Renminbi ya Sinɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Esikudo ya Kapevɛrɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Falánga ya Dzibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dinarɛ ya Alizeri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Paunɛ ya Ezípitɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakfa ya Elitlɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Birɛ ya Etsiópi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Ɛlɔ́"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Paunɛ ya Angɛlɛtɛ́lɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ya Gana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ya Gambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Falánga ya Ginɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupi ya Índɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ya Zapɔ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Shilingɛ ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Falánga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dolarɛ ya Liberya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ya Lesóto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinarɛ ya Libí"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Dirihame ya Marokɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Falánga ya Madagasikarɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ya Moritani (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ya Moritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi ya Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwasha ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikali ya Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Dolarɛ ya Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ya Nizerya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Falánga ya Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyalɛ ya Alabi Sawuditɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rupi ya Sɛshɛlɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dinarɛ ya Sudá"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Paunɛ ya Sudá"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Paunɛ ya Sántu elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Leonɛ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Shilingɛ ya Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra ya Sao Tomé mpé Presipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobra ya Sao Tomé mpé Presipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dinarɛ ya Tinizi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Shilingɛ ya Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Shilingɛ ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dolarɛ ya Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Falánga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Falánga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Randɛ ya Afríka Súdi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwasha ya Zambi (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwasha ya Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dolarɛ ya Zimbabwɛ"_s)
		})
	}));
	return data;
}

CurrencyNames_ln::CurrencyNames_ln() {
}

$Class* CurrencyNames_ln::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ln, name, initialize, &_CurrencyNames_ln_ClassInfo_, allocate$CurrencyNames_ln);
	return class$;
}

$Class* CurrencyNames_ln::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun