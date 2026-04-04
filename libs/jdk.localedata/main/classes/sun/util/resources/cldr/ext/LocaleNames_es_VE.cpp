#include <sun/util/resources/cldr/ext/LocaleNames_es_VE.h>
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

void LocaleNames_es_VE::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_VE::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BA"_s,
			"Bosnia y Herzegovina"_s
		}),
		$$new($ObjectArray, {
			"TA"_s,
			u"Tristán de Acuña"_s
		}),
		$$new($ObjectArray, {
			"UM"_s,
			"Islas menores alejadas de EE. UU."_s
		}),
		$$new($ObjectArray, {
			"eu"_s,
			"euskera"_s
		}),
		$$new($ObjectArray, {
			"lo"_s,
			"lao"_s
		}),
		$$new($ObjectArray, {
			"pa"_s,
			u"punyabí"_s
		}),
		$$new($ObjectArray, {
			"ss"_s,
			"siswati"_s
		}),
		$$new($ObjectArray, {
			"sw"_s,
			"suajili"_s
		}),
		$$new($ObjectArray, {
			"tn"_s,
			"setswana"_s
		}),
		$$new($ObjectArray, {
			"wo"_s,
			"wolof"_s
		}),
		$$new($ObjectArray, {
			"ace"_s,
			u"acehnés"_s
		}),
		$$new($ObjectArray, {
			"arp"_s,
			"arapaho"_s
		}),
		$$new($ObjectArray, {
			"bho"_s,
			"bhojpuri"_s
		}),
		$$new($ObjectArray, {
			"grc"_s,
			"griego antiguo"_s
		}),
		$$new($ObjectArray, {
			"nso"_s,
			"sotho septentrional"_s
		}),
		$$new($ObjectArray, {
			"zgh"_s,
			u"tamazight marroquí estándar"_s
		}),
		$$new($ObjectArray, {
			"sw_CD"_s,
			"suajili del Congo"_s
		})
	}));
	return data;
}

LocaleNames_es_VE::LocaleNames_es_VE() {
}

$Class* LocaleNames_es_VE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es_VE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es_VE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_es_VE",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_es_VE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_es_VE);
	});
	return class$;
}

$Class* LocaleNames_es_VE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun