#include <sun/text/resources/ext/JavaTimeSupplementary_mt.h>
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

void JavaTimeSupplementary_mt::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_mt::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"1el kwart"_s,
		"2ni kwart"_s,
		"3et kwart"_s,
		u"4ba’ kwart"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, d \'ta\'’ MMMM y GGGG"_s,
		u"d \'ta\'’ MMMM y GGGG"_s,
		"dd MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"Ħad"_s,
		"Tne"_s,
		"Tli"_s,
		"Erb"_s,
		u"Ħam"_s,
		u"Ġim"_s,
		"Sib"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"Il-Ħadd"_s,
		"It-Tnejn"_s,
		"It-Tlieta"_s,
		u"L-Erbgħa"_s,
		u"Il-Ħamis"_s,
		u"Il-Ġimgħa"_s,
		"Is-Sibt"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"Ħ"_s,
		"T"_s,
		"T"_s,
		"E"_s,
		u"Ħ"_s,
		u"Ġ"_s,
		"S"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, d \'ta\'’ MMMM y G"_s,
		u"d \'ta\'’ MMMM y G"_s,
		"dd MMM y G"_s,
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
			"Kalendarju Buddist"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Kalendarju Gregorjan"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Kalendarju Gregorjan"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Kalendarju Iżlamiku"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Kalendarju Islamiku-Ċivili"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Kalendarju Ġappuniż"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"Epoka"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"Siegħa"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"Minuta"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"Xahar"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Sekonda"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"Ġimgħa"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Jum tal-Ġimgħa"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"Sena"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"Żona"_s
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
				"Qabel Kristu"_s,
				"Wara Kristu"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"QK"_s,
				"WK"_s
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
				"Jan"_s,
				"Fra"_s,
				"Mar"_s,
				"Apr"_s,
				"Mej"_s,
				u"Ġun"_s,
				"Lul"_s,
				"Aww"_s,
				"Set"_s,
				"Ott"_s,
				"Nov"_s,
				u"Diċ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"Jannar"_s,
				"Frar"_s,
				"Marzu"_s,
				"April"_s,
				"Mejju"_s,
				u"Ġunju"_s,
				"Lulju"_s,
				"Awwissu"_s,
				"Settembru"_s,
				"Ottubru"_s,
				"Novembru"_s,
				u"Diċembru"_s,
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
				u"Ġ"_s,
				"L"_s,
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
		})
	});
}

JavaTimeSupplementary_mt::JavaTimeSupplementary_mt() {
}

$Class* JavaTimeSupplementary_mt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_mt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_mt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_mt",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_mt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_mt);
	});
	return class$;
}

$Class* JavaTimeSupplementary_mt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun