#include <sun/text/resources/ext/FormatData_fi.h>
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

void FormatData_fi::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fi::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"tammikuuta"_s,
				"helmikuuta"_s,
				"maaliskuuta"_s,
				"huhtikuuta"_s,
				"toukokuuta"_s,
				u"kesäkuuta"_s,
				u"heinäkuuta"_s,
				"elokuuta"_s,
				"syyskuuta"_s,
				"lokakuuta"_s,
				"marraskuuta"_s,
				"joulukuuta"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				"tammikuu"_s,
				"helmikuu"_s,
				"maaliskuu"_s,
				"huhtikuu"_s,
				"toukokuu"_s,
				u"kesäkuu"_s,
				u"heinäkuu"_s,
				"elokuu"_s,
				"syyskuu"_s,
				"lokakuu"_s,
				"marraskuu"_s,
				"joulukuu"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"tammikuuta"_s,
				"helmikuuta"_s,
				"maaliskuuta"_s,
				"huhtikuuta"_s,
				"toukokuuta"_s,
				u"kesäkuuta"_s,
				u"heinäkuuta"_s,
				"elokuuta"_s,
				"syyskuuta"_s,
				"lokakuuta"_s,
				"marraskuuta"_s,
				"joulukuuta"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				"tammi"_s,
				"helmi"_s,
				"maalis"_s,
				"huhti"_s,
				"touko"_s,
				u"kesä"_s,
				u"heinä"_s,
				"elo"_s,
				"syys"_s,
				"loka"_s,
				"marras"_s,
				"joulu"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"T"_s,
				"H"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"K"_s,
				"H"_s,
				"E"_s,
				"S"_s,
				"L"_s,
				"M"_s,
				"J"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				"T"_s,
				"H"_s,
				"M"_s,
				"H"_s,
				"T"_s,
				"K"_s,
				"H"_s,
				"E"_s,
				"S"_s,
				"L"_s,
				"M"_s,
				"J"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"ennen Kristuksen syntymää"_s,
				u"jälkeen Kristuksen syntymän"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"eKr."_s,
				"jKr."_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			$$new($StringArray, {
				"eK"_s,
				"jK"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"sunnuntai"_s,
				"maanantai"_s,
				"tiistai"_s,
				"keskiviikko"_s,
				"torstai"_s,
				"perjantai"_s,
				"lauantai"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			$$new($StringArray, {
				"sunnuntai"_s,
				"maanantai"_s,
				"tiistai"_s,
				"keskiviikko"_s,
				"torstai"_s,
				"perjantai"_s,
				"lauantai"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"su"_s,
				"ma"_s,
				"ti"_s,
				"ke"_s,
				"to"_s,
				"pe"_s,
				"la"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				"su"_s,
				"ma"_s,
				"ti"_s,
				"ke"_s,
				"to"_s,
				"pe"_s,
				"la"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"K"_s,
				"T"_s,
				"P"_s,
				"L"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"K"_s,
				"T"_s,
				"P"_s,
				"L"_s
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
				"\'klo \'H.mm.ss"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yyyy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GanjkHmsSEDFwWxhKzZ"_s
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				"ap."_s,
				"ip."_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			$$new($StringArray, {
				"ap."_s,
				"ip."_s
			})
		})
	});
}

FormatData_fi::FormatData_fi() {
}

$Class* FormatData_fi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_fi",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_fi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_fi);
	});
	return class$;
}

$Class* FormatData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun