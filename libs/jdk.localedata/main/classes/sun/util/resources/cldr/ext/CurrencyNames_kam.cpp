#include <sun/util/resources/cldr/ext/CurrencyNames_kam.h>

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

$MethodInfo _CurrencyNames_kam_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_kam, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_kam, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_kam_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_kam",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_kam_MethodInfo_
};

$Object* allocate$CurrencyNames_kam($Class* clazz) {
	return $of($alloc(CurrencyNames_kam));
}

void CurrencyNames_kam::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_kam::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("Ksh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham ya Falme za Kiarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza ya Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Ndola ya Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinari ya Bahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Faranga ya Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula ya Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Ndola ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Faranga ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Faranga ya Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Renminbi ya China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Eskudo ya Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faranga ya Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinari ya Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Vaundi ya Misili"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa ya Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Bir ya Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pauni ya Uingereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Ndalasi ya Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Faranga ya Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupia ya India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Sarafu ya Kijapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Silingi ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faranga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dola ya Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti ya Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinari ya Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham ya Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariary ya Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ya Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ya Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia ya Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikali ya Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Ndola ya Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ya Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faranga ya Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal ya Saudia"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupia ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Vaũndi ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Vaũndi ya Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Silingi ya Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra ya Sao Tome na Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra ya Sao Tome na Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Ndinari ya Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Silingi ya Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Silingi ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Ndola ya Marekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randi ya Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha ya Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha ya Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Ndola ya Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_kam::CurrencyNames_kam() {
}

$Class* CurrencyNames_kam::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_kam, name, initialize, &_CurrencyNames_kam_ClassInfo_, allocate$CurrencyNames_kam);
	return class$;
}

$Class* CurrencyNames_kam::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun