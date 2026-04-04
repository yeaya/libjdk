#include <sun/util/resources/ext/CurrencyNames_th_TH.h>
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

void CurrencyNames_th_TH::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_th_TH::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"THB"_s,
		u"฿"_s
	})});
}

CurrencyNames_th_TH::CurrencyNames_th_TH() {
}

$Class* CurrencyNames_th_TH::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_th_TH, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_th_TH, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_th_TH",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_th_TH, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_th_TH);
	});
	return class$;
}

$Class* CurrencyNames_th_TH::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun