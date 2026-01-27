#include <sun/util/resources/cldr/ext/CurrencyNames_mg.h>

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

$MethodInfo _CurrencyNames_mg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mg_MethodInfo_
};

$Object* allocate$CurrencyNames_mg($Class* clazz) {
	return $of($alloc(CurrencyNames_mg));
}

void CurrencyNames_mg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MGA"_s),
			$of("Ar"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("kwanza angoley"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dolara aostralianina"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"dinar bahreïni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Farantsa Borondi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pola botsoaney"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Dôlara Kanadianina"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Farantsa kôngôley"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Farantsa soisa"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yoan sinoa Renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Farantsa Djibotianina"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinara alzerianina"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("vola venty ejipsiana"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakfà Eritreanina"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Bir etiopianina"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Eoro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("livre sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"cédi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi gambianina"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Farantsa Gineanina"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Ropia Indianina"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Japoney"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilling kenianina"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Farantsa Komorianina"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Dôlara Liberianina"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinara Libyanina"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham marokianina"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ouguiya moritanianina (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ouguiya moritanianina"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Ropia maorisianina"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("kwacha malawite"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikaly"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolara namibianina"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira nigerianina"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Farantsa Roande"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Rial saodianina"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Ropia Seysheloà"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Dinara Sodaney"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"livre soudanaise (1956–2007)"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"livre de Sainte-Hélène"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Shilling somalianina"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinar tonizianina"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilling tanzanianina"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilling ogandianina"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dolara amerikanina"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Farantsa CFA (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Farantsa CFA (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rand afrikanina tatsimo"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha zambianina (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha zambianina"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Dôlara Zimbaboeanina"_s)
		})
	}));
	return data;
}

CurrencyNames_mg::CurrencyNames_mg() {
}

$Class* CurrencyNames_mg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mg, name, initialize, &_CurrencyNames_mg_ClassInfo_, allocate$CurrencyNames_mg);
	return class$;
}

$Class* CurrencyNames_mg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun