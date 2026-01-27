#include <sun/util/resources/cldr/ext/CurrencyNames_sbp.h>

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

$MethodInfo _CurrencyNames_sbp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sbp, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sbp, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sbp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sbp",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sbp_MethodInfo_
};

$Object* allocate$CurrencyNames_sbp($Class* clazz) {
	return $of($alloc(CurrencyNames_sbp));
}

void CurrencyNames_sbp::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sbp::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TZS"_s),
			$of("TSh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Ihela ya Shitwa sha Shiyalabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Ihela ya Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Ihela ya Awusitilaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Ihela ya Bahaleni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Ihela ya Bulundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Ihela ya Botiswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Ihela ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Ihela ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Ihela ya Uswisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Ihela ya Shina"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Ihela ya Kepuvede"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Ihela ya Jibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Ihela ya Alijeliya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Ihela ya Misili"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Ihela ya Elitileya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ihela ya Uhabeshi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Ihela ya Ulaya"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Ihela ya Uwingelesa"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Ihela ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Ihela ya Gambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Ihela ya Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Ihela ya Indiya"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Ihela ya Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Ihela ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Ihela ya Komolo"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Ihela ya Libeliya"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Ihela ya Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Ihela ya Libiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Ihela ya Moloko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ihela ya Bukini"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ihela ya Molitaniya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ihela ya Molitaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Ihela ya Molisi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Ihela ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Ihela ya Musumbiji"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Ihela ya Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Ihela ya Nijeliya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Ihela ya Lwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Ihela ya Sawudiya"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Ihela ya Shelisheli"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Ihela ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Ihela ya Santahelena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Ihela ya Siela Liyoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Ihela ya Somaliya"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Ihela ya Sao Tome ni Pilinsipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Ihela ya Sao Tome ni Pilinsipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Ihela ya Uswasi"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Ihela ya Tunisiya"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Ihela ya Tansaniya"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Ihela ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Ihela ya Malekani"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Ihela ya CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Ihela ya CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Ihela ya Afilika Kusini"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Ihela ya Sambiya (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Ihela ya Sambiya"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Ihela ya Simbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_sbp::CurrencyNames_sbp() {
}

$Class* CurrencyNames_sbp::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sbp, name, initialize, &_CurrencyNames_sbp_ClassInfo_, allocate$CurrencyNames_sbp);
	return class$;
}

$Class* CurrencyNames_sbp::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun