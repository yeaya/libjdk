#include <sun/util/resources/cldr/ext/CurrencyNames_sd_Deva.h>
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

void CurrencyNames_sd_Deva::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sd_Deva::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"बरजिलियन रियलु"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"चीना युआनु"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"यूरो"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"बरतानवी पाउंडु"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"हिंदुस्तानी रुपयो"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"जापानी येनु"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"रशियनु रुबलु"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"यूएस जो डॉलल"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"अणवाकुफु चालू सिक्को"_s
		})
	}));
	return data;
}

CurrencyNames_sd_Deva::CurrencyNames_sd_Deva() {
}

$Class* CurrencyNames_sd_Deva::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sd_Deva, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sd_Deva, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sd_Deva",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sd_Deva, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sd_Deva);
	});
	return class$;
}

$Class* CurrencyNames_sd_Deva::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun