#include <sun/text/resources/ext/JavaTimeSupplementary_sk.h>
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

void JavaTimeSupplementary_sk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sk::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. štvrťrok"_s,
		u"2. štvrťrok"_s,
		u"3. štvrťrok"_s,
		u"4. štvrťrok"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d. M. y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ne"_s,
		"po"_s,
		"ut"_s,
		"st"_s,
		u"št"_s,
		"pi"_s,
		"so"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"nedeľa"_s,
		"pondelok"_s,
		"utorok"_s,
		"streda"_s,
		u"štvrtok"_s,
		"piatok"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"u"_s,
		"s"_s,
		u"š"_s,
		"p"_s,
		"s"_s
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
		"EEEE, d. M. y G"_s,
		"d. M. y G"_s,
		"d. M. y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"buddhistický kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"gregoriánsky kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"gregoriánsky kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"islamský kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Islamský občiansky kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"japonský kalendár"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"čínsky republikánsky kalendár"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"časť dňa"_s
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
			u"minúta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mesiac"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"týždeň"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"deň v týždni"_s
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
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
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
				"pred Kristom"_s,
				"po Kristovi"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"pred n.l."_s,
				"n.l."_s
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"jan"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				u"máj"_s,
				u"jún"_s,
				u"júl"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"dec"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"januára"_s,
				u"februára"_s,
				"marca"_s,
				u"apríla"_s,
				u"mája"_s,
				u"júna"_s,
				u"júla"_s,
				"augusta"_s,
				"septembra"_s,
				u"októbra"_s,
				"novembra"_s,
				"decembra"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"j"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
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
		})
	});
}

JavaTimeSupplementary_sk::JavaTimeSupplementary_sk() {
}

$Class* JavaTimeSupplementary_sk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sk",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sk);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun