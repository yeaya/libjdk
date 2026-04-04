#include <sun/text/resources/ext/FormatData_be.h>
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

void FormatData_be::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_be::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				u"студзеня"_s,
				u"лютага"_s,
				u"сакавіка"_s,
				u"красавіка"_s,
				u"мая"_s,
				u"чрвеня"_s,
				u"ліпеня"_s,
				u"жніўня"_s,
				u"верасня"_s,
				u"кастрычніка"_s,
				u"лістапада"_s,
				u"снежня"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				u"стд"_s,
				u"лют"_s,
				u"скв"_s,
				u"крс"_s,
				u"май"_s,
				u"чрв"_s,
				u"лпн"_s,
				u"жнв"_s,
				u"врс"_s,
				u"кст"_s,
				u"ліс"_s,
				u"снж"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				u"с"_s,
				u"л"_s,
				u"с"_s,
				u"к"_s,
				u"м"_s,
				u"ч"_s,
				u"л"_s,
				u"ж"_s,
				u"в"_s,
				u"к"_s,
				u"л"_s,
				u"с"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"нядзеля"_s,
				u"панядзелак"_s,
				u"аўторак"_s,
				u"серада"_s,
				u"чацвер"_s,
				u"пятніца"_s,
				u"субота"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"нд"_s,
				u"пн"_s,
				u"ат"_s,
				u"ср"_s,
				u"чц"_s,
				u"пт"_s,
				u"сб"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"а"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"да н.е."_s,
				u"н.е."_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				u"да н.э."_s,
				u"н.э."_s
			})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
			$$new($StringArray, {
				","_s,
				u" "_s,
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
				"H.mm.ss z"_s,
				"H.mm.ss z"_s,
				"H.mm.ss"_s,
				"H.mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d, MMMM yyyy"_s,
				"EEEE, d, MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
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

FormatData_be::FormatData_be() {
}

$Class* FormatData_be::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_be, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_be, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_be",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_be, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_be);
	});
	return class$;
}

$Class* FormatData_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun