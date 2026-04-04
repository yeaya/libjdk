#include <sun/text/resources/ext/JavaTimeSupplementary_es_DO.h>
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

void JavaTimeSupplementary_es_DO::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_es_DO::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG y MMMM d, EEEE"_s,
		"GGGG y MMMM d"_s,
		"dd/MM/y GGGG"_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"d"_s,
		"l"_s,
		"m"_s,
		"m"_s,
		"j"_s,
		"v"_s,
		"s"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G y MMMM d, EEEE"_s,
		"G y MMMM d"_s,
		"dd/MM/y G"_s,
		"GGGGG y-MM-dd"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a.m./p.m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"Era"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"Minuto"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"Mes"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Segundo"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Semana"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Día de la semana"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Año"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Zona horaria"_s
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
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
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
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
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
			"roc.DayNarrows"_s,
			sharedDayNarrows
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
				"sep."_s,
				"oct."_s,
				"nov."_s,
				"dic."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"e"_s,
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
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		})
	});
}

JavaTimeSupplementary_es_DO::JavaTimeSupplementary_es_DO() {
}

$Class* JavaTimeSupplementary_es_DO::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_es_DO, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_es_DO, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_es_DO",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_es_DO, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_es_DO);
	});
	return class$;
}

$Class* JavaTimeSupplementary_es_DO::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun