#include <sun/text/resources/ext/FormatData_ar.h>
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

void FormatData_ar::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar::getContents() {
	$useLocalObjectStack();
	$var($StringArray, rocEras, $new($StringArray, {
		"Before R.O.C."_s,
		u"جمهورية الصي"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				u"يناير"_s,
				u"فبراير"_s,
				u"مارس"_s,
				u"أبريل"_s,
				u"مايو"_s,
				u"يونيو"_s,
				u"يوليو"_s,
				u"أغسطس"_s,
				u"سبتمبر"_s,
				u"أكتوبر"_s,
				u"نوفمبر"_s,
				u"ديسمبر"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ينا"_s,
				u"فبر"_s,
				u"مار"_s,
				u"أبر"_s,
				u"ماي"_s,
				u"يون"_s,
				u"يول"_s,
				u"أغس"_s,
				u"سبت"_s,
				u"أكت"_s,
				u"نوف"_s,
				u"ديس"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				u"ي"_s,
				u"ف"_s,
				u"م"_s,
				u"أ"_s,
				u"و"_s,
				u"ن"_s,
				u"ل"_s,
				u"غ"_s,
				u"س"_s,
				u"ك"_s,
				u"ب"_s,
				u"د"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"الأحد"_s,
				u"الاثنين"_s,
				u"الثلاثاء"_s,
				u"الأربعاء"_s,
				u"الخميس"_s,
				u"الجمعة"_s,
				u"السبت"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"ح"_s,
				u"ن"_s,
				u"ث"_s,
				u"ر"_s,
				u"خ"_s,
				u"ج"_s,
				u"س"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				u"الأحد"_s,
				u"الاثنين"_s,
				u"الثلاثاء"_s,
				u"الأربعاء"_s,
				u"الخميس"_s,
				u"الجمعة"_s,
				u"السبت"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"ح"_s,
				u"ن"_s,
				u"ث"_s,
				u"ر"_s,
				u"خ"_s,
				u"ج"_s,
				u"س"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				u"ص"_s,
				u"م"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"ق.م"_s,
				u"م"_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				u"ق.م"_s,
				u"م"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			$$new($StringArray, {
				u"م"_s,
				u"ميجي"_s,
				u"تيشو"_s,
				u"شووا"_s,
				u"هيسي"_s,
				u"ريوا"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.short.Eras"_s,
			$$new($StringArray, {
				u"م"_s,
				u"ميجي"_s,
				u"تيشو"_s,
				u"شووا"_s,
				u"هيسي"_s,
				u"ريوا"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"التقويم البوذي"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"التقويم البوذي"_s
			})
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;#,##0.###-"_s,
				u"¤ #,##0.###;¤ #,##0.###-"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"z hh:mm:ss a"_s,
				"z hh:mm:ss a"_s,
				"hh:mm:ss a"_s,
				"hh:mm a"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"dd MMMM, yyyy"_s,
				"dd MMMM, yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GanjkHmsSEDFwWxhKzZ"_s
		})
	});
}

FormatData_ar::FormatData_ar() {
}

$Class* FormatData_ar::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_ar",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ar, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ar);
	});
	return class$;
}

$Class* FormatData_ar::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun