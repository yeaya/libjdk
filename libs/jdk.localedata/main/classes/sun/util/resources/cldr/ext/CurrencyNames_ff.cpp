#include <sun/util/resources/cldr/ext/CurrencyNames_ff.h>

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

$MethodInfo _CurrencyNames_ff_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ff, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ff, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_ff_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_ff",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_ff_MethodInfo_
};

$Object* allocate$CurrencyNames_ff($Class* clazz) {
	return $of($alloc(CurrencyNames_ff));
}

void CurrencyNames_ff::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ff::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"Dirham Emiraati Araab Dentuɗi"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwansaa Anngolaa"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dolaar Ostaraalii"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dinaar Bahrayn"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"Mbuuɗu Burunndi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pulaa Botwanaa"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dolaar Kandaaa"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Faraa Konngo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Faraa Suwiis"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuam Siin"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Eskudoo Kap Weer"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Faraa Jibutii"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dinaar Alaseri"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Liibar Ejipt"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nafka Eriteree"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Biir Ecoppi"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Oroo"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Liibar Sterling"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi Ganaa"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi Gammbi"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Faraa Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupii Enndo"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yen Sapoo"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"Siling Keñaa"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Faraa Komoor"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dolaar Liberiyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti Lesotoo"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinaar Libi"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Diraham Maruk"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Ariyari Madagaskaar"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugiyya Muritani (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugiyya Muritani"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupii Moriis"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kuwacca Malaawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metikal Mosammbik"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dolaar Namibii"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Nayraa Nijeriyaa"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Faraa Ruwanndaa"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyaal Arabi Sawdit"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupii Seysel"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Liibar Sudaan"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Liibar Sent Helen"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Lewoon Seraa Liyon"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Siling Soomali"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra Sawo Tome e Prensipe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra Sawo Tome e Prensipe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni Swaasilannda"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinaar Tunisii"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Siling Tansanii"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Siling Uganndaa"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"Dolaar Dowlaaji Dentuɗi"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"Mbuuɗi Seefaa BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"Mbuuɗu Seefaa BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"Rannda Afrik Bŋ Worgo"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kuwacca Sammbi (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kuwacca Sammbi"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dolaar Simbaabuwe"_s)
		})
	}));
	return data;
}

CurrencyNames_ff::CurrencyNames_ff() {
}

$Class* CurrencyNames_ff::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_ff, name, initialize, &_CurrencyNames_ff_ClassInfo_, allocate$CurrencyNames_ff);
	return class$;
}

$Class* CurrencyNames_ff::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun