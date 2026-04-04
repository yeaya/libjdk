#include <sun/util/resources/ext/CurrencyNames_tr_TR.h>
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

void CurrencyNames_tr_TR::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* CurrencyNames_tr_TR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"TRL"_s,
			"TL"_s
		}),
		$$new($ObjectArray, {
			"TRY"_s,
			"TL"_s
		})
	});
}

CurrencyNames_tr_TR::CurrencyNames_tr_TR() {
}

$Class* CurrencyNames_tr_TR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_tr_TR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_tr_TR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.CurrencyNames_tr_TR",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_tr_TR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_tr_TR);
	});
	return class$;
}

$Class* CurrencyNames_tr_TR::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun