#include <sun/util/resources/ext/CurrencyNames_et_EE.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void CurrencyNames_et_EE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_et_EE::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EEK"_s,
			"kr"_s
		}),
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		}),
		$$new($ObjectArray, {
			"eek"_s,
			"Eesti kroon"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"euro"_s
		})
	});
}

CurrencyNames_et_EE::CurrencyNames_et_EE() {
}

$Class* CurrencyNames_et_EE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_et_EE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_et_EE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_et_EE",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_et_EE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_et_EE);
	});
	return class$;
}

$Class* CurrencyNames_et_EE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun