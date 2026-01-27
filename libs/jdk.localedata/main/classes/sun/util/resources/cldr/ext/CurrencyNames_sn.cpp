#include <sun/util/resources/cldr/ext/CurrencyNames_sn.h>

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

$MethodInfo _CurrencyNames_sn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_sn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_sn",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_sn_MethodInfo_
};

$Object* allocate$CurrencyNames_sn($Class* clazz) {
	return $of($alloc(CurrencyNames_sn));
}

void CurrencyNames_sn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sn::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of("Diramu re United Arab Emirates"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of("Kwanza ye Angola"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of("Dora re Australia"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of("Dhinari re Bhahareni"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of("Furenki re Bhurundi"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of("Pura re Botswana"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of("Dora re Kanada"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of("Furenki re Kongo"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of("Furenki re Swisi"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of("Yuan Renminbi ye China"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of("Dhora re Escudo"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of("Furenki re Jibhuti"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of("Dhinari re Aljeria"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of("Paundi re Ijipita"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of("Nakfa re Eritrea"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of("Dhora re Etiopia"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of("Yuro"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of("Paundi ye Bhiriteni"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of("Sedi ye Ghana"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of("Dalasi ye Gambia"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of("Furenki re Gine"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of("Rupe re India"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of("Yeni ye Japani"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of("Shiringi ye Kenya"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of("Furenki re Komoro"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of("Dora re Liberia"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of("Loti ye Lesoto"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of("Dinari re Libya"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of("Dirham ye Moroko"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of("Furenki re Malagasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"Ugwiya ye Moritania (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of("Ugwiya ye Moritania"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of("Rupi ye Morishasi"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of("Kwacha ye Malawi"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of("Metika ye Mozambiki"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of("Dora re Namibia"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of("Naira ye Nijeria"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of("Furenki re Ruwanda"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of("Riyali re Saudi"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of("Rupi re Seyisheri"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of("Dinari re Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of("Paundi re Sudani"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of("Paundi re Senti Helena"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of("Leoni"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of("Shiringi re Somalia"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"Dobra re Sao Tome ne Principe (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of("Dobra re Sao Tome ne Principe"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of("Lilangeni"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of("Dinari re Tunisia"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of("Shiringi re Tanzania"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of("Shiringi re Uganda"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of("Dora re Amerika"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of("Furenki CFA BEAC"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of("Furenki CFA BCEAO"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of("Randi"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"Kwacha ye Zambia (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of("Kwacha ye Zambia"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of("Dora re Zimbabwe"_s)
		})
	}));
	return data;
}

CurrencyNames_sn::CurrencyNames_sn() {
}

$Class* CurrencyNames_sn::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_sn, name, initialize, &_CurrencyNames_sn_ClassInfo_, allocate$CurrencyNames_sn);
	return class$;
}

$Class* CurrencyNames_sn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun