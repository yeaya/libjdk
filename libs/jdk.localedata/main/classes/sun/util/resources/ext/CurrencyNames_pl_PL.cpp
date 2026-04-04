#include <sun/util/resources/ext/CurrencyNames_pl_PL.h>
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

void CurrencyNames_pl_PL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_pl_PL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"PLN"_s,
		u"zł"_s
	})});
}

CurrencyNames_pl_PL::CurrencyNames_pl_PL() {
}

$Class* CurrencyNames_pl_PL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pl_PL, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pl_PL, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_pl_PL",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_pl_PL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_pl_PL);
	});
	return class$;
}

$Class* CurrencyNames_pl_PL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun