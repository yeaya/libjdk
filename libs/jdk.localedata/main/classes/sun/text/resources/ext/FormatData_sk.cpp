#include <sun/text/resources/ext/FormatData_sk.h>

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

$MethodInfo _FormatData_sk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sk",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sk_MethodInfo_
};

$Object* allocate$FormatData_sk($Class* clazz) {
	return $of($alloc(FormatData_sk));
}

void FormatData_sk::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"januára"_s,
				u"februára"_s,
				"marca"_s,
				u"apríla"_s,
				u"mája"_s,
				u"júna"_s,
				u"júla"_s,
				"augusta"_s,
				"septembra"_s,
				u"októbra"_s,
				"novembra"_s,
				"decembra"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"január"_s,
				u"február"_s,
				"marec"_s,
				u"apríl"_s,
				u"máj"_s,
				u"jún"_s,
				u"júl"_s,
				"august"_s,
				"september"_s,
				u"október"_s,
				"november"_s,
				"december"_s,
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
				u"máj"_s,
				u"jún"_s,
				u"júl"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"dec"_s,
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
				u"máj"_s,
				u"jún"_s,
				u"júl"_s,
				"aug"_s,
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
				u"Nedeľa"_s,
				"Pondelok"_s,
				"Utorok"_s,
				"Streda"_s,
				u"Štvrtok"_s,
				"Piatok"_s,
				"Sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"nedeľa"_s,
				"pondelok"_s,
				"utorok"_s,
				"streda"_s,
				u"štvrtok"_s,
				"piatok"_s,
				"sobota"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Ne"_s,
				"Po"_s,
				"Ut"_s,
				"St"_s,
				u"Št"_s,
				"Pi"_s,
				"So"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"ne"_s,
				"po"_s,
				"ut"_s,
				"st"_s,
				u"št"_s,
				"pi"_s,
				"so"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"U"_s,
				"S"_s,
				u"Š"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"N"_s,
				"P"_s,
				"U"_s,
				"S"_s,
				u"Š"_s,
				"P"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"pred n.l."_s,
				"n.l."_s
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
				"EEEE, yyyy, MMMM d"_s,
				"EEEE, yyyy, MMMM d"_s,
				"d.M.yyyy"_s,
				"d.M.yyyy"_s
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

FormatData_sk::FormatData_sk() {
}

$Class* FormatData_sk::load$($String* name, bool initialize) {
	$loadClass(FormatData_sk, name, initialize, &_FormatData_sk_ClassInfo_, allocate$FormatData_sk);
	return class$;
}

$Class* FormatData_sk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun