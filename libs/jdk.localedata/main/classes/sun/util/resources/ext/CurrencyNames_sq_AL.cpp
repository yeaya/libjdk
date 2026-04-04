#include <sun/util/resources/ext/CurrencyNames_sq_AL.h>
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

void CurrencyNames_sq_AL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sq_AL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"ALL"_s,
		"Lek"_s
	})});
}

CurrencyNames_sq_AL::CurrencyNames_sq_AL() {
}

$Class* CurrencyNames_sq_AL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sq_AL, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sq_AL, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_sq_AL",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sq_AL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sq_AL);
	});
	return class$;
}

$Class* CurrencyNames_sq_AL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun