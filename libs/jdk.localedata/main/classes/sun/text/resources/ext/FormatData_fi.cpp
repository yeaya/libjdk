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

$MethodInfo _FormatData_fi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fi",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fi_MethodInfo_
};

$Object* allocate$FormatData_fi($Class* clazz) {
	return $of($alloc(FormatData_fi));
}

void FormatData_fi::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"ennen Kristuksen syntymää"_s,
				u"jälkeen Kristuksen syntymän"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"eKr."_s,
				"jKr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				"eK"_s,
				"jK"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"sunnuntai"_s,
				"maanantai"_s,
				"tiistai"_s,
				"keskiviikko"_s,
				"torstai"_s,
				"perjantai"_s,
				"lauantai"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"sunnuntai"_s,
				"maanantai"_s,
				"tiistai"_s,
				"keskiviikko"_s,
				"torstai"_s,
				"perjantai"_s,
				"lauantai"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"su"_s,
				"ma"_s,
				"ti"_s,
				"ke"_s,
				"to"_s,
				"pe"_s,
				"la"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"su"_s,
				"ma"_s,
				"ti"_s,
				"ke"_s,
				"to"_s,
				"pe"_s,
				"la"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"K"_s,
				"T"_s,
				"P"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"K"_s,
				"T"_s,
				"P"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"H.mm.ss z"_s,
				"\'klo \'H.mm.ss"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"ap."_s,
				"ip."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of($$new($StringArray, {
				"ap."_s,
				"ip."_s
			}))
		})
	});
}

FormatData_fi::FormatData_fi() {
}

$Class* FormatData_fi::load$($String* name, bool initialize) {
	$loadClass(FormatData_fi, name, initialize, &_FormatData_fi_ClassInfo_, allocate$FormatData_fi);
	return class$;
}

$Class* FormatData_fi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun