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

$MethodInfo _JavaTimeSupplementary_ga_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ga, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ga, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ga_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ga",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ga_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ga($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ga));
}

void JavaTimeSupplementary_ga::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ga::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Féilire Búdaíoch"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Féilire Ghréagóra"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Féilire Ghréagóra"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Féilire Ioslámach"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Féilire Seapánach"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Féilire Téavánach"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("a.m./p.m."_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"Ré"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Uair"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"Nóiméad"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"Mí"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Soicind"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Seachtain"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Lá na seachtaine"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("Bliain"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Crios Ama"_s)
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
				u"Roimh Chríost"_s,
				"Anno Domini"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"RC"_s,
				"AD"_s
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
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of("MAG{0}"_s)
		})
	});
}

JavaTimeSupplementary_ga::JavaTimeSupplementary_ga() {
}

$Class* JavaTimeSupplementary_ga::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ga, name, initialize, &_JavaTimeSupplementary_ga_ClassInfo_, allocate$JavaTimeSupplementary_ga);
	return class$;
}

$Class* JavaTimeSupplementary_ga::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun