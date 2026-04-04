#include <sun/util/resources/cldr/ext/CurrencyNames_es_419.h>
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

void CurrencyNames_es_419::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* CurrencyNames_es_419::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EUR"_s,
			"EUR"_s
		}),
		$$new($ObjectArray, {
			"THB"_s,
			"THB"_s
		}),
		$$new($ObjectArray, {
			"USD"_s,
			"USD"_s
		}),
		$$new($ObjectArray, {
			"VND"_s,
			"VND"_s
		}),
		$$new($ObjectArray, {
			"ang"_s,
			u"florín de las Antillas Neerlandesas"_s
		}),
		$$new($ObjectArray, {
			"bmd"_s,
			u"dólar de Bermudas"_s
		}),
		$$new($ObjectArray, {
			"mwk"_s,
			u"kwacha malauí"_s
		}),
		$$new($ObjectArray, {
			"nio"_s,
			u"córdoba nicaragüense"_s
		}),
		$$new($ObjectArray, {
			"thb"_s,
			"baht tailandes"_s
		}),
		$$new($ObjectArray, {
			"uzs"_s,
			"som uzbeko"_s
		})
	}));
	return data;
}

CurrencyNames_es_419::CurrencyNames_es_419() {
}

$Class* CurrencyNames_es_419::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(CurrencyNames_es_419, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(CurrencyNames_es_419, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.CurrencyNames_es_419",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(CurrencyNames_es_419, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CurrencyNames_es_419);
	});
	return class$;
}

$Class* CurrencyNames_es_419::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun