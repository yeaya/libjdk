#include <sun/util/resources/cldr/ext/LocaleNames_uz_Arab.h>
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

void LocaleNames_uz_Arab::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_uz_Arab::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AF"_s,
			u"افغانستان"_s
		}),
		$$new($ObjectArray, {
			"fa"_s,
			u"دری"_s
		}),
		$$new($ObjectArray, {
			"ps"_s,
			u"پشتو"_s
		}),
		$$new($ObjectArray, {
			"uz"_s,
			u"اوزبیک"_s
		}),
		$$new($ObjectArray, {
			"Arab"_s,
			u"عربی"_s
		})
	}));
	return data;
}

LocaleNames_uz_Arab::LocaleNames_uz_Arab() {
}

$Class* LocaleNames_uz_Arab::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_uz_Arab, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_uz_Arab, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_uz_Arab",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_uz_Arab, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_uz_Arab);
	});
	return class$;
}

$Class* LocaleNames_uz_Arab::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun