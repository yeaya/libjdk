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

void JavaTimeSupplementary_tr::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_tr::getContents() {
	$useLocalObjectStack();
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
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"Budist Takvimi"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			"Miladi Takvim"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			"Miladi Takvim"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"Hicri Takvim"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"Arap Takvimi"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"Hicri Takvim (Ümmü-l Kurra Takvimi)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"Japon Takvimi"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Çin Cumhuriyeti Takvimi"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ÖÖ/ÖS"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"Miladi Dönem"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"Saat"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"Dakika"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"Ay"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"Saniye"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"Hafta"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Haftanın Günü"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Yıl"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"Saat Dilimi"_s
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
			"islamic.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			sharedMonthNames
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
			"islamic.QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.short.Eras"_s,
			sharedEras
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
				"d MMMM y G EEEE"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.MM.y G"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"Milattan Önce"_s,
				"Milattan Sonra"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"MÖ"_s,
				"MS"_s
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
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
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
			"roc.QuarterNarrows"_s,
			sharedQuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		})
	});
}

JavaTimeSupplementary_tr::JavaTimeSupplementary_tr() {
}

$Class* JavaTimeSupplementary_tr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_tr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_tr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_tr",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_tr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_tr);
	});
	return class$;
}

$Class* JavaTimeSupplementary_tr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun