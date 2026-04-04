#include <sun/util/resources/cldr/ext/CurrencyNames_sat.h>
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

void CurrencyNames_sat::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_sat::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"brl"_s,
			u"ᱵᱨᱟᱡᱤᱞᱤᱭᱟᱱ ᱨᱤᱭᱟᱹᱞ"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"ᱪᱤᱱᱤ ᱭᱩᱣᱟᱱ"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"ᱭᱩᱨᱚ"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"ᱵᱨᱤᱴᱤᱥ ᱯᱟᱣᱩᱸᱰ"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"ᱥᱤᱧᱚᱛ ᱨᱮᱱᱟᱜ ᱴᱟᱠᱟ"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"ᱡᱟᱯᱟᱱᱤ ᱭᱮᱱ"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"ᱨᱩᱥᱤ ᱨᱩᱵᱟᱹᱞ"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"ᱭᱩᱮᱥ ᱰᱚᱞᱟᱨ"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"ᱵᱟᱝᱩᱨᱩᱢ ᱠᱟᱨᱮᱱᱥᱤ"_s
		})
	}));
	return data;
}

CurrencyNames_sat::CurrencyNames_sat() {
}

$Class* CurrencyNames_sat::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_sat, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_sat, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_sat",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_sat, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_sat);
	});
	return class$;
}

$Class* CurrencyNames_sat::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun