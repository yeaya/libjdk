#include <sun/util/resources/cldr/ext/LocaleNames_en_GB.h>
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

void LocaleNames_en_GB::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_GB::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"BL"_s,
			u"St Barthélemy"_s
		}),
		$$new($ObjectArray, {
			"KN"_s,
			"St Kitts & Nevis"_s
		}),
		$$new($ObjectArray, {
			"LC"_s,
			"St Lucia"_s
		}),
		$$new($ObjectArray, {
			"MF"_s,
			"St Martin"_s
		}),
		$$new($ObjectArray, {
			"PM"_s,
			"St Pierre & Miquelon"_s
		}),
		$$new($ObjectArray, {
			"SH"_s,
			"St Helena"_s
		}),
		$$new($ObjectArray, {
			"VC"_s,
			"St Vincent & the Grenadines"_s
		})
	}));
	return data;
}

LocaleNames_en_GB::LocaleNames_en_GB() {
}

$Class* LocaleNames_en_GB::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_GB, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_GB, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_GB",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_GB, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_GB);
	});
	return class$;
}

$Class* LocaleNames_en_GB::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun