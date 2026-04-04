#include <sun/text/resources/ext/JavaTimeSupplementary_el.h>
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

void JavaTimeSupplementary_el::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_el::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"Τ1"_s,
		u"Τ2"_s,
		u"Τ3"_s,
		u"Τ4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1ο τρίμηνο"_s,
		u"2ο τρίμηνο"_s,
		u"3ο τρίμηνο"_s,
		u"4ο τρίμηνο"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"π.μ."_s,
		u"μ.μ."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"Κυρ"_s,
		u"Δευ"_s,
		u"Τρί"_s,
		u"Τετ"_s,
		u"Πέμ"_s,
		u"Παρ"_s,
		u"Σάβ"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"Κυριακή"_s,
		u"Δευτέρα"_s,
		u"Τρίτη"_s,
		u"Τετάρτη"_s,
		u"Πέμπτη"_s,
		u"Παρασκευή"_s,
		u"Σάββατο"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"Κ"_s,
		u"Δ"_s,
		u"Τ"_s,
		u"Τ"_s,
		u"Π"_s,
		u"Π"_s,
		u"Σ"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"πμ"_s,
		u"μμ"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Πριν R.O.C."_s,
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
			u"Βουδιστικό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Γρηγοριανό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Γρηγοριανό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Ισλαμικό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Ισλαμικό αστικό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Ιαπωνικό ημερολόγιο"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Ημερολόγιο της Δημοκρατίας της Κίνας"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"π.μ./μ.μ."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"περίοδος"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ώρα"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"λεπτό"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"μήνας"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"δευτερόλεπτο"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"εβδομάδα"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"καθημερινή"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"έτος"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"ζώνη ώρας"_s
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
			$$new($StringArray, {
				"EEEE, d MMMM, y G"_s,
				"d MMMM, y G"_s,
				"d MMM, y G"_s,
				"d/M/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"προ Χριστού"_s,
				u"μετά Χριστόν"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"π.Χ."_s,
				u"μ.Χ."_s
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
				u"Ιαν"_s,
				u"Φεβ"_s,
				u"Μαρ"_s,
				u"Απρ"_s,
				u"Μαΐ"_s,
				u"Ιουν"_s,
				u"Ιουλ"_s,
				u"Αυγ"_s,
				u"Σεπ"_s,
				u"Οκτ"_s,
				u"Νοε"_s,
				u"Δεκ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"Ιανουαρίου"_s,
				u"Φεβρουαρίου"_s,
				u"Μαρτίου"_s,
				u"Απριλίου"_s,
				u"Μαΐου"_s,
				u"Ιουνίου"_s,
				u"Ιουλίου"_s,
				u"Αυγούστου"_s,
				u"Σεπτεμβρίου"_s,
				u"Οκτωβρίου"_s,
				u"Νοεμβρίου"_s,
				u"Δεκεμβρίου"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"Ι"_s,
				u"Φ"_s,
				u"Μ"_s,
				u"Α"_s,
				u"Μ"_s,
				u"Ι"_s,
				u"Ι"_s,
				u"Α"_s,
				u"Σ"_s,
				u"Ο"_s,
				u"Ν"_s,
				u"Δ"_s,
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

JavaTimeSupplementary_el::JavaTimeSupplementary_el() {
}

$Class* JavaTimeSupplementary_el::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_el, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_el, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_el",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_el, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_el);
	});
	return class$;
}

$Class* JavaTimeSupplementary_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun