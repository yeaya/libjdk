#include <sun/util/resources/ext/CurrencyNames_ga_IE.h>
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

void CurrencyNames_ga_IE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ga_IE::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"EUR"_s,
		u"€"_s
	})});
}

CurrencyNames_ga_IE::CurrencyNames_ga_IE() {
}

$Class* CurrencyNames_ga_IE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ga_IE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ga_IE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ga_IE",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ga_IE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ga_IE);
	});
	return class$;
}

$Class* CurrencyNames_ga_IE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun