#include <sun/text/resources/ext/JavaTimeSupplementary_bg.h>

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

$MethodInfo _JavaTimeSupplementary_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_bg",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_bg_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_bg($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_bg));
}

void JavaTimeSupplementary_bg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_bg::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1. трим."_s,
		u"2. трим."_s,
		u"3. трим."_s,
		u"4. трим."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. тримесечие"_s,
		u"2. тримесечие"_s,
		u"3. тримесечие"_s,
		u"4. тримесечие"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"пр.об."_s,
		u"сл.об."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'г\'. GGGG"_s,
		u"d MMMM y \'г\'. GGGG"_s,
		u"d.MM.y \'г\'. GGGG"_s,
		"d.MM.yy GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"нд"_s,
		u"пн"_s,
		u"вт"_s,
		u"ср"_s,
		u"чт"_s,
		u"пт"_s,
		u"сб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"неделя"_s,
		u"понеделник"_s,
		u"вторник"_s,
		u"сряда"_s,
		u"четвъртък"_s,
		u"петък"_s,
		u"събота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"в"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'г\'. G"_s,
		u"d MMMM y \'г\'. G"_s,
		u"d.MM.y \'г\'. G"_s,
		"d.MM.yy G"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"будистки календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"григориански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"григориански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"ислямски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Ислямски цивилен календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"японски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"календар на Република Китай"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"пр.об./сл.об."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ера"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"час"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"минута"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"месец"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунда"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"седмица"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"ден от седмицата"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"година"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"часова зона"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"мухарам"_s,
				u"сафар"_s,
				u"раби-1"_s,
				u"раби-2"_s,
				u"джумада-1"_s,
				u"джумада-2"_s,
				u"раджаб"_s,
				u"шабан"_s,
				u"рамазан"_s,
				u"Шавал"_s,
				u"Дхул-Каада"_s,
				u"Дхул-хиджа"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"преди Христа"_s,
				u"след Христа"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"пр.н.е."_s,
				u"н.е."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"яну"_s,
				u"фев"_s,
				u"март"_s,
				u"апр"_s,
				u"май"_s,
				u"юни"_s,
				u"юли"_s,
				u"авг"_s,
				u"сеп"_s,
				u"окт"_s,
				u"ное"_s,
				u"дек"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"януари"_s,
				u"февруари"_s,
				u"март"_s,
				u"април"_s,
				u"май"_s,
				u"юни"_s,
				u"юли"_s,
				u"август"_s,
				u"септември"_s,
				u"октомври"_s,
				u"ноември"_s,
				u"декември"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"я"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ю"_s,
				u"ю"_s,
				u"а"_s,
				u"с"_s,
				u"о"_s,
				u"н"_s,
				u"д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"Гринуич{0}"_s)
		})
	});
}

JavaTimeSupplementary_bg::JavaTimeSupplementary_bg() {
}

$Class* JavaTimeSupplementary_bg::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_bg, name, initialize, &_JavaTimeSupplementary_bg_ClassInfo_, allocate$JavaTimeSupplementary_bg);
	return class$;
}

$Class* JavaTimeSupplementary_bg::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun