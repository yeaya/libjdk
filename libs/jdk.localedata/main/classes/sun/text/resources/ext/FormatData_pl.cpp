#include <sun/text/resources/ext/FormatData_pl.h>

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

$MethodInfo _FormatData_pl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_pl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_pl",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_pl_MethodInfo_
};

$Object* allocate$FormatData_pl($Class* clazz) {
	return $of($alloc(FormatData_pl));
}

void FormatData_pl::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_pl::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"stycznia"_s,
				"lutego"_s,
				"marca"_s,
				"kwietnia"_s,
				"maja"_s,
				"czerwca"_s,
				"lipca"_s,
				"sierpnia"_s,
				u"września"_s,
				u"października"_s,
				"listopada"_s,
				"grudnia"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"styczeń"_s,
				"luty"_s,
				"marzec"_s,
				u"kwiecień"_s,
				"maj"_s,
				"czerwiec"_s,
				"lipiec"_s,
				u"sierpień"_s,
				u"wrzesień"_s,
				u"październik"_s,
				"listopad"_s,
				u"grudzień"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"sty"_s,
				"lut"_s,
				"mar"_s,
				"kwi"_s,
				"maj"_s,
				"cze"_s,
				"lip"_s,
				"sie"_s,
				"wrz"_s,
				u"paź"_s,
				"lis"_s,
				"gru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"sty"_s,
				"lut"_s,
				"mar"_s,
				"kwi"_s,
				"maj"_s,
				"cze"_s,
				"lip"_s,
				"sie"_s,
				"wrz"_s,
				u"paź"_s,
				"lis"_s,
				"gru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"s"_s,
				"l"_s,
				"m"_s,
				"k"_s,
				"m"_s,
				"c"_s,
				"l"_s,
				"s"_s,
				"w"_s,
				"p"_s,
				"l"_s,
				"g"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"s"_s,
				"l"_s,
				"m"_s,
				"k"_s,
				"m"_s,
				"c"_s,
				"l"_s,
				"s"_s,
				"w"_s,
				"p"_s,
				"l"_s,
				"g"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"niedziela"_s,
				u"poniedziałek"_s,
				"wtorek"_s,
				u"środa"_s,
				"czwartek"_s,
				u"piątek"_s,
				"sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"niedziela"_s,
				u"poniedziałek"_s,
				"wtorek"_s,
				u"środa"_s,
				"czwartek"_s,
				u"piątek"_s,
				"sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"N"_s,
				"Pn"_s,
				"Wt"_s,
				u"Śr"_s,
				"Cz"_s,
				"Pt"_s,
				"So"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"niedz."_s,
				"pon."_s,
				"wt."_s,
				u"śr."_s,
				"czw."_s,
				"pt."_s,
				"sob."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"W"_s,
				u"Ś"_s,
				"C"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"W"_s,
				u"Ś"_s,
				"C"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"p.n.e."_s,
				"n.e."_s
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
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"yyyy-MM-dd"_s,
				"yy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_pl::FormatData_pl() {
}

$Class* FormatData_pl::load$($String* name, bool initialize) {
	$loadClass(FormatData_pl, name, initialize, &_FormatData_pl_ClassInfo_, allocate$FormatData_pl);
	return class$;
}

$Class* FormatData_pl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun