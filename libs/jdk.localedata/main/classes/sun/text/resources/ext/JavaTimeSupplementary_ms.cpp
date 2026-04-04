#include <sun/text/resources/ext/JavaTimeSupplementary_ms.h>
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

void JavaTimeSupplementary_ms::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ms::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"S1"_s,
		"S2"_s,
		"S3"_s,
		"S4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"Suku pertama"_s,
		"Suku Ke-2"_s,
		"Suku Ke-3"_s,
		"Suku Ke-4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"PG"_s,
		"PTG"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"dd/MM/y GGGG"_s,
		"d/MM/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Ahd"_s,
		"Isn"_s,
		"Sel"_s,
		"Rab"_s,
		"Kha"_s,
		"Jum"_s,
		"Sab"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"Ahad"_s,
		"Isnin"_s,
		"Selasa"_s,
		"Rabu"_s,
		"Khamis"_s,
		"Jumaat"_s,
		"Sabtu"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"A"_s,
		"I"_s,
		"S"_s,
		"R"_s,
		"K"_s,
		"J"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"dd/MM/y G"_s,
		"d/MM/y GGGGG"_s
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
			"Kalendar Buddha"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Kalendar Gregory"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Kalendar Gregory"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Kalendar Islam"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Kalendar Sivil Islam"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Kalendar Jepun"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			"Kalendar Minguo"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"PG/PTG"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Jam"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"Minit"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"Bulan"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Saat"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Minggu"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"Hari dalam Minggu"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"Tahun"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Zon Waktu"_s
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
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				"S.M."_s,
				"TM"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				"BCE"_s,
				"CE"_s
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
				"Feb"_s,
				"Mac"_s,
				"Apr"_s,
				"Mei"_s,
				"Jun"_s,
				"Jul"_s,
				"Ogo"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dis"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				"Januari"_s,
				"Februari"_s,
				"Mac"_s,
				"April"_s,
				"Mei"_s,
				"Jun"_s,
				"Julai"_s,
				"Ogos"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Disember"_s,
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
				"J"_s,
				"J"_s,
				"O"_s,
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
			sharedNarrowAmPmMarkers
		})
	});
}

JavaTimeSupplementary_ms::JavaTimeSupplementary_ms() {
}

$Class* JavaTimeSupplementary_ms::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ms, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ms, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ms",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ms, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ms);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ms::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun