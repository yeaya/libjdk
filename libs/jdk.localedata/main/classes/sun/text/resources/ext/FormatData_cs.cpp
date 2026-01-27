#include <sun/text/resources/ext/FormatData_cs.h>

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

$MethodInfo _FormatData_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_cs, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_cs, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_cs",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_cs_MethodInfo_
};

$Object* allocate$FormatData_cs($Class* clazz) {
	return $of($alloc(FormatData_cs));
}

void FormatData_cs::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"ledna"_s,
				u"února"_s,
				u"března"_s,
				"dubna"_s,
				u"května"_s,
				u"června"_s,
				u"července"_s,
				"srpna"_s,
				u"září"_s,
				u"října"_s,
				"listopadu"_s,
				"prosince"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"leden"_s,
				u"únor"_s,
				u"březen"_s,
				"duben"_s,
				u"květen"_s,
				u"červen"_s,
				u"červenec"_s,
				"srpen"_s,
				u"září"_s,
				u"říjen"_s,
				"listopad"_s,
				"prosinec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Led"_s,
				u"Úno"_s,
				u"Bře"_s,
				"Dub"_s,
				u"Kvě"_s,
				u"Čer"_s,
				u"Čvc"_s,
				"Srp"_s,
				u"Zář"_s,
				u"Říj"_s,
				"Lis"_s,
				"Pro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"I"_s,
				"II"_s,
				"III"_s,
				"IV"_s,
				"V"_s,
				"VI"_s,
				"VII"_s,
				"VIII"_s,
				"IX"_s,
				"X"_s,
				"XI"_s,
				"XII"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"l"_s,
				u"ú"_s,
				"b"_s,
				"d"_s,
				"k"_s,
				u"č"_s,
				u"č"_s,
				"s"_s,
				"z"_s,
				u"ř"_s,
				"l"_s,
				"p"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"l"_s,
				u"ú"_s,
				"b"_s,
				"d"_s,
				"k"_s,
				u"č"_s,
				u"č"_s,
				"s"_s,
				"z"_s,
				u"ř"_s,
				"l"_s,
				"p"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Neděle"_s,
				u"Pondělí"_s,
				u"Úterý"_s,
				u"Středa"_s,
				u"Čtvrtek"_s,
				u"Pátek"_s,
				"Sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"neděle"_s,
				u"pondělí"_s,
				u"úterý"_s,
				u"středa"_s,
				u"čtvrtek"_s,
				u"pátek"_s,
				"sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Ne"_s,
				"Po"_s,
				u"Út"_s,
				"St"_s,
				u"Čt"_s,
				u"Pá"_s,
				"So"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ne"_s,
				"po"_s,
				u"út"_s,
				"st"_s,
				u"čt"_s,
				u"pá"_s,
				"so"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				u"Ú"_s,
				"S"_s,
				u"Č"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				u"Ú"_s,
				"S"_s,
				u"Č"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"dop."_s,
				"odp."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"př.Kr."_s,
				"po Kr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"př. n. l."_s,
				"n. l."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"př.n.l."_s,
				"n. l."_s
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"d.M.yyyy"_s,
				"d.M.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GuMtkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_cs::FormatData_cs() {
}

$Class* FormatData_cs::load$($String* name, bool initialize) {
	$loadClass(FormatData_cs, name, initialize, &_FormatData_cs_ClassInfo_, allocate$FormatData_cs);
	return class$;
}

$Class* FormatData_cs::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun