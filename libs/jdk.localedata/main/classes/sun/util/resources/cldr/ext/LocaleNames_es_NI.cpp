#include <sun/util/resources/cldr/ext/LocaleNames_es_NI.h>

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

$MethodInfo _LocaleNames_es_NI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es_NI, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es_NI, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_es_NI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es_NI",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_NI_MethodInfo_
};

$Object* allocate$LocaleNames_es_NI($Class* clazz) {
	return $of($alloc(LocaleNames_es_NI));
}

void LocaleNames_es_NI::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_NI::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BA"_s),
			$of("Bosnia y Herzegovina"_s)
		}),
		$$new($ObjectArray, {
			$of("TA"_s),
			$of(u"Tristán de Acuña"_s)
		}),
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de EE. UU."_s)
		}),
		$$new($ObjectArray, {
			$of("eu"_s),
			$of("euskera"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of("lao"_s)
		}),
		$$new($ObjectArray, {
			$of("pa"_s),
			$of(u"punyabí"_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of("suajili"_s)
		}),
		$$new($ObjectArray, {
			$of("tn"_s),
			$of("setswana"_s)
		}),
		$$new($ObjectArray, {
			$of("wo"_s),
			$of("wolof"_s)
		}),
		$$new($ObjectArray, {
			$of("ace"_s),
			$of(u"acehnés"_s)
		}),
		$$new($ObjectArray, {
			$of("arp"_s),
			$of("arapaho"_s)
		}),
		$$new($ObjectArray, {
			$of("bho"_s),
			$of("bhojpuri"_s)
		}),
		$$new($ObjectArray, {
			$of("grc"_s),
			$of("griego antiguo"_s)
		}),
		$$new($ObjectArray, {
			$of("nso"_s),
			$of("sotho septentrional"_s)
		}),
		$$new($ObjectArray, {
			$of("zgh"_s),
			$of(u"tamazight marroquí estándar"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of("suajili del Congo"_s)
		})
	}));
	return data;
}

LocaleNames_es_NI::LocaleNames_es_NI() {
}

$Class* LocaleNames_es_NI::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_NI, name, initialize, &_LocaleNames_es_NI_ClassInfo_, allocate$LocaleNames_es_NI);
	return class$;
}

$Class* LocaleNames_es_NI::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun