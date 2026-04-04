#include <sun/util/resources/cldr/ext/CurrencyNames_smn.h>
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

void CurrencyNames_smn::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_smn::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"dkk"_s,
			u"Tanska ruvnâ"_s
		}),
		$$new($ObjectArray, {
			"eek"_s,
			u"Eesti ruvnâ"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			"euro"_s
		}),
		$$new($ObjectArray, {
			"fim"_s,
			u"Suomâ märkki"_s
		}),
		$$new($ObjectArray, {
			"isk"_s,
			u"Island ruvnâ"_s
		}),
		$$new($ObjectArray, {
			"lvr"_s,
			"Latvia ruble"_s
		}),
		$$new($ObjectArray, {
			"nok"_s,
			u"Taažâ ruvnâ"_s
		}),
		$$new($ObjectArray, {
			"sek"_s,
			u"Ruotâ ruvnâ"_s
		})
	}));
	return data;
}

CurrencyNames_smn::CurrencyNames_smn() {
}

$Class* CurrencyNames_smn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_smn, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_smn, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_smn",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_smn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_smn);
	});
	return class$;
}

$Class* CurrencyNames_smn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun