#include <sun/text/resources/ext/JavaTimeSupplementary_zh_TW.h>
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

void JavaTimeSupplementary_zh_TW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh_TW::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1季"_s,
		u"2季"_s,
		u"3季"_s,
		u"4季"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"第1季"_s,
		u"第2季"_s,
		u"第3季"_s,
		u"第4季"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"週日"_s,
		u"週一"_s,
		u"週二"_s,
		u"週三"_s,
		u"週四"_s,
		u"週五"_s,
		u"週六"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"伊斯蘭曆"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
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
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"ah:mm:ss [zzzz]"_s,
		"ah:mm:ss [z]"_s,
		"ah:mm:ss"_s,
		"ah:mm"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"佛曆"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"西元"_s,
		u"明治"_s,
		u"大正"_s,
		u"昭和"_s,
		u"平成"_s,
		u"令和"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"西元前"_s,
		u"西元"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"民國前"_s,
		u"民國"_s
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
			u"佛曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"公曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"公曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"伊斯蘭曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"伊斯蘭民用曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"烏姆庫拉曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"日本曆"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"民國曆"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"年代"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"小時"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"分鐘"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"秒"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"週"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"週天"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"時區"_s
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
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
			"islamic.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			sharedEras
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
				"Gy/M/d"_s
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
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s,
				"Gy/M/d"_s
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
				u"Gy年M月d日 EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeShortEras2
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
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedShortEras
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

JavaTimeSupplementary_zh_TW::JavaTimeSupplementary_zh_TW() {
}

$Class* JavaTimeSupplementary_zh_TW::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_zh_TW",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_zh_TW, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_zh_TW);
	});
	return class$;
}

$Class* JavaTimeSupplementary_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun