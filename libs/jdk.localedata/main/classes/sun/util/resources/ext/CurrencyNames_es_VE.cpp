#include <sun/util/resources/ext/CurrencyNames_es_VE.h>
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

void CurrencyNames_es_VE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_VE::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"VEB"_s,
			"Bs"_s
		}),
		$$new($ObjectArray, {
			"VEF"_s,
			"Bs.F."_s
		}),
		$$new($ObjectArray, {
			"VES"_s,
			"Bs.S."_s
		})
	});
}

CurrencyNames_es_VE::CurrencyNames_es_VE() {
}

$Class* CurrencyNames_es_VE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_VE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_VE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_es_VE",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_VE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_VE);
	});
	return class$;
}

$Class* CurrencyNames_es_VE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun