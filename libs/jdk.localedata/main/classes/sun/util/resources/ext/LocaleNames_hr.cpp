#include <sun/util/resources/ext/LocaleNames_hr.h>
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

void LocaleNames_hr::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_hr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"HR"_s,
			"Hrvatska"_s
		}),
		$$new($ObjectArray, {
			"hr"_s,
			"hrvatski"_s
		})
	});
}

LocaleNames_hr::LocaleNames_hr() {
}

$Class* LocaleNames_hr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_hr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_hr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_hr",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_hr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_hr);
	});
	return class$;
}

$Class* LocaleNames_hr::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun