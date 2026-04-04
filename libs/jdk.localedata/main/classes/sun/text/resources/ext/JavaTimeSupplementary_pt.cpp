#include <sun/text/resources/ext/JavaTimeSupplementary_pt.h>
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

void JavaTimeSupplementary_pt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_pt::getContents() {
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
		"EEEE, d \'de\' MMMM \'de\' y GGGG"_s,
		"d \'de\' MMMM \'de\' y GGGG"_s,
		"dd/MM/y GGGG"_s,
		"dd/MM/yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"dom"_s,
		"seg"_s,
		"ter"_s,
		"qua"_s,
		"qui"_s,
		"sex"_s,
		u"sáb"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"domingo"_s,
		"segunda-feira"_s,
		u"terça-feira"_s,
		"quarta-feira"_s,
		"quinta-feira"_s,
		"sexta-feira"_s,
		u"sábado"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"S"_s,
		"T"_s,
		"Q"_s,
		"Q"_s,
		"S"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d \'de\' MMMM \'de\' y G"_s,
		"d \'de\' MMMM \'de\' y G"_s,
		"dd/MM/y G"_s,
		"dd/MM/yy GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Antes de R.O.C."_s,
		"R.O.C."_s
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
			u"Calendário Budista"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Calendário Gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Calendário Gregoriano"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Calendário Islâmico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Calendário Civil Islâmico"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Calendário Japonês"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Calendário da República da China"_s
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
			"hora"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuto"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"mês"_s
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
			"dia da semana"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"ano"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"fuso horário"_s
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
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"antes de Cristo"_s,
				"depois de Cristo"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"a.C."_s,
				"d.C."_s
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
				"jan"_s,
				"fev"_s,
				"mar"_s,
				"abr"_s,
				"mai"_s,
				"jun"_s,
				"jul"_s,
				"ago"_s,
				"set"_s,
				"out"_s,
				"nov"_s,
				"dez"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"janeiro"_s,
				"fevereiro"_s,
				u"março"_s,
				"abril"_s,
				"maio"_s,
				"junho"_s,
				"julho"_s,
				"agosto"_s,
				"setembro"_s,
				"outubro"_s,
				"novembro"_s,
				"dezembro"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
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

JavaTimeSupplementary_pt::JavaTimeSupplementary_pt() {
}

$Class* JavaTimeSupplementary_pt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_pt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_pt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_pt",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_pt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_pt);
	});
	return class$;
}

$Class* JavaTimeSupplementary_pt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun