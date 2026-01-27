#include <sun/util/resources/cldr/ext/CurrencyNames_mas.h>

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

$MethodInfo _CurrencyNames_mas_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mas, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mas, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_mas_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_mas",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_mas_MethodInfo_
};

$Object* allocate$CurrencyNames_mas($Class* clazz) {
	return $of($alloc(CurrencyNames_mas));
}

void CurrencyNames_mas::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mas::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("KES"_s),
			$of("Ksh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Iropiyianí ɔ́ɔ̄ lmarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Iropiyianí e Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Iropiyianí e Austria"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Iropiyianí e Bahareini"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Iropiyianí e Burundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Iropiyianí e Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Iropiyianí e Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Iropiyianí e Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Iropiyianí e Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Iropiyianí e China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Iropiyianí e Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Iropiyianí e Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Iropiyianí e Algeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Iropiyianí e Misri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Iropiyianí e Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Iropiyianí e Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"Iropiyianí e yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Iropiyianí e Nkɨ́resa"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Iropiyianí e Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Iropiyianí e Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Iropiyianí e Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Iropiyianí e India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Iropiyianí e Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Iropiyianí e Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Iropiyianí e Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Iropiyianí e Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Iropiyianí e Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Iropiyianí e Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Iropiyianí e Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Iropiyianí e Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Iropiyianí e Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Iropiyianí e Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Iropiyianí e Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Iropiyianí e Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Iropiyianí e Msumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Iropiyianí e Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Iropiyianí e Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Iropiyianí e Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Iropiyianí e Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Iropiyianí e Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Iropiyianí e Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Iropiyianí e Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"Iropiyianí e leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Iropiyianí e Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Iropiyianí e Saotome (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Iropiyianí e Saotome"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"Iropiyianí e lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Iropiyianí e Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Iropiyianí e Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Iropiyianí e Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Iropiyianí ɔ́ɔ̄ lamarekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Iropiyianí e CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Iropiyianí e CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Iropiyianí e Afrika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Iropiyianí e Sambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Iropiyianí e Sambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Iropiyianí e Simbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_mas::CurrencyNames_mas() {
}

$Class* CurrencyNames_mas::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_mas, name, initialize, &_CurrencyNames_mas_ClassInfo_, allocate$CurrencyNames_mas);
	return class$;
}

$Class* CurrencyNames_mas::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun