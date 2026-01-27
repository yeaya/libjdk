#include <sun/util/resources/cldr/ext/CurrencyNames_bm.h>

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

$MethodInfo _CurrencyNames_bm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bm, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bm, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_bm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_bm",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_bm_MethodInfo_
};

$Object* allocate$CurrencyNames_bm($Class* clazz) {
	return $of($alloc(CurrencyNames_bm));
}

void CurrencyNames_bm::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_bm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("arabu mara kafoli Diram"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("angola Kwanza"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("ositirali Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("bareyini Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"burundi Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"bɔtisiwana Pula"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("kanada Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"kongole Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"suwisi Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("siniwa Yuwan"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"capivɛrdi Esekudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"jibuti Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("alizeri Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("eziputi Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("eritere Nafika"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("etiopi Bir"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("ero"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"angilɛ Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("gana Sedi"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("gambi Dalasi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"gine Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"Ɛndu Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"zapɔne Yɛn"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("keniya Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"komɔri Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("liberiya Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("lesoto Loti"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("libi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"marɔku Diram"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"madagasikari Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"mɔritani Uguwiya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"mɔritani Uguwiya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("morisi Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("malawi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("mozanbiki Metikali"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("namibi Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"nizeriya Nɛra"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ruwanda Fraŋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("sawudiya Riyal"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"sesɛli Rupi"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("sudani Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("sudani Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"Ɛlɛni-Senu Livri"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"siyeralewɔni Lewɔni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("somali Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"sawotome Dobra (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("sawotome Dobra"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("swazilandi Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("tunizi Dinar"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("tanzani Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("uganda Siling"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("ameriki Dolar"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"sefa Fraŋ (BEAC)"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"sefa Fraŋ (BCEAO)"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("sudafriki Randi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"zambi Kwaca (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("zambi Kwaca"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("zimbabuwe Dolar"_s)
		})
	}));
	return data;
}

CurrencyNames_bm::CurrencyNames_bm() {
}

$Class* CurrencyNames_bm::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_bm, name, initialize, &_CurrencyNames_bm_ClassInfo_, allocate$CurrencyNames_bm);
	return class$;
}

$Class* CurrencyNames_bm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun