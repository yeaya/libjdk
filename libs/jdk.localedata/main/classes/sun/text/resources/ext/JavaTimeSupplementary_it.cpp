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

$MethodInfo _JavaTimeSupplementary_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_it",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_it_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_it($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_it));
}

void JavaTimeSupplementary_it::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_it::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("Calendario buddista"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Calendario gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Calendario islamico"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("calendario civile islamico"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of("Calendario islamico (Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Calendario giapponese"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Calendario Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of("era"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("ora"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuto"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("mese"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Secondo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("settimana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("giorno della settimana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("anno"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("fuso orario"_s)
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
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
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
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
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
				"a.C."_s,
				"d.C."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"dopo Cristo"_s
			}))
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
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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

JavaTimeSupplementary_it::JavaTimeSupplementary_it() {
}

$Class* JavaTimeSupplementary_it::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_it, name, initialize, &_JavaTimeSupplementary_it_ClassInfo_, allocate$JavaTimeSupplementary_it);
	return class$;
}

$Class* JavaTimeSupplementary_it::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun