#include <sun/text/resources/ext/FormatData_sq.h>
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

void FormatData_sq::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sq::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"janar"_s,
				"shkurt"_s,
				"mars"_s,
				"prill"_s,
				"maj"_s,
				"qershor"_s,
				"korrik"_s,
				"gusht"_s,
				"shtator"_s,
				"tetor"_s,
				u"nëntor"_s,
				"dhjetor"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"Jan"_s,
				"Shk"_s,
				"Mar"_s,
				"Pri"_s,
				"Maj"_s,
				"Qer"_s,
				"Kor"_s,
				"Gsh"_s,
				"Sht"_s,
				"Tet"_s,
				u"Nën"_s,
				"Dhj"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"S"_s,
				"M"_s,
				"P"_s,
				"M"_s,
				"Q"_s,
				"K"_s,
				"G"_s,
				"S"_s,
				"T"_s,
				"N"_s,
				"D"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"e diel"_s,
				u"e hënë"_s,
				u"e martë"_s,
				u"e mërkurë"_s,
				"e enjte"_s,
				"e premte"_s,
				u"e shtunë"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"Die"_s,
				u"Hën"_s,
				"Mar"_s,
				u"Mër"_s,
				"Enj"_s,
				"Pre"_s,
				"Sht"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"D"_s,
				"H"_s,
				"M"_s,
				"M"_s,
				"E"_s,
				"P"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				"PD"_s,
				"MD"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"p.e.r."_s,
				"n.e.r."_s
			})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
			$$new($StringArray, {
				","_s,
				"."_s,
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
				"h.mm.ss.a z"_s,
				"h.mm.ss.a z"_s,
				"h:mm:ss.a"_s,
				"h.mm.a"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"yyyy-MM-dd"_s,
				"yyyy-MM-dd"_s,
				"yyyy-MM-dd"_s,
				"yy-MM-dd"_s
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

FormatData_sq::FormatData_sq() {
}

$Class* FormatData_sq::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sq, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sq, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_sq",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_sq, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_sq);
	});
	return class$;
}

$Class* FormatData_sq::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun