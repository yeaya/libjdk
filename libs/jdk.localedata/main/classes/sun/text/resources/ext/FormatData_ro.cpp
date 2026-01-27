#include <sun/text/resources/ext/FormatData_ro.h>

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

$MethodInfo _FormatData_ro_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ro, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ro, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ro_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ro",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ro_MethodInfo_
};

$Object* allocate$FormatData_ro($Class* clazz) {
	return $of($alloc(FormatData_ro));
}

void FormatData_ro::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ro::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"ianuarie"_s,
				"februarie"_s,
				"martie"_s,
				"aprilie"_s,
				"mai"_s,
				"iunie"_s,
				"iulie"_s,
				"august"_s,
				"septembrie"_s,
				"octombrie"_s,
				"noiembrie"_s,
				"decembrie"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"ianuarie"_s,
				"februarie"_s,
				"martie"_s,
				"aprilie"_s,
				"mai"_s,
				"iunie"_s,
				"iulie"_s,
				"august"_s,
				"septembrie"_s,
				"octombrie"_s,
				"noiembrie"_s,
				"decembrie"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Ian"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"Mai"_s,
				"Iun"_s,
				"Iul"_s,
				"Aug"_s,
				"Sep"_s,
				"Oct"_s,
				"Nov"_s,
				"Dec"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"ian."_s,
				"feb."_s,
				"mar."_s,
				"apr."_s,
				"mai"_s,
				"iun."_s,
				"iul."_s,
				"aug."_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				"dec."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"I"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"I"_s,
				"I"_s,
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
				"I"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"I"_s,
				"I"_s,
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
				u"duminică"_s,
				"luni"_s,
				u"marţi"_s,
				"miercuri"_s,
				"joi"_s,
				"vineri"_s,
				u"sâmbătă"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"duminică"_s,
				"luni"_s,
				u"marți"_s,
				"miercuri"_s,
				"joi"_s,
				"vineri"_s,
				u"sâmbătă"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"Ma"_s,
				"Mi"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Du"_s,
				"Lu"_s,
				"Ma"_s,
				"Mi"_s,
				"Jo"_s,
				"Vi"_s,
				u"Sâ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"M"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"d.C."_s,
				u"î.d.C."_s
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
				"dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd.MM.yyyy"_s,
				"dd.MM.yyyy"_s
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

FormatData_ro::FormatData_ro() {
}

$Class* FormatData_ro::load$($String* name, bool initialize) {
	$loadClass(FormatData_ro, name, initialize, &_FormatData_ro_ClassInfo_, allocate$FormatData_ro);
	return class$;
}

$Class* FormatData_ro::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun