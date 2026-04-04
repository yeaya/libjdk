#include <sun/util/resources/cldr/ext/LocaleNames_en_CA.h>
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

void LocaleNames_en_CA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_CA::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"bn"_s,
			"Bengali"_s
		}),
		$$new($ObjectArray, {
			"mfe"_s,
			"Mauritian"_s
		}),
		$$new($ObjectArray, {
			"tvl"_s,
			"Tuvaluan"_s
		}),
		$$new($ObjectArray, {
			"ro_MD"_s,
			"Moldovan"_s
		}),
		$$new($ObjectArray, {
			"type.ca.dangi"_s,
			"Korean Calendar"_s
		}),
		$$new($ObjectArray, {
			"type.d0.lower"_s,
			"To Lower Case"_s
		}),
		$$new($ObjectArray, {
			"type.d0.title"_s,
			"To Title Case"_s
		}),
		$$new($ObjectArray, {
			"type.d0.upper"_s,
			"To Upper Case"_s
		}),
		$$new($ObjectArray, {
			"type.d0.fwidth"_s,
			"To Full Width"_s
		}),
		$$new($ObjectArray, {
			"type.d0.hwidth"_s,
			"To Half Width"_s
		}),
		$$new($ObjectArray, {
			"type.ca.ethiopic"_s,
			"Ethiopian Calendar"_s
		})
	}));
	return data;
}

LocaleNames_en_CA::LocaleNames_en_CA() {
}

$Class* LocaleNames_en_CA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_CA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_CA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_CA",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_CA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_CA);
	});
	return class$;
}

$Class* LocaleNames_en_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun