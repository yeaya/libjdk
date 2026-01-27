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

$MethodInfo _JavaTimeSupplementary_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ru, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ru, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ru",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ru_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ru($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ru));
}

void JavaTimeSupplementary_ru::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ru::getContents() {
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"буддийский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"григорианский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"григорианский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"исламский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Исламский гражданский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"исламский календарь (Умм аль-Кура)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"японский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"китайский календарь"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ДП/ПП"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"эра"_s)
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
			$of(u"месяц"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунда"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"неделя"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"день недели"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"год"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"часовой пояс"_s)
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
			$of(sharedDayNarrows)
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
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
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
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
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
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				u"от Рождества Христова"_s,
				u"Эпоха Мэйдзи"_s,
				u"Эпоха Тайсьо"_s,
				u"Сьова"_s,
				u"Эпоха Хэйсэй"_s,
				u"Рэйва"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"н. э."_s,
				u"Эпоха Мэйдзи"_s,
				u"Эпоха Тайсьо"_s,
				u"Сьова"_s,
				u"Эпоха Хэйсэй"_s,
				u"Рэйва"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"до Рождества Христова"_s,
				u"от Рождества Христова"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"до н.э."_s,
				u"н.э."_s
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
			$of(sharedDayNarrows)
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
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_ru::JavaTimeSupplementary_ru() {
}

$Class* JavaTimeSupplementary_ru::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ru, name, initialize, &_JavaTimeSupplementary_ru_ClassInfo_, allocate$JavaTimeSupplementary_ru);
	return class$;
}

$Class* JavaTimeSupplementary_ru::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun