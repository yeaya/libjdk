#include <sun/util/resources/ext/LocaleNames_ar.h>
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

void LocaleNames_ar::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ar::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AE"_s,
			u"الإمارات"_s
		}),
		$$new($ObjectArray, {
			"BH"_s,
			u"البحرين"_s
		}),
		$$new($ObjectArray, {
			"DZ"_s,
			u"الجزائر"_s
		}),
		$$new($ObjectArray, {
			"EG"_s,
			u"مصر"_s
		}),
		$$new($ObjectArray, {
			"IQ"_s,
			u"العراق"_s
		}),
		$$new($ObjectArray, {
			"JO"_s,
			u"الأردن"_s
		}),
		$$new($ObjectArray, {
			"KW"_s,
			u"الكويت"_s
		}),
		$$new($ObjectArray, {
			"LB"_s,
			u"لبنان"_s
		}),
		$$new($ObjectArray, {
			"LY"_s,
			u"ليبيا"_s
		}),
		$$new($ObjectArray, {
			"MA"_s,
			u"المغرب"_s
		}),
		$$new($ObjectArray, {
			"OM"_s,
			u"سلطنة عمان"_s
		}),
		$$new($ObjectArray, {
			"QA"_s,
			u"قطر"_s
		}),
		$$new($ObjectArray, {
			"SA"_s,
			u"السعودية"_s
		}),
		$$new($ObjectArray, {
			"SD"_s,
			u"السودان"_s
		}),
		$$new($ObjectArray, {
			"SY"_s,
			u"سوريا"_s
		}),
		$$new($ObjectArray, {
			"TN"_s,
			u"تونس"_s
		}),
		$$new($ObjectArray, {
			"YE"_s,
			u"اليمن"_s
		}),
		$$new($ObjectArray, {
			"ar"_s,
			u"العربية"_s
		})
	});
}

LocaleNames_ar::LocaleNames_ar() {
}

$Class* LocaleNames_ar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.util.resources.ext.LocaleNames_ar",
		"sun.util.resources.LocaleNamesBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(LocaleNames_ar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LocaleNames_ar);
	});
	return class$;
}

$Class* LocaleNames_ar::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun