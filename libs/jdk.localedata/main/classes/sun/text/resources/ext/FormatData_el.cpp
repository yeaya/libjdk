#include <sun/text/resources/ext/FormatData_el.h>

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

$MethodInfo _FormatData_el_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_el, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_el, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_el_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_el",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_MethodInfo_
};

$Object* allocate$FormatData_el($Class* clazz) {
	return $of($alloc(FormatData_el));
}

void FormatData_el::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_el::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"Πριν R.O.C."_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Ιανουαρίου"_s,
				u"Φεβρουαρίου"_s,
				u"Μαρτίου"_s,
				u"Απριλίου"_s,
				u"Μαΐου"_s,
				u"Ιουνίου"_s,
				u"Ιουλίου"_s,
				u"Αυγούστου"_s,
				u"Σεπτεμβρίου"_s,
				u"Οκτωβρίου"_s,
				u"Νοεμβρίου"_s,
				u"Δεκεμβρίου"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"Ιανουάριος"_s,
				u"Φεβρουάριος"_s,
				u"Μάρτιος"_s,
				u"Απρίλιος"_s,
				u"Μάϊος"_s,
				u"Ιούνιος"_s,
				u"Ιούλιος"_s,
				u"Αύγουστος"_s,
				u"Σεπτέμβριος"_s,
				u"Οκτώβριος"_s,
				u"Νοέμβριος"_s,
				u"Δεκέμβριος"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Ιαν"_s,
				u"Φεβ"_s,
				u"Μαρ"_s,
				u"Απρ"_s,
				u"Μαϊ"_s,
				u"Ιουν"_s,
				u"Ιουλ"_s,
				u"Αυγ"_s,
				u"Σεπ"_s,
				u"Οκτ"_s,
				u"Νοε"_s,
				u"Δεκ"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Ιαν"_s,
				u"Φεβ"_s,
				u"Μάρ"_s,
				u"Απρ"_s,
				u"Μάι"_s,
				u"Ιούν"_s,
				u"Ιούλ"_s,
				u"Αυγ"_s,
				u"Σεπ"_s,
				u"Οκτ"_s,
				u"Νοέ"_s,
				u"Δεκ"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"Ι"_s,
				u"Φ"_s,
				u"Μ"_s,
				u"Α"_s,
				u"Μ"_s,
				u"Ι"_s,
				u"Ι"_s,
				u"Α"_s,
				u"Σ"_s,
				u"Ο"_s,
				u"Ν"_s,
				u"Δ"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"Ι"_s,
				u"Φ"_s,
				u"Μ"_s,
				u"Α"_s,
				u"Μ"_s,
				u"Ι"_s,
				u"Ι"_s,
				u"Α"_s,
				u"Σ"_s,
				u"Ο"_s,
				u"Ν"_s,
				u"Δ"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Κυριακή"_s,
				u"Δευτέρα"_s,
				u"Τρίτη"_s,
				u"Τετάρτη"_s,
				u"Πέμπτη"_s,
				u"Παρασκευή"_s,
				u"Σάββατο"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"Κυριακή"_s,
				u"Δευτέρα"_s,
				u"Τρίτη"_s,
				u"Τετάρτη"_s,
				u"Πέμπτη"_s,
				u"Παρασκευή"_s,
				u"Σάββατο"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Κυρ"_s,
				u"Δευ"_s,
				u"Τρι"_s,
				u"Τετ"_s,
				u"Πεμ"_s,
				u"Παρ"_s,
				u"Σαβ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Κυρ"_s,
				u"Δευ"_s,
				u"Τρί"_s,
				u"Τετ"_s,
				u"Πέμ"_s,
				u"Παρ"_s,
				u"Σάβ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"Κ"_s,
				u"Δ"_s,
				u"Τ"_s,
				u"Τ"_s,
				u"Π"_s,
				u"Π"_s,
				u"Σ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"Κ"_s,
				u"Δ"_s,
				u"Τ"_s,
				u"Τ"_s,
				u"Π"_s,
				u"Π"_s,
				u"Σ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"π.Χ."_s,
				u"μ.Χ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"πμ"_s,
				u"μμ"_s
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
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"d/M/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_el::FormatData_el() {
}

$Class* FormatData_el::load$($String* name, bool initialize) {
	$loadClass(FormatData_el, name, initialize, &_FormatData_el_ClassInfo_, allocate$FormatData_el);
	return class$;
}

$Class* FormatData_el::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun