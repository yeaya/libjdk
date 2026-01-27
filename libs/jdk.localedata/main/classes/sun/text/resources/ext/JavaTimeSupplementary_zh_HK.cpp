#include <sun/text/resources/ext/JavaTimeSupplementary_zh_HK.h>

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

$MethodInfo _JavaTimeSupplementary_zh_HK_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh_HK, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh_HK, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_HK_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh_HK",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_HK_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh_HK($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh_HK));
}

void JavaTimeSupplementary_zh_HK::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh_HK::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"Gy年M月d日EEEE"_s,
		u"Gy年M月d日"_s,
		u"Gy年M月d日"_s,
		"Gy/M/d"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"公元前"_s,
		u"公元"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"星期"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"星期幾"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		})
	});
}

JavaTimeSupplementary_zh_HK::JavaTimeSupplementary_zh_HK() {
}

$Class* JavaTimeSupplementary_zh_HK::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh_HK, name, initialize, &_JavaTimeSupplementary_zh_HK_ClassInfo_, allocate$JavaTimeSupplementary_zh_HK);
	return class$;
}

$Class* JavaTimeSupplementary_zh_HK::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun