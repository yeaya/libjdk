#include <sun/util/resources/cldr/ext/CurrencyNames_nd.h>

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

$MethodInfo _CurrencyNames_nd_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nd, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nd, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nd_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nd",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nd_MethodInfo_
};

$Object* allocate$CurrencyNames_nd($Class* clazz) {
	return $of($alloc(CurrencyNames_nd));
}

void CurrencyNames_nd::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nd::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dola laseArab"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza yase Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dola yase Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinari yase Bhahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Fulenki yase Bhurundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Phula yase Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dola yase Khanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Fulenki yase Khongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Fulenki yase Swisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Renminbi yase China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Escudo Caboverdiano"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Fulenki yase Jibhuthi"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinali yase Aljeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Phawundi laseGibhide"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa yase Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Dola laseEthiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Phawundi yase Ngilandi"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi yase Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi yase Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Fulenki yase Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupi yase Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yeni yase Japhani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shilingi yase Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Fulenki yase Khomoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dola yase Libheriya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Lothi yase Lesotho"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinari yase Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham yase Morokho"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Fulenki yase Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya yase Moritaniya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya yase Moritaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi yase Morishasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha yase Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikali yase Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dola yase Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nayira yase Nijeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Fulenki yase Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyal yase Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupi yase Seyisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Dinari yase Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Phawundi yase Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Phawundindi laseSt Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leyoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Shilingi yase Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra yase Sao Tome lo Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra yase Sao Tome lo Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinari yase Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shilingi yase Tanzaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shilingi yase Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dola yase Amelika"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Fulenki CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Fulenki CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randi yase Afrika ye Zanzi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha yase Zambiya (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha yase Zambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dola yase Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_nd::CurrencyNames_nd() {
}

$Class* CurrencyNames_nd::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nd, name, initialize, &_CurrencyNames_nd_ClassInfo_, allocate$CurrencyNames_nd);
	return class$;
}

$Class* CurrencyNames_nd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun