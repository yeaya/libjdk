#include <sun/util/resources/cldr/ext/CurrencyNames_sah.h>
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

void CurrencyNames_sah::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sah::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"RUB"_s,
			u"₽"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"Арассыыйа солкуобайа"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"АХШ дуоллара"_s
		})
	}));
	return data;
}

CurrencyNames_sah::CurrencyNames_sah() {
}

$Class* CurrencyNames_sah::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sah, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sah, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sah",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sah, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sah);
	});
	return class$;
}

$Class* CurrencyNames_sah::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun