#include <sun/text/resources/ext/JavaTimeSupplementary_ko.h>
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

void JavaTimeSupplementary_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ko::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1분기"_s,
		u"2분기"_s,
		u"3분기"_s,
		u"4분기"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"제 1/4분기"_s,
		u"제 2/4분기"_s,
		u"제 3/4분기"_s,
		u"제 4/4분기"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"오전"_s,
		u"오후"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"GGGG y년 M월 d일 EEEE"_s,
		u"GGGG y년 M월 d일"_s,
		"GGGG y. M. d."_s,
		"GGGG y. M. d."_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"일"_s,
		u"월"_s,
		u"화"_s,
		u"수"_s,
		u"목"_s,
		u"금"_s,
		u"토"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"일요일"_s,
		u"월요일"_s,
		u"화요일"_s,
		u"수요일"_s,
		u"목요일"_s,
		u"금요일"_s,
		u"토요일"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"a h시 m분 s초 zzzz"_s,
		u"a h시 m분 s초 z"_s,
		"a h:mm:ss"_s,
		"a h:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"G y년 M월 d일 EEEE"_s,
		u"G y년 M월 d일"_s,
		"G y. M. d."_s,
		"G y. M. d."_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"BC"_s,
		u"불기"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"서기"_s,
		u"메이지"_s,
		u"다이쇼"_s,
		u"쇼와"_s,
		u"헤이세이"_s,
		u"레이와"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras2, $new($StringArray, {
		u"기원전"_s,
		u"서기"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"중화민국전"_s,
		u"중화민국"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"1월"_s,
		u"2월"_s,
		u"3월"_s,
		u"4월"_s,
		u"5월"_s,
		u"6월"_s,
		u"7월"_s,
		u"8월"_s,
		u"9월"_s,
		u"10월"_s,
		u"11월"_s,
		u"12월"_s,
		""_s
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
			u"불교력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"태양력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"태양력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"이슬람력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"이슬람 상용력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"일본력"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"대만력"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"오전/오후"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"연호"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"시"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"분"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"월"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"초"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"주"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"요일"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"년"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"시간대"_s
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
			sharedDayNarrows
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
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"무하람"_s,
				u"사파르"_s,
				u"라비 알 아왈"_s,
				u"라비 알 쎄니"_s,
				u"주마다 알 아왈"_s,
				u"주마다 알 쎄니"_s,
				u"라잡"_s,
				u"쉐아반"_s,
				u"라마단"_s,
				u"쉐왈"_s,
				u"듀 알 까다"_s,
				u"듀 알 히자"_s,
				""_s
			})
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
			"islamic.narrow.AmPmMarkers"_s,
			$$new($StringArray, {
				"AM"_s,
				"PM"_s
			})
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
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"G y년 M월 d일 EEEE"_s,
				u"G y년 M월 d일"_s,
				"G y. M. d"_s,
				"G y. M. d"_s
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
			sharedJavaTimeDatePatterns
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
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayNarrows
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
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
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
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		})
	});
}

JavaTimeSupplementary_ko::JavaTimeSupplementary_ko() {
}

$Class* JavaTimeSupplementary_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ko",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ko);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun