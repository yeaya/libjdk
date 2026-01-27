#include <sun/util/resources/cldr/ext/CurrencyNames_twq.h>

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

$MethodInfo _CurrencyNames_twq_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_twq, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_twq, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_twq_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_twq",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_twq_MethodInfo_
};

$Object* allocate$CurrencyNames_twq($Class* clazz) {
	return $of($alloc(CurrencyNames_twq));
}

void CurrencyNames_twq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_twq::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Laaraw Immaara Margantey Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Angoola Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Ostraali Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Bahareen Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Burundi Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Botswaana Pund"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Kanaada Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"Kongo Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"Swisu Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Sinwa Yuan Renminbi"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Kapuver Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"Jibuuti Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"Alžeeri Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Misra Pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Eritree Nafka"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Ecioopi Birr"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Eero"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Britin Pund"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"Gaana Šiidi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Gambi Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"Ginee Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Indu Rupii"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"Jaapoŋ Yen"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Keeniya Šiiliŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"Komoor Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Liberia Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Leezoto Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Liibi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Maarok Dirham"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"Malgaaši Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Mooritaani Ugiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Mooritaani Ugiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Mooris Rupii"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Malaawi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Mozambik Metikal"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Naamibi Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naajiriya Neera"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"Rwanda Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Saudiya Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"Seešel Rupii"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"Suudaŋ Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"Suudaŋ Pund"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Seŋ Helena Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leeon"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"Somaali Šiiliŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Sao Tome nda Prinsipe Dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Sao Tome nda Prinsipe Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Tunizi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"Tanzaani Šiiliŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"Uganda Šiiliŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Ameriki Dollar"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"CFA Fraŋ (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"CFA Fraŋ (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Hawasa Afriki Rand"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Zambi Kwaca (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Zambi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Zimbabwe Dollar"_s)
		})
	}));
	return data;
}

CurrencyNames_twq::CurrencyNames_twq() {
}

$Class* CurrencyNames_twq::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_twq, name, initialize, &_CurrencyNames_twq_ClassInfo_, allocate$CurrencyNames_twq);
	return class$;
}

$Class* CurrencyNames_twq::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun