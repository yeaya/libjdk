#include <sun/text/resources/ext/JavaTimeSupplementary_zh.h>
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

void JavaTimeSupplementary_zh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1季度"_s,
		u"2季度"_s,
		u"3季度"_s,
		u"4季度"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"第一季度"_s,
		u"第二季度"_s,
		u"第三季度"_s,
		u"第四季度"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"上午"_s,
		u"下午"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"周日"_s,
		u"周一"_s,
		u"周二"_s,
		u"周三"_s,
		u"周四"_s,
		u"周五"_s,
		u"周六"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"星期日"_s,
		u"星期一"_s,
		u"星期二"_s,
		u"星期三"_s,
		u"星期四"_s,
		u"星期五"_s,
		u"星期六"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"日"_s,
		u"一"_s,
		u"二"_s,
		u"三"_s,
		u"四"_s,
		u"五"_s,
		u"六"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"伊斯兰历"_s
	}));
	$var($StringArray, sharedMonthAbbreviations, $new($StringArray, {
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
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"一月"_s,
		u"二月"_s,
		u"三月"_s,
		u"四月"_s,
		u"五月"_s,
		u"六月"_s,
		u"七月"_s,
		u"八月"_s,
		u"九月"_s,
		u"十月"_s,
		u"十一月"_s,
		u"十二月"_s,
		""_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"zzzz ah:mm:ss"_s,
		"z ah:mm:ss"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"佛历"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"公元"_s,
		u"明治"_s,
		u"大正"_s,
		u"昭和"_s,
		u"平成"_s,
		u"令和"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"公元前"_s,
		u"公元"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"民国前"_s,
		u"民国"_s
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
			u"佛教日历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"公历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"公历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"伊斯兰日历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"伊斯兰希吉来日历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"日本日历"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"民国日历"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"上午/下午"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"纪元"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"小时"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"分钟"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"月"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"秒钟"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"周"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"工作日"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"年"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"时区"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s
			})
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
			sharedMonthAbbreviations
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
			$$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy-M-d"_s
			})
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
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gyy-MM-dd"_s
			})
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
			sharedJavaTimeShortEras2
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			$$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gyy/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeShortEras2
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGyy/M/d"_s
			})
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
			sharedMonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			sharedMonthNames
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
		})
	});
}

JavaTimeSupplementary_zh::JavaTimeSupplementary_zh() {
}

$Class* JavaTimeSupplementary_zh::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_zh",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_zh, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_zh);
	});
	return class$;
}

$Class* JavaTimeSupplementary_zh::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun