#include <sun/util/resources/ext/LocaleNames_no.h>
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

void LocaleNames_no::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_no::getContents() {
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
			"Norge"_s
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

LocaleNames_no::LocaleNames_no() {
}

$Class* LocaleNames_no::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_no, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_no, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_no",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_no, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_no);
	});
	return class$;
}

$Class* LocaleNames_no::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun