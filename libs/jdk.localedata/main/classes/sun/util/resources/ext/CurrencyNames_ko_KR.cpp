#include <sun/util/resources/ext/CurrencyNames_ko_KR.h>
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

void CurrencyNames_ko_KR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_ko_KR::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"KRW"_s,
		u"￦"_s
	})});
}

CurrencyNames_ko_KR::CurrencyNames_ko_KR() {
}

$Class* CurrencyNames_ko_KR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ko_KR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ko_KR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_ko_KR",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ko_KR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ko_KR);
	});
	return class$;
}

$Class* CurrencyNames_ko_KR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun