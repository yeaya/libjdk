#include <sun/util/resources/cldr/ext/CurrencyNames_su.h>
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

void CurrencyNames_su::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_su::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"IDR"_s,
			"Rp"_s
		}),
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
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
			"Real Brasil"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"Yuan Tiongkok"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			"Pound Inggris"_s
		}),
		$$new($ObjectArray, {
			"idr"_s,
			u"Rupee Indonésia"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			"Rupee India"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"Yén Jepang"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			"Rubel Rusia"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			"Dolar A.S."_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			"Mata Uang Teu Dikenal"_s
		})
	}));
	return data;
}

CurrencyNames_su::CurrencyNames_su() {
}

$Class* CurrencyNames_su::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_su, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_su, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_su",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_su, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_su);
	});
	return class$;
}

$Class* CurrencyNames_su::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun