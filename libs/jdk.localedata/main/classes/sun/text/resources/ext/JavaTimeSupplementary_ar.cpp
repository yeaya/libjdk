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

$MethodInfo _JavaTimeSupplementary_ar_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ar, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ar, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ar",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ar_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ar($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ar));
}

void JavaTimeSupplementary_ar::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ar::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of(u"التقويم البوذي"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"التقويم الميلادي"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"التقويم الميلادي"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"التقويم الهجري"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"التقويم الإسلامي المدني"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"التقويم الإسلامي (أم القرى)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"التقويم الياباني"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"تقويم مينجو"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ص/م"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"العصر"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"الساعات"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"الدقائق"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"الشهر"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"الثواني"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"الأسبوع"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"اليوم"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"السنة"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"التوقيت"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE، d MMMM، y GGGG"_s,
				u"d MMMM، y GGGG"_s,
				u"d MMM، y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayNames)
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
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
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
			$of(sharedAmPmMarkers)
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
			$of("java.time.buddhist.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE، d MMMM، y G"_s,
				u"d MMMM، y G"_s,
				u"d MMM، y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"قبل الميلاد"_s,
				u"ميلادي"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"ق.م"_s,
				u"م"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE، d MMMM، y GGGG"_s,
				u"d MMMM، y GGGG"_s,
				u"dd\u200f/MM\u200f/y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayNames)
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
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
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
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of(u"جرينتش{0}"_s)
		})
	});
}

JavaTimeSupplementary_ar::JavaTimeSupplementary_ar() {
}

$Class* JavaTimeSupplementary_ar::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ar, name, initialize, &_JavaTimeSupplementary_ar_ClassInfo_, allocate$JavaTimeSupplementary_ar);
	return class$;
}

$Class* JavaTimeSupplementary_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun