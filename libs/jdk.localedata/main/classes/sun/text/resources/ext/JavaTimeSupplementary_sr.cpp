#include <sun/text/resources/ext/JavaTimeSupplementary_sr.h>
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

void JavaTimeSupplementary_sr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sr::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"К1"_s,
		u"К2"_s,
		u"К3"_s,
		u"К4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"први квартал"_s,
		u"други квартал"_s,
		u"трећи квартал"_s,
		u"четврти квартал"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"пре подне"_s,
		u"по подне"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y. GGGG"_s,
		"dd. MMMM y. GGGG"_s,
		"dd.MM.y. GGGG"_s,
		"d.M.y. G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"нед"_s,
		u"пон"_s,
		u"уто"_s,
		u"сре"_s,
		u"чет"_s,
		u"пет"_s,
		u"суб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"недеља"_s,
		u"понедељак"_s,
		u"уторак"_s,
		u"среда"_s,
		u"четвртак"_s,
		u"петак"_s,
		u"субота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"у"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"АХ"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, dd. MMMM y. G"_s,
		"dd. MMMM y. G"_s,
		"dd.MM.y. G"_s,
		"d.M.y. GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"БЕ"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"Пре РК"_s,
		u"РК"_s
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
			"QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"будистички календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"грегоријански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"грегоријански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"исламски календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Исламски цивилни календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"јапански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"календар Републике Кине"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"пре подне/по подне"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ера"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"сат"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"минут"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"месец"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунд"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"недеља"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"дан у недељи"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"година"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"временска зона"_s
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
			"islamic.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"Мурахам"_s,
				u"Сафар"_s,
				u"Рабиʻ I"_s,
				u"Рабиʻ II"_s,
				u"Јумада I"_s,
				u"Јумада II"_s,
				u"Рађаб"_s,
				u"Шаʻбан"_s,
				u"Рамадан"_s,
				u"Шавал"_s,
				u"Дуʻл-Киʻда"_s,
				u"Дуʻл-хиђа"_s,
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
			"islamic.QuarterNarrows"_s,
			sharedQuarterNarrows
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
			"islamic.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.short.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, MMMM d, y G"_s,
				"MMMM d, y G"_s,
				"MMM d, y G"_s,
				"M/d/yy G"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			$$new($StringArray, {
				u"нове ере"_s,
				u"Меиђи"_s,
				u"Таишо"_s,
				u"Шова"_s,
				u"Хаисеи"_s,
				u"Реива"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			$$new($StringArray, {
				u"н. е."_s,
				u"Меиђи"_s,
				u"Таишо"_s,
				u"Шова"_s,
				u"Хаисеи"_s,
				u"Реива"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"пре нове ере"_s,
				u"нове ере"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"п. н. е."_s,
				u"н. е"_s
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
			"roc.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"јан"_s,
				u"феб"_s,
				u"мар"_s,
				u"апр"_s,
				u"мај"_s,
				u"јун"_s,
				u"јул"_s,
				u"авг"_s,
				u"сеп"_s,
				u"окт"_s,
				u"нов"_s,
				u"дец"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"јануар"_s,
				u"фебруар"_s,
				u"март"_s,
				u"април"_s,
				u"мај"_s,
				u"јун"_s,
				u"јул"_s,
				u"август"_s,
				u"септембар"_s,
				u"октобар"_s,
				u"новембар"_s,
				u"децембар"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"ј"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ј"_s,
				u"ј"_s,
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
			"roc.QuarterNarrows"_s,
			sharedQuarterNarrows
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
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			"+HHmm;-HHmm"_s
		})
	});
}

JavaTimeSupplementary_sr::JavaTimeSupplementary_sr() {
}

$Class* JavaTimeSupplementary_sr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sr",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sr);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun