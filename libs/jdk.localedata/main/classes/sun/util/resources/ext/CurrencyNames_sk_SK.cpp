#include <sun/util/resources/ext/CurrencyNames_sk_SK.h>
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

void CurrencyNames_sk_SK::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_sk_SK::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EUR"_s,
			u"€"_s
		}),
		$$new($ObjectArray, {
			"SKK"_s,
			"Sk"_s
		}),
		$$new($ObjectArray, {
			"skk"_s,
			u"Slovenská koruna"_s
		})
	});
}

CurrencyNames_sk_SK::CurrencyNames_sk_SK() {
}

$Class* CurrencyNames_sk_SK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sk_SK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sk_SK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_sk_SK",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sk_SK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sk_SK);
	});
	return class$;
}

$Class* CurrencyNames_sk_SK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun