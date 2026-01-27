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

$MethodInfo _JavaTimeSupplementary_zh_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh));
}

void JavaTimeSupplementary_zh::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"佛教日历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"公历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"公历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"伊斯兰日历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"伊斯兰希吉来日历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"日本日历"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"民国日历"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"上午/下午"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"纪元"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"小时"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"分钟"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"月"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"秒钟"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"周"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"工作日"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"年"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"时区"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s
			}))
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
			$of(sharedMonthAbbreviations)
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
			$of($$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy-M-d"_s
			}))
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
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gyy-MM-dd"_s
			}))
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
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gyy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGyy/M/d"_s
			}))
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
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
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
		})
	});
}

JavaTimeSupplementary_zh::JavaTimeSupplementary_zh() {
}

$Class* JavaTimeSupplementary_zh::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh, name, initialize, &_JavaTimeSupplementary_zh_ClassInfo_, allocate$JavaTimeSupplementary_zh);
	return class$;
}

$Class* JavaTimeSupplementary_zh::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun