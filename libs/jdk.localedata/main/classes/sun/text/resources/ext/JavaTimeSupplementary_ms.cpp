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

$MethodInfo _JavaTimeSupplementary_ms_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ms, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ms, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ms_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ms",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ms_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ms($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ms));
}

void JavaTimeSupplementary_ms::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ms::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("Kalendar Buddha"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Kalendar Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Kalendar Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Kalendar Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Kalendar Sivil Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Kalendar Jepun"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kalendar Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("PG/PTG"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Jam"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Minit"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("Bulan"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Saat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Minggu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("Hari dalam Minggu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("Tahun"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Zon Waktu"_s)
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"S.M."_s,
				"TM"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				"BCE"_s,
				"CE"_s
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_ms::JavaTimeSupplementary_ms() {
}

$Class* JavaTimeSupplementary_ms::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ms, name, initialize, &_JavaTimeSupplementary_ms_ClassInfo_, allocate$JavaTimeSupplementary_ms);
	return class$;
}

$Class* JavaTimeSupplementary_ms::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun