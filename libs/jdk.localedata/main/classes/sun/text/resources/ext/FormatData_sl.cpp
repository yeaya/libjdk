#include <sun/text/resources/ext/FormatData_sl.h>

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

$MethodInfo _FormatData_sl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sl, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sl, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sl",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sl_MethodInfo_
};

$Object* allocate$FormatData_sl($Class* clazz) {
	return $of($alloc(FormatData_sl));
}

void FormatData_sl::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sl::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"marec"_s,
				"april"_s,
				"maj"_s,
				"junij"_s,
				"julij"_s,
				"avgust"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"december"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"jan."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"maj"_s,
				"jun."_s,
				"jul."_s,
				"avg."_s,
				"sep."_s,
				"okt."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
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
				"Nedelja"_s,
				"Ponedeljek"_s,
				"Torek"_s,
				"Sreda"_s,
				u"Četrtek"_s,
				"Petek"_s,
				"Sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Ned"_s,
				"Pon"_s,
				"Tor"_s,
				"Sre"_s,
				u"Čet"_s,
				"Pet"_s,
				"Sob"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ned"_s,
				"pon"_s,
				"tor"_s,
				"sre"_s,
				u"čet"_s,
				"pet"_s,
				"sob"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"n"_s,
				"p"_s,
				"t"_s,
				"s"_s,
				u"č"_s,
				"p"_s,
				"s"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"pr.n.š."_s,
				"po Kr."_s
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd. MMMM y"_s,
				"dd. MMMM y"_s,
				"d.M.yyyy"_s,
				"d.M.y"_s
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

FormatData_sl::FormatData_sl() {
}

$Class* FormatData_sl::load$($String* name, bool initialize) {
	$loadClass(FormatData_sl, name, initialize, &_FormatData_sl_ClassInfo_, allocate$FormatData_sl);
	return class$;
}

$Class* FormatData_sl::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun