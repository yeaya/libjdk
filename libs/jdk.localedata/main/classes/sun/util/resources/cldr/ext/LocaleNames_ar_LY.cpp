#include <sun/util/resources/cldr/ext/LocaleNames_ar_LY.h>
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

void LocaleNames_ar_LY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar_LY::getContents() {
	$useLocalObjectStack();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"EA"_s,
			u"سبتة ومليلية"_s
		}),
		$$new($ObjectArray, {
			"MS"_s,
			u"مونتيسيرات"_s
		}),
		$$new($ObjectArray, {
			"UY"_s,
			u"أوروغواي"_s
		}),
		$$new($ObjectArray, {
			"gn"_s,
			u"الغورانية"_s
		}),
		$$new($ObjectArray, {
			"lo"_s,
			u"اللاوو"_s
		}),
		$$new($ObjectArray, {
			"sh"_s,
			u"الكرواتية الصربية"_s
		}),
		$$new($ObjectArray, {
			"sw"_s,
			u"السواحيلية"_s
		}),
		$$new($ObjectArray, {
			"ti"_s,
			u"التيغرينية"_s
		}),
		$$new($ObjectArray, {
			"arn"_s,
			u"المابودونجونية"_s
		}),
		$$new($ObjectArray, {
			"hsb"_s,
			u"صوربيا العليا"_s
		}),
		$$new($ObjectArray, {
			"sma"_s,
			u"سامي الجنوبية"_s
		}),
		$$new($ObjectArray, {
			"sw_CD"_s,
			u"السواحيلية الكونغولية"_s
		})
	}));
	return data;
}

LocaleNames_ar_LY::LocaleNames_ar_LY() {
}

$Class* LocaleNames_ar_LY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar_LY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar_LY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.util.resources.cldr.ext.LocaleNames_ar_LY",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ar_LY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ar_LY);
	});
	return class$;
}

$Class* LocaleNames_ar_LY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun