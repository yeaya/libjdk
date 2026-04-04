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

void FormatData_ko::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ko::getContents() {
	$useLocalObjectStack();
	$var($StringArray, rocEras, $new($StringArray, {
		u"중화민국전"_s,
		u"중화민국"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"일요일"_s,
				u"월요일"_s,
				u"화요일"_s,
				u"수요일"_s,
				u"목요일"_s,
				u"금요일"_s,
				u"토요일"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"일"_s,
				u"월"_s,
				u"화"_s,
				u"수"_s,
				u"목"_s,
				u"금"_s,
				u"토"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"일"_s,
				u"월"_s,
				u"화"_s,
				u"수"_s,
				u"목"_s,
				u"금"_s,
				u"토"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"기원전"_s,
				u"서기"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"불기"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			$$new($StringArray, {
				u"서기"_s,
				u"메이지"_s,
				u"다이쇼"_s,
				u"쇼와"_s,
				u"헤이세이"_s,
				u"레이와"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				u"오전"_s,
				u"오후"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				u"a h\'시\' mm\'분\' ss\'초\' z"_s,
				u"a h\'시\' mm\'분\' ss\'초\'"_s,
				"a h:mm:ss"_s,
				"a h:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"yyyy\'년\' M\'월\' d\'일\' EEEE"_s,
				u"yyyy\'년\' M\'월\' d\'일\' \'(\'EE\')\'"_s,
				"yyyy. M. d"_s,
				"yy. M. d"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGG y년 M월 d일 EEEE"_s,
				u"GGGG y년 M월 d일"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGG y년 M월 d일 EEEE"_s,
				u"GGGG y년 M월 d일"_s,
				"GGGG y. M. d"_s,
				"GGGG y. M. d"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_ko::FormatData_ko() {
}

$Class* FormatData_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_ko",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ko);
	});
	return class$;
}

$Class* FormatData_ko::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun