#include <sun/util/resources/cldr/ext/CurrencyNames_sa.h>
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

void CurrencyNames_sa::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sa::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"brl"_s,
			u"ब्राजीली रियाल"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"चीनी युआन"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"फिरङ्गिन् मुद्रा"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"आङ्ग्लदेशीयः पाउंड"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"भारतीय रूप्यकम्"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"जापानी येन"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"रष्यदेशीय रूबल"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"यूएस डॉलर"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"अज्ञात मुद्रा"_s
		})
	}));
	return data;
}

CurrencyNames_sa::CurrencyNames_sa() {
}

$Class* CurrencyNames_sa::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sa, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sa, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sa",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sa, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sa);
	});
	return class$;
}

$Class* CurrencyNames_sa::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun