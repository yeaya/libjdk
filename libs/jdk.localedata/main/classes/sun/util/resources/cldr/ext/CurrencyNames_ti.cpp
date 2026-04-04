#include <sun/util/resources/cldr/ext/CurrencyNames_ti.h>
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

void CurrencyNames_ti::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_ti::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ETB"_s,
			"Br"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"የብራዚል ሪል"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"የቻይና ዩአን ረንሚንቢ"_s
		}),
		$$new($ObjectArray, {
			"etb"_s,
			u"የኢትዮጵያ ብር"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"አውሮ"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"የእንግሊዝ ፓውንድ ስተርሊንግ"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"የሕንድ ሩፒ"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"የጃፓን የን"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"የራሻ ሩብል"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"የአሜሪካን ዶላር"_s
		})
	}));
	return data;
}

CurrencyNames_ti::CurrencyNames_ti() {
}

$Class* CurrencyNames_ti::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_ti, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_ti, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_ti",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_ti, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_ti);
	});
	return class$;
}

$Class* CurrencyNames_ti::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun