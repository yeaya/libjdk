#include <sun/util/resources/cldr/ext/LocaleNames_kw.h>
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

void LocaleNames_kw::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_kw::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"GB"_s,
			"Rywvaneth Unys"_s
		}),
		$$new($ObjectArray, {
			"kw"_s,
			"kernewek"_s
		})
	}));
	return data;
}

LocaleNames_kw::LocaleNames_kw() {
}

$Class* LocaleNames_kw::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_kw, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_kw, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_kw",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_kw, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_kw);
	});
	return class$;
}

$Class* LocaleNames_kw::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun