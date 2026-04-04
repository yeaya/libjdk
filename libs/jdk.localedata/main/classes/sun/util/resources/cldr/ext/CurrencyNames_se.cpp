#include <sun/util/resources/cldr/ext/CurrencyNames_se.h>
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

void CurrencyNames_se::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_se::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"DKK"_s,
			"Dkr"_s
		}),
		$$new($ObjectArray, {
			"NOK"_s,
			"kr"_s
		}),
		$$new($ObjectArray, {
			"SEK"_s,
			"Skr"_s
		}),
		$$new($ObjectArray, {
			"THB"_s,
			u"฿"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"euro"_s
		}),
		$$new($ObjectArray, {
			"fim"_s,
			u"suoma márkki"_s
		}),
		$$new($ObjectArray, {
			"nok"_s,
			"norgga kruvdno"_s
		}),
		$$new($ObjectArray, {
			"sek"_s,
			u"ruoŧŧa kruvdno"_s
		}),
		$$new($ObjectArray, {
			"xag"_s,
			"uns silba"_s
		}),
		$$new($ObjectArray, {
			"xau"_s,
			"uns golli"_s
		})
	}));
	return data;
}

CurrencyNames_se::CurrencyNames_se() {
}

$Class* CurrencyNames_se::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_se, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_se, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_se",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_se, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_se);
	});
	return class$;
}

$Class* CurrencyNames_se::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun