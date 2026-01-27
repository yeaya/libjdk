#include <sun/util/resources/cldr/ext/CurrencyNames_lu.h>

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

$MethodInfo _CurrencyNames_lu_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lu, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lu, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_lu_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_lu",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_lu_MethodInfo_
};

$Object* allocate$CurrencyNames_lu($Class* clazz) {
	return $of($alloc(CurrencyNames_lu));
}

void CurrencyNames_lu::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lu::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("CDF"_s),
			$of("FC"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Ndiriha wa Lemila alabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza wa Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Ndola wa Ositali"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Ndina wa Bahrene"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Nfalanga wa Bulundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pula wa Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Ndola wa Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Nfalanga wa Kongu"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Nfalanga wa Swise"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuani Renminbi wa Shine"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Esikuludo wa Kapevere"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Nfalanga wa Dzibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Ndina wa Alijeri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Pauni wa Mushidi"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa wa Elitle"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Bira wa Etshiopi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Iro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Pauni wa Angeletele"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi wa Ngana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Ndalasi wa Ngambi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Nfalanga wa Ngina"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupi wa Inde"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Yeni wa Zapɔ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Nshili wa Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Nfalanga wa Komoru"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Ndola wa Liberya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti wa Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Ndina wa Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Ndiriha wa Maroke"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Nfalanga wa Madagasikare"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya wa Moritani (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya wa Moritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupia wa Morisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwasha wa Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikali wa Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Ndola wa Namibi"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira wa Nizerya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Nfalanga wa Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyale wa Alabu Nsawu"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupya wa Seshele"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Ndina wa Suda"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Pauni wa Suda"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Pauni wa Santu Elena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Nshili wa Somali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra wa Sao Tome ne Presipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra wa Sao Tome ne Presipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Ndina wa Tinizi"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Nshili wa Tanzani"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Nshili wa Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Ndola wa Ameriki"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Nfalanga CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Nfalanga CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Rande wa Afrika wa Mwinshi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwasha wa Zambi (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwasha wa Zambi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Ndola wa Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_lu::CurrencyNames_lu() {
}

$Class* CurrencyNames_lu::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_lu, name, initialize, &_CurrencyNames_lu_ClassInfo_, allocate$CurrencyNames_lu);
	return class$;
}

$Class* CurrencyNames_lu::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun