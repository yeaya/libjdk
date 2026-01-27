#include <sun/util/resources/cldr/ext/CurrencyNames_lg.h>

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

$MethodInfo _CurrencyNames_lg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lg_MethodInfo_
};

$Object* allocate$CurrencyNames_lg($Class* clazz) {
	return $of($alloc(CurrencyNames_lg));
}

void CurrencyNames_lg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("USh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Diraamu eya Emireeti"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"Kwanza ey’Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"Doola ey’Awusiturelya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"Dinaali ey’eBaareeni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Faranga ey’eburundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"Pula ey’eBotiswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"Doola ey’eKanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Faranga ey’eKongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Faranga ey’eSwitizirandi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"Yuwani Reniminibi ey’eCayina"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"Esikudo ey’Keepu Veredi"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Faranga ey’eJjibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Dinaali ey’Aligerya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"Pawundi ey’eMisiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"Nakifa ey’Eritureya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"Biiru ey’Esyopya"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"Pawundi ey’eBungereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Sedi ey’eGana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"Dalasi ey’eGambya"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Faranga ey’eGini"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Rupiya ey’eBuyindi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni ey’eJapani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Silingi ey’eKenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Faranga ey’eKomoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"Doola ey’eLiberya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"Loti ey’eLesoso"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"Dinaali ey’eLibya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"Diraamu ey’eMoroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Faranga ey’eMalagase"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Wugwiya ey’eMawritenya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"Wugwiya ey’eMawritenya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"Rupiya ey’eMawurisyasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"Kwaca ey’eMalawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"Metikaali ey’eMozambiiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"Doola ey’eNamibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"Nayira ey’eNayijerya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Faranga ey’eRwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"Riyaali ey’eBuwarabu"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Rupiya ey’eSesere"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Dinaali ey’eSudaani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Pawundi ey’eSudaani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Pawundi ey’eSenti Herena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Lewone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Silingi ey’eSomaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobura ey’eSantome ne Purincipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"Dobura ey’eSantome ne Purincipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"Dinaali ey’eTunizya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Silingi ey’eTanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Silingi eya Yuganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Doola ey’Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Faranga ey’omu Afirika eya wakati"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Faranga ey’omu Afirika ey’ebugwanjuba"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Randi ey’eSawusafirika"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwaca ey’eZambya (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"Kwaca ey’eZambya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"Doola ey’eZimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_lg::CurrencyNames_lg() {
}

$Class* CurrencyNames_lg::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lg, name, initialize, &_CurrencyNames_lg_ClassInfo_, allocate$CurrencyNames_lg);
	return class$;
}

$Class* CurrencyNames_lg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun