#include <sun/text/resources/ext/FormatData_sr.h>

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

$MethodInfo _FormatData_sr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_sr, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_sr, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_sr_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_sr",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_sr_MethodInfo_
};

$Object* allocate$FormatData_sr($Class* clazz) {
	return $of($alloc(FormatData_sr));
}

void FormatData_sr::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_sr::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, rocEras, $new($StringArray, {
		u"Пре РК"_s,
		u"РК"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"јануар"_s,
				u"фебруар"_s,
				u"март"_s,
				u"април"_s,
				u"мај"_s,
				u"јун"_s,
				u"јул"_s,
				u"август"_s,
				u"септембар"_s,
				u"октобар"_s,
				u"новембар"_s,
				u"децембар"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"јан"_s,
				u"феб"_s,
				u"мар"_s,
				u"апр"_s,
				u"мај"_s,
				u"јун"_s,
				u"јул"_s,
				u"авг"_s,
				u"сеп"_s,
				u"окт"_s,
				u"нов"_s,
				u"дец"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ј"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ј"_s,
				u"ј"_s,
				u"а"_s,
				u"с"_s,
				u"о"_s,
				u"н"_s,
				u"д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ј"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ј"_s,
				u"ј"_s,
				u"а"_s,
				u"с"_s,
				u"о"_s,
				u"н"_s,
				u"д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"недеља"_s,
				u"понедељак"_s,
				u"уторак"_s,
				u"среда"_s,
				u"четвртак"_s,
				u"петак"_s,
				u"субота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"нед"_s,
				u"пон"_s,
				u"уто"_s,
				u"сре"_s,
				u"чет"_s,
				u"пет"_s,
				u"суб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"у"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"п. н. е."_s,
				u"н. е"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"п. н. е."_s,
				u"н. е."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"п.н.е."_s,
				u"н.е."_s
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
				"HH.mm.ss z"_s,
				"HH.mm.ss z"_s,
				"HH.mm.ss"_s,
				"HH.mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd.MMMM.yyyy."_s,
				"dd.MM.yyyy."_s,
				"dd.MM.yyyy."_s,
				"d.M.yy."_s
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

FormatData_sr::FormatData_sr() {
}

$Class* FormatData_sr::load$($String* name, bool initialize) {
	$loadClass(FormatData_sr, name, initialize, &_FormatData_sr_ClassInfo_, allocate$FormatData_sr);
	return class$;
}

$Class* FormatData_sr::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun