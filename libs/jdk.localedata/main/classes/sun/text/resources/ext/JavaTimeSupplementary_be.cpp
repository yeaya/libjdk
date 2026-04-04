#include <sun/text/resources/ext/JavaTimeSupplementary_be.h>
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

void JavaTimeSupplementary_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_be::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1-шы кв."_s,
		u"2-гі кв."_s,
		u"3-ці кв."_s,
		u"4-ты кв."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1-шы квартал"_s,
		u"2-гі квартал"_s,
		u"3-ці квартал"_s,
		u"4-ты квартал"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"да паўдня"_s,
		u"пасля паўдня"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"нд"_s,
		u"пн"_s,
		u"аў"_s,
		u"ср"_s,
		u"чц"_s,
		u"пт"_s,
		u"сб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"нядзеля"_s,
		u"панядзелак"_s,
		u"аўторак"_s,
		u"серада"_s,
		u"чацвер"_s,
		u"пятніца"_s,
		u"субота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"а"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedAbbreviatedAmPmMarkers, $new($StringArray, {
		u"раніцы"_s,
		u"вечара"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"ран."_s,
		u"веч."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
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
			u"будыйскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"грыгарыянскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"грыгарыянскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"мусульманскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"мусульманскі свецкі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"японскі каляндар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"каляндар Міньго"_s
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
			u"гадзіна"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"хвіліна"_s
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
			u"тыдзень"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"дзень тыдня"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"год"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"часавы пояс"_s
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
			sharedAbbreviatedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.M.yy"_s
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
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"да нашай эры"_s,
				u"нашай эры"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"да н.е."_s,
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
				u"сту"_s,
				u"лют"_s,
				u"сак"_s,
				u"кра"_s,
				u"мая"_s,
				u"чэр"_s,
				u"ліп"_s,
				u"жні"_s,
				u"вер"_s,
				u"кас"_s,
				u"ліс"_s,
				u"сне"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"студзеня"_s,
				u"лютага"_s,
				u"сакавіка"_s,
				u"красавіка"_s,
				u"мая"_s,
				u"чэрвеня"_s,
				u"ліпеня"_s,
				u"жніўня"_s,
				u"верасня"_s,
				u"кастрычніка"_s,
				u"лістапада"_s,
				u"снежня"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"с"_s,
				u"л"_s,
				u"с"_s,
				u"к"_s,
				u"м"_s,
				u"ч"_s,
				u"л"_s,
				u"ж"_s,
				u"в"_s,
				u"к"_s,
				u"л"_s,
				u"с"_s,
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
			sharedAbbreviatedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			"+HH.mm;-HH.mm"_s
		})
	});
}

JavaTimeSupplementary_be::JavaTimeSupplementary_be() {
}

$Class* JavaTimeSupplementary_be::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_be, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_be, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_be",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_be, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_be);
	});
	return class$;
}

$Class* JavaTimeSupplementary_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun