#include <sun/util/resources/ext/CurrencyNames_hu_HU.h>
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

void CurrencyNames_hu_HU::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_hu_HU::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"HUF"_s,
		"Ft"_s
	})});
}

CurrencyNames_hu_HU::CurrencyNames_hu_HU() {
}

$Class* CurrencyNames_hu_HU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_hu_HU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_hu_HU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_hu_HU",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_hu_HU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_hu_HU);
	});
	return class$;
}

$Class* CurrencyNames_hu_HU::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun