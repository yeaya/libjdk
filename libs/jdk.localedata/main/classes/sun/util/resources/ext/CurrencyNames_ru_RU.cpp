#include <sun/util/resources/ext/CurrencyNames_ru_RU.h>
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

void CurrencyNames_ru_RU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ru_RU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"RUB"_s,
		u"руб."_s
	})});
}

CurrencyNames_ru_RU::CurrencyNames_ru_RU() {
}

$Class* CurrencyNames_ru_RU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ru_RU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ru_RU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ru_RU",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ru_RU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ru_RU);
	});
	return class$;
}

$Class* CurrencyNames_ru_RU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun