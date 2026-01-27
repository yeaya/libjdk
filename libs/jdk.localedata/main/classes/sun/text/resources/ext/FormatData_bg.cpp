#include <sun/text/resources/ext/FormatData_bg.h>

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

$MethodInfo _FormatData_bg_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_bg, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_bg, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_bg_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_bg",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_bg_MethodInfo_
};

$Object* allocate$FormatData_bg($Class* clazz) {
	return $of($alloc(FormatData_bg));
}

void FormatData_bg::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_bg::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Януари"_s,
				u"Февруари"_s,
				u"Март"_s,
				u"Април"_s,
				u"Май"_s,
				u"Юни"_s,
				u"Юли"_s,
				u"Август"_s,
				u"Септември"_s,
				u"Октомври"_s,
				u"Ноември"_s,
				u"Декември"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"I"_s,
				"II"_s,
				"III"_s,
				"IV"_s,
				"V"_s,
				"VI"_s,
				"VII"_s,
				"VIII"_s,
				"IX"_s,
				"X"_s,
				"XI"_s,
				"XII"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"я"_s,
				u"ф"_s,
				u"м"_s,
				u"а"_s,
				u"м"_s,
				u"ю"_s,
				u"ю"_s,
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
				u"Неделя"_s,
				u"Понеделник"_s,
				u"Вторник"_s,
				u"Сряда"_s,
				u"Четвъртък"_s,
				u"Петък"_s,
				u"Събота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Нд"_s,
				u"Пн"_s,
				u"Вт"_s,
				u"Ср"_s,
				u"Чт"_s,
				u"Пт"_s,
				u"Сб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"н"_s,
				u"п"_s,
				u"в"_s,
				u"с"_s,
				u"ч"_s,
				u"п"_s,
				u"с"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"пр.н.е."_s,
				u"н.е."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"пр. н. е."_s,
				u"от н. е."_s
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
				"HH:mm:ss zzzz"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM y, EEEE"_s,
				"dd MMMM y"_s,
				"dd.MM.yyyy"_s,
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

FormatData_bg::FormatData_bg() {
}

$Class* FormatData_bg::load$($String* name, bool initialize) {
	$loadClass(FormatData_bg, name, initialize, &_FormatData_bg_ClassInfo_, allocate$FormatData_bg);
	return class$;
}

$Class* FormatData_bg::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun