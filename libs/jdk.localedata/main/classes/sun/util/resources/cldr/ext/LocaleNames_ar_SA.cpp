#include <sun/util/resources/cldr/ext/LocaleNames_ar_SA.h>

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

$MethodInfo _LocaleNames_ar_SA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(LocaleNames_ar_SA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(LocaleNames_ar_SA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _LocaleNames_ar_SA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.LocaleNames_ar_SA",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_LocaleNames_ar_SA_MethodInfo_
};

$Object* allocate$LocaleNames_ar_SA($Class* clazz) {
	return $of($alloc(LocaleNames_ar_SA));
}

void LocaleNames_ar_SA::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* LocaleNames_ar_SA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("AC"_s),
			$of(u"جزيرة أسينشين"_s)
		}),
		$$new($ObjectArray, {
			$of("EA"_s),
			$of(u"سبتة ومليلية"_s)
		}),
		$$new($ObjectArray, {
			$of("MO"_s),
			$of(u"ماكاو الصينية (منطقة إدارية خاصة)"_s)
		}),
		$$new($ObjectArray, {
			$of("MS"_s),
			$of(u"مونتيسيرات"_s)
		}),
		$$new($ObjectArray, {
			$of("UY"_s),
			$of(u"أوروغواي"_s)
		}),
		$$new($ObjectArray, {
			$of("gn"_s),
			$of(u"الغورانية"_s)
		}),
		$$new($ObjectArray, {
			$of("lo"_s),
			$of(u"اللاوو"_s)
		}),
		$$new($ObjectArray, {
			$of("sh"_s),
			$of(u"الكرواتية الصربية"_s)
		}),
		$$new($ObjectArray, {
			$of("sw"_s),
			$of(u"السواحيلية"_s)
		}),
		$$new($ObjectArray, {
			$of("te"_s),
			$of(u"التيلوجو"_s)
		}),
		$$new($ObjectArray, {
			$of("ti"_s),
			$of(u"التيغرينية"_s)
		}),
		$$new($ObjectArray, {
			$of("arn"_s),
			$of(u"المابودونجونية"_s)
		}),
		$$new($ObjectArray, {
			$of("hsb"_s),
			$of(u"صوربيا العليا"_s)
		}),
		$$new($ObjectArray, {
			$of("sma"_s),
			$of(u"سامي الجنوبية"_s)
		}),
		$$new($ObjectArray, {
			$of("sw_CD"_s),
			$of(u"السواحيلية الكونغولية"_s)
		}),
		$$new($ObjectArray, {
			$of("ar_001"_s),
			$of(u"العربية الرسمية الحديثة"_s)
		})
	}));
	return data;
}

LocaleNames_ar_SA::LocaleNames_ar_SA() {
}

$Class* LocaleNames_ar_SA::load$($String* name, bool initialize) {
	$loadClass(LocaleNames_ar_SA, name, initialize, &_LocaleNames_ar_SA_ClassInfo_, allocate$LocaleNames_ar_SA);
	return class$;
}

$Class* LocaleNames_ar_SA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun