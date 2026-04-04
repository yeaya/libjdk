#include <sun/util/resources/cldr/ext/CurrencyNames_to.h>
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

void CurrencyNames_to::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_to::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AUD"_s,
			"AUD$"_s
		}),
		$$new($ObjectArray, {
			"NZD"_s,
			"NZD$"_s
		}),
		$$new($ObjectArray, {
			"TOP"_s,
			"T$"_s
		}),
		$$new($ObjectArray, {
			"aud"_s,
			u"Tola fakaʻaositelēlia"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"ʻEulo"_s
		}),
		$$new($ObjectArray, {
			"fjd"_s,
			"Tola fakafisi"_s
		}),
		$$new($ObjectArray, {
			"nzd"_s,
			u"Tola fakanuʻusila"_s
		}),
		$$new($ObjectArray, {
			"pgk"_s,
			"Kina fakapapuaniukini"_s
		}),
		$$new($ObjectArray, {
			"sbd"_s,
			u"Tola fakaʻotusolomone"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"Paʻanga fakatonga"_s
		}),
		$$new($ObjectArray, {
			"vuv"_s,
			"Vatu fakavanuatu"_s
		}),
		$$new($ObjectArray, {
			"wst"_s,
			u"Tala fakahaʻamoa"_s
		}),
		$$new($ObjectArray, {
			"xpf"_s,
			"Falaniki fakapasifika"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Pa’anga Ta’e’ilo"_s
		})
	}));
	return data;
}

CurrencyNames_to::CurrencyNames_to() {
}

$Class* CurrencyNames_to::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_to, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_to, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_to",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_to, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_to);
	});
	return class$;
}

$Class* CurrencyNames_to::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun