#include <sun/util/resources/cldr/ext/CurrencyNames_wo.h>
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

void CurrencyNames_wo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_wo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"RUB"_s,
			"RUB"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			"Real bu Bresil"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"Yuan bu Siin"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"Pound bu Grànd Brëtaañ"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			"Rupee bu End"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"Yen bu Sapoŋ"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			"Ruble bi Rsis"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			"Dolaaru US"_s
		}),
		$$new($ObjectArray, {
			"xof"_s,
			"Franc CFA bu Afrik Sowwu-jant"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Xaalis buñ Xamul"_s
		})
	}));
	return data;
}

CurrencyNames_wo::CurrencyNames_wo() {
}

$Class* CurrencyNames_wo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_wo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_wo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_wo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_wo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_wo);
	});
	return class$;
}

$Class* CurrencyNames_wo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun