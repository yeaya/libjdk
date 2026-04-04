#include <sun/util/resources/cldr/ext/CurrencyNames_es_UY.h>
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

void CurrencyNames_es_UY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_UY::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"USD"_s,
			"US$"_s
		}),
		$$new($ObjectArray, {
			"UYU"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"UYW"_s,
			"UP"_s
		})
	}));
	return data;
}

CurrencyNames_es_UY::CurrencyNames_es_UY() {
}

$Class* CurrencyNames_es_UY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_UY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_UY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_UY",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_UY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_UY);
	});
	return class$;
}

$Class* CurrencyNames_es_UY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun