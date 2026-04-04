#include <sun/util/resources/cldr/ext/CurrencyNames_fr_CA.h>
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

void CurrencyNames_fr_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fr_CA::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ARS"_s,
			"ARS"_s
		}),
		$$new($ObjectArray, {
			"AUD"_s,
			u"$ AU"_s
		}),
		$$new($ObjectArray, {
			"BMD"_s,
			"BMD"_s
		}),
		$$new($ObjectArray, {
			"BND"_s,
			"BND"_s
		}),
		$$new($ObjectArray, {
			"BZD"_s,
			"BZD"_s
		}),
		$$new($ObjectArray, {
			"CAD"_s,
			u"$ CA"_s
		}),
		$$new($ObjectArray, {
			"CLP"_s,
			"CLP"_s
		}),
		$$new($ObjectArray, {
			"CNY"_s,
			u"CN¥"_s
		}),
		$$new($ObjectArray, {
			"COP"_s,
			"COP"_s
		}),
		$$new($ObjectArray, {
			"FJD"_s,
			"FJD"_s
		}),
		$$new($ObjectArray, {
			"FKP"_s,
			"FKP"_s
		}),
		$$new($ObjectArray, {
			"GBP"_s,
			u"£"_s
		}),
		$$new($ObjectArray, {
			"GIP"_s,
			"GIP"_s
		}),
		$$new($ObjectArray, {
			"HKD"_s,
			u"$ HK"_s
		}),
		$$new($ObjectArray, {
			"ILS"_s,
			"ILS"_s
		}),
		$$new($ObjectArray, {
			"INR"_s,
			"INR"_s
		}),
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"KRW"_s,
			"KRW"_s
		}),
		$$new($ObjectArray, {
			"LBP"_s,
			"LBP"_s
		}),
		$$new($ObjectArray, {
			"MXN"_s,
			"MXN"_s
		}),
		$$new($ObjectArray, {
			"NAD"_s,
			"NAD"_s
		}),
		$$new($ObjectArray, {
			"NZD"_s,
			u"$ NZ"_s
		}),
		$$new($ObjectArray, {
			"SBD"_s,
			"SBD"_s
		}),
		$$new($ObjectArray, {
			"SGD"_s,
			u"$ SG"_s
		}),
		$$new($ObjectArray, {
			"SRD"_s,
			"SRD"_s
		}),
		$$new($ObjectArray, {
			"TTD"_s,
			"TTD"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			u"$ US"_s
		}),
		$$new($ObjectArray, {
			"UYU"_s,
			"UYU"_s
		}),
		$$new($ObjectArray, {
			"VND"_s,
			"VND"_s
		}),
		$$new($ObjectArray, {
			"WST"_s,
			"WST"_s
		}),
		$$new($ObjectArray, {
			"XAF"_s,
			"XAF"_s
		}),
		$$new($ObjectArray, {
			"XOF"_s,
			"XOF"_s
		}),
		$$new($ObjectArray, {
			"XPF"_s,
			"XPF"_s
		}),
		$$new($ObjectArray, {
			"azn"_s,
			u"manat azerbaïdjanais"_s
		}),
		$$new($ObjectArray, {
			"cve"_s,
			"escudo cap-verdien"_s
		}),
		$$new($ObjectArray, {
			"irr"_s,
			"rial iranien"_s
		}),
		$$new($ObjectArray, {
			"lak"_s,
			"kip laotien"_s
		}),
		$$new($ObjectArray, {
			"omr"_s,
			"rial omanais"_s
		}),
		$$new($ObjectArray, {
			"pen"_s,
			u"nouveau sol péruvien"_s
		}),
		$$new($ObjectArray, {
			"pgk"_s,
			u"kina papou-néo-guinéen"_s
		}),
		$$new($ObjectArray, {
			"qar"_s,
			"riyal du Qatar"_s
		}),
		$$new($ObjectArray, {
			"sar"_s,
			"rial saoudien"_s
		}),
		$$new($ObjectArray, {
			"srd"_s,
			"dollar du Suriname"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"pa’anga"_s
		}),
		$$new($ObjectArray, {
			"vuv"_s,
			"vatu"_s
		}),
		$$new($ObjectArray, {
			"wst"_s,
			"tala"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			"Devise inconnue"_s
		}),
		$$new($ObjectArray, {
			"yer"_s,
			u"rial yéménite"_s
		})
	}));
	return data;
}

CurrencyNames_fr_CA::CurrencyNames_fr_CA() {
}

$Class* CurrencyNames_fr_CA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fr_CA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fr_CA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_fr_CA",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_fr_CA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_fr_CA);
	});
	return class$;
}

$Class* CurrencyNames_fr_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun