#include <sun/util/resources/cldr/ext/CurrencyNames_mi.h>
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

void CurrencyNames_mi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mi::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"NZD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			"Real Parahi"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"Yuan Haina"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"Pāuna Piritene"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"Rupī Iniana"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			"Yen Hapanihi"_s
		}),
		$$new($ObjectArray, {
			"nzd"_s,
			u"Tāra o Aotearoa"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"Rūpera Ruhiana"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"Tāra US"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"Moni Tē Mōhiotia"_s
		})
	}));
	return data;
}

CurrencyNames_mi::CurrencyNames_mi() {
}

$Class* CurrencyNames_mi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_mi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_mi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_mi);
	});
	return class$;
}

$Class* CurrencyNames_mi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun