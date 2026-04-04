#include <sun/util/resources/ext/CurrencyNames_es_SV.h>
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

void CurrencyNames_es_SV::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_SV::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"SVC"_s,
		"C"_s
	})});
}

CurrencyNames_es_SV::CurrencyNames_es_SV() {
}

$Class* CurrencyNames_es_SV::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_SV, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_SV, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_es_SV",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_SV, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_SV);
	});
	return class$;
}

$Class* CurrencyNames_es_SV::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun