#include <sun/text/resources/ext/FormatData_ko.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ko",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ko_MethodInfo_
};

$Object* allocate$FormatData_ko($Class* clazz) {
	return $of($alloc(FormatData_ko));
}

void FormatData_ko::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"중화민국전"_s,
		u"중화민국"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"일요일"_s,
				u"월요일"_s,
				u"화요일"_s,
				u"수요일"_s,
				u"목요일"_s,
				u"금요일"_s,
				u"토요일"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"일"_s,
				u"월"_s,
				u"화"_s,
				u"수"_s,
				u"목"_s,
				u"금"_s,
				u"토"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"일"_s,
				u"월"_s,
				u"화"_s,
				u"수"_s,
				u"목"_s,
				u"금"_s,
				u"토"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"기원전"_s,
				u"서기"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"불기"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"서기"_s,
				u"메이지"_s,
				u"다이쇼"_s,
				u"쇼와"_s,
				u"헤이세이"_s,
				u"레이와"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"오전"_s,
				u"오후"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"a h\'시\' mm\'분\' ss\'초\' z"_s,
				u"a h\'시\' mm\'분\' ss\'초\'"_s,
				"a h:mm:ss"_s,
				"a h:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'년\' M\'월\' d\'일\' EEEE"_s,
				u"yyyy\'년\' M\'월\' d\'일\' \'(\'EE\')\'"_s,
				"yyyy. M. d"_s,
				"yy. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGG y년 M월 d일 EEEE"_s,
				u"GGGG y년 M월 d일"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGG y년 M월 d일 EEEE"_s,
				u"GGGG y년 M월 d일"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_ko::FormatData_ko() {
}

$Class* FormatData_ko::load$($String* name, bool initialize) {
	$loadClass(FormatData_ko, name, initialize, &_FormatData_ko_ClassInfo_, allocate$FormatData_ko);
	return class$;
}

$Class* FormatData_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun