#include <sun/util/resources/cldr/ext/CurrencyNames_vai.h>

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

$MethodInfo _CurrencyNames_vai_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_vai, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_vai, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _CurrencyNames_vai_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.CurrencyNames_vai",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_CurrencyNames_vai_MethodInfo_
};

$Object* allocate$CurrencyNames_vai($Class* clazz) {
	return $of($alloc(CurrencyNames_vai));
}

void CurrencyNames_vai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_vai::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("LRD"_s),
			$of("$"_s)
		}),
		$$new($ObjectArray, {
			$of("aed"_s),
			$of(u"ꖳꕯꔤꗳ ꕉꕟꔬ ꗡꕆꔓꔻ ꔵꕌꕆ"_s)
		}),
		$$new($ObjectArray, {
			$of("aoa"_s),
			$of(u"ꕉꖐꕞ ꖴꕎꘋꕤ"_s)
		}),
		$$new($ObjectArray, {
			$of("aud"_s),
			$of(u"ꖺꔻꖤꔃꔷꕩ ꕜꕞꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("bhd"_s),
			$of(u"ꕑꗸꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("bif"_s),
			$of(u"ꖜꖩꔺ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("bwp"_s),
			$of(u"ꕷꖬꕎꕯ ꖛꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("cad"_s),
			$of(u"ꕪꕯꕜ ꕜꕞꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("cdf"_s),
			$of(u"ꖏꖐꕱ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("chf"_s),
			$of(u"ꖬꔃꕤ ꖨꕮꕊ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("cny"_s),
			$of(u"ꕦꕇꔧ ꖳꕎꘋ ꔓꕆꘋꔬ"_s)
		}),
		$$new($ObjectArray, {
			$of("cve"_s),
			$of(u"ꗡꔻꖴꖁ ꕪꕷꗲꗡꔵꕩꖆ"_s)
		}),
		$$new($ObjectArray, {
			$of("djf"_s),
			$of(u"ꕀꖜꔳ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("dzd"_s),
			$of(u"ꕉꔷꕀꔸꕩ ꔵꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("egp"_s),
			$of(u"ꕆꔻꕞ ꗁꖻꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ern"_s),
			$of(u"ꔀꔸꔳꕟ ꗁꖻꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("etb"_s),
			$of(u"ꔤꕿꖎꔪꕩ ꔫꔤ"_s)
		}),
		$$new($ObjectArray, {
			$of("eur"_s),
			$of(u"ꖳꖄ"_s)
		}),
		$$new($ObjectArray, {
			$of("gbp"_s),
			$of(u"ꔛꔟꔻ ꗁꖻꘋ ꔻꗳꔷꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ghc"_s),
			$of(u"ꕭꕌꕯ ꔻꔵ"_s)
		}),
		$$new($ObjectArray, {
			$of("gmd"_s),
			$of(u"ꕭꔭꕩ ꕜꕞꔻ"_s)
		}),
		$$new($ObjectArray, {
			$of("gns"_s),
			$of(u"ꕅꔤꕇ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("inr"_s),
			$of(u"ꔤꔺꕩ ꖩꔪ"_s)
		}),
		$$new($ObjectArray, {
			$of("jpy"_s),
			$of(u"ꕧꕐꕇꔧ ꘂꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kes"_s),
			$of(u"ꔞꕰ ꔻꔝꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("kmf"_s),
			$of(u"ꖏꖒꖄ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("lrd"_s),
			$of(u"ꕞꔤꔫꕩ ꕜꕞꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("lsl"_s),
			$of(u"ꔷꖇꕿ ꖃꔳ"_s)
		}),
		$$new($ObjectArray, {
			$of("lyd"_s),
			$of(u"ꔷꔫꕩ ꔵꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("mad"_s),
			$of(u"ꗞꕟꖏ ꔵꕌꕆ"_s)
		}),
		$$new($ObjectArray, {
			$of("mga"_s),
			$of(u"ꕮꕞꕭꕌꔻ ꕉꔸꕩꔸ"_s)
		}),
		$$new($ObjectArray, {
			$of("mro"_s),
			$of(u"ꗞꔸꕚꕇꕰ ꖳꕅꕩ (1973–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("mru"_s),
			$of(u"ꗞꔸꕚꕇꕰ ꖳꕅꕩ"_s)
		}),
		$$new($ObjectArray, {
			$of("mur"_s),
			$of(u"ꗞꔓꗔ ꖩꔪ"_s)
		}),
		$$new($ObjectArray, {
			$of("mwk"_s),
			$of(u"ꕮꕞꕌꔨ ꖴꕎꕦ"_s)
		}),
		$$new($ObjectArray, {
			$of("mzm"_s),
			$of(u"ꗞꕤꔭꕃ ꕆꔳꕪ"_s)
		}),
		$$new($ObjectArray, {
			$of("nad"_s),
			$of(u"ꕯꕆꔫꕩ ꕜꕞꕌ"_s)
		}),
		$$new($ObjectArray, {
			$of("ngn"_s),
			$of(u"ꕯꔤꕀꔸꕩ ꕯꔤꕟ"_s)
		}),
		$$new($ObjectArray, {
			$of("rwf"_s),
			$of(u"ꕟꖙꕡ ꖢꕟꘋꕃ"_s)
		}),
		$$new($ObjectArray, {
			$of("sar"_s),
			$of(u"ꕢꖙꔵ ꔸꕩꔷ"_s)
		}),
		$$new($ObjectArray, {
			$of("scr"_s),
			$of(u"ꔖꗼꔷ ꖩꔪ"_s)
		}),
		$$new($ObjectArray, {
			$of("sdg"_s),
			$of(u"ꖬꗵꘋ ꗁꖻꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("shp"_s),
			$of(u"ꔻꘋ ꗥꔷꕯ ꗁꖻꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sll"_s),
			$of(u"ꔷꗚꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("sos"_s),
			$of(u"ꖇꕮꔷ ꔻꔝꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("std"_s),
			$of(u"ꕢꕴ ꕿꔈ ꗪ ꕉ ꕗꕴ ꖁꖜꕟ (1977–2017)"_s)
		}),
		$$new($ObjectArray, {
			$of("stn"_s),
			$of(u"ꕢꕴ ꕿꔈ ꗪ ꕉ ꕗꕴ ꖁꖜꕟ"_s)
		}),
		$$new($ObjectArray, {
			$of("szl"_s),
			$of(u"ꔷꕞꔟꕇ"_s)
		}),
		$$new($ObjectArray, {
			$of("tnd"_s),
			$of(u"ꖤꕇꔻꕩ ꔵꕯ"_s)
		}),
		$$new($ObjectArray, {
			$of("tzs"_s),
			$of(u"ꕚꘋꕤꕇꕰ ꔻꔝꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("ugx"_s),
			$of(u"ꖳꕭꕡ ꔻꔝꘋ"_s)
		}),
		$$new($ObjectArray, {
			$of("usd"_s),
			$of(u"ꕶꕱ ꕜꕞ"_s)
		}),
		$$new($ObjectArray, {
			$of("zar"_s),
			$of(u"ꕉꔱꔸꕪ ꗛꔤ ꔒꘋꗣ ꗏ ꕟꘋꔵ"_s)
		}),
		$$new($ObjectArray, {
			$of("zmk"_s),
			$of(u"ꕤꔭꕩ ꖴꕎꕦ (1968–2012)"_s)
		}),
		$$new($ObjectArray, {
			$of("zmw"_s),
			$of(u"ꕤꔭꕩ ꖴꕎꕦ"_s)
		}),
		$$new($ObjectArray, {
			$of("zwd"_s),
			$of(u"ꔽꕓꖜꔃ ꕜꕞ"_s)
		})
	}));
	return data;
}

CurrencyNames_vai::CurrencyNames_vai() {
}

$Class* CurrencyNames_vai::load$($String* name, bool initialize) {
	$loadClass(CurrencyNames_vai, name, initialize, &_CurrencyNames_vai_ClassInfo_, allocate$CurrencyNames_vai);
	return class$;
}

$Class* CurrencyNames_vai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun