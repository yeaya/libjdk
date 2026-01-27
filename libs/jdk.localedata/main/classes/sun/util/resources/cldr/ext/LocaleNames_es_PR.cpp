#include <sun/util/resources/cldr/ext/LocaleNames_es_PR.h>

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

$MethodInfo _LocaleNames_es_PR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_es_PR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_es_PR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_es_PR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_es_PR",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_es_PR_MethodInfo_
};

$Object* allocate$LocaleNames_es_PR($Class* clazz) {
	return $of($alloc(LocaleNames_es_PR));
}

void LocaleNames_es_PR::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_es_PR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UM"_s),
			$of("Islas menores alejadas de EE. UU."_s)
		}),
		$$new($ObjectArray, {
			$of("ss"_s),
			$of("siswati"_s)
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
		})
	}));
	return data;
}

LocaleNames_es_PR::LocaleNames_es_PR() {
}

$Class* LocaleNames_es_PR::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_es_PR, name, initialize, &_LocaleNames_es_PR_ClassInfo_, allocate$LocaleNames_es_PR);
	return class$;
}

$Class* LocaleNames_es_PR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun