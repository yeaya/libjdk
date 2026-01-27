#include <sun/util/resources/cldr/ext/CurrencyNames_zgh.h>

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

$MethodInfo _CurrencyNames_zgh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_zgh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_zgh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_zgh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_zgh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_zgh_MethodInfo_
};

$Object* allocate$CurrencyNames_zgh($Class* clazz) {
	return $of($alloc(CurrencyNames_zgh));
}

void CurrencyNames_zgh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_zgh::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"ⴰⴷⵔⵉⵎ ⵏ ⵍⵉⵎⴰⵔⴰⵜ"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ⴽⵡⴰⵏⵣⴰ ⵏ ⴰⵏⴳⵓⵍⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵓⵙⵜⵔⴰⵍⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"ⴰⴷⵉⵏⴰⵔ ⵏ ⴱⵃⵔⴰⵢⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵏ ⴱⵓⵔⵓⵏⴷⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ⴰⴱⵓⵍⴰ ⵏ ⴱⵓⵜⵙⵡⴰⵏⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⴽⴰⵏⴰⴷⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵏ ⴽⵓⵏⴳⵓ"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"ⴰⴼⵔⴰⵏⴽ ⵏ ⵙⵡⵉⵙⵔⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"ⴰⵢⴰⵏ ⵏ ⵛⵛⵉⵏⵡⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"ⵉⵙⴽⵓⴷⵓ ⵏ ⴽⴰⴱⴱⵉⵔⴷⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵏ ⴷⵊⵉⴱⵓⵜⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"ⴰⴷⵉⵏⴰⵔ ⵏ ⴷⵣⴰⵢⵔ"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"ⴰⵊⵏⵉⵀ ⵏ ⵎⵉⵚⵕ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ⵏⴰⴼⴽⴰ ⵏ ⵉⵔⵉⵜⵉⵔⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ⴱⵉⵔ ⵏ ⵉⵜⵢⵓⴱⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ⵓⵔⵓ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ⴰⵊⵏⵉⵀ ⴰⵙⵜⵔⵍⵉⵏⵉ ⵏ ⵏⵏⴳⵍⵉⵣ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghs"_s),
			$of(u"ⵙⵉⴷⵉ ⵏ ⵖⴰⵏⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"ⴷⴰⵍⴰⵙⵉ ⵏ ⴳⴰⵎⴱⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ⴰⵔⵓⴱⵉ ⵏ ⵍⵀⵉⵏⴷ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ⴰⵢⴰⵏ ⵏ ⵍⵢⴰⴱⴰⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"ⴰⵛⵉⵍⵉⵏ ⵏ ⴽⵉⵏⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵏ ⵇⵓⵎⵓⵕ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵍⵉⴱⵉⵔⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"ⵍⵓⵜⵉ ⵏ ⵍⵉⵚⵓⵟⵓ"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ⴰⴷⵉⵏⴰⵔ ⵏ ⵍⵉⴱⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ⴰⴷⵔⵉⵎ ⵏ ⵍⵎⵖⵔⵉⴱ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵏ ⵎⴰⴷⴰⵖⴰⵛⵇⴰⵔ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ⵓⵇⵉⵢⵢⴰ ⵏ ⵎⵓⵕⵉⵟⴰⵏⵢⴰ (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ⵓⵇⵉⵢⵢⴰ ⵏ ⵎⵓⵕⵉⵟⴰⵏⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"ⴰⵔⵓⴱⵉ ⵏ ⵎⵓⵔⵉⵙ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"ⴽⵡⴰⵛⴰ ⵏ ⵎⴰⵍⴰⵡⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzn"_s),
			$of(u"ⴰⵎⵉⵜⵉⴽⵍ ⵏ ⵎⵓⵣⵏⴱⵉⵇ"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵏⴰⵎⵉⴱⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"ⵏⴰⵢⵔⴰ ⵏ ⵏⵉⵊⵉⵔⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ⴰⴼⵔⴰⵏⴽ ⵏ ⵔⵡⴰⵏⴷⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"ⴰⵔⵢⴰⵍ ⵏ ⵙⵙⴰⵄⵓⴷⵉⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"ⴰⵔⵓⴱⵉ ⵏ ⵙⵙⵉⵛⵉⵍ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"ⴰⴷⵉⵏⴰⵔ ⵏ ⵙⵙⵓⴷⴰⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdp"_s),
			$of(u"ⴰⵊⵏⵉⵀ ⵏ ⵙⵙⵓⴷⴰⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"ⴰⵊⵏⵉⵀ ⵏ ⵙⴰⵏⵜⵉⵍⵉⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"ⵍⵉⵢⵓⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"ⴰⵛⵉⵍⵉⵏ ⵏ ⵚⵚⵓⵎⴰⵍ"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"ⴰⴷⵓⴱⵔⴰ ⵏ ⵙⴰⵏⵟⵓⵎⵉ (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"ⴰⴷⵓⴱⵔⴰ ⵏ ⵙⴰⵏⵟⵓⵎⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"ⵍⵉⵍⴰⵏⵊⵉⵏⵉ"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"ⴰⴷⵉⵏⴰⵔ ⵏ ⵜⵓⵏⵙ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"ⴰⵛⵉⵍⵉⵏ ⵏ ⵟⴰⵏⵥⴰⵏⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ⴰⵛⵉⵍⵉⵏ ⵏ ⵓⵖⴰⵏⴷⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵉⵡⵓⵏⴰⴽ ⵉⵎⵓⵏⵏ"_s)
		}),
		$$new($ObjectArray, {
			$of("xaf"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵚⵉⴼⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("xof"_s),
			$of(u"ⴼⵔⴰⵏⴽ ⵚⵉⴼⴰ ⴱⵉⵙⴰⵡ"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"ⴰⵔⴰⵏⴷ ⵏ ⴰⴼⵔⵉⵇⵢⴰ ⵏ ⵉⴼⴼⵓⵙ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"ⴰⴽⵡⴰⵛⴰ ⵏ ⵣⴰⵎⴱⵢⴰ (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"ⴰⴽⵡⴰⵛⴰ ⵏ ⵣⴰⵎⴱⵢⴰ"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵣⵉⵎⴱⴰⴱⵡⵉ (1980–2008)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwl"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵣⵉⵎⴱⴰⴱⵡⵉ (2009)"_s)
		}),
		$$new($ObjectArray, {
			$of("zwr"_s),
			$of(u"ⴰⴷⵓⵍⴰⵔ ⵏ ⵣⵉⵎⴱⴰⴱⵡⵉ (2008)"_s)
		})
	}));
	return data;
}

CurrencyNames_zgh::CurrencyNames_zgh() {
}

$Class* CurrencyNames_zgh::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_zgh, name, initialize, &_CurrencyNames_zgh_ClassInfo_, allocate$CurrencyNames_zgh);
	return class$;
}

$Class* CurrencyNames_zgh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun