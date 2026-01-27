#include <sun/text/resources/ext/FormatData_be.h>

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

$MethodInfo _FormatData_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_be, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_be, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_be",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_be_MethodInfo_
};

$Object* allocate$FormatData_be($Class* clazz) {
	return $of($alloc(FormatData_be));
}

void FormatData_be::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_be::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"студзеня"_s,
				u"лютага"_s,
				u"сакавіка"_s,
				u"красавіка"_s,
				u"мая"_s,
				u"чрвеня"_s,
				u"ліпеня"_s,
				u"жніўня"_s,
				u"верасня"_s,
				u"кастрычніка"_s,
				u"лістапада"_s,
				u"снежня"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"стд"_s,
				u"лют"_s,
				u"скв"_s,
				u"крс"_s,
				u"май"_s,
				u"чрв"_s,
				u"лпн"_s,
				u"жнв"_s,
				u"врс"_s,
				u"кст"_s,
				u"ліс"_s,
				u"снж"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"с"_s,
				u"л"_s,
				u"с"_s,
				u"к"_s,
				u"м"_s,
				u"ч"_s,
				u"л"_s,
				u"ж"_s,
				u"в"_s,
				u"к"_s,
				u"л"_s,
				u"с"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"нядзеля"_s,
				u"панядзелак"_s,
				u"аўторак"_s,
				u"серада"_s,
				u"чацвер"_s,
				u"пятніца"_s,
				u"субота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"нд"_s,
				u"пн"_s,
				u"ат"_s,
				u"ср"_s,
				u"чц"_s,
				u"пт"_s,
				u"сб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"а"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"да н.е."_s,
				u"н.е."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"да н.э."_s,
				u"н.э."_s
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
				"H.mm.ss z"_s,
				"H.mm.ss z"_s,
				"H.mm.ss"_s,
				"H.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d, MMMM yyyy"_s,
				"EEEE, d, MMMM yyyy"_s,
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
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_be::FormatData_be() {
}

$Class* FormatData_be::load$($String* name, bool initialize) {
	$loadClass(FormatData_be, name, initialize, &_FormatData_be_ClassInfo_, allocate$FormatData_be);
	return class$;
}

$Class* FormatData_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun