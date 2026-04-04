#include <sun/text/resources/cldr/ext/FormatData_th.h>
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

void FormatData_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_th::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"มกราคม"_s,
		u"กุมภาพันธ์"_s,
		u"มีนาคม"_s,
		u"เมษายน"_s,
		u"พฤษภาคม"_s,
		u"มิถุนายน"_s,
		u"กรกฎาคม"_s,
		u"สิงหาคม"_s,
		u"กันยายน"_s,
		u"ตุลาคม"_s,
		u"พฤศจิกายน"_s,
		u"ธันวาคม"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"ม.ค."_s,
		u"ก.พ."_s,
		u"มี.ค."_s,
		u"เม.ย."_s,
		u"พ.ค."_s,
		u"มิ.ย."_s,
		u"ก.ค."_s,
		u"ส.ค."_s,
		u"ก.ย."_s,
		u"ต.ค."_s,
		u"พ.ย."_s,
		u"ธ.ค."_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"วันอาทิตย์"_s,
		u"วันจันทร์"_s,
		u"วันอังคาร"_s,
		u"วันพุธ"_s,
		u"วันพฤหัสบดี"_s,
		u"วันศุกร์"_s,
		u"วันเสาร์"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"อา."_s,
		u"จ."_s,
		u"อ."_s,
		u"พ."_s,
		u"พฤ."_s,
		u"ศ."_s,
		u"ส."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"อา"_s,
		u"จ"_s,
		u"อ"_s,
		u"พ"_s,
		u"พฤ"_s,
		u"ศ"_s,
		u"ส"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"ไตรมาส 1"_s,
		u"ไตรมาส 2"_s,
		u"ไตรมาส 3"_s,
		u"ไตรมาส 4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"ก่อนเที่ยง"_s,
		u"หลังเที่ยง"_s,
		u"เที่ยงคืน"_s,
		u"เที่ยง"_s,
		u"ในตอนเช้า"_s,
		""_s,
		u"ในตอนบ่าย"_s,
		u"บ่าย"_s,
		u"ในตอนเย็น"_s,
		u"ค่ำ"_s,
		u"กลางคืน"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"เที่ยงคืน"_s,
		u"เที่ยง"_s,
		u"เช้า"_s,
		""_s,
		u"เที่ยง"_s,
		u"บ่าย"_s,
		u"เย็น"_s,
		u"ค่ำ"_s,
		u"กลางคืน"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"ก่อน ค.ศ."_s,
		u"ค.ศ."_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"H นาฬิกา mm นาที ss วินาที zzzz"_s,
		u"H นาฬิกา mm นาที ss วินาที z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_DateTimePatterns, $new($StringArray, {
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"พุทธศักราช"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		u"พ.ศ."_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"คริสต์ศักราช"_s,
		u"เมจิ"_s,
		u"ทะอิโช"_s,
		u"โชวะ"_s,
		u"เฮเซ"_s,
		u"เรวะ"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_Eras, $new($StringArray, {
		u"ค.ศ."_s,
		u"เมจิ"_s,
		u"ทะอิโช"_s,
		u"โชวะ"_s,
		u"เฮเซ"_s,
		u"เรวะ"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"ปีก่อนไต้หวัน"_s,
		u"ไต้หวัน"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"ฮิจเราะห์ศักราช"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		u"ฮ.ศ."_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"ปฏิทินเกรกอเรียน"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ปี"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"ปฏิทินอิสลาม (อุมม์อัลกุรา)"_s
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
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/yy G"_s
			})
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"ปฏิทินอิสลามซีวิล"_s
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"เวลามาตรฐาน{0}"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ปฏิทินญี่ปุ่น"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_Eras
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสตกาล"_s,
				u"คริสต์ศักราช"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			metaValue_DateTimePatterns
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
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGGGGที่ y"_s,
				u"d MMMM ปีGGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/yy GGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"นาที"_s
		}),
		$$new($ObjectArray, {
			"japanese.long.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"สมัย"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ช่วงวัน"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"มุฮะร์รอม"_s,
				u"ซอฟาร์"_s,
				u"รอบี I"_s,
				u"รอบี II"_s,
				u"จุมาดา I"_s,
				u"จุมาดา II"_s,
				u"รอจับ"_s,
				u"ชะอะบาน"_s,
				u"รอมะดอน"_s,
				u"เชาวัล"_s,
				u"ซุลกิอฺดะฮฺ"_s,
				u"ซุลหิจญะฮฺ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"ปฏิทินไต้หวัน"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM GGGG y"_s,
				"d MMMM GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"เดือน"_s
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
			u"วินาที"_s
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGGGGที่ y"_s,
				u"d MMMM ปีGGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"ปฏิทินอิสลาม"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;evening2:18:00-21:00;night1:21:00-06:00;afternoon1:12:00-13:00;morning1:06:00-12:00;afternoon2:13:00-16:00;evening1:16:00-18:00"_s
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"เวลา{0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0\' \'พัน}"_s,
				u"{other:0\' \'หมื่น}"_s,
				u"{other:0\' \'แสน}"_s,
				u"{other:0\' \'ล้าน}"_s,
				u"{other:00\' \'ล้าน}"_s,
				u"{other:000\' \'ล้าน}"_s,
				u"{other:0\' \'พันล้าน}"_s,
				u"{other:0\' \'หมื่นล้าน}"_s,
				u"{other:0\' \'แสนล้าน}"_s,
				u"{other:0\' \'ล้านล้าน}"_s,
				u"{other:00\' \'ล้านล้าน}"_s,
				u"{other:000\' \'ล้านล้าน}"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayAbbreviations
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
			u"เขตเวลา"_s
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
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"วันของสัปดาห์"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.Eras"_s,
			metaValue_java_time_islamic_Eras
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
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"java.time.japanese.Eras"_s,
			metaValue_java_time_japanese_Eras
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM GGGG y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			})
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
			u"สัปดาห์"_s
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
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
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{other:0K}"_s,
				"{other:00K}"_s,
				"{other:000K}"_s,
				"{other:0M}"_s,
				"{other:00M}"_s,
				"{other:000M}"_s,
				"{other:0B}"_s,
				"{other:00B}"_s,
				"{other:000B}"_s,
				"{other:0T}"_s,
				"{other:00T}"_s,
				"{other:000T}"_s
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
			u"เวลาออมแสง{0}"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"japanese.DateTimePatterns"_s,
			metaValue_DateTimePatterns
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ชั่วโมง"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"มุฮัร."_s,
				u"เศาะ."_s,
				u"รอบี I"_s,
				u"รอบี II"_s,
				u"จุมาดา I"_s,
				u"จุมาดา II"_s,
				u"เราะ."_s,
				u"ชะอ์."_s,
				u"เราะมะ."_s,
				u"เชาว."_s,
				u"ซุลกิอฺ."_s,
				u"ซุลหิจ."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"ปฏิทินพุทธ"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
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
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_th::FormatData_th() {
}

$Class* FormatData_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_th, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_th, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_th",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_th);
	});
	return class$;
}

$Class* FormatData_th::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun