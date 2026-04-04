#include <sun/text/resources/ext/JavaTimeSupplementary_uk.h>
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

void JavaTimeSupplementary_uk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_uk::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1-й кв."_s,
		u"2-й кв."_s,
		u"3-й кв."_s,
		u"4-й кв."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1-й квартал"_s,
		u"2-й квартал"_s,
		u"3-й квартал"_s,
		u"4-й квартал"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"дп"_s,
		u"пп"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'р\'. GGGG"_s,
		u"d MMMM y \'р\'. GGGG"_s,
		"d MMM y GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"Нд"_s,
		u"Пн"_s,
		u"Вт"_s,
		u"Ср"_s,
		u"Чт"_s,
		u"Пт"_s,
		u"Сб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"неділя"_s,
		u"понеділок"_s,
		u"вівторок"_s,
		u"середа"_s,
		u"четвер"_s,
		u"пʼятниця"_s,
		u"субота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"Н"_s,
		u"П"_s,
		u"В"_s,
		u"С"_s,
		u"Ч"_s,
		u"П"_s,
		u"С"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'р\'. G"_s,
		u"d MMMM y \'р\'. G"_s,
		"d MMM y G"_s,
		"dd.MM.yy GGGGG"_s
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
			u"буддійський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"григоріанський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"григоріанський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"мусульманський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"мусульманський світський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"японський календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"китайський григоріанський календар"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"частина доби"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ера"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"година"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"хвилина"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"місяць"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунда"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"тиждень"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"день тижня"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"рік"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"часовий пояс"_s
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
				u"Мухаррам"_s,
				u"Сафар"_s,
				u"Рабі I"_s,
				u"Рабі II"_s,
				u"Джумада I"_s,
				u"Джумада II"_s,
				u"Раджаб"_s,
				u"Шаабан"_s,
				u"Рамадан"_s,
				u"Даввал"_s,
				u"Зу-ль-каада"_s,
				u"Зу-ль-хіджа"_s,
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
				u"до нашої ери"_s,
				u"нашої ери"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"до н.е."_s,
				u"після н.е."_s
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
				u"січ."_s,
				u"лют."_s,
				u"бер."_s,
				u"квіт."_s,
				u"трав."_s,
				u"черв."_s,
				u"лип."_s,
				u"серп."_s,
				u"вер."_s,
				u"жовт."_s,
				u"лист."_s,
				u"груд."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"січня"_s,
				u"лютого"_s,
				u"березня"_s,
				u"квітня"_s,
				u"травня"_s,
				u"червня"_s,
				u"липня"_s,
				u"серпня"_s,
				u"вересня"_s,
				u"жовтня"_s,
				u"листопада"_s,
				u"грудня"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"С"_s,
				u"Л"_s,
				u"Б"_s,
				u"К"_s,
				u"Т"_s,
				u"Ч"_s,
				u"Л"_s,
				u"С"_s,
				u"В"_s,
				u"Ж"_s,
				u"Л"_s,
				u"Г"_s,
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
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		})
	});
}

JavaTimeSupplementary_uk::JavaTimeSupplementary_uk() {
}

$Class* JavaTimeSupplementary_uk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_uk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_uk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_uk",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_uk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_uk);
	});
	return class$;
}

$Class* JavaTimeSupplementary_uk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun