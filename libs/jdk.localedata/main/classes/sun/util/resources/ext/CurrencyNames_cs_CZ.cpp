#include <sun/util/resources/ext/CurrencyNames_cs_CZ.h>
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

void CurrencyNames_cs_CZ::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_cs_CZ::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"CZK"_s,
		u"Kč"_s
	})});
}

CurrencyNames_cs_CZ::CurrencyNames_cs_CZ() {
}

$Class* CurrencyNames_cs_CZ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_cs_CZ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_cs_CZ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_cs_CZ",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_cs_CZ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_cs_CZ);
	});
	return class$;
}

$Class* CurrencyNames_cs_CZ::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun