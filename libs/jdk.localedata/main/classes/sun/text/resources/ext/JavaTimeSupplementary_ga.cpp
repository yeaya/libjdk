#include <sun/text/resources/ext/JavaTimeSupplementary_ga.h>
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

void JavaTimeSupplementary_ga::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ga::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"R1"_s,
		"R2"_s,
		"R3"_s,
		"R4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1ú ráithe"_s,
		u"2ú ráithe"_s,
		u"3ú ráithe"_s,
		u"4ú ráithe"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Domh"_s,
		"Luan"_s,
		u"Máirt"_s,
		u"Céad"_s,
		u"Déar"_s,
		"Aoine"_s,
		"Sath"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"Dé Domhnaigh"_s,
		u"Dé Luain"_s,
		u"Dé Máirt"_s,
		u"Dé Céadaoin"_s,
		u"Déardaoin"_s,
		u"Dé hAoine"_s,
		u"Dé Sathairn"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"C"_s,
		"D"_s,
		"A"_s,
		"S"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
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
			u"Féilire Búdaíoch"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Féilire Ghréagóra"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Féilire Ghréagóra"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Féilire Ioslámach"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Féilire Seapánach"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Féilire Téavánach"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"a.m./p.m."_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"Ré"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Uair"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"Nóiméad"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"Mí"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Soicind"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Seachtain"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Lá na seachtaine"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"Bliain"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Crios Ama"_s
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
				u"Roimh Chríost"_s,
				"Anno Domini"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"RC"_s,
				"AD"_s
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
				"Ean"_s,
				"Feabh"_s,
				u"Márta"_s,
				"Aib"_s,
				"Beal"_s,
				"Meith"_s,
				u"Iúil"_s,
				u"Lún"_s,
				u"MFómh"_s,
				u"DFómh"_s,
				"Samh"_s,
				"Noll"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"Eanáir"_s,
				"Feabhra"_s,
				u"Márta"_s,
				u"Aibreán"_s,
				"Bealtaine"_s,
				"Meitheamh"_s,
				u"Iúil"_s,
				u"Lúnasa"_s,
				u"Meán Fómhair"_s,
				u"Deireadh Fómhair"_s,
				"Samhain"_s,
				"Nollaig"_s,
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
				"B"_s,
				"M"_s,
				"I"_s,
				"L"_s,
				"M"_s,
				"D"_s,
				"S"_s,
				"N"_s,
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
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			"MAG{0}"_s
		})
	});
}

JavaTimeSupplementary_ga::JavaTimeSupplementary_ga() {
}

$Class* JavaTimeSupplementary_ga::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ga, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ga, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ga",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ga, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ga);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ga::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun