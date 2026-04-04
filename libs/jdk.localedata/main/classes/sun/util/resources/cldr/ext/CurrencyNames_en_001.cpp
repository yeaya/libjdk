#include <sun/util/resources/cldr/ext/CurrencyNames_en_001.h>
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

void CurrencyNames_en_001::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_en_001::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"JPY"_s,
			u"JP¥"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"US$"_s
		}),
		$$new($ObjectArray, {
			"bmd"_s,
			"Bermudian Dollar"_s
		}),
		$$new($ObjectArray, {
			"byb"_s,
			u"Belarusian New Rouble (1994–1999)"_s
		}),
		$$new($ObjectArray, {
			"byn"_s,
			"Belarusian Rouble"_s
		}),
		$$new($ObjectArray, {
			"byr"_s,
			u"Belarusian Rouble (2000–2016)"_s
		}),
		$$new($ObjectArray, {
			"lvr"_s,
			"Latvian Rouble"_s
		}),
		$$new($ObjectArray, {
			"php"_s,
			"Philippine Peso"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			"Russian Rouble"_s
		}),
		$$new($ObjectArray, {
			"rur"_s,
			u"Russian Rouble (1991–1998)"_s
		}),
		$$new($ObjectArray, {
			"shp"_s,
			"St Helena Pound"_s
		}),
		$$new($ObjectArray, {
			"tjr"_s,
			"Tajikistani Rouble"_s
		})
	}));
	return data;
}

CurrencyNames_en_001::CurrencyNames_en_001() {
}

$Class* CurrencyNames_en_001::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_en_001, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_en_001, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_en_001",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_en_001, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_en_001);
	});
	return class$;
}

$Class* CurrencyNames_en_001::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun