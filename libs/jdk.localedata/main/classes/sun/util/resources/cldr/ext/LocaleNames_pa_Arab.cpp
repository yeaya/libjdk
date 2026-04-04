#include <sun/util/resources/cldr/ext/LocaleNames_pa_Arab.h>
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

void LocaleNames_pa_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_pa_Arab::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"PK"_s,
			u"پاکستان"_s
		}),
		$$new($ObjectArray, {
			"pa"_s,
			u"پنجابی"_s
		}),
		$$new($ObjectArray, {
			"Arab"_s,
			u"عربی"_s
		}),
		$$new($ObjectArray, {
			"Aran"_s,
			u"نستعلیق"_s
		}),
		$$new($ObjectArray, {
			"Guru"_s,
			u"گُرمُکھی"_s
		})
	}));
	return data;
}

LocaleNames_pa_Arab::LocaleNames_pa_Arab() {
}

$Class* LocaleNames_pa_Arab::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_pa_Arab, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_pa_Arab, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_pa_Arab",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_pa_Arab, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_pa_Arab);
	});
	return class$;
}

$Class* LocaleNames_pa_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun