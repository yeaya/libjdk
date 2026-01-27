#include <sun/text/resources/ext/FormatData_ca.h>

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

$MethodInfo _FormatData_ca_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ca, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ca, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ca_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ca",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ca_MethodInfo_
};

$Object* allocate$FormatData_ca($Class* clazz) {
	return $of($alloc(FormatData_ca));
}

void FormatData_ca::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ca::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"de gener"_s,
				"de febrer"_s,
				u"de març"_s,
				u"d’abril"_s,
				"de maig"_s,
				"de juny"_s,
				"de juliol"_s,
				u"d’agost"_s,
				"de setembre"_s,
				u"d’octubre"_s,
				"de novembre"_s,
				"de desembre"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"G"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"G"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"gener"_s,
				"febrer"_s,
				u"març"_s,
				"abril"_s,
				"maig"_s,
				"juny"_s,
				"juliol"_s,
				"agost"_s,
				"setembre"_s,
				"octubre"_s,
				"novembre"_s,
				"desembre"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"de gen."_s,
				"de febr."_s,
				u"de març"_s,
				u"d’abr."_s,
				"de maig"_s,
				"de juny"_s,
				"de jul."_s,
				u"d’ag."_s,
				"de set."_s,
				u"d’oct."_s,
				"de nov."_s,
				"de des."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"gen."_s,
				"feb."_s,
				u"març"_s,
				"abr."_s,
				"maig"_s,
				"juny"_s,
				"jul."_s,
				"ag."_s,
				"set."_s,
				"oct."_s,
				"nov."_s,
				"des."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"g"_s,
				"f"_s,
				"m"_s,
				"a"_s,
				"m"_s,
				"j"_s,
				"j"_s,
				"a"_s,
				"s"_s,
				"o"_s,
				"n"_s,
				"d"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"diumenge"_s,
				"dilluns"_s,
				"dimarts"_s,
				"dimecres"_s,
				"dijous"_s,
				"divendres"_s,
				"dissabte"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"Diumenge"_s,
				"Dilluns"_s,
				"Dimarts"_s,
				"Dimecres"_s,
				"Dijous"_s,
				"Divendres"_s,
				"Dissabte"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dg."_s,
				"dl."_s,
				"dt."_s,
				"dc."_s,
				"dj."_s,
				"dv."_s,
				"ds."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dg"_s,
				"dl"_s,
				"dt"_s,
				"dc"_s,
				"dj"_s,
				"dv"_s,
				"ds"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"G"_s,
				"L"_s,
				"T"_s,
				"C"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"g"_s,
				"l"_s,
				"t"_s,
				"c"_s,
				"j"_s,
				"v"_s,
				"s"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"aC"_s,
				"dC"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
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
				"EEEE, d\' / \'MMMM\' / \'yyyy"_s,
				"d\' / \'MMMM\' / \'yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
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

FormatData_ca::FormatData_ca() {
}

$Class* FormatData_ca::load$($String* name, bool initialize) {
	$loadClass(FormatData_ca, name, initialize, &_FormatData_ca_ClassInfo_, allocate$FormatData_ca);
	return class$;
}

$Class* FormatData_ca::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun