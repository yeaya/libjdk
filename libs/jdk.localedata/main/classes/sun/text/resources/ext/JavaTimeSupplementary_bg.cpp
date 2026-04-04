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

void JavaTimeSupplementary_bg::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_bg::getContents() {
	$useLocalObjectStack();
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
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"будистки календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"григориански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"григориански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"ислямски календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Ислямски цивилен календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"японски календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"календар на Република Китай"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"пр.об./сл.об."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ера"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"час"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"минута"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"месец"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунда"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"седмица"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"ден от седмицата"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"година"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"часова зона"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"преди Христа"_s,
				u"след Христа"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"пр.н.е."_s,
				u"н.е."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"Гринуич{0}"_s
		})
	});
}

JavaTimeSupplementary_bg::JavaTimeSupplementary_bg() {
}

$Class* JavaTimeSupplementary_bg::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_bg, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_bg, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_bg",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_bg, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_bg);
	});
	return class$;
}

$Class* JavaTimeSupplementary_bg::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun