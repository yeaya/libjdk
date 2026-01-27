#include <sun/text/resources/ext/FormatData_lt.h>

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

$MethodInfo _FormatData_lt_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_lt, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_lt, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_lt_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_lt",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_lt_MethodInfo_
};

$Object* allocate$FormatData_lt($Class* clazz) {
	return $of($alloc(FormatData_lt));
}

void FormatData_lt::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_lt::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"sausio"_s,
				"vasaris"_s,
				"kovas"_s,
				"balandis"_s,
				u"gegužė"_s,
				u"birželis"_s,
				"liepa"_s,
				u"rugpjūtis"_s,
				u"rugsėjis"_s,
				"spalis"_s,
				"lapkritis"_s,
				"gruodis"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				"Sausio"_s,
				"Vasario"_s,
				"Kovo"_s,
				u"Balandžio"_s,
				u"Gegužės"_s,
				u"Birželio"_s,
				"Liepos"_s,
				u"Rugpjūčio"_s,
				u"Rugsėjo"_s,
				"Spalio"_s,
				u"Lapkričio"_s,
				u"Gruodžio"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Sau"_s,
				"Vas"_s,
				"Kov"_s,
				"Bal"_s,
				"Geg"_s,
				"Bir"_s,
				"Lie"_s,
				"Rgp"_s,
				"Rgs"_s,
				"Spa"_s,
				"Lap"_s,
				"Grd"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Saus."_s,
				"Vas."_s,
				"Kov."_s,
				"Bal."_s,
				"Geg."_s,
				"Bir."_s,
				"Liep."_s,
				"Rugp."_s,
				"Rugs."_s,
				"Spal."_s,
				"Lapkr."_s,
				"Gruod."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"V"_s,
				"K"_s,
				"B"_s,
				"G"_s,
				"B"_s,
				"L"_s,
				"R"_s,
				"R"_s,
				"S"_s,
				"L"_s,
				"G"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Sekmadienis"_s,
				"Pirmadienis"_s,
				"Antradienis"_s,
				u"Trečiadienis"_s,
				"Ketvirtadienis"_s,
				"Penktadienis"_s,
				u"Šeštadienis"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				"sekmadienis"_s,
				"pirmadienis"_s,
				"antradienis"_s,
				u"trečiadienis"_s,
				"ketvirtadienis"_s,
				"penktadienis"_s,
				u"šeštadienis"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sk"_s,
				"Pr"_s,
				"An"_s,
				"Tr"_s,
				"Kt"_s,
				"Pn"_s,
				u"Št"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Sk"_s,
				"Pr"_s,
				"An"_s,
				"Tr"_s,
				"Kt"_s,
				"Pn"_s,
				u"Št"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"P"_s,
				"A"_s,
				"T"_s,
				"K"_s,
				"P"_s,
				u"Š"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"S"_s,
				"P"_s,
				"A"_s,
				"T"_s,
				"K"_s,
				"P"_s,
				u"Š"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"pr.Kr."_s,
				"po.Kr."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"pr. Kr."_s,
				"po Kr."_s
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
				"HH.mm.ss z"_s,
				"HH.mm.ss z"_s,
				"HH.mm.ss"_s,
				"HH.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, yyyy, MMMM d"_s,
				"EEEE, yyyy, MMMM d"_s,
				"yyyy-MM-dd"_s,
				"yy.M.d"_s
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

FormatData_lt::FormatData_lt() {
}

$Class* FormatData_lt::load$($String* name, bool initialize) {
	$loadClass(FormatData_lt, name, initialize, &_FormatData_lt_ClassInfo_, allocate$FormatData_lt);
	return class$;
}

$Class* FormatData_lt::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun