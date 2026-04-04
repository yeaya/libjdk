#include <sun/util/resources/ext/CurrencyNames_ro_RO.h>
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

void CurrencyNames_ro_RO::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ro_RO::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ROL"_s,
			"LEI"_s
		}),
		$$new($ObjectArray, {
			"RON"_s,
			"LEI"_s
		})
	});
}

CurrencyNames_ro_RO::CurrencyNames_ro_RO() {
}

$Class* CurrencyNames_ro_RO::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ro_RO, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ro_RO, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ro_RO",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ro_RO, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ro_RO);
	});
	return class$;
}

$Class* CurrencyNames_ro_RO::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun