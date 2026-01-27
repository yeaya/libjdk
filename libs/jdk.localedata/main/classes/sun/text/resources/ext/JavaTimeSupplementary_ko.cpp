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

$MethodInfo _JavaTimeSupplementary_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ko",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ko_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ko($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ko));
}

void JavaTimeSupplementary_ko::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ko::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"불교력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"태양력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"태양력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"이슬람력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"이슬람 상용력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"일본력"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"대만력"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"오전/오후"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"연호"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"시"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"분"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"월"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"초"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"주"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"요일"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"년"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"시간대"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayNarrows)
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
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of("islamic.narrow.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"AM"_s,
				"PM"_s
			}))
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
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"G y년 M월 d일 EEEE"_s,
				u"G y년 M월 d일"_s,
				"G y. M. d"_s,
				"G y. M. d"_s
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
			$of(sharedJavaTimeDatePatterns)
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
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayNarrows)
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
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
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
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_ko::JavaTimeSupplementary_ko() {
}

$Class* JavaTimeSupplementary_ko::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ko, name, initialize, &_JavaTimeSupplementary_ko_ClassInfo_, allocate$JavaTimeSupplementary_ko);
	return class$;
}

$Class* JavaTimeSupplementary_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun