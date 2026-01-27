#include <sun/util/resources/cldr/ext/CurrencyNames_rof.h>

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

$MethodInfo _CurrencyNames_rof_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_rof, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_rof, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_rof_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_rof",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_rof_MethodInfo_
};

$Object* allocate$CurrencyNames_rof($Class* clazz) {
	return $of($alloc(CurrencyNames_rof));
}

void CurrencyNames_rof::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_rof::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("heleri sa Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("heleri sa Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("heleri sa Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("heleri sa Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("heleri sa Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("heleri sa Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("heleri sa Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("heleri sa Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("heleri sa Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("heleri sa China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("heleri sa Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("heleri sa Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("heleri sa Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("heleri sa Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("heleri sa Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("heleri sa Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("heleri sa Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("heleri sa Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("heleri sa Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("heleri sa Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("heleri sa India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("heleri sa Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("heleri sa Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("heleri sa Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("heleri sa Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("heleri sa Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("heleri sa Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("heleri sa Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("heleri sa Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"heleri sa Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("heleri sa Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("heleri sa Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("heleri sa Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("heleri sa Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("heleri sa Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("heleri sa Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("heleri sa Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("heleri sa Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("heleri sa Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("heleri sa Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("heleri sa Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("heleri sa Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"heleri sa Sao Tome na Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("heleri sa Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("heleri sa Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("heleri sa Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("heleri sa Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("heleri sa Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("heleri sa CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("heleri sa CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("heleri sa Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"heleri sa Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("heleri sa Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("heleri sa Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_rof::CurrencyNames_rof() {
}

$Class* CurrencyNames_rof::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_rof, name, initialize, &_CurrencyNames_rof_ClassInfo_, allocate$CurrencyNames_rof);
	return class$;
}

$Class* CurrencyNames_rof::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun