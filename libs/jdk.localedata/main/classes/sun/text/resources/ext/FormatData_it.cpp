#include <sun/text/resources/ext/FormatData_it.h>
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

void FormatData_it::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"gennaio"_s,
				"febbraio"_s,
				"marzo"_s,
				"aprile"_s,
				"maggio"_s,
				"giugno"_s,
				"luglio"_s,
				"agosto"_s,
				"settembre"_s,
				"ottobre"_s,
				"novembre"_s,
				"dicembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				"Gennaio"_s,
				"Febbraio"_s,
				"Marzo"_s,
				"Aprile"_s,
				"Maggio"_s,
				"Giugno"_s,
				"Luglio"_s,
				"Agosto"_s,
				"Settembre"_s,
				"Ottobre"_s,
				"Novembre"_s,
				"Dicembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"gen"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"mag"_s,
				"giu"_s,
				"lug"_s,
				"ago"_s,
				"set"_s,
				"ott"_s,
				"nov"_s,
				"dic"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"G"_s,
				"L"_s,
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
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"G"_s,
				"L"_s,
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
				"domenica"_s,
				u"lunedì"_s,
				u"martedì"_s,
				u"mercoledì"_s,
				u"giovedì"_s,
				u"venerdì"_s,
				"sabato"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			$$new($StringArray, {
				"Domenica"_s,
				u"Lunedì"_s,
				u"Martedì"_s,
				u"Mercoledì"_s,
				u"Giovedì"_s,
				u"Venerdì"_s,
				"Sabato"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"dom"_s,
				"lun"_s,
				"mar"_s,
				"mer"_s,
				"gio"_s,
				"ven"_s,
				"sab"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"G"_s,
				"V"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"dopo Cristo"_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				"aC"_s,
				"dC"_s
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
				"H.mm.ss z"_s,
				"H.mm.ss z"_s,
				"H.mm.ss"_s,
				"H.mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d-MMM-yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_it::FormatData_it() {
}

$Class* FormatData_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_it",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_it);
	});
	return class$;
}

$Class* FormatData_it::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun