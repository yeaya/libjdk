#include <sun/util/resources/cldr/ext/CurrencyNames_mni.h>
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

void CurrencyNames_mni::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mni::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"ব্রাজিলিয়ান রেয়াল"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"চাইনিজ য়ুআন"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"য়ুরো"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"ব্রিটিশ পাউন্দ"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"ইন্দিয়ান রুপি"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"জাপানিজ য়েন"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"রুসিয়ান রুবল"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"য়ু এস দি"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"মশকখংদবা করেন্সি"_s
		})
	}));
	return data;
}

CurrencyNames_mni::CurrencyNames_mni() {
}

$Class* CurrencyNames_mni::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mni, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mni, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_mni",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_mni, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_mni);
	});
	return class$;
}

$Class* CurrencyNames_mni::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun