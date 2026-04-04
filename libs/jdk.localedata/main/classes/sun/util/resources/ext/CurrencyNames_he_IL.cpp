#include <sun/util/resources/ext/CurrencyNames_he_IL.h>
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

void CurrencyNames_he_IL::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_he_IL::getContents() {
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"ILS"_s,
		u"ש\"ח"_s
	})});
}

CurrencyNames_he_IL::CurrencyNames_he_IL() {
}

$Class* CurrencyNames_he_IL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_he_IL, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_he_IL, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_he_IL",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_he_IL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_he_IL);
	});
	return class$;
}

$Class* CurrencyNames_he_IL::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun