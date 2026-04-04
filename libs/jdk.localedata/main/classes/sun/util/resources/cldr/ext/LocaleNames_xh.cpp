#include <sun/util/resources/cldr/ext/LocaleNames_xh.h>
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

void LocaleNames_xh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_xh::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MK"_s,
			"uMntla Macedonia"_s
		}),
		$$new($ObjectArray, {
			"ZA"_s,
			"eMzantsi Afrika"_s
		}),
		$$new($ObjectArray, {
			"xh"_s,
			"isiXhosa"_s
		})
	}));
	return data;
}

LocaleNames_xh::LocaleNames_xh() {
}

$Class* LocaleNames_xh::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_xh, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_xh, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_xh",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_xh, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_xh);
	});
	return class$;
}

$Class* LocaleNames_xh::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun