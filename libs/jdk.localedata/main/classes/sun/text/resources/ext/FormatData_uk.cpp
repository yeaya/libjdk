#include <sun/text/resources/ext/FormatData_uk.h>

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

$MethodInfo _FormatData_uk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_uk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_uk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_uk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_uk",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_uk_MethodInfo_
};

$Object* allocate$FormatData_uk($Class* clazz) {
	return $of($alloc(FormatData_uk));
}

void FormatData_uk::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_uk::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"січня"_s,
				u"лютого"_s,
				u"березня"_s,
				u"квітня"_s,
				u"травня"_s,
				u"червня"_s,
				u"липня"_s,
				u"серпня"_s,
				u"вересня"_s,
				u"жовтня"_s,
				u"листопада"_s,
				u"грудня"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"Січень"_s,
				u"Лютий"_s,
				u"Березень"_s,
				u"Квітень"_s,
				u"Травень"_s,
				u"Червень"_s,
				u"Липень"_s,
				u"Серпень"_s,
				u"Вересень"_s,
				u"Жовтень"_s,
				u"Листопад"_s,
				u"Грудень"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"січ."_s,
				u"лют."_s,
				u"бер."_s,
				u"квіт."_s,
				u"трав."_s,
				u"черв."_s,
				u"лип."_s,
				u"серп."_s,
				u"вер."_s,
				u"жовт."_s,
				u"лист."_s,
				u"груд."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"січ"_s,
				u"лют"_s,
				u"бер"_s,
				u"квіт"_s,
				u"трав"_s,
				u"черв"_s,
				u"лип"_s,
				u"серп"_s,
				u"вер"_s,
				u"жовт"_s,
				u"лист"_s,
				u"груд"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"С"_s,
				u"Л"_s,
				u"Б"_s,
				u"К"_s,
				u"Т"_s,
				u"Ч"_s,
				u"Л"_s,
				u"С"_s,
				u"В"_s,
				u"Ж"_s,
				u"Л"_s,
				u"Г"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"неділя"_s,
				u"понеділок"_s,
				u"вівторок"_s,
				u"середа"_s,
				u"четвер"_s,
				u"п\'ятниця"_s,
				u"субота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"нд"_s,
				u"пн"_s,
				u"вт"_s,
				u"ср"_s,
				u"чт"_s,
				u"пт"_s,
				u"сб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"Н"_s,
				u"П"_s,
				u"В"_s,
				u"С"_s,
				u"Ч"_s,
				u"П"_s,
				u"С"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"до н.е."_s,
				u"після н.е."_s
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
				u"EEEE, d MMMM yyyy р."_s,
				"d MMMM yyyy"_s,
				"d MMM yyyy"_s,
				"dd.MM.yy"_s
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

FormatData_uk::FormatData_uk() {
}

$Class* FormatData_uk::load$($String* name, bool initialize) {
	$loadClass(FormatData_uk, name, initialize, &_FormatData_uk_ClassInfo_, allocate$FormatData_uk);
	return class$;
}

$Class* FormatData_uk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun