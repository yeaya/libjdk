#include <sun/text/resources/ext/FormatData_no.h>

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

$MethodInfo _FormatData_no_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_no, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_no, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_no_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_no",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_no_MethodInfo_
};

$Object* allocate$FormatData_no($Class* clazz) {
	return $of($alloc(FormatData_no));
}

void FormatData_no::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_no::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"mars"_s,
				"april"_s,
				"mai"_s,
				"juni"_s,
				"juli"_s,
				"august"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"desember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"mars"_s,
				"april"_s,
				"mai"_s,
				"juni"_s,
				"juli"_s,
				"august"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"desember"_s,
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
				"mai"_s,
				"jun"_s,
				"jul"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"des"_s,
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
				"mai"_s,
				"jun"_s,
				"jul"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"des"_s,
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
			$of("standalone.MonthNarrows"_s),
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
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"søndag"_s,
				"mandag"_s,
				"tirsdag"_s,
				"onsdag"_s,
				"torsdag"_s,
				"fredag"_s,
				u"lørdag"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"søndag"_s,
				"mandag"_s,
				"tirsdag"_s,
				"onsdag"_s,
				"torsdag"_s,
				"fredag"_s,
				u"lørdag"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"sø"_s,
				"ma"_s,
				"ti"_s,
				"on"_s,
				"to"_s,
				"fr"_s,
				u"lø"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"sø."_s,
				"ma."_s,
				"ti."_s,
				"on."_s,
				"to."_s,
				"fr."_s,
				u"lø."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"O"_s,
				"T"_s,
				"F"_s,
				"L"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"M"_s,
				"T"_s,
				"O"_s,
				"T"_s,
				"F"_s,
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
				"\'kl \'HH.mm z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"dd.MMM.yyyy"_s,
				"dd.MM.yy"_s
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

FormatData_no::FormatData_no() {
}

$Class* FormatData_no::load$($String* name, bool initialize) {
	$loadClass(FormatData_no, name, initialize, &_FormatData_no_ClassInfo_, allocate$FormatData_no);
	return class$;
}

$Class* FormatData_no::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun