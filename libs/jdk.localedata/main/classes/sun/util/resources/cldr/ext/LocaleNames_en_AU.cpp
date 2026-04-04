#include <sun/util/resources/cldr/ext/LocaleNames_en_AU.h>
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

void LocaleNames_en_AU::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_en_AU::getContents() {
	$useLocalObjectStack();
	$var($String, metaValue_bn, "Bengali"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"001"_s,
			"World"_s
		}),
		$$new($ObjectArray, {
			"Beng"_s,
			metaValue_bn
		}),
		$$new($ObjectArray, {
			"lou"_s,
			"lou"_s
		}),
		$$new($ObjectArray, {
			"ro_MD"_s,
			"Moldovan"_s
		}),
		$$new($ObjectArray, {
			"frc"_s,
			"frc"_s
		}),
		$$new($ObjectArray, {
			"en_US"_s,
			"United States English"_s
		}),
		$$new($ObjectArray, {
			"type.ca.ethiopic"_s,
			"Ethiopian Calendar"_s
		}),
		$$new($ObjectArray, {
			"key.x0"_s,
			"Private Use Transform"_s
		}),
		$$new($ObjectArray, {
			"bn"_s,
			metaValue_bn
		}),
		$$new($ObjectArray, {
			"type.ca.dangi"_s,
			"Korean Calendar"_s
		})
	}));
	return data;
}

LocaleNames_en_AU::LocaleNames_en_AU() {
}

$Class* LocaleNames_en_AU::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_en_AU, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_en_AU, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_en_AU",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_en_AU, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_en_AU);
	});
	return class$;
}

$Class* LocaleNames_en_AU::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun