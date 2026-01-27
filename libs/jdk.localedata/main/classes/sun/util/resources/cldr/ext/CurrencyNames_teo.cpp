#include <sun/util/resources/cldr/ext/CurrencyNames_teo.h>

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

$MethodInfo _CurrencyNames_teo_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_teo, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_teo, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_teo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_teo",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_teo_MethodInfo_
};

$Object* allocate$CurrencyNames_teo($Class* clazz) {
	return $of($alloc(CurrencyNames_teo));
}

void CurrencyNames_teo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_teo::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("USh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Ango’otol lok’ Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Ango’otol lok’ Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Ango’otol lok’ Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Ango’otol lok’ Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Ango’otol lok’ Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Ango’otol lok’ Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Edola lok’Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Ango’otol lok’ Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Ango’otol lok’ Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Ango’otol lok’ China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Ango’otol lok’ Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Ango’otol lok’ Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Ango’otol lok’ Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Epaunt lok’ Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Ango’otol lok’ Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Ango’otol lok’ Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Epaunt lok’ Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ya Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Ango’otol lok’ Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Ango’otol lok’ India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Ango’otol lok’ Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Ango’otol lok’ Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Ango’otol lok’ Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"edola lok’ Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Ango’otol lok’ Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Ango’otol lok’ Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Ango’otol lok’ Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Ango’otol lok’ Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ango’otol lok’ Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Ango’otol lok’ Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Ango’otol lok’ Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Ango’otol lok’ Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Ango’otol lok’ Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Ango’otol lok’ Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Ango’otol lok’ Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Ango’otol lok’ Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Ango’otol lok’ Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Ango’otol lok’ Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Epaunt Lok’ Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Ango’otol lok’ Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Ango’otol lok’ Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Ango’otol lok’ Sao Tome na Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Ango’otol lok’ Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Ango’otol lok’ Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Ango’otol lok’ Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Ango’otol lok’ Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"edola lok’ Amareka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Ango’otol lok’ CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Ango’otol lok’ CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Ango’otol lok’ Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Ango’otol lok’ Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Ango’otol lok’ Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Edola lok’Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_teo::CurrencyNames_teo() {
}

$Class* CurrencyNames_teo::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_teo, name, initialize, &_CurrencyNames_teo_ClassInfo_, allocate$CurrencyNames_teo);
	return class$;
}

$Class* CurrencyNames_teo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun