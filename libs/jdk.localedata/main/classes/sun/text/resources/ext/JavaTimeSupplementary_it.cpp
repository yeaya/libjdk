#include <sun/text/resources/ext/JavaTimeSupplementary_it.h>
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

void JavaTimeSupplementary_it::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_it::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"T1"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1º trimestre"_s,
		u"2º trimestre"_s,
		u"3º trimestre"_s,
		u"4º trimestre"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"dd MMMM y GGGG"_s,
		"dd MMM y GGGG"_s,
		"dd/MM/yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dom"_s,
		"lun"_s,
		"mar"_s,
		"mer"_s,
		"gio"_s,
		"ven"_s,
		"sab"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"domenica"_s,
		u"lunedì"_s,
		u"martedì"_s,
		u"mercoledì"_s,
		u"giovedì"_s,
		u"venerdì"_s,
		"sabato"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"G"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"m."_s,
		"p."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"dd MMMM y G"_s,
		"dd MMM y G"_s,
		"dd/MM/yy GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		"EB"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Prima di R.O.C."_s,
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
			"Calendario buddista"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Calendario gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Calendario gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Calendario islamico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"calendario civile islamico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Calendario islamico (Umm al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Calendario giapponese"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Calendario Minguo"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"AM/PM"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"ora"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuto"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mese"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Secondo"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"settimana"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"giorno della settimana"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"anno"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"fuso orario"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
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
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
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
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"a.C."_s,
				"d.C."_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"dopo Cristo"_s
			})
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
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"gen"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"mag"_s,
				"giu"_s,
				"lug"_s,
				"ago"_s,
				"set"_s,
				"ott"_s,
				"nov"_s,
				"dic"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"gennaio"_s,
				"febbraio"_s,
				"marzo"_s,
				"aprile"_s,
				"maggio"_s,
				"giugno"_s,
				"luglio"_s,
				"agosto"_s,
				"settembre"_s,
				"ottobre"_s,
				"novembre"_s,
				"dicembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"G"_s,
				"L"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
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
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
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

JavaTimeSupplementary_it::JavaTimeSupplementary_it() {
}

$Class* JavaTimeSupplementary_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_it",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_it);
	});
	return class$;
}

$Class* JavaTimeSupplementary_it::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun