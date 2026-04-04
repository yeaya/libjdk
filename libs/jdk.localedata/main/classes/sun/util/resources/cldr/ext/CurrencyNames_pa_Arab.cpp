#include <sun/util/resources/cldr/ext/CurrencyNames_pa_Arab.h>
#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

void CurrencyNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_pa_Arab::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"PKR"_s,
			u"ر"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"يورو"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"روپئیہ [INR]"_s
		}),
		$$new($ObjectArray, {
			"pkr"_s,
			u"روپئیہ"_s
		})
	}));
	return data;
}

CurrencyNames_pa_Arab::CurrencyNames_pa_Arab() {
}

$Class* CurrencyNames_pa_Arab::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_pa_Arab, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_pa_Arab, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_pa_Arab",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_pa_Arab, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_pa_Arab);
	});
	return class$;
}

$Class* CurrencyNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun