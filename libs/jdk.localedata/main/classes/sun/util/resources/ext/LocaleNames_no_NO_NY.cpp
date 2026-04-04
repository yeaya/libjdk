#include <sun/util/resources/ext/LocaleNames_no_NO_NY.h>
#include <sun/util/resources/LocaleNamesBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LocaleNamesBundle = ::sun::util::resources::LocaleNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace ext {

void LocaleNames_no_NO_NY::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_no_NO_NY::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"%%B"_s,
			u"bokmål"_s
		}),
		$$new($ObjectArray, {
			"%%NY"_s,
			"nynorsk"_s
		}),
		$$new($ObjectArray, {
			"NO"_s,
			"Noreg"_s
		}),
		$$new($ObjectArray, {
			"nb"_s,
			u"bokmål"_s
		}),
		$$new($ObjectArray, {
			"nn"_s,
			"nynorsk"_s
		}),
		$$new($ObjectArray, {
			"no"_s,
			"norsk"_s
		})
	});
}

LocaleNames_no_NO_NY::LocaleNames_no_NO_NY() {
}

$Class* LocaleNames_no_NO_NY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_no_NO_NY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_no_NO_NY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_no_NO_NY",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_no_NO_NY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_no_NO_NY);
	});
	return class$;
}

$Class* LocaleNames_no_NO_NY::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun