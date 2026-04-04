#include <sun/text/resources/ext/FormatData_hr.h>
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

void FormatData_hr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hr::getContents() {
	$useLocalObjectStack();
	$var($StringArray, rocEras, $new($StringArray, {
		"prije R.O.C."_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				u"siječnja"_s,
				u"veljače"_s,
				u"ožujka"_s,
				"travnja"_s,
				"svibnja"_s,
				"lipnja"_s,
				"srpnja"_s,
				"kolovoza"_s,
				"rujna"_s,
				"listopada"_s,
				"studenoga"_s,
				"prosinca"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"siječanj"_s,
				u"veljača"_s,
				u"ožujak"_s,
				"travanj"_s,
				"svibanj"_s,
				"lipanj"_s,
				"srpanj"_s,
				"kolovoz"_s,
				"rujan"_s,
				"listopad"_s,
				"studeni"_s,
				"prosinac"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"sij"_s,
				"velj"_s,
				u"ožu"_s,
				"tra"_s,
				"svi"_s,
				"lip"_s,
				"srp"_s,
				"kol"_s,
				"ruj"_s,
				"lis"_s,
				"stu"_s,
				"pro"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				"sij"_s,
				"vel"_s,
				u"ožu"_s,
				"tra"_s,
				"svi"_s,
				"lip"_s,
				"srp"_s,
				"kol"_s,
				"ruj"_s,
				"lis"_s,
				"stu"_s,
				"pro"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s,
				"5."_s,
				"6."_s,
				"7."_s,
				"8."_s,
				"9."_s,
				"10."_s,
				"11."_s,
				"12."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				"1."_s,
				"2."_s,
				"3."_s,
				"4."_s,
				"5."_s,
				"6."_s,
				"7."_s,
				"8."_s,
				"9."_s,
				"10."_s,
				"11."_s,
				"12."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"nedjelja"_s,
				"ponedjeljak"_s,
				"utorak"_s,
				"srijeda"_s,
				u"četvrtak"_s,
				"petak"_s,
				"subota"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			$$new($StringArray, {
				"nedjelja"_s,
				"ponedjeljak"_s,
				"utorak"_s,
				"srijeda"_s,
				u"četvrtak"_s,
				"petak"_s,
				"subota"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sri"_s,
				u"čet"_s,
				"pet"_s,
				"sub"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			$$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sri"_s,
				u"čet"_s,
				"pet"_s,
				"sub"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"N"_s,
				"P"_s,
				"U"_s,
				"S"_s,
				u"Č"_s,
				"P"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				"n"_s,
				"p"_s,
				"u"_s,
				"s"_s,
				u"č"_s,
				"p"_s,
				"s"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"Prije Krista"_s,
				"Poslije Krista"_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				"p. n. e."_s,
				"A. D."_s
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
				"yyyy. MMMM dd"_s,
				"yyyy. MMMM dd"_s,
				"yyyy.MM.dd"_s,
				"yyyy.MM.dd"_s
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

FormatData_hr::FormatData_hr() {
}

$Class* FormatData_hr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_hr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_hr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_hr",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_hr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_hr);
	});
	return class$;
}

$Class* FormatData_hr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun