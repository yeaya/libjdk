#include <sun/util/resources/cldr/ext/CurrencyNames_jgo.h>
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

void CurrencyNames_jgo::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_jgo::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"cad"_s,
			u"Ndɔ́la-Kanandâ"_s
		}),
		$$new($ObjectArray, {
			"eur"_s,
			u"Ʉ́lɔ"_s
		}),
		$$new($ObjectArray, {
			"usd"_s,
			u"Ndɔ́la-Amɛlîk"_s
		}),
		$$new($ObjectArray, {
			"xaf"_s,
			u"Fɛlâŋ"_s
		}),
		$$new($ObjectArray, {
			"xxx"_s,
			u"ntɛ-ŋkáp yi pɛ́ ká kɛ́ jínɛ"_s
		})
	}));
	return data;
}

CurrencyNames_jgo::CurrencyNames_jgo() {
}

$Class* CurrencyNames_jgo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_jgo, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_jgo, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_jgo",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_jgo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_jgo);
	});
	return class$;
}

$Class* CurrencyNames_jgo::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun