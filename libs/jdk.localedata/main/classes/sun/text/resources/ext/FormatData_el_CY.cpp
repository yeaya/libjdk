#include <sun/text/resources/ext/FormatData_el_CY.h>

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

$MethodInfo _FormatData_el_CY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_el_CY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_el_CY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_el_CY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_el_CY",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_el_CY_MethodInfo_
};

$Object* allocate$FormatData_el_CY($Class* clazz) {
	return $of($alloc(FormatData_el_CY));
}

void FormatData_el_CY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_el_CY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Ιανουάριος"_s,
				u"Φεβρουάριος"_s,
				u"Μάρτιος"_s,
				u"Απρίλιος"_s,
				u"Μάιος"_s,
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
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"ΠΜ"_s,
				u"ΜΜ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"π.Χ."_s,
				u"μ.Χ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s
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
				"NaN"_s
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
				"EEEE, dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd MMM yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_el_CY::FormatData_el_CY() {
}

$Class* FormatData_el_CY::load$($String* name, bool initialize) {
	$loadClass(FormatData_el_CY, name, initialize, &_FormatData_el_CY_ClassInfo_, allocate$FormatData_el_CY);
	return class$;
}

$Class* FormatData_el_CY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun