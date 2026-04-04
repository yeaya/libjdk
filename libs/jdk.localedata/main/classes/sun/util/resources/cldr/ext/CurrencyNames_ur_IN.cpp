#include <sun/util/resources/cldr/ext/CurrencyNames_ur_IN.h>
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

void CurrencyNames_ur_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ur_IN::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"PKR"_s,
			"PKR"_s
		}),
		$$new($ObjectArray, {
			"crc"_s,
			u"کوسٹا ریکا کولون"_s
		}),
		$$new($ObjectArray, {
			"cuc"_s,
			u"قابل منتقلی کیوبائی پیسو"_s
		}),
		$$new($ObjectArray, {
			"cup"_s,
			u"کیوبائی پیسو"_s
		}),
		$$new($ObjectArray, {
			"cve"_s,
			u"کیپ ورڈی اسکیوڈو"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"برطانوی پاونڈ سٹرلنگ"_s
		}),
		$$new($ObjectArray, {
			"ghs"_s,
			u"گھانی سیڈی"_s
		}),
		$$new($ObjectArray, {
			"wst"_s,
			u"ساموآئی ٹالا"_s
		})
	}));
	return data;
}

CurrencyNames_ur_IN::CurrencyNames_ur_IN() {
}

$Class* CurrencyNames_ur_IN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ur_IN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ur_IN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_ur_IN",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ur_IN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ur_IN);
	});
	return class$;
}

$Class* CurrencyNames_ur_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun