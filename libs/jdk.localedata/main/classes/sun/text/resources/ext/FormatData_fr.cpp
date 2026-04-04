#include <sun/text/resources/ext/FormatData_fr.h>
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

void FormatData_fr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"janvier"_s,
				u"février"_s,
				"mars"_s,
				"avril"_s,
				"mai"_s,
				"juin"_s,
				"juillet"_s,
				u"août"_s,
				"septembre"_s,
				"octobre"_s,
				"novembre"_s,
				u"décembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"janv."_s,
				u"févr."_s,
				"mars"_s,
				"avr."_s,
				"mai"_s,
				"juin"_s,
				"juil."_s,
				u"août"_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				u"déc."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"J"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
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
				"dimanche"_s,
				"lundi"_s,
				"mardi"_s,
				"mercredi"_s,
				"jeudi"_s,
				"vendredi"_s,
				"samedi"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"dim."_s,
				"lun."_s,
				"mar."_s,
				"mer."_s,
				"jeu."_s,
				"ven."_s,
				"sam."_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				"dim."_s,
				"lun."_s,
				"mar."_s,
				"mer."_s,
				"jeu."_s,
				"ven."_s,
				"sam."_s
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
			"Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"ap. J.-C."_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				"av. J.-C."_s,
				"ap. J.-C."_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"ère bouddhiste"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"ère b."_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"E.B."_s
			})
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 ¤;-#,##0.00 ¤"_s,
				"#,##0 %"_s
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
				"HH\' h \'mm z"_s,
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
				"d MMM yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GaMjkHmsSEDFwWxhKzZ"_s
		})
	});
}

FormatData_fr::FormatData_fr() {
}

$Class* FormatData_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_fr",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_fr);
	});
	return class$;
}

$Class* FormatData_fr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun