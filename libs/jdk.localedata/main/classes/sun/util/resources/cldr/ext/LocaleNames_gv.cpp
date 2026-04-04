#include <sun/util/resources/cldr/ext/LocaleNames_gv.h>
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

void LocaleNames_gv::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_gv::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GB"_s,
			"Rywvaneth Unys"_s
		}),
		$$new($ObjectArray, {
			"IM"_s,
			"Ellan Vannin"_s
		}),
		$$new($ObjectArray, {
			"gv"_s,
			"Gaelg"_s
		})
	}));
	return data;
}

LocaleNames_gv::LocaleNames_gv() {
}

$Class* LocaleNames_gv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_gv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_gv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_gv",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_gv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_gv);
	});
	return class$;
}

$Class* LocaleNames_gv::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun