#include <sun/util/resources/ext/CurrencyNames_mk_MK.h>
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

void CurrencyNames_mk_MK::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_mk_MK::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"MKD"_s,
		"Den"_s
	})});
}

CurrencyNames_mk_MK::CurrencyNames_mk_MK() {
}

$Class* CurrencyNames_mk_MK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mk_MK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mk_MK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_mk_MK",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_mk_MK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_mk_MK);
	});
	return class$;
}

$Class* CurrencyNames_mk_MK::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun