#include <sun/util/resources/ext/CurrencyNames_is_IS.h>
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

void CurrencyNames_is_IS::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_is_IS::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"ISK"_s,
		"kr."_s
	})});
}

CurrencyNames_is_IS::CurrencyNames_is_IS() {
}

$Class* CurrencyNames_is_IS::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_is_IS, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_is_IS, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_is_IS",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_is_IS, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_is_IS);
	});
	return class$;
}

$Class* CurrencyNames_is_IS::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun