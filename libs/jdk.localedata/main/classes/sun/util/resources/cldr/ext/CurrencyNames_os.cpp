#include <sun/util/resources/cldr/ext/CurrencyNames_os.h>
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

void CurrencyNames_os::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_os::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GEL"_s,
			u"₾"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"Бразилиаг реал"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"Евро"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"Бритайнаг Фунт"_s
		}),
		$$new($ObjectArray, {
			"gel"_s,
			u"Лар"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"Сом"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"АИШ-ы Доллар"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Нӕзонгӕ валютӕ"_s
		})
	}));
	return data;
}

CurrencyNames_os::CurrencyNames_os() {
}

$Class* CurrencyNames_os::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_os, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_os, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_os",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_os, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_os);
	});
	return class$;
}

$Class* CurrencyNames_os::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun