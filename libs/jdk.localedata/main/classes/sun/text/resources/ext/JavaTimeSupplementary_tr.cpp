#include <sun/text/resources/ext/JavaTimeSupplementary_tr.h>

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

$MethodInfo _JavaTimeSupplementary_tr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_tr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_tr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_tr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_tr",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_tr_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_tr($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_tr));
}

void JavaTimeSupplementary_tr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_tr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"Ç1"_s,
		u"Ç2"_s,
		u"Ç3"_s,
		u"Ç4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. çeyrek"_s,
		u"2. çeyrek"_s,
		u"3. çeyrek"_s,
		u"4. çeyrek"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		"1."_s,
		"2."_s,
		"3."_s,
		"4."_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"ÖÖ"_s,
		u"ÖS"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG d MMMM y EEEE"_s,
		"GGGG d MMMM y"_s,
		"GGGG d MMM y"_s,
		"G d.MM.y"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"Paz"_s,
		"Pzt"_s,
		"Sal"_s,
		u"Çar"_s,
		"Per"_s,
		"Cum"_s,
		"Cmt"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		"Pazar"_s,
		"Pazartesi"_s,
		u"Salı"_s,
		u"Çarşamba"_s,
		u"Perşembe"_s,
		"Cuma"_s,
		"Cumartesi"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"P"_s,
		"P"_s,
		"S"_s,
		u"Ç"_s,
		"P"_s,
		"C"_s,
		"C"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		"Hicri"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		"Muharrem"_s,
		"Safer"_s,
		u"Rebiülevvel"_s,
		u"Rebiülahir"_s,
		"Cemaziyelevvel"_s,
		"Cemaziyelahir"_s,
		"Recep"_s,
		u"Şaban"_s,
		"Ramazan"_s,
		u"Şevval"_s,
		"Zilkade"_s,
		"Zilhicce"_s,
		""_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"öö"_s,
		u"ös"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G d MMMM y EEEE"_s,
		"G d MMMM y"_s,
		"G d MMM y"_s,
		"GGGGG d.MM.y"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		"Before R.O.C."_s,
		"Minguo"_s
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
			$of("QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of("Budist Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of("Miladi Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of("Miladi Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of("Hicri Takvim"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of("Arap Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"Hicri Takvim (Ümmü-l Kurra Takvimi)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of("Japon Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Çin Cumhuriyeti Takvimi"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ÖÖ/ÖS"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"Miladi Dönem"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("Saat"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("Dakika"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of("Ay"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("Saniye"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of("Hafta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Haftanın Günü"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"Yıl"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of("Saat Dilimi"_s)
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
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
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
			$of("islamic.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
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
				"d MMMM y G EEEE"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.MM.y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"Milattan Önce"_s,
				"Milattan Sonra"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"MÖ"_s,
				"MS"_s
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Oca"_s,
				u"Şub"_s,
				"Mar"_s,
				"Nis"_s,
				"May"_s,
				"Haz"_s,
				"Tem"_s,
				u"Ağu"_s,
				"Eyl"_s,
				"Eki"_s,
				"Kas"_s,
				"Ara"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"Ocak"_s,
				u"Şubat"_s,
				"Mart"_s,
				"Nisan"_s,
				u"Mayıs"_s,
				"Haziran"_s,
				"Temmuz"_s,
				u"Ağustos"_s,
				u"Eylül"_s,
				"Ekim"_s,
				u"Kasım"_s,
				u"Aralık"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				"O"_s,
				u"Ş"_s,
				"M"_s,
				"N"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"A"_s,
				"E"_s,
				"E"_s,
				"K"_s,
				"A"_s,
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
			$of("roc.QuarterNarrows"_s),
			$of(sharedQuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_tr::JavaTimeSupplementary_tr() {
}

$Class* JavaTimeSupplementary_tr::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_tr, name, initialize, &_JavaTimeSupplementary_tr_ClassInfo_, allocate$JavaTimeSupplementary_tr);
	return class$;
}

$Class* JavaTimeSupplementary_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun