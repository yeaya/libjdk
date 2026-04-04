#include <sun/text/resources/ext/JavaTimeSupplementary_cs.h>
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

void JavaTimeSupplementary_cs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_cs::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. čtvrtletí"_s,
		u"2. čtvrtletí"_s,
		u"3. čtvrtletí"_s,
		u"4. čtvrtletí"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"dop."_s,
		"odp."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d. M. y GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ne"_s,
		"po"_s,
		u"út"_s,
		"st"_s,
		u"čt"_s,
		u"pá"_s,
		"so"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"neděle"_s,
		u"pondělí"_s,
		u"úterý"_s,
		u"středa"_s,
		u"čtvrtek"_s,
		u"pátek"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"N"_s,
		"P"_s,
		u"Ú"_s,
		"S"_s,
		u"Č"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d. M. y G"_s,
		"dd.MM.yy GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Před R. O. C."_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Buddhistický kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Gregoriánský kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Gregoriánský kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Muslimský kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Muslimský občanský kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Japonský kalendář"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Kalendář Čínské republiky"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"část dne"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"letopočet"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"hodina"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"měsíc"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"týden"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"den v týdnu"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"rok"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"časové pásmo"_s
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
				"EEEE, d. MMMM y G"_s,
				"d. MMMM y G"_s,
				"d. M. y G"_s,
				"dd.MM.yy GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"př. n. l."_s,
				"n. l."_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"př.Kr."_s,
				"po Kr."_s
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
				"led"_s,
				u"úno"_s,
				u"bře"_s,
				"dub"_s,
				u"kvě"_s,
				u"čvn"_s,
				u"čvc"_s,
				"srp"_s,
				u"zář"_s,
				u"říj"_s,
				"lis"_s,
				"pro"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"ledna"_s,
				u"února"_s,
				u"března"_s,
				"dubna"_s,
				u"května"_s,
				u"června"_s,
				u"července"_s,
				"srpna"_s,
				u"září"_s,
				u"října"_s,
				"listopadu"_s,
				"prosince"_s,
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
		}),
		$$new($ObjectArray, {
			"timezone.hourFormat"_s,
			"+H:mm;-H:mm"_s
		})
	});
}

JavaTimeSupplementary_cs::JavaTimeSupplementary_cs() {
}

$Class* JavaTimeSupplementary_cs::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_cs, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_cs, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_cs",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_cs, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_cs);
	});
	return class$;
}

$Class* JavaTimeSupplementary_cs::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun