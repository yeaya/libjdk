#include <sun/util/resources/cldr/ext/CurrencyNames_tg.h>
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

void CurrencyNames_tg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_tg::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"RUB"_s,
			"RUB"_s
		}),
		$$new($ObjectArray, {
			"TJS"_s,
			u"сом."_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"Реали бразилиягӣ"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"Иенаи хитоӣ"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"Евро"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"Фунт стерлинги британӣ"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"Рупияи ҳиндустонӣ"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"Иенаи японӣ"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"Рубли русӣ"_s
		}),
		$$new($ObjectArray, {
			"tjs"_s,
			u"Сомонӣ"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"Доллари ИМА"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Асъори номаълум"_s
		})
	}));
	return data;
}

CurrencyNames_tg::CurrencyNames_tg() {
}

$Class* CurrencyNames_tg::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tg, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tg, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_tg",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_tg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_tg);
	});
	return class$;
}

$Class* CurrencyNames_tg::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun