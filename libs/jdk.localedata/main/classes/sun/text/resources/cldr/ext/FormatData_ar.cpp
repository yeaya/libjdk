#include <sun/text/resources/cldr/ext/FormatData_ar.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

void FormatData_ar::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
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
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
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
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"الأحد"_s,
		u"الاثنين"_s,
		u"الثلاثاء"_s,
		u"الأربعاء"_s,
		u"الخميس"_s,
		u"الجمعة"_s,
		u"السبت"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"ح"_s,
		u"ن"_s,
		u"ث"_s,
		u"ر"_s,
		u"خ"_s,
		u"ج"_s,
		u"س"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"الربع الأول"_s,
		u"الربع الثاني"_s,
		u"الربع الثالث"_s,
		u"الربع الرابع"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"١"_s,
		u"٢"_s,
		u"٣"_s,
		u"٤"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"ص"_s,
		u"م"_s,
		""_s,
		""_s,
		u"في الصباح"_s,
		u"صباحًا"_s,
		u"ظهرًا"_s,
		u"بعد الظهر"_s,
		u"مساءً"_s,
		""_s,
		u"في المساء"_s,
		u"ليلاً"_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"ص"_s,
		u"م"_s,
		""_s,
		""_s,
		u"فجرًا"_s,
		u"صباحًا"_s,
		u"ظهرًا"_s,
		u"بعد الظهر"_s,
		u"مساءً"_s,
		""_s,
		u"منتصف الليل"_s,
		u"ليلاً"_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		u"ص"_s,
		u"م"_s,
		""_s,
		""_s,
		u"فجرًا"_s,
		u"ص"_s,
		u"ظهرًا"_s,
		u"بعد الظهر"_s,
		u"مساءً"_s,
		""_s,
		u"في المساء"_s,
		u"ليلاً"_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"ق.م"_s,
		u"م"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"التقويم البوذي"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"BE"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE، d MMMM y G"_s,
		"d MMMM y G"_s,
		u"dd\u200f/MM\u200f/y G"_s,
		u"d\u200f/M\u200f/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE، d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		u"dd\u200f/MM\u200f/y GGGG"_s,
		u"d\u200f/M\u200f/y G"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"ميلادي"_s,
		u"ميجي"_s,
		u"تيشو"_s,
		u"شووا"_s,
		u"هيسي"_s,
		u"ريوا"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"م"_s,
		u"ميجي"_s,
		u"تيشو"_s,
		u"شووا"_s,
		u"هيسي"_s,
		u"ريوا"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"Before R.O.C."_s,
		u"جمهورية الصي"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
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
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"هـ"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"التقويم الميلادي"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"السنة"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"التقويم الإسلامي (أم القرى)"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			u"غرينتش{0}"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"التقويم الإسلامي المدني"_s
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"توقيت {0} الرسمي"_s
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			"arab"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"التقويم الياباني"_s
		}),
		$$new($ObjectArray, {
			"timezone.gmtZeroFormat"_s,
			u"غرينتش"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"قبل الميلاد"_s,
				u"ميلادي"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				u"{1} في {0}"_s,
				u"{1} في {0}"_s,
				"{1}, {0}"_s,
				"{1}, {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				u"\u200e%\u200e"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"ليس رقمًا"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"الدقائق"_s
		}),
		$$new($ObjectArray, {
			"japanese.long.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"العصر"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ص/م"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			metaValue_islamic_MonthNames
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"arab.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪\u061c"_s,
				u"٠"_s,
				"#"_s,
				u"\u061c-"_s,
				u"اس"_s,
				u"؉"_s,
				u"∞"_s,
				u"ليس رقم"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"تقويم مينجو"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				u"d\u200f/M\u200f/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"الشهر"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"الثواني"_s
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
			"DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"التقويم الهجري"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"night1:00:00-01:00;morning2:06:00-12:00;afternoon1:12:00-13:00;morning1:03:00-06:00;afternoon2:13:00-18:00;evening1:18:00-24:00;night2:01:00-03:00"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"توقيت {0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{zero:0\' \'ألف one:0\' \'ألف two:0\' \'ألف few:0\' \'آلاف many:0\' \'ألف other:0\' \'ألف}"_s,
				u"{zero:00\' \'ألف one:00\' \'ألف two:00\' \'ألف few:00\' \'ألف many:00\' \'ألف other:00\' \'ألف}"_s,
				u"{zero:000\' \'ألف one:000\' \'ألف two:000\' \'ألف few:000\' \'ألف many:000\' \'ألف other:000\' \'ألف}"_s,
				u"{zero:0\' \'مليون one:0\' \'مليون two:0\' \'مليون few:0\' \'ملايين many:0\' \'مليون other:0\' \'مليون}"_s,
				u"{zero:00\' \'مليون one:00\' \'مليون two:00\' \'مليون few:00\' \'ملايين many:00\' \'مليون other:00\' \'مليون}"_s,
				u"{zero:000\' \'مليون one:000\' \'مليون two:000\' \'مليون few:000\' \'مليون many:000\' \'مليون other:000\' \'مليون}"_s,
				u"{zero:0\' \'مليار one:0\' \'مليار two:0\' \'مليار few:0\' \'مليار many:0\' \'مليار other:0\' \'مليار}"_s,
				u"{zero:00\' \'مليار one:00\' \'مليار two:00\' \'مليار few:00\' \'مليار many:00\' \'مليار other:00\' \'مليار}"_s,
				u"{zero:000\' \'مليار one:000\' \'مليار two:000\' \'مليار few:000\' \'مليار many:000\' \'مليار other:000\' \'مليار}"_s,
				u"{zero:0\' \'ترليون one:0\' \'ترليون two:0\' \'ترليون few:0\' \'ترليون many:0\' \'ترليون other:0\' \'ترليون}"_s,
				u"{zero:00\' \'ترليون one:00\' \'ترليون two:00\' \'ترليون few:00\' \'ترليون many:00\' \'ترليون other:00\' \'ترليون}"_s,
				u"{zero:000\' \'ترليون one:000\' \'ترليون two:000\' \'ترليون few:000\' \'ترليون many:000\' \'ترليون other:000\' \'ترليون}"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.roc.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"التوقيت"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"arab.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				u"d\u200f/M\u200f/y GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"اليوم"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.Eras"_s,
			metaValue_java_time_japanese_Eras
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"الأسبوع"_s
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{zero:0 ألف one:0 ألف two:0 ألف few:0 آلاف many:0 ألف other:0 ألف}"_s,
				u"{zero:00 ألف one:00 ألف two:00 ألف few:00 ألف many:00 ألف other:00 ألف}"_s,
				u"{zero:000 ألف one:000 ألف two:000 ألف few:000 ألف many:000 ألف other:000 ألف}"_s,
				u"{zero:0 مليون one:0 مليون two:0 مليون few:0 مليون many:0 مليون other:0 مليون}"_s,
				u"{zero:00 مليون one:00 مليون two:00 مليون few:00 مليون many:00 مليون other:00 مليون}"_s,
				u"{zero:000 مليون one:000 مليون two:000 مليون few:000 مليون many:000 مليون other:000 مليون}"_s,
				u"{zero:0 مليار one:0 مليار two:0 مليار few:0 مليار many:0 مليار other:0 مليار}"_s,
				u"{zero:00 مليار one:00 مليار two:00 مليار few:00 مليار many:00 مليار other:00 مليار}"_s,
				u"{zero:000 مليار one:000 مليار two:000 مليار few:000 مليار many:000 مليار other:000 مليار}"_s,
				u"{zero:0 ترليون one:0 ترليون two:0 ترليون few:0 ترليون many:0 ترليون other:0 ترليون}"_s,
				u"{zero:00 ترليون one:00 ترليون two:00 ترليون few:00 ترليون many:00 ترليون other:00 ترليون}"_s,
				u"{zero:000 ترليون one:000 ترليون two:000 ترليون few:000 ترليون many:000 ترليون other:000 ترليون}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"توقيت {0} الصيفي"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE، d MMMM y"_s,
				"d MMMM y"_s,
				u"dd\u200f/MM\u200f/y"_s,
				u"d\u200f/M\u200f/y"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"PluralRules"_s,
			"zero:n = 0;one:n = 1;few:n % 100 = 3..10;many:n % 100 = 11..99;two:n = 2"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"الساعات"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			metaValue_islamic_MonthNames
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"التقويم البوذي"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			metaValue_java_time_japanese_Eras
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_ar::FormatData_ar() {
}

$Class* FormatData_ar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_ar",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ar);
	});
	return class$;
}

$Class* FormatData_ar::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun