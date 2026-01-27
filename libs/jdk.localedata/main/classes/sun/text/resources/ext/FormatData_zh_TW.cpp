#include <sun/text/resources/ext/FormatData_zh_TW.h>

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

$MethodInfo _FormatData_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_zh_TW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_zh_TW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_zh_TW",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_zh_TW_MethodInfo_
};

$Object* allocate$FormatData_zh_TW($Class* clazz) {
	return $of($alloc(FormatData_zh_TW));
}

void FormatData_zh_TW::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_zh_TW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"民國前"_s,
		u"民國"_s
	}));
	$var($StringArray, gregoryEras, $new($StringArray, {
		u"西元前"_s,
		u"西元"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of(gregoryEras)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
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
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;-¤#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				u"ahh\'時\'mm\'分\'ss\'秒\' z"_s,
				u"ahh\'時\'mm\'分\'ss\'秒\'"_s,
				"a hh:mm:ss"_s,
				"a h:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"yyyy\'年\'M\'月\'d\'日\' EEEE"_s,
				u"yyyy\'年\'M\'月\'d\'日\'"_s,
				"yyyy/M/d"_s,
				"yyyy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				"GGGGy/M/d"_s,
				"GGGGy/M/d"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_zh_TW::FormatData_zh_TW() {
}

$Class* FormatData_zh_TW::load$($String* name, bool initialize) {
	$loadClass(FormatData_zh_TW, name, initialize, &_FormatData_zh_TW_ClassInfo_, allocate$FormatData_zh_TW);
	return class$;
}

$Class* FormatData_zh_TW::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun