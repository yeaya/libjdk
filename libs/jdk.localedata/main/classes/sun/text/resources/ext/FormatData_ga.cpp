#include <sun/text/resources/ext/FormatData_ga.h>

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

$MethodInfo _FormatData_ga_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ga, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ga, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ga_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ga",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ga_MethodInfo_
};

$Object* allocate$FormatData_ga($Class* clazz) {
	return $of($alloc(FormatData_ga));
}

void FormatData_ga::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ga::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Eanáir"_s,
				"Feabhra"_s,
				u"Márta"_s,
				u"Aibreán"_s,
				"Bealtaine"_s,
				"Meitheamh"_s,
				u"Iúil"_s,
				u"Lúnasa"_s,
				u"Meán Fómhair"_s,
				u"Deireadh Fómhair"_s,
				"Samhain"_s,
				"Nollaig"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Ean"_s,
				"Feabh"_s,
				u"Márta"_s,
				"Aib"_s,
				"Beal"_s,
				"Meith"_s,
				u"Iúil"_s,
				u"Lún"_s,
				u"MFómh"_s,
				u"DFómh"_s,
				"Samh"_s,
				"Noll"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"E"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"B"_s,
				"M"_s,
				"I"_s,
				"L"_s,
				"M"_s,
				"D"_s,
				"S"_s,
				"N"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Dé Domhnaigh"_s,
				u"Dé Luain"_s,
				u"Dé Máirt"_s,
				u"Dé Céadaoin"_s,
				u"Déardaoin"_s,
				u"Dé hAoine"_s,
				u"Dé Sathairn"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Domh"_s,
				"Luan"_s,
				u"Máirt"_s,
				u"Céad"_s,
				u"Déar"_s,
				"Aoine"_s,
				"Sath"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"a.m."_s,
				"p.m."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"RC"_s,
				"AD"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"RC"_s,
				"AD"_s
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
				"EEEE, yyyy MMMM dd"_s,
				"yyyy MMMM d"_s,
				"yyyy MMM d"_s,
				"yy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("RbMLkUnsSElFtTauKcZ"_s)
		})
	});
}

FormatData_ga::FormatData_ga() {
}

$Class* FormatData_ga::load$($String* name, bool initialize) {
	$loadClass(FormatData_ga, name, initialize, &_FormatData_ga_ClassInfo_, allocate$FormatData_ga);
	return class$;
}

$Class* FormatData_ga::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun