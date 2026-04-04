#include <sun/util/resources/cldr/ext/CurrencyNames_fa_AF.h>
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

void CurrencyNames_fa_AF::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_fa_AF::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"aud"_s,
			u"دالر آسترالیا"_s
		}),
		$$new($ObjectArray, {
			"bnd"_s,
			u"دالر برونی"_s
		}),
		$$new($ObjectArray, {
			"byn"_s,
			u"روبل روسیهٔ سفید"_s
		}),
		$$new($ObjectArray, {
			"byr"_s,
			u"روبل روسیهٔ سفید (۲۰۰۰–۲۰۱۶)"_s
		}),
		$$new($ObjectArray, {
			"cad"_s,
			u"دالر کانادا"_s
		}),
		$$new($ObjectArray, {
			"chf"_s,
			u"فرانک سویس"_s
		}),
		$$new($ObjectArray, {
			"dkk"_s,
			u"کرون دنمارک"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"ین جاپان"_s
		}),
		$$new($ObjectArray, {
			"mxn"_s,
			u"پزوی مکسیکو"_s
		}),
		$$new($ObjectArray, {
			"nlg"_s,
			u"گیلدر هالند"_s
		}),
		$$new($ObjectArray, {
			"nok"_s,
			u"کرون ناروی"_s
		}),
		$$new($ObjectArray, {
			"sek"_s,
			u"کرون سویدن"_s
		}),
		$$new($ObjectArray, {
			"sgd"_s,
			u"دالر سینگاپور"_s
		}),
		$$new($ObjectArray, {
			"tjs"_s,
			u"سامانی تاجکستان"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"دالر امریکا"_s
		})
	}));
	return data;
}

CurrencyNames_fa_AF::CurrencyNames_fa_AF() {
}

$Class* CurrencyNames_fa_AF::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_fa_AF, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_fa_AF, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_fa_AF",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_fa_AF, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_fa_AF);
	});
	return class$;
}

$Class* CurrencyNames_fa_AF::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun