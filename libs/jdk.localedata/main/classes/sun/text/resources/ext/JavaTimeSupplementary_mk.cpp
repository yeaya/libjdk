#include <sun/text/resources/ext/JavaTimeSupplementary_mk.h>

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

$MethodInfo _JavaTimeSupplementary_mk_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_mk, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_mk, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_mk_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_mk",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_mk_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_mk($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_mk));
}

void JavaTimeSupplementary_mk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_mk::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"јан-мар"_s,
		u"апр-јун"_s,
		u"јул-сеп"_s,
		u"окт-дек"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"прво тромесечје"_s,
		u"второ тромесечје"_s,
		u"трето тромесечје"_s,
		u"четврто тромесечје"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"претпладне"_s,
		u"попладне"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"EEEE, dd MMMM y \'г\'. GGGG"_s,
		u"dd MMMM y \'г\'. GGGG"_s,
		"dd.M.y GGGG"_s,
		"dd.M.y G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"нед."_s,
		u"пон."_s,
		u"вт."_s,
		u"сре."_s,
		u"чет."_s,
		u"пет."_s,
		u"саб."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"недела"_s,
		u"понеделник"_s,
		u"вторник"_s,
		u"среда"_s,
		u"четврток"_s,
		u"петок"_s,
		u"сабота"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"н"_s,
		u"п"_s,
		u"в"_s,
		u"с"_s,
		u"ч"_s,
		u"п"_s,
		u"с"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"прет."_s,
		u"попл."_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, dd MMMM y \'г\'. G"_s,
		u"dd MMMM y \'г\'. G"_s,
		"dd.M.y G"_s,
		"dd.M.y GGGGG"_s
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
			$of(u"Будистички календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Грегоријански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Грегоријански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Исламски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Исламски граѓански календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Јапонски календар"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Мингуо-календар"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"претпладне/попладне"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"ера"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"час"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"минута"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"месец"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунда"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"недела"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"ден во неделата"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"година"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"временска зона"_s)
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
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
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
				u"пред нашата ера"_s,
				u"од нашата ера"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"пр.н.е."_s,
				u"ае."_s
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
				u"јан."_s,
				u"фев."_s,
				u"мар."_s,
				u"апр."_s,
				u"мај"_s,
				u"јун."_s,
				u"јул."_s,
				u"авг."_s,
				u"септ."_s,
				u"окт."_s,
				u"ноем."_s,
				u"дек."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"јануари"_s,
				u"февруари"_s,
				u"март"_s,
				u"април"_s,
				u"мај"_s,
				u"јуни"_s,
				u"јули"_s,
				u"август"_s,
				u"септември"_s,
				u"октомври"_s,
				u"ноември"_s,
				u"декември"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
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
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		})
	});
}

JavaTimeSupplementary_mk::JavaTimeSupplementary_mk() {
}

$Class* JavaTimeSupplementary_mk::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_mk, name, initialize, &_JavaTimeSupplementary_mk_ClassInfo_, allocate$JavaTimeSupplementary_mk);
	return class$;
}

$Class* JavaTimeSupplementary_mk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun