#include <sun/text/resources/ext/FormatData_ja.h>
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

void FormatData_ja::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ja::getContents() {
	$useLocalObjectStack();
	$var($StringArray, japaneseEras, $new($StringArray, {
		u"西暦"_s,
		u"明治"_s,
		u"大正"_s,
		u"昭和"_s,
		u"平成"_s,
		u"令和"_s
	}));
	$var($StringArray, rocEras, $new($StringArray, {
		u"民国前"_s,
		u"民国"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"紀元前"_s,
		u"西暦"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
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
			"MonthAbbreviations"_s,
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
			"DayNames"_s,
			$$new($StringArray, {
				u"日曜日"_s,
				u"月曜日"_s,
				u"火曜日"_s,
				u"水曜日"_s,
				u"木曜日"_s,
				u"金曜日"_s,
				u"土曜日"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"日"_s,
				u"月"_s,
				u"火"_s,
				u"水"_s,
				u"木"_s,
				u"金"_s,
				u"土"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"日"_s,
				u"月"_s,
				u"火"_s,
				u"水"_s,
				u"木"_s,
				u"金"_s,
				u"土"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				u"午前"_s,
				u"午後"_s
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
				u"紀元前"_s,
				u"仏暦"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			japaneseEras
		}),
		$$new($ObjectArray, {
			"japanese.FirstYear"_s,
			$$new($StringArray, {u"元"_s})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
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
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				u"H\'時\'mm\'分\'ss\'秒\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"yyyy\'年\'M\'月\'d\'日\'"_s,
				"yyyy/MM/dd"_s,
				"yyyy/MM/dd"_s,
				"yy/MM/dd"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGyyyy\'年\'M\'月\'d\'日\'"_s,
				"Gy.MM.dd"_s,
				"Gy.MM.dd"_s,
				"Gy.MM.dd"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			$$new($StringArray, {
				u"H\'時\'mm\'分\'ss\'秒\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_ja::FormatData_ja() {
}

$Class* FormatData_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_ja",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ja);
	});
	return class$;
}

$Class* FormatData_ja::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun