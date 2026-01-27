#include <sun/util/resources/cldr/ext/CurrencyNames_kln.h>

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

$MethodInfo _CurrencyNames_kln_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_kln, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_kln, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_kln_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kln",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kln_MethodInfo_
};

$Object* allocate$CurrencyNames_kln($Class* clazz) {
	return $of($alloc(CurrencyNames_kln));
}

void CurrencyNames_kln::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kln::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("Ksh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Rabisiekab Kibagegeitab arabuk"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Rabisiekab Angolan"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dolaitab Australian"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Rabisiekab Bahrain"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Rabisiekab Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Rabisiekab Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dolaitab Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Rabisiekab Congo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Rabisiekab Swiss"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Rabisiekab China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Rabisiekab Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Rabisiekab Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Rabisiekab Algerian"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Pauditab Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Rabisiekab Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Rabisiekab Ethiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuroit"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("pounditab Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Rabisiekab Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Rabisiekab Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Rabisiekab Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rabisiekab India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Rabisiekab Japan"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Silingitab ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Rabisiekab Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dolaitab Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Rabisiekab Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Rabisiekab Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Rabisiekab Moroccan"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Rabisiekab Malagasy"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Rabisiekab Mauritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Rabisiekab Mauritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rabisiekab Mauritius"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Rabisiekaby Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Rabisiekab Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolaitab Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Rabisiekab Nigeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Rabisiekab Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Rabisiekab Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rabisiekab Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Pouditab Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Pouditab helena ne tilil"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leonit"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("siligitab Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Rabisiekab Sao Tome ak Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Rabisiekab Sao Tome ak Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangenit"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("RabisiekabTunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("silingitab Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Silingitab Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolaitab ya Amareka"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Rabisiekab CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Rabisiekab CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randitab Afrika nebo murot tai"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwachaitab Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwachaitab Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dolaitab ya Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_kln::CurrencyNames_kln() {
}

$Class* CurrencyNames_kln::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kln, name, initialize, &_CurrencyNames_kln_ClassInfo_, allocate$CurrencyNames_kln);
	return class$;
}

$Class* CurrencyNames_kln::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun