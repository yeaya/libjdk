#include <sun/text/resources/ext/FormatData_de.h>

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

$MethodInfo _FormatData_de_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_de",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_MethodInfo_
};

$Object* allocate$FormatData_de($Class* clazz) {
	return $of($alloc(FormatData_de));
}

void FormatData_de::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_de::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Januar"_s,
				"Februar"_s,
				u"März"_s,
				"April"_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"August"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Dezember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Feb"_s,
				u"Mär"_s,
				"Apr"_s,
				"Mai"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dez"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Feb"_s,
				u"Mär"_s,
				"Apr"_s,
				"Mai"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dez"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Sonntag"_s,
				"Montag"_s,
				"Dienstag"_s,
				"Mittwoch"_s,
				"Donnerstag"_s,
				"Freitag"_s,
				"Samstag"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"So"_s,
				"Mo"_s,
				"Di"_s,
				"Mi"_s,
				"Do"_s,
				"Fr"_s,
				"Sa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"So"_s,
				"Mo"_s,
				"Di"_s,
				"Mi"_s,
				"Do"_s,
				"Fr"_s,
				"Sa"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"D"_s,
				"M"_s,
				"D"_s,
				"F"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"v. Chr."_s,
				"n. Chr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"v. Chr."_s,
				"n. Chr."_s
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
				"HH:mm\' Uhr \'z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"dd.MM.yyyy"_s,
				"dd.MM.yy"_s
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

FormatData_de::FormatData_de() {
}

$Class* FormatData_de::load$($String* name, bool initialize) {
	$loadClass(FormatData_de, name, initialize, &_FormatData_de_ClassInfo_, allocate$FormatData_de);
	return class$;
}

$Class* FormatData_de::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun