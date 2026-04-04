#include <sun/util/resources/ext/CurrencyNames_es_HN.h>
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

void CurrencyNames_es_HN::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_HN::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"HNL"_s,
		"L"_s
	})});
}

CurrencyNames_es_HN::CurrencyNames_es_HN() {
}

$Class* CurrencyNames_es_HN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_HN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_HN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_es_HN",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_HN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_HN);
	});
	return class$;
}

$Class* CurrencyNames_es_HN::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun