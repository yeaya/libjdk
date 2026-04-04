#include <sun/util/resources/cldr/ext/CurrencyNames_yi.h>
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

void CurrencyNames_yi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_yi::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"RUB"_s,
			"RUB"_s
		}),
		$$new($ObjectArray, {
			"brl"_s,
			u"בראזיל רעאל"_s
		}),
		$$new($ObjectArray, {
			"bzd"_s,
			u"בעליז דאלאַר"_s
		}),
		$$new($ObjectArray, {
			"chf"_s,
			u"שווייצער פֿראַנק"_s
		}),
		$$new($ObjectArray, {
			"cny"_s,
			u"כינעזישער יואן"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"איירא"_s
		}),
		$$new($ObjectArray, {
			"gbp"_s,
			u"פֿונט שטערלינג"_s
		}),
		$$new($ObjectArray, {
			"inr"_s,
			u"אינדישער רופי"_s
		}),
		$$new($ObjectArray, {
			"jpy"_s,
			u"יאפאנעזישער יען"_s
		}),
		$$new($ObjectArray, {
			"rub"_s,
			u"רוסישער רובל"_s
		}),
		$$new($ObjectArray, {
			"sek"_s,
			u"שוועדישע קראנע"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"אמעריקאנער דאלאר"_s
		}),
		$$new($ObjectArray, {
			"xag"_s,
			u"זילבער"_s
		}),
		$$new($ObjectArray, {
			"xau"_s,
			u"גאלד"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"אומבאַוואוסטע וואַלוטע"_s
		})
	}));
	return data;
}

CurrencyNames_yi::CurrencyNames_yi() {
}

$Class* CurrencyNames_yi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_yi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_yi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_yi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_yi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_yi);
	});
	return class$;
}

$Class* CurrencyNames_yi::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun