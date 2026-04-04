#include <sun/util/resources/ext/CurrencyNames_en_ZA.h>
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

void CurrencyNames_en_ZA::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_ZA::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"ZAR"_s,
		"R"_s
	})});
}

CurrencyNames_en_ZA::CurrencyNames_en_ZA() {
}

$Class* CurrencyNames_en_ZA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_ZA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_ZA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_en_ZA",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_en_ZA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_en_ZA);
	});
	return class$;
}

$Class* CurrencyNames_en_ZA::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun