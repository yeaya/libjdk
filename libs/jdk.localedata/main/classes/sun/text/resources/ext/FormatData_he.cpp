#include <sun/text/resources/ext/FormatData_he.h>
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

void FormatData_he::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_he::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				u"ינואר"_s,
				u"פברואר"_s,
				u"מרץ"_s,
				u"אפריל"_s,
				u"מאי"_s,
				u"יוני"_s,
				u"יולי"_s,
				u"אוגוסט"_s,
				u"ספטמבר"_s,
				u"אוקטובר"_s,
				u"נובמבר"_s,
				u"דצמבר"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ינו"_s,
				u"פבר"_s,
				u"מרץ"_s,
				u"אפר"_s,
				u"מאי"_s,
				u"יונ"_s,
				u"יול"_s,
				u"אוג"_s,
				u"ספט"_s,
				u"אוק"_s,
				u"נוב"_s,
				u"דצמ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ינו׳"_s,
				u"פבר׳"_s,
				u"מרץ"_s,
				u"אפר׳"_s,
				u"מאי"_s,
				u"יונ׳"_s,
				u"יול׳"_s,
				u"אוג׳"_s,
				u"ספט׳"_s,
				u"אוק׳"_s,
				u"נוב׳"_s,
				u"דצמ׳"_s,
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
			"DayNames"_s,
			$$new($StringArray, {
				u"יום ראשון"_s,
				u"יום שני"_s,
				u"יום שלישי"_s,
				u"יום רביעי"_s,
				u"יום חמישי"_s,
				u"יום שישי"_s,
				u"שבת"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"א"_s,
				u"ב"_s,
				u"ג"_s,
				u"ד"_s,
				u"ה"_s,
				u"ו"_s,
				u"ש"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"א"_s,
				u"ב"_s,
				u"ג"_s,
				u"ד"_s,
				u"ה"_s,
				u"ו"_s,
				u"ש"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				u"א"_s,
				u"ב"_s,
				u"ג"_s,
				u"ד"_s,
				u"ה"_s,
				u"ו"_s,
				u"ש"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"לסה\"נ"_s,
				u"לפסה\"נ"_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				u"לפנה״ס"_s,
				u"לסה״נ"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{0} {1}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GanjkHmsSEDFwWxhKzZ"_s
		})
	});
}

FormatData_he::FormatData_he() {
}

$Class* FormatData_he::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_he, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_he, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_he",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_he, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_he);
	});
	return class$;
}

$Class* FormatData_he::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun