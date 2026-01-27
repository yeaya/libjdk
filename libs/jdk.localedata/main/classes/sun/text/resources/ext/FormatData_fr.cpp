#include <sun/text/resources/ext/FormatData_fr.h>

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

$MethodInfo _FormatData_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_MethodInfo_
};

$Object* allocate$FormatData_fr($Class* clazz) {
	return $of($alloc(FormatData_fr));
}

void FormatData_fr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"janvier"_s,
				u"février"_s,
				"mars"_s,
				"avril"_s,
				"mai"_s,
				"juin"_s,
				"juillet"_s,
				u"août"_s,
				"septembre"_s,
				"octobre"_s,
				"novembre"_s,
				u"décembre"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"janv."_s,
				u"févr."_s,
				"mars"_s,
				"avr."_s,
				"mai"_s,
				"juin"_s,
				"juil."_s,
				u"août"_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				u"déc."_s,
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
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"dimanche"_s,
				"lundi"_s,
				"mardi"_s,
				"mercredi"_s,
				"jeudi"_s,
				"vendredi"_s,
				"samedi"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dim."_s,
				"lun."_s,
				"mar."_s,
				"mer."_s,
				"jeu."_s,
				"ven."_s,
				"sam."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dim."_s,
				"lun."_s,
				"mar."_s,
				"mer."_s,
				"jeu."_s,
				"ven."_s,
				"sam."_s
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
			$of("Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"ap. J.-C."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"av. J.-C."_s,
				"ap. J.-C."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"ère bouddhiste"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"ère b."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"E.B."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 ¤;-#,##0.00 ¤"_s,
				"#,##0 %"_s
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
				"HH\' h \'mm z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GaMjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_fr::FormatData_fr() {
}

$Class* FormatData_fr::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr, name, initialize, &_FormatData_fr_ClassInfo_, allocate$FormatData_fr);
	return class$;
}

$Class* FormatData_fr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun