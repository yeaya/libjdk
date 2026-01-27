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

$MethodInfo _JavaTimeSupplementary_pt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_pt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_pt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_pt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_pt",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_pt_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_pt($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_pt));
}

void JavaTimeSupplementary_pt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_pt::getContents() {
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Calendário Budista"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Calendário Gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Calendário Gregoriano"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Calendário Islâmico"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Calendário Civil Islâmico"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Calendário Japonês"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Calendário da República da China"_s)
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
			$of("hora"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuto"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"mês"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("segundo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("semana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("dia da semana"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("ano"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"fuso horário"_s)
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
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"antes de Cristo"_s,
				"depois de Cristo"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"a.C."_s,
				"d.C."_s
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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

JavaTimeSupplementary_pt::JavaTimeSupplementary_pt() {
}

$Class* JavaTimeSupplementary_pt::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_pt, name, initialize, &_JavaTimeSupplementary_pt_ClassInfo_, allocate$JavaTimeSupplementary_pt);
	return class$;
}

$Class* JavaTimeSupplementary_pt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun