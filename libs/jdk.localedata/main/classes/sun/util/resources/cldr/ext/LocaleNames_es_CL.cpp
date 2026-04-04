#include <sun/util/resources/cldr/ext/LocaleNames_es_CL.h>
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

void LocaleNames_es_CL::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_CL::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BA"_s,
			"Bosnia y Herzegovina"_s
		}),
		$$new($ObjectArray, {
			"EH"_s,
			"Sahara Occidental"_s
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
		}),
		$$new($ObjectArray, {
			"type.co.phonebook"_s,
			u"orden de directorio telefónico"_s
		})
	}));
	return data;
}

LocaleNames_es_CL::LocaleNames_es_CL() {
}

$Class* LocaleNames_es_CL::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es_CL, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es_CL, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_es_CL",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_es_CL, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_es_CL);
	});
	return class$;
}

$Class* LocaleNames_es_CL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun