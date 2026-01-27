#include <sun/text/resources/ext/FormatData_sr_Latn.h>

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

$MethodInfo _FormatData_sr_Latn_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr_Latn, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr_Latn, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_Latn_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr_Latn",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_Latn_MethodInfo_
};

$Object* allocate$FormatData_sr_Latn($Class* clazz) {
	return $of($alloc(FormatData_sr_Latn));
}

void FormatData_sr_Latn::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr_Latn::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"mart"_s,
				"april"_s,
				"maj"_s,
				"jun"_s,
				"jul"_s,
				"avgust"_s,
				"septembar"_s,
				"oktobar"_s,
				"novembar"_s,
				"decembar"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"maj"_s,
				"jun"_s,
				"jul"_s,
				"avg"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"dec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"j"_s,
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
				"nedelja"_s,
				"ponedeljak"_s,
				"utorak"_s,
				"sreda"_s,
				u"četvrtak"_s,
				"petak"_s,
				"subota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"uto"_s,
				"sre"_s,
				u"čet"_s,
				"pet"_s,
				"sub"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"n"_s,
				"p"_s,
				"u"_s,
				"s"_s,
				u"č"_s,
				"p"_s,
				"s"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"p. n. e."_s,
				"n. e"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
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
				"HH.mm.ss zzzz"_s,
				"HH.mm.ss z"_s,
				"HH.mm.ss"_s,
				"HH.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd. MMMM y."_s,
				"dd. MMMM y."_s,
				"dd.MM.y."_s,
				"d.M.yy."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_sr_Latn::FormatData_sr_Latn() {
}

$Class* FormatData_sr_Latn::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr_Latn, name, initialize, &_FormatData_sr_Latn_ClassInfo_, allocate$FormatData_sr_Latn);
	return class$;
}

$Class* FormatData_sr_Latn::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun