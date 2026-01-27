#include <sun/text/resources/ext/FormatData_ru.h>

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

$MethodInfo _FormatData_ru_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ru, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ru, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ru_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ru",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ru_MethodInfo_
};

$Object* allocate$FormatData_ru($Class* clazz) {
	return $of($alloc(FormatData_ru));
}

void FormatData_ru::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ru::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"января"_s,
				u"февраля"_s,
				u"марта"_s,
				u"апреля"_s,
				u"мая"_s,
				u"июня"_s,
				u"июля"_s,
				u"августа"_s,
				u"сентября"_s,
				u"октября"_s,
				u"ноября"_s,
				u"декабря"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
				u"Январь"_s,
				u"Февраль"_s,
				u"Март"_s,
				u"Апрель"_s,
				u"Май"_s,
				u"Июнь"_s,
				u"Июль"_s,
				u"Август"_s,
				u"Сентябрь"_s,
				u"Октябрь"_s,
				u"Ноябрь"_s,
				u"Декабрь"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"янв"_s,
				u"фев"_s,
				u"мар"_s,
				u"апр"_s,
				u"мая"_s,
				u"июн"_s,
				u"июл"_s,
				u"авг"_s,
				u"сен"_s,
				u"окт"_s,
				u"ноя"_s,
				u"дек"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Янв."_s,
				u"Февр."_s,
				u"Март"_s,
				u"Апр."_s,
				u"Май"_s,
				u"Июнь"_s,
				u"Июль"_s,
				u"Авг."_s,
				u"Сент."_s,
				u"Окт."_s,
				u"Нояб."_s,
				u"Дек."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"Я"_s,
				u"Ф"_s,
				u"М"_s,
				u"А"_s,
				u"М"_s,
				u"И"_s,
				u"И"_s,
				u"А"_s,
				u"С"_s,
				u"О"_s,
				u"Н"_s,
				u"Д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"Я"_s,
				u"Ф"_s,
				u"М"_s,
				u"А"_s,
				u"М"_s,
				u"И"_s,
				u"И"_s,
				u"А"_s,
				u"С"_s,
				u"О"_s,
				u"Н"_s,
				u"Д"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"воскресенье"_s,
				u"понедельник"_s,
				u"вторник"_s,
				u"среда"_s,
				u"четверг"_s,
				u"пятница"_s,
				u"суббота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of($$new($StringArray, {
				u"Воскресенье"_s,
				u"Понедельник"_s,
				u"Вторник"_s,
				u"Среда"_s,
				u"Четверг"_s,
				u"Пятница"_s,
				u"Суббота"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Вс"_s,
				u"Пн"_s,
				u"Вт"_s,
				u"Ср"_s,
				u"Чт"_s,
				u"Пт"_s,
				u"Сб"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"Вс"_s,
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
				u"В"_s,
				u"Пн"_s,
				u"Вт"_s,
				u"С"_s,
				u"Ч"_s,
				u"П"_s,
				u"С"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				u"В"_s,
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
				u"до н.э."_s,
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
				"H:mm:ss z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"d MMMM yyyy \'г.\'"_s,
				u"d MMMM yyyy \'г.\'"_s,
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

FormatData_ru::FormatData_ru() {
}

$Class* FormatData_ru::load$($String* name, bool initialize) {
	$loadClass(FormatData_ru, name, initialize, &_FormatData_ru_ClassInfo_, allocate$FormatData_ru);
	return class$;
}

$Class* FormatData_ru::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun