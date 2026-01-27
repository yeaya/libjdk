#include <sun/text/resources/ext/JavaTimeSupplementary_id.h>

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

$MethodInfo _JavaTimeSupplementary_id_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_id, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_id, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_id_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_id",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_id_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_id($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_id));
}

void JavaTimeSupplementary_id::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_id::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"K1"_s,
		"K2"_s,
		"K3"_s,
		"K4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		"Kuartal ke-1"_s,
		"Kuartal ke-2"_s,
		"Kuartal ke-3"_s,
		"Kuartal ke-4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Min"_s,
		"Sen"_s,
		"Sel"_s,
		"Rab"_s,
		"Kam"_s,
		"Jum"_s,
		"Sab"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"Minggu"_s,
		"Senin"_s,
		"Selasa"_s,
		"Rabu"_s,
		"Kamis"_s,
		"Jumat"_s,
		"Sabtu"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"M"_s,
		"S"_s,
		"S"_s,
		"R"_s,
		"K"_s,
		"J"_s,
		"S"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"M"_s,
		"Meiji"_s,
		u"Taishō"_s,
		u"Shōwa"_s,
		"Heisei"_s,
		"Reiwa"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		"Sebelum R.O.C."_s,
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
			$of("Kalender Buddha"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Kalender Gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Kalender Gregorian"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Kalender Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Kalender Sipil Islam"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Kalender Jepang"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of("Kalendar Minguo"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Jam"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Menit"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("Bulan"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Detik"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Minggu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of("Hari dalam Seminggu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("Tahun"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Zona Waktu"_s)
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
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Muh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				"Jum. I"_s,
				"Jum. II"_s,
				"Raj."_s,
				"Sha."_s,
				"Ram."_s,
				"Syaw."_s,
				u"Dhuʻl-Q."_s,
				u"Dhuʻl-H."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				"Muharram"_s,
				"Safar"_s,
				u"Rabiʻ I"_s,
				u"Rabiʻ II"_s,
				"Jumada I"_s,
				"Jumada II"_s,
				"Rajab"_s,
				u"Sya’ban"_s,
				"Ramadhan"_s,
				"Syawal"_s,
				u"Dhuʻl-Qiʻdah"_s,
				u"Dhuʻl-Hijjah"_s,
				""_s
			}))
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
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
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				"Sebelum Masehi"_s,
				"M"_s
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
				"Jan"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"Mei"_s,
				"Jun"_s,
				"Jul"_s,
				"Agt"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Des"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"Januari"_s,
				"Februari"_s,
				"Maret"_s,
				"April"_s,
				"Mei"_s,
				"Juni"_s,
				"Juli"_s,
				"Agustus"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Desember"_s,
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
				"A"_s,
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
		})
	});
}

JavaTimeSupplementary_id::JavaTimeSupplementary_id() {
}

$Class* JavaTimeSupplementary_id::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_id, name, initialize, &_JavaTimeSupplementary_id_ClassInfo_, allocate$JavaTimeSupplementary_id);
	return class$;
}

$Class* JavaTimeSupplementary_id::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun