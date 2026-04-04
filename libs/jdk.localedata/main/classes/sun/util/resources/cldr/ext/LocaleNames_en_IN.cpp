#include <sun/util/resources/cldr/ext/LocaleNames_en_IN.h>
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

void LocaleNames_en_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_IN::getContents() {
	$useLocalObjectStack();
	$var($String, metaValue_bn, "Bengali"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"type.nu.orya"_s,
			"Oriya Digits"_s
		}),
		$$new($ObjectArray, {
			"Beng"_s,
			metaValue_bn
		}),
		$$new($ObjectArray, {
			"type.nu.beng"_s,
			"Bengali Digits"_s
		}),
		$$new($ObjectArray, {
			"bn"_s,
			metaValue_bn
		}),
		$$new($ObjectArray, {
			"Orya"_s,
			"Oriya"_s
		})
	}));
	return data;
}

LocaleNames_en_IN::LocaleNames_en_IN() {
}

$Class* LocaleNames_en_IN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_IN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_IN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_IN",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_IN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_IN);
	});
	return class$;
}

$Class* LocaleNames_en_IN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun