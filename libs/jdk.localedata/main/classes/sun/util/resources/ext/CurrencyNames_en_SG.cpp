#include <sun/util/resources/ext/CurrencyNames_en_SG.h>
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

void CurrencyNames_en_SG::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_en_SG::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"SGD"_s,
		"$"_s
	})});
}

CurrencyNames_en_SG::CurrencyNames_en_SG() {
}

$Class* CurrencyNames_en_SG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_SG, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_SG, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_en_SG",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_en_SG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_en_SG);
	});
	return class$;
}

$Class* CurrencyNames_en_SG::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun