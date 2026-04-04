#include <sun/util/resources/cldr/ext/CurrencyNames_om.h>
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

void CurrencyNames_om::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_om::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ETB"_s,
			"Br"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			"Brazilian Real"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"Chinese Yuan Renminbi"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			"Itoophiyaa Birrii"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			"British Pound"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			"Indian Rupee"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			"Japanese Yen"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			"Russian Ruble"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			"US Dollar"_s
		})
	}));
	return data;
}

CurrencyNames_om::CurrencyNames_om() {
}

$Class* CurrencyNames_om::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_om, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_om, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_om",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_om, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_om);
	});
	return class$;
}

$Class* CurrencyNames_om::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun