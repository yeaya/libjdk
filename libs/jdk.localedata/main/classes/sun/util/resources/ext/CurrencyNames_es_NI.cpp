#include <sun/util/resources/ext/CurrencyNames_es_NI.h>
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

void CurrencyNames_es_NI::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_es_NI::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NIO"_s,
		"$C"_s
	})});
}

CurrencyNames_es_NI::CurrencyNames_es_NI() {
}

$Class* CurrencyNames_es_NI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_NI, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_NI, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_es_NI",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_NI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_NI);
	});
	return class$;
}

$Class* CurrencyNames_es_NI::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun