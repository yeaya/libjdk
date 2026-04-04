#include <sun/util/resources/cldr/ext/CurrencyNames_sw_CD.h>
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

void CurrencyNames_sw_CD::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sw_CD::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"CDF"_s,
			"FC"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			"Yuan Renminbi ya China"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			"Bir ya Uhabeshi"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			"Sarafu ya Kijapani"_s
		}),
		$$new($ObjectArray, {
			"mga"_s,
			"Ariary ya Bukini"_s
		}),
		$$new($ObjectArray, {
			"mro"_s,
			u"Ugwiya ya Moritania (1973–2017)"_s
		}),
		$$new($ObjectArray, {
			"mru"_s,
			"Ugwiya ya Moritania"_s
		}),
		$$new($ObjectArray, {
			"scr"_s,
			"Rupia ya Shelisheli"_s
		}),
		$$new($ObjectArray, {
			"xaf"_s,
			"Faranga CFA BEAC"_s
		}),
		$$new($ObjectArray, {
			"xof"_s,
			"Faranga CFA BCEAO"_s
		})
	}));
	return data;
}

CurrencyNames_sw_CD::CurrencyNames_sw_CD() {
}

$Class* CurrencyNames_sw_CD::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sw_CD, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sw_CD, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sw_CD",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sw_CD, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sw_CD);
	});
	return class$;
}

$Class* CurrencyNames_sw_CD::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun