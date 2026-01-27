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

$MethodInfo _JavaTimeSupplementary_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_el",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_el_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_el($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_el));
}

void JavaTimeSupplementary_el::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_el::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Βουδιστικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Γρηγοριανό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Γρηγοριανό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Ισλαμικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Ισλαμικό αστικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Ιαπωνικό ημερολόγιο"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Ημερολόγιο της Δημοκρατίας της Κίνας"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"π.μ./μ.μ."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"περίοδος"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ώρα"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"λεπτό"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"μήνας"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"δευτερόλεπτο"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"εβδομάδα"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"καθημερινή"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"έτος"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"ζώνη ώρας"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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
			$of($$new($StringArray, {
				"EEEE, d MMMM, y G"_s,
				"d MMMM, y G"_s,
				"d MMM, y G"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"προ Χριστού"_s,
				u"μετά Χριστόν"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"π.Χ."_s,
				u"μ.Χ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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

JavaTimeSupplementary_el::JavaTimeSupplementary_el() {
}

$Class* JavaTimeSupplementary_el::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_el, name, initialize, &_JavaTimeSupplementary_el_ClassInfo_, allocate$JavaTimeSupplementary_el);
	return class$;
}

$Class* JavaTimeSupplementary_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun