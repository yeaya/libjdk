#include <sun/text/resources/ext/FormatData_ro.h>
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

void FormatData_ro::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ro::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"ianuarie"_s,
				"februarie"_s,
				"martie"_s,
				"aprilie"_s,
				"mai"_s,
				"iunie"_s,
				"iulie"_s,
				"august"_s,
				"septembrie"_s,
				"octombrie"_s,
				"noiembrie"_s,
				"decembrie"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				"ianuarie"_s,
				"februarie"_s,
				"martie"_s,
				"aprilie"_s,
				"mai"_s,
				"iunie"_s,
				"iulie"_s,
				"august"_s,
				"septembrie"_s,
				"octombrie"_s,
				"noiembrie"_s,
				"decembrie"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"Ian"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"Mai"_s,
				"Iun"_s,
				"Iul"_s,
				"Aug"_s,
				"Sep"_s,
				"Oct"_s,
				"Nov"_s,
				"Dec"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				"ian."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"mai"_s,
				"iun."_s,
				"iul."_s,
				"aug."_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				"dec."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"I"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"I"_s,
				"I"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				"I"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"I"_s,
				"I"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"duminică"_s,
				"luni"_s,
				u"marţi"_s,
				"miercuri"_s,
				"joi"_s,
				"vineri"_s,
				u"sâmbătă"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			$$new($StringArray, {
				u"duminică"_s,
				"luni"_s,
				u"marți"_s,
				"miercuri"_s,
				"joi"_s,
				"vineri"_s,
				u"sâmbătă"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"D"_s,
				"L"_s,
				"Ma"_s,
				"Mi"_s,
				"J"_s,
				"V"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				"Du"_s,
				"Lu"_s,
				"Ma"_s,
				"Mi"_s,
				"Jo"_s,
				"Vi"_s,
				u"Sâ"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"J"_s,
				"V"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"J"_s,
				"V"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"d.C."_s,
				u"î.d.C."_s
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
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd.MM.yyyy"_s,
				"dd.MM.yyyy"_s
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

FormatData_ro::FormatData_ro() {
}

$Class* FormatData_ro::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ro, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ro, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_ro",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ro, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ro);
	});
	return class$;
}

$Class* FormatData_ro::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun