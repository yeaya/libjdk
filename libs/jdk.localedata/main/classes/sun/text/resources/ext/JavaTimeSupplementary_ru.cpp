#include <sun/text/resources/ext/JavaTimeSupplementary_ru.h>
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

void JavaTimeSupplementary_ru::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ru::getContents() {
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
		u"ДП"_s,
		u"ПП"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d MMMM y \'г\'. GGGG"_s,
		u"d MMMM y \'г\'. GGGG"_s,
		u"d MMM y \'г\'. GGGG"_s,
		"dd.MM.y GGGG"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"вс"_s,
		u"пн"_s,
		u"вт"_s,
		u"ср"_s,
		u"чт"_s,
		u"пт"_s,
		u"сб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"воскресенье"_s,
		u"понедельник"_s,
		u"вторник"_s,
		u"среда"_s,
		u"четверг"_s,
		u"пятница"_s,
		u"суббота"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"Мухаррам"_s,
		u"Сафар"_s,
		u"Раби-уль-авваль"_s,
		u"Раби-уль-ахир"_s,
		u"Джумад-уль-авваль"_s,
		u"Джумад-уль-ахир"_s,
		u"Раджаб"_s,
		u"Шаабан"_s,
		u"Рамадан"_s,
		u"Шавваль"_s,
		u"Зуль-Каада"_s,
		u"Зуль-Хиджжа"_s,
		""_s
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
		u"d MMM y \'г\'. G"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
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
			u"буддийский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"григорианский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"григорианский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"исламский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Исламский гражданский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"исламский календарь (Умм аль-Кура)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"японский календарь"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"китайский календарь"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ДП/ПП"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"эра"_s
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
			u"месяц"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунда"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"неделя"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"день недели"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"год"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"часовой пояс"_s
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
			sharedDayNarrows
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
			"islamic.MonthAbbreviations"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			sharedMonthNames
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
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"BE"_s
			})
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
			"java.time.japanese.long.Eras"_s,
			$$new($StringArray, {
				u"от Рождества Христова"_s,
				u"Эпоха Мэйдзи"_s,
				u"Эпоха Тайсьо"_s,
				u"Сьова"_s,
				u"Эпоха Хэйсэй"_s,
				u"Рэйва"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			$$new($StringArray, {
				u"н. э."_s,
				u"Эпоха Мэйдзи"_s,
				u"Эпоха Тайсьо"_s,
				u"Сьова"_s,
				u"Эпоха Хэйсэй"_s,
				u"Рэйва"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"до Рождества Христова"_s,
				u"от Рождества Христова"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"до н.э."_s,
				u"н.э."_s
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
			sharedDayNarrows
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
			"roc.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"янв."_s,
				u"февр."_s,
				u"мар."_s,
				u"апр."_s,
				u"мая"_s,
				u"июн."_s,
				u"июл."_s,
				u"авг."_s,
				u"сент."_s,
				u"окт."_s,
				u"нояб."_s,
				u"дек."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"января"_s,
				u"февраля"_s,
				u"марта"_s,
				u"апреля"_s,
				u"мая"_s,
				u"июня"_s,
				u"июля"_s,
				u"августа"_s,
				u"сентября"_s,
				u"октября"_s,
				u"ноября"_s,
				u"декабря"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"Я"_s,
				u"Ф"_s,
				u"М"_s,
				u"А"_s,
				u"М"_s,
				u"И"_s,
				u"И"_s,
				u"А"_s,
				u"С"_s,
				u"О"_s,
				u"Н"_s,
				u"Д"_s,
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
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		})
	});
}

JavaTimeSupplementary_ru::JavaTimeSupplementary_ru() {
}

$Class* JavaTimeSupplementary_ru::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ru, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ru, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ru",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ru, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ru);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ru::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun