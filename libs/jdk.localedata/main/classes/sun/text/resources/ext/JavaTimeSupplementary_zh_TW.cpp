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

$MethodInfo _JavaTimeSupplementary_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_zh_TW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_zh_TW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_zh_TW",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_zh_TW_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_zh_TW($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_zh_TW));
}

void JavaTimeSupplementary_zh_TW::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"佛曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"公曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"公曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"伊斯蘭曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"伊斯蘭民用曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"烏姆庫拉曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"日本曆"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"民國曆"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"年代"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"小時"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"分鐘"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"秒"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"週"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"週天"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"時區"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
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
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(sharedEras)
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
				"Gy/M/d"_s
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
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy年M月d日EEEE"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s,
				"Gy/M/d"_s
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
				u"Gy年M月d日 EEEE"_s,
				u"Gy年M月d日"_s,
				u"Gy年M月d日"_s,
				"Gy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras2)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日 EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedShortEras)
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

JavaTimeSupplementary_zh_TW::JavaTimeSupplementary_zh_TW() {
}

$Class* JavaTimeSupplementary_zh_TW::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_zh_TW, name, initialize, &_JavaTimeSupplementary_zh_TW_ClassInfo_, allocate$JavaTimeSupplementary_zh_TW);
	return class$;
}

$Class* JavaTimeSupplementary_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun