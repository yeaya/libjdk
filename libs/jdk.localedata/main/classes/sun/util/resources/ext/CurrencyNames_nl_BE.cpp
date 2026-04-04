#include <sun/util/resources/ext/CurrencyNames_nl_BE.h>
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

void CurrencyNames_nl_BE::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_nl_BE::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BEF"_s,
			"BF"_s
		}),
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		})
	});
}

CurrencyNames_nl_BE::CurrencyNames_nl_BE() {
}

$Class* CurrencyNames_nl_BE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_nl_BE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_nl_BE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_nl_BE",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_nl_BE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_nl_BE);
	});
	return class$;
}

$Class* CurrencyNames_nl_BE::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun