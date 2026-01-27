#include <sun/util/resources/cldr/ext/CurrencyNames_nyn.h>

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

$MethodInfo _CurrencyNames_nyn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nyn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nyn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_nyn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_nyn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_nyn_MethodInfo_
};

$Object* allocate$CurrencyNames_nyn($Class* clazz) {
	return $of($alloc(CurrencyNames_nyn));
}

void CurrencyNames_nyn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_nyn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UGX"_s),
			$of("USh"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Dirham za Buharabu"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza ya Angora"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Doora ya Austureeriya"_s)
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
			$of("Pura ya Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Doora ya Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Faranga ya Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Faranga ya Swisi"_s)
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
			$of("Faranga ya Gyibuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinari ya Arigyeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Paundi ya Misiri"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa ya Eritireya"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Birr ya Ethiopiya"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Paundi ya Bungyereza"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Cedi ya Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ya Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Faranga ya Guinea"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupiya ya India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yeni ya Japaani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shiringi ya Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faranga ya Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Doora ya Liberia"_s)
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
			$of("Dirram ya Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariari ya Maragariita"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ougwiya ya Mouriteeniya (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ougwiya ya Mouriteeniya"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupiiha ya Mauritiasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwaca ya Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikari ya Mozambikwi"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Doora ya Namibiya"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ya Naigyeriya"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faranga ya Rwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riya ya Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupiiha ya Sherisheri"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Dinari ya Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Paundi ya Sudan"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Paundi ya Senti Herena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leone"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Eshiringi ya Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra ya Sao Tome na Purinsipo (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra ya Sao Tome na Purinsipo"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinari ya Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Eshiringi ya Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Eshiringi ya Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Doora ya America"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Faranga ya CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Faranga ya CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randi ya Sausi Afirika"_s)
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
			$of("Doora ya Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_nyn::CurrencyNames_nyn() {
}

$Class* CurrencyNames_nyn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_nyn, name, initialize, &_CurrencyNames_nyn_ClassInfo_, allocate$CurrencyNames_nyn);
	return class$;
}

$Class* CurrencyNames_nyn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun