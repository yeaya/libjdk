#include <sun/text/resources/ext/FormatData_zh.h>
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

void FormatData_zh::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh::getContents() {
	$useLocalObjectStack();
	$var($StringArray, rocEras, $new($StringArray, {
		u"民国前"_s,
		u"民国"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"公元前"_s,
		u"公元"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
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
			"DayNames"_s,
			$$new($StringArray, {
				u"星期日"_s,
				u"星期一"_s,
				u"星期二"_s,
				u"星期三"_s,
				u"星期四"_s,
				u"星期五"_s,
				u"星期六"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			$$new($StringArray, {
				u"星期日"_s,
				u"星期一"_s,
				u"星期二"_s,
				u"星期三"_s,
				u"星期四"_s,
				u"星期五"_s,
				u"星期六"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"星期日"_s,
				u"星期一"_s,
				u"星期二"_s,
				u"星期三"_s,
				u"星期四"_s,
				u"星期五"_s,
				u"星期六"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				u"周日"_s,
				u"周一"_s,
				u"周二"_s,
				u"周三"_s,
				u"周四"_s,
				u"周五"_s,
				u"周六"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"日"_s,
				u"一"_s,
				u"二"_s,
				u"三"_s,
				u"四"_s,
				u"五"_s,
				u"六"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				u"日"_s,
				u"一"_s,
				u"二"_s,
				u"三"_s,
				u"四"_s,
				u"五"_s,
				u"六"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				u"上午"_s,
				u"下午"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			gregoryEras
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			gregoryEras
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"佛历"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			$$new($StringArray, {
				u"公元"_s,
				u"明治"_s,
				u"大正"_s,
				u"昭和"_s,
				u"平成"_s,
				u"令和"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				u"ahh\'时\'mm\'分\'ss\'秒\' z"_s,
				u"ahh\'时\'mm\'分\'ss\'秒\'"_s,
				"H:mm:ss"_s,
				"ah:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"yyyy\'年\'M\'月\'d\'日\' EEEE"_s,
				u"yyyy\'年\'M\'月\'d\'日\'"_s,
				"yyyy-M-d"_s,
				"yy-M-d"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				"GGGGyyyy-M-d"_s,
				"GGGGy-M-d"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				u"GGGGy年M月d日"_s,
				"GGGGyy-MM-dd"_s
			})
		})
	});
}

FormatData_zh::FormatData_zh() {
}

$Class* FormatData_zh::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_zh, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_zh, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_zh",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_zh, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_zh);
	});
	return class$;
}

$Class* FormatData_zh::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun