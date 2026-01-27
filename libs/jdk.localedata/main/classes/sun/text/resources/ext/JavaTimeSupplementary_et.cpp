#include <sun/text/resources/ext/JavaTimeSupplementary_et.h>

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

$MethodInfo _JavaTimeSupplementary_et_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_et, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_et, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_et_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_et",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_et_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_et($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_et));
}

void JavaTimeSupplementary_et::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_et::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1. kvartal"_s,
		"2. kvartal"_s,
		"3. kvartal"_s,
		"4. kvartal"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"dd.MM.y GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"P"_s,
		"E"_s,
		"T"_s,
		"K"_s,
		"N"_s,
		"R"_s,
		"L"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"pühapäev"_s,
		u"esmaspäev"_s,
		u"teisipäev"_s,
		u"kolmapäev"_s,
		u"neljapäev"_s,
		"reede"_s,
		u"laupäev"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm.ss zzzz"_s,
		"H:mm.ss z"_s,
		"H:mm.ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"dd.MM.y G"_s,
		"dd.MM.y GGGGG"_s
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
			$of("budistlik kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Gregoriuse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Gregoriuse kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("islamikalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("islami ilmalik kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Jaapani kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Hiina Vabariigi kalender"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"enne/pärast lõunat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("ajastu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("tund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minut"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("kuu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekund"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"nädal"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"nädalapäev"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("aasta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"ajavöönd"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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
				"enne Kristust"_s,
				u"pärast Kristust"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"e.m.a."_s,
				"m.a.j."_s
			}))
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jaan"_s,
				"veebr"_s,
				u"märts"_s,
				"apr"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"aug"_s,
				"sept"_s,
				"okt"_s,
				"nov"_s,
				"dets"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"jaanuar"_s,
				"veebruar"_s,
				u"märts"_s,
				"aprill"_s,
				"mai"_s,
				"juuni"_s,
				"juuli"_s,
				"august"_s,
				"september"_s,
				"oktoober"_s,
				"november"_s,
				"detsember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"J"_s,
				"V"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of(u"+HH:mm;−HH:mm"_s)
		})
	});
}

JavaTimeSupplementary_et::JavaTimeSupplementary_et() {
}

$Class* JavaTimeSupplementary_et::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_et, name, initialize, &_JavaTimeSupplementary_et_ClassInfo_, allocate$JavaTimeSupplementary_et);
	return class$;
}

$Class* JavaTimeSupplementary_et::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun