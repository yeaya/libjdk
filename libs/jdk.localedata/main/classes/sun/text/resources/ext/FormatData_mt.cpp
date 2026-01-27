#include <sun/text/resources/ext/FormatData_mt.h>

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

$MethodInfo _FormatData_mt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_mt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_mt",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_mt_MethodInfo_
};

$Object* allocate$FormatData_mt($Class* clazz) {
	return $of($alloc(FormatData_mt));
}

void FormatData_mt::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_mt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Jannar"_s,
				"Frar"_s,
				"Marzu"_s,
				"April"_s,
				"Mejju"_s,
				u"Ġunju"_s,
				"Lulju"_s,
				"Awwissu"_s,
				"Settembru"_s,
				"Ottubru"_s,
				"Novembru"_s,
				u"Diċembru"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Fra"_s,
				"Mar"_s,
				"Apr"_s,
				"Mej"_s,
				u"Ġun"_s,
				"Lul"_s,
				"Aww"_s,
				"Set"_s,
				"Ott"_s,
				"Nov"_s,
				u"Diċ"_s,
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
				u"Ġ"_s,
				"L"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Il-Ħadd"_s,
				"It-Tnejn"_s,
				"It-Tlieta"_s,
				u"L-Erbgħa"_s,
				u"Il-Ħamis"_s,
				u"Il-Ġimgħa"_s,
				"Is-Sibt"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Ħad"_s,
				"Tne"_s,
				"Tli"_s,
				"Erb"_s,
				u"Ħam"_s,
				u"Ġim"_s,
				"Sib"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"Ħ"_s,
				"T"_s,
				"T"_s,
				"E"_s,
				u"Ħ"_s,
				u"Ġ"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"QN"_s,
				"WN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"QK"_s,
				"WK"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
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
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, d \'ta’\' MMMM yyyy"_s,
				u"d \'ta’\' MMMM yyyy"_s,
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

FormatData_mt::FormatData_mt() {
}

$Class* FormatData_mt::load$($String* name, bool initialize) {
	$loadClass(FormatData_mt, name, initialize, &_FormatData_mt_ClassInfo_, allocate$FormatData_mt);
	return class$;
}

$Class* FormatData_mt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun