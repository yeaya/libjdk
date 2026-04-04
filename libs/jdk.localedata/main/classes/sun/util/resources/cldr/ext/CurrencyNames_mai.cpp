#include <sun/util/resources/cldr/ext/CurrencyNames_mai.h>
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

void CurrencyNames_mai::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_mai::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"ब्राज़ीली रियाल"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"चीनी युआन"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"यूरो"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"ब्रिटिश पाउंड स्टर्लिंग"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"भारतीय रुपया"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"जापानी येन"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"रूसी रूबल"_s
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

CurrencyNames_mai::CurrencyNames_mai() {
}

$Class* CurrencyNames_mai::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_mai, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_mai, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_mai",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_mai, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_mai);
	});
	return class$;
}

$Class* CurrencyNames_mai::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun