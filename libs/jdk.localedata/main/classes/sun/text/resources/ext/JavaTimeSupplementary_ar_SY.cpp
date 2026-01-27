#include <sun/text/resources/ext/JavaTimeSupplementary_ar_SY.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_ar_SY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ar_SY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ar_SY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ar_SY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ar_SY",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ar_SY_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ar_SY($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ar_SY));
}

void JavaTimeSupplementary_ar_SY::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ar_SY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"كانون الثاني"_s,
		u"شباط"_s,
		u"آذار"_s,
		u"نيسان"_s,
		u"أيار"_s,
		u"حزيران"_s,
		u"تموز"_s,
		u"آب"_s,
		u"أيلول"_s,
		u"تشرين الأول"_s,
		u"تشرين الثاني"_s,
		u"كانون الأول"_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ك"_s,
				u"ش"_s,
				u"آ"_s,
				u"ن"_s,
				u"أ"_s,
				u"ح"_s,
				u"ت"_s,
				u"آ"_s,
				u"أ"_s,
				u"ت"_s,
				u"ت"_s,
				u"ك"_s,
				""_s
			}))
		})
	});
}

JavaTimeSupplementary_ar_SY::JavaTimeSupplementary_ar_SY() {
}

$Class* JavaTimeSupplementary_ar_SY::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ar_SY, name, initialize, &_JavaTimeSupplementary_ar_SY_ClassInfo_, allocate$JavaTimeSupplementary_ar_SY);
	return class$;
}

$Class* JavaTimeSupplementary_ar_SY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun