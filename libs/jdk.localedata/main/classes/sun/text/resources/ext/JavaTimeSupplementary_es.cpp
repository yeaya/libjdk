#include <sun/text/resources/ext/JavaTimeSupplementary_es.h>
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

void JavaTimeSupplementary_es::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_es::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"T1"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1.er trimestre"_s,
		u"2.º trimestre"_s,
		"3.er trimestre"_s,
		u"4.º trimestre"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a. m."_s,
		"p. m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y GGGG"_s,
		"d \'de\' MMMM \'de\' y GGGG"_s,
		"d/M/y GGGG"_s,
		"d/M/yy GGGG"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dom."_s,
		"lun."_s,
		"mar."_s,
		u"mié."_s,
		"jue."_s,
		"vie."_s,
		u"sáb."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"domingo"_s,
		"lunes"_s,
		"martes"_s,
		u"miércoles"_s,
		"jueves"_s,
		"viernes"_s,
		u"sábado"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"X"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss (zzzz)"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y G"_s,
		"d \'de\' MMMM \'de\' y G"_s,
		"d/M/y G"_s,
		"d/M/yy G"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"antes de R.O.C."_s,
		""_s
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
			"calendario budista"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"calendario gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"calendario gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"calendario islámico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"calendario civil islámico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"calendario japonés"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"calendario de la República de China"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a. m./p. m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"hora"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuto"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mes"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"segundo"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"semana"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"día de la semana"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"año"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"zona horaria"_s
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
			$$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y G"_s,
				"d \'de\' MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"dd/MM/yy GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"antes de Cristo"_s,
				u"después de Cristo"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"antes de Cristo"_s,
				u"anno Dómini"_s
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
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"ene."_s,
				"feb."_s,
				"mar."_s,
				"abr."_s,
				"may."_s,
				"jun."_s,
				"jul."_s,
				"ago."_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				"dic."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"enero"_s,
				"febrero"_s,
				"marzo"_s,
				"abril"_s,
				"mayo"_s,
				"junio"_s,
				"julio"_s,
				"agosto"_s,
				"septiembre"_s,
				"octubre"_s,
				"noviembre"_s,
				"diciembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"E"_s,
				"F"_s,
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

JavaTimeSupplementary_es::JavaTimeSupplementary_es() {
}

$Class* JavaTimeSupplementary_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_es",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_es);
	});
	return class$;
}

$Class* JavaTimeSupplementary_es::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun