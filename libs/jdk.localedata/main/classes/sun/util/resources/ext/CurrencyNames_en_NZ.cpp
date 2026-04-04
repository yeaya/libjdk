#include <sun/util/resources/ext/CurrencyNames_en_NZ.h>
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

void CurrencyNames_en_NZ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_NZ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NZD"_s,
		"$"_s
	})});
}

CurrencyNames_en_NZ::CurrencyNames_en_NZ() {
}

$Class* CurrencyNames_en_NZ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_NZ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_NZ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_en_NZ",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_en_NZ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_en_NZ);
	});
	return class$;
}

$Class* CurrencyNames_en_NZ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun