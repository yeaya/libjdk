#include <sun/util/resources/cldr/ext/CurrencyNames_tt.h>
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

void CurrencyNames_tt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tt::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"RUB"_s,
			u"₽"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"Бразилия реалы"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"кытай юане"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"евро"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"фунт стерлинг"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"Индия рупиясе"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"япон иенасы"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"Россия сумы"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"АКШ доллары"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"билгесез валюта"_s
		})
	}));
	return data;
}

CurrencyNames_tt::CurrencyNames_tt() {
}

$Class* CurrencyNames_tt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_tt",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_tt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_tt);
	});
	return class$;
}

$Class* CurrencyNames_tt::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun