#include <sun/util/resources/ext/CurrencyNames_ms_MY.h>
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

void CurrencyNames_ms_MY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ms_MY::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"MYR"_s,
		"RM"_s
	})});
}

CurrencyNames_ms_MY::CurrencyNames_ms_MY() {
}

$Class* CurrencyNames_ms_MY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ms_MY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ms_MY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ms_MY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ms_MY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ms_MY);
	});
	return class$;
}

$Class* CurrencyNames_ms_MY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun