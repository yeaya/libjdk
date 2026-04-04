#include <sun/text/resources/cldr/ext/FormatData_zh_Hant.h>
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

void FormatData_zh_Hant::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_Hant::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"1月"_s,
		u"2月"_s,
		u"3月"_s,
		u"4月"_s,
		u"5月"_s,
		u"6月"_s,
		u"7月"_s,
		u"8月"_s,
		u"9月"_s,
		u"10月"_s,
		u"11月"_s,
		u"12月"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"星期日"_s,
		u"星期一"_s,
		u"星期二"_s,
		u"星期三"_s,
		u"星期四"_s,
		u"星期五"_s,
		u"星期六"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"週日"_s,
		u"週一"_s,
		u"週二"_s,
		u"週三"_s,
		u"週四"_s,
		u"週五"_s,
		u"週六"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"日"_s,
		u"一"_s,
		u"二"_s,
		u"三"_s,
		u"四"_s,
		u"五"_s,
		u"六"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"第1季"_s,
		u"第2季"_s,
		u"第3季"_s,
		u"第4季"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"上午"_s,
		u"下午"_s,
		u"午夜"_s,
		""_s,
		u"清晨"_s,
		u"上午"_s,
		u"中午"_s,
		u"下午"_s,
		u"晚上"_s,
		""_s,
		u"凌晨"_s,
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		u"西元前"_s,
		u"西元"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"ah:mm:ss [zzzz]"_s,
		"ah:mm:ss [z]"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_MonthNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s,
		"5"_s,
		"6"_s,
		"7"_s,
		"8"_s,
		"9"_s,
		"10"_s,
		"11"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"佛曆"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"Gy年M月d日EEEE"_s,
		u"Gy年M月d日"_s,
		u"Gy年M月d日"_s,
		"Gy/M/d"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"GGGGy年M月d日EEEE"_s,
		u"GGGGy年M月d日"_s,
		u"GGGGy年M月d日"_s,
		"GGGGy/M/d"_s
	}));
	$var($StringArray, metaValue_buddhist_DateTimePatterns, $new($StringArray, {
		"{1}{0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s,
		"{1} {0}"_s
	}));
	$var($StringArray, metaValue_java_time_japanese_long_Eras, $new($StringArray, {
		u"西元"_s,
		u"明治"_s,
		u"大正"_s,
		u"昭和"_s,
		u"平成"_s,
		u"令和"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"民國前"_s,
		u"民國"_s
	}));
	$var($StringArray, metaValue_islamic_MonthNames, $new($StringArray, {
		u"穆哈蘭姆月"_s,
		u"色法爾月"_s,
		u"賴比月 I"_s,
		u"賴比月 II"_s,
		u"主馬達月 I"_s,
		u"主馬達月 II"_s,
		u"賴哲卜月"_s,
		u"舍爾邦月"_s,
		u"賴買丹月"_s,
		u"閃瓦魯月"_s,
		u"都爾喀爾德月"_s,
		u"都爾黑哲月"_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"伊斯蘭曆"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"公曆"_s);
	$var($StringArray, metaValue_arabext_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"¤#,##0.00"_s,
		"#,##0%"_s,
		u"¤#,##0.00;(¤#,##0.00)"_s
	}));
	$var($StringArray, metaValue_brah_NumberElements, $new($StringArray, {
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
		u"非數值"_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_short_CompactNumberPatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"{other:0}"_s,
		u"{other:0萬}"_s,
		u"{other:00萬}"_s,
		u"{other:000萬}"_s,
		u"{other:0000萬}"_s,
		u"{other:0億}"_s,
		u"{other:00億}"_s,
		u"{other:000億}"_s,
		u"{other:0000億}"_s,
		u"{other:0兆}"_s,
		u"{other:00兆}"_s,
		u"{other:000兆}"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"烏姆庫拉曆"_s
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"osma.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"lana.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"伊斯蘭民用曆"_s
		}),
		$$new($ObjectArray, {
			"talu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"gonm.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"mtei.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꯰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
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
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"cakm.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"guru.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"੦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"分鐘"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"bali.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"cham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꩐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			metaValue_islamic_MonthNames
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"saur.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
				"-"_s,
				u"اس"_s,
				u"؉"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"beng.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"shrd.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"takr.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"deva.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"०"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"sund.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"秒"_s
		}),
		$$new($ObjectArray, {
			"vaii.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日 EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"伊斯蘭曆"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"brah.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"{0}時間"_s
		}),
		$$new($ObjectArray, {
			"olck.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"tibt.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"khmr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"orya.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"႐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
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
			"java.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
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
			"hanidec.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"laoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"໐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"sund.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᮰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"telu.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"kali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꤀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"lanatham.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthNames
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
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"mong.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"tamldec.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"nkoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"߀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"cakm.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"tibt.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"༠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
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
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"sora.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"buddhist.DateTimePatterns"_s,
			metaValue_buddhist_DateTimePatterns
		}),
		$$new($ObjectArray, {
			"gujr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"૦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"limb.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᥆"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"shrd.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"mlym.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"y年M月d日 EEEE"_s,
				u"y年M月d日"_s,
				u"y年M月d日"_s,
				"y/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"japanese.DateTimePatterns"_s,
			$$new($StringArray, {
				""_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
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
			"vaii.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꘠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.japanese.narrow.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"年"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			"mtei.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.narrow.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_buddhist_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"takr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"၀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_long_Eras
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"tamldec.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"௦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"日本曆"_s
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
			"beng.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"০"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			metaValue_long_Eras
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"saur.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꣐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
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
			"japanese.long.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"年代"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"上午/下午"_s
		}),
		$$new($ObjectArray, {
			"lana.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"國曆"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"月"_s
		}),
		$$new($ObjectArray, {
			"osma.NumberElements"_s,
			metaValue_brah_NumberElements
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
			"DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"gonm.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"guru.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"knda.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"೦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"bali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᭐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"sora.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			metaValue_short_CompactNumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
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
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"mlym.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"൦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"lepc.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"gujr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"fullwide.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"０"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"limb.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.time.roc.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"khmr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"០"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"時區"_s
		}),
		$$new($ObjectArray, {
			"roc.DateTimePatterns"_s,
			metaValue_buddhist_DateTimePatterns
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
			"thai.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"๐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_long_Eras
		}),
		$$new($ObjectArray, {
			"hanidec.NumberElements"_s,
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
			"lepc.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"nkoo.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mong.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᠐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"週天"_s
		}),
		$$new($ObjectArray, {
			"islamic.DateTimePatterns"_s,
			metaValue_buddhist_DateTimePatterns
		}),
		$$new($ObjectArray, {
			"brah.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"thai.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"fullwide.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"telu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"౦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"olck.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"knda.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"lanatham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"laoo.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"talu.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"週"_s
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
			"orya.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"୦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"非數值"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			$$new($StringArray, {
				u"Gy年M月d日 EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			metaValue_short_CompactNumberPatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"cham.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"小時"_s
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
			u"佛曆"_s
		}),
		$$new($ObjectArray, {
			"kali.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"japanese.Eras"_s,
			metaValue_java_time_japanese_long_Eras
		}),
		$$new($ObjectArray, {
			"deva.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		})
	}));
	return data;
}

FormatData_zh_Hant::FormatData_zh_Hant() {
}

$Class* FormatData_zh_Hant::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_zh_Hant, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_zh_Hant, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_zh_Hant",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_zh_Hant, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_zh_Hant);
	});
	return class$;
}

$Class* FormatData_zh_Hant::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun