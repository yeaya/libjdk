#include <sun/util/resources/ext/CurrencyNames_el_CY.h>
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

void CurrencyNames_el_CY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_el_CY::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CYP"_s,
			u"£"_s
		}),
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		})
	});
}

CurrencyNames_el_CY::CurrencyNames_el_CY() {
}

$Class* CurrencyNames_el_CY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_el_CY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_el_CY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_el_CY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_el_CY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_el_CY);
	});
	return class$;
}

$Class* CurrencyNames_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun