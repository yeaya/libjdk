#include <sun/util/resources/cldr/ext/CurrencyNames_wae.h>
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

void CurrencyNames_wae::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_wae::getContents() {
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
			u"Brasilianiši Real"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"Chinesiši Yuan"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			"Pfund"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"Indiši Rupie"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			"Yen"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			"Rubel"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			"Dollar"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Unbekannti Wãrig"_s
		})
	}));
	return data;
}

CurrencyNames_wae::CurrencyNames_wae() {
}

$Class* CurrencyNames_wae::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_wae, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_wae, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_wae",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_wae, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_wae);
	});
	return class$;
}

$Class* CurrencyNames_wae::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun