#include <sun/util/resources/ext/CurrencyNames_be_BY.h>
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

void CurrencyNames_be_BY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_be_BY::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BYN"_s,
			u"Руб"_s
		}),
		$$new($ObjectArray, {
			"BYR"_s,
			u"Руб"_s
		})
	});
}

CurrencyNames_be_BY::CurrencyNames_be_BY() {
}

$Class* CurrencyNames_be_BY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_be_BY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_be_BY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_be_BY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_be_BY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_be_BY);
	});
	return class$;
}

$Class* CurrencyNames_be_BY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun