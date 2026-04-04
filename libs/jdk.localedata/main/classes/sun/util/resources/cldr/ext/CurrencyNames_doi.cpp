#include <sun/util/resources/cldr/ext/CurrencyNames_doi.h>
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

void CurrencyNames_doi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_doi::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPY"_s,
			u"¥"_s
		}),
		$$new($ObjectArray, {
			"RUB"_s,
			"RUB"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"$"_s
		}),
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
			u"यूरो"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"ब्रिटिश पाउंड"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"भारती रपेऽ"_s
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
			u"यूएस डालर"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"अनजांती करंसी"_s
		})
	}));
	return data;
}

CurrencyNames_doi::CurrencyNames_doi() {
}

$Class* CurrencyNames_doi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_doi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_doi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_doi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_doi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_doi);
	});
	return class$;
}

$Class* CurrencyNames_doi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun