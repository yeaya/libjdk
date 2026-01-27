#include <sun/text/resources/ext/JavaTimeSupplementary_be.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_be_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_be, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_be, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_be_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_be",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_be_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_be($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_be));
}

void JavaTimeSupplementary_be::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_be::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"1-шы кв."_s,
		u"2-гі кв."_s,
		u"3-ці кв."_s,
		u"4-ты кв."_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1-шы квартал"_s,
		u"2-гі квартал"_s,
		u"3-ці квартал"_s,
		u"4-ты квартал"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"да паўдня"_s,
		u"пасля паўдня"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d.M.y GGGG"_s,
		"d.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"нд"_s,
		u"пн"_s,
		u"аў"_s,
		u"ср"_s,
		u"чц"_s,
		u"пт"_s,
		u"сб"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"нядзеля"_s,
		u"панядзелак"_s,
		u"аўторак"_s,
		u"серада"_s,
		u"чацвер"_s,
		u"пятніца"_s,
		u"субота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"а"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"HH.mm.ss zzzz"_s,
		"HH.mm.ss z"_s,
		"HH.mm.ss"_s,
		"HH.mm"_s
	}));
	$var($StringArray, sharedAbbreviatedAmPmMarkers, $new($StringArray, {
		u"раніцы"_s,
		u"вечара"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"ран."_s,
		u"веч."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d.M.y G"_s,
		"d.M.y GGGGG"_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"будыйскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"грыгарыянскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"грыгарыянскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"мусульманскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"мусульманскі свецкі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"японскі каляндар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"каляндар Міньго"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ДП/ПП"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"эра"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"гадзіна"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"хвіліна"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"месяц"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунда"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"тыдзень"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"дзень тыдня"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"год"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"часавы пояс"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"d.M.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"да нашай эры"_s,
				u"нашай эры"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"да н.е."_s,
				u"н.е."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"сту"_s,
				u"лют"_s,
				u"сак"_s,
				u"кра"_s,
				u"мая"_s,
				u"чэр"_s,
				u"ліп"_s,
				u"жні"_s,
				u"вер"_s,
				u"кас"_s,
				u"ліс"_s,
				u"сне"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"студзеня"_s,
				u"лютага"_s,
				u"сакавіка"_s,
				u"красавіка"_s,
				u"мая"_s,
				u"чэрвеня"_s,
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
			$of("roc.MonthNarrows"_s),
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
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAbbreviatedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+HH.mm;-HH.mm"_s)
		})
	});
}

JavaTimeSupplementary_be::JavaTimeSupplementary_be() {
}

$Class* JavaTimeSupplementary_be::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_be, name, initialize, &_JavaTimeSupplementary_be_ClassInfo_, allocate$JavaTimeSupplementary_be);
	return class$;
}

$Class* JavaTimeSupplementary_be::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun