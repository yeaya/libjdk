#include <sun/util/resources/cldr/ext/CurrencyNames_lrc.h>
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

void CurrencyNames_lrc::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_lrc::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"IQD"_s,
			u"د.ع.\u200f"_s
		}),
		$$new($ObjectArray, {
			"RUB"_s,
			"RUB"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"رئال بئرئزیل"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"یوان چین"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"یورو"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"پوند بئریتانیا"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"روٙپیه هئن"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"یئن جاپوٙن"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"روٙبل روٙسیه"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"پیل نادیار"_s
		})
	}));
	return data;
}

CurrencyNames_lrc::CurrencyNames_lrc() {
}

$Class* CurrencyNames_lrc::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_lrc, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_lrc, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_lrc",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_lrc, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_lrc);
	});
	return class$;
}

$Class* CurrencyNames_lrc::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun