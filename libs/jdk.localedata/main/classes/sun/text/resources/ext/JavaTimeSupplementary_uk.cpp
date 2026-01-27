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

$MethodInfo _JavaTimeSupplementary_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_uk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_uk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_uk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_uk_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_uk($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_uk));
}

void JavaTimeSupplementary_uk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_uk::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"буддійський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"григоріанський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"григоріанський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"мусульманський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"мусульманський світський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"японський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"китайський григоріанський календар"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"частина доби"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ера"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"година"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"хвилина"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"місяць"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунда"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"тиждень"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"день тижня"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"рік"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"часовий пояс"_s)
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
				u"до нашої ери"_s,
				u"нашої ери"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"до н.е."_s,
				u"після н.е."_s
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_uk::JavaTimeSupplementary_uk() {
}

$Class* JavaTimeSupplementary_uk::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_uk, name, initialize, &_JavaTimeSupplementary_uk_ClassInfo_, allocate$JavaTimeSupplementary_uk);
	return class$;
}

$Class* JavaTimeSupplementary_uk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun