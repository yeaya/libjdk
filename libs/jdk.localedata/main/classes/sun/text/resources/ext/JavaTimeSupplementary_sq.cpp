#include <sun/text/resources/ext/JavaTimeSupplementary_sq.h>
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

void JavaTimeSupplementary_sq::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_sq::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"tremujori I"_s,
		"tremujori II"_s,
		"tremujori III"_s,
		"tremujori IV"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"tremujori i parë"_s,
		u"tremujori i dytë"_s,
		u"tremujori i tretë"_s,
		u"tremujori i katërt"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"e paradites"_s,
		"e pasdites"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Die"_s,
		u"Hën"_s,
		"Mar"_s,
		u"Mër"_s,
		"Enj"_s,
		"Pre"_s,
		"Sht"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"e diel"_s,
		u"e hënë"_s,
		u"e martë"_s,
		u"e mërkurë"_s,
		"e enjte"_s,
		"e premte"_s,
		u"e shtunë"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"H"_s,
		"M"_s,
		"M"_s,
		"E"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a, zzzz"_s,
		"h:mm:ss a, z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMM y G"_s,
		"d MMM y G"_s,
		"d MMM y G"_s,
		"d.M.y GGGGG"_s
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
			"kalendar budist"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"kalendar gregorian"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"kalendar gregorian"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"kalendar islamik"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Kalendari Islamik (tabelor, periudha civile)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"Kalendari Islamik (Um al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"kalendar japonez"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"kalendar minguo (kinez)"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"paradite/pasdite"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"erë"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"orë"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"minutë"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"muaj"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"sekondë"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"javë"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"ditë e javës"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"vit"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"brezi orar"_s
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
				u"para erës së re"_s,
				u"erës së re"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"p.e.r."_s,
				"n.e.r."_s
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
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
				"Jan"_s,
				"Shk"_s,
				"Mar"_s,
				"Pri"_s,
				"Maj"_s,
				"Qer"_s,
				"Kor"_s,
				"Gsh"_s,
				"Sht"_s,
				"Tet"_s,
				u"Nën"_s,
				"Dhj"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"janar"_s,
				"shkurt"_s,
				"mars"_s,
				"prill"_s,
				"maj"_s,
				"qershor"_s,
				"korrik"_s,
				"gusht"_s,
				"shtator"_s,
				"tetor"_s,
				u"nëntor"_s,
				"dhjetor"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"S"_s,
				"M"_s,
				"P"_s,
				"M"_s,
				"Q"_s,
				"K"_s,
				"G"_s,
				"S"_s,
				"T"_s,
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
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"Ora e Grenuiçit: {0}"_s
		})
	});
}

JavaTimeSupplementary_sq::JavaTimeSupplementary_sq() {
}

$Class* JavaTimeSupplementary_sq::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_sq, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_sq, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_sq",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_sq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_sq);
	});
	return class$;
}

$Class* JavaTimeSupplementary_sq::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun