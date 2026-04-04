#include <sun/util/resources/ext/CurrencyNames_bg_BG.h>
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

void CurrencyNames_bg_BG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_bg_BG::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"BGN"_s,
		u"лв."_s
	})});
}

CurrencyNames_bg_BG::CurrencyNames_bg_BG() {
}

$Class* CurrencyNames_bg_BG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_bg_BG, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_bg_BG, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_bg_BG",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_bg_BG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_bg_BG);
	});
	return class$;
}

$Class* CurrencyNames_bg_BG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun