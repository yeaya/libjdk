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

$MethodInfo _LocaleNames_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ar_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.resources.ext.LocaleNames_ar",
	"sun.util.resources.LocaleNamesBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_MethodInfo_
};

$Object* allocate$LocaleNames_ar($Class* clazz) {
	return $of($alloc(LocaleNames_ar));
}

void LocaleNames_ar::init$() {
	$LocaleNamesBundle::init$();
}

$ObjectArray2* LocaleNames_ar::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AE"_s),
			$of(u"الإمارات"_s)
		}),
		$$new($ObjectArray, {
			$of("BH"_s),
			$of(u"البحرين"_s)
		}),
		$$new($ObjectArray, {
			$of("DZ"_s),
			$of(u"الجزائر"_s)
		}),
		$$new($ObjectArray, {
			$of("EG"_s),
			$of(u"مصر"_s)
		}),
		$$new($ObjectArray, {
			$of("IQ"_s),
			$of(u"العراق"_s)
		}),
		$$new($ObjectArray, {
			$of("JO"_s),
			$of(u"الأردن"_s)
		}),
		$$new($ObjectArray, {
			$of("KW"_s),
			$of(u"الكويت"_s)
		}),
		$$new($ObjectArray, {
			$of("LB"_s),
			$of(u"لبنان"_s)
		}),
		$$new($ObjectArray, {
			$of("LY"_s),
			$of(u"ليبيا"_s)
		}),
		$$new($ObjectArray, {
			$of("MA"_s),
			$of(u"المغرب"_s)
		}),
		$$new($ObjectArray, {
			$of("OM"_s),
			$of(u"سلطنة عمان"_s)
		}),
		$$new($ObjectArray, {
			$of("QA"_s),
			$of(u"قطر"_s)
		}),
		$$new($ObjectArray, {
			$of("SA"_s),
			$of(u"السعودية"_s)
		}),
		$$new($ObjectArray, {
			$of("SD"_s),
			$of(u"السودان"_s)
		}),
		$$new($ObjectArray, {
			$of("SY"_s),
			$of(u"سوريا"_s)
		}),
		$$new($ObjectArray, {
			$of("TN"_s),
			$of(u"تونس"_s)
		}),
		$$new($ObjectArray, {
			$of("YE"_s),
			$of(u"اليمن"_s)
		}),
		$$new($ObjectArray, {
			$of("ar"_s),
			$of(u"العربية"_s)
		})
	});
}

LocaleNames_ar::LocaleNames_ar() {
}

$Class* LocaleNames_ar::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar, name, initialize, &_LocaleNames_ar_ClassInfo_, allocate$LocaleNames_ar);
	return class$;
}

$Class* LocaleNames_ar::class$ = nullptr;

			} // ext
		} // resources
	} // util
} // sun