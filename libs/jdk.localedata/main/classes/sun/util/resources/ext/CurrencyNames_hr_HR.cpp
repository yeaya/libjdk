#include <sun/util/resources/ext/CurrencyNames_hr_HR.h>
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

void CurrencyNames_hr_HR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_hr_HR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"HRK"_s,
		"Kn"_s
	})});
}

CurrencyNames_hr_HR::CurrencyNames_hr_HR() {
}

$Class* CurrencyNames_hr_HR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hr_HR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hr_HR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_hr_HR",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_hr_HR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_hr_HR);
	});
	return class$;
}

$Class* CurrencyNames_hr_HR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun