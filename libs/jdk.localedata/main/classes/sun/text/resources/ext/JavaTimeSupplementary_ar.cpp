#include <sun/text/resources/ext/JavaTimeSupplementary_ar.h>
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

void JavaTimeSupplementary_ar::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ar::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"الربع الأول"_s,
		u"الربع الثاني"_s,
		u"الربع الثالث"_s,
		u"الربع الرابع"_s
	}));
	$var($StringArray, sharedQuarterNarrows, $new($StringArray, {
		u"١"_s,
		u"٢"_s,
		u"٣"_s,
		u"٤"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"ص"_s,
		u"م"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"الأحد"_s,
		u"الاثنين"_s,
		u"الثلاثاء"_s,
		u"الأربعاء"_s,
		u"الخميس"_s,
		u"الجمعة"_s,
		u"السبت"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"ح"_s,
		u"ن"_s,
		u"ث"_s,
		u"ر"_s,
		u"خ"_s,
		u"ج"_s,
		u"س"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"هـ"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"محرم"_s,
		u"صفر"_s,
		u"ربيع الأول"_s,
		u"ربيع الآخر"_s,
		u"جمادى الأولى"_s,
		u"جمادى الآخرة"_s,
		u"رجب"_s,
		u"شعبان"_s,
		u"رمضان"_s,
		u"شوال"_s,
		u"ذو القعدة"_s,
		u"ذو الحجة"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE، d MMMM، y G"_s,
		u"d MMMM، y G"_s,
		u"dd\u200f/MM\u200f/y G"_s,
		u"d\u200f/M\u200f/y GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"التقويم البوذي"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"م"_s,
		u"ميجي"_s,
		u"تيشو"_s,
		u"شووا"_s,
		u"هيسي"_s,
		u"ريوا"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		"Before R.O.C."_s,
		u"جمهورية الصي"_s
	}));
	$var($StringArray, sharedMonthAbbreviations, $new($StringArray, {
		u"يناير"_s,
		u"فبراير"_s,
		u"مارس"_s,
		u"أبريل"_s,
		u"مايو"_s,
		u"يونيو"_s,
		u"يوليو"_s,
		u"أغسطس"_s,
		u"سبتمبر"_s,
		u"أكتوبر"_s,
		u"نوفمبر"_s,
		u"ديسمبر"_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterNames
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
			u"التقويم البوذي"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"التقويم الميلادي"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"التقويم الميلادي"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"التقويم الهجري"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"التقويم الإسلامي المدني"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"التقويم الإسلامي (أم القرى)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"التقويم الياباني"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"تقويم مينجو"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ص/م"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"العصر"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"الساعات"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"الدقائق"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"الشهر"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"الثواني"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"الأسبوع"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"اليوم"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"السنة"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"التوقيت"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM، y GGGG"_s,
				u"d MMMM، y GGGG"_s,
				u"d MMM، y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayNames
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
			"islamic.MonthNarrows"_s,
			$$new($StringArray, {
				u"١"_s,
				u"٢"_s,
				u"٣"_s,
				u"٤"_s,
				u"٥"_s,
				u"٦"_s,
				u"٧"_s,
				u"٨"_s,
				u"٩"_s,
				u"١٠"_s,
				u"١١"_s,
				u"١٢"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterNames
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
			"islamic.TimePatterns"_s,
			sharedTimePatterns
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
			sharedAmPmMarkers
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
			"java.time.buddhist.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM، y G"_s,
				u"d MMMM، y G"_s,
				u"d MMM، y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			sharedJavaTimeShortEras
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			sharedJavaTimeShortEras
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"قبل الميلاد"_s,
				u"ميلادي"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"ق.م"_s,
				u"م"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM، y GGGG"_s,
				u"d MMMM، y GGGG"_s,
				u"dd\u200f/MM\u200f/y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayNames
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
			sharedMonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			sharedMonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
				u"ي"_s,
				u"ف"_s,
				u"م"_s,
				u"أ"_s,
				u"و"_s,
				u"ن"_s,
				u"ل"_s,
				u"غ"_s,
				u"س"_s,
				u"ك"_s,
				u"ب"_s,
				u"د"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterNames
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
			"roc.TimePatterns"_s,
			sharedTimePatterns
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
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"جرينتش{0}"_s
		})
	});
}

JavaTimeSupplementary_ar::JavaTimeSupplementary_ar() {
}

$Class* JavaTimeSupplementary_ar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ar, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ar, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ar",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ar);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun