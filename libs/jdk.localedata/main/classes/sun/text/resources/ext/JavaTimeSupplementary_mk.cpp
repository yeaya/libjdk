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

void JavaTimeSupplementary_mk::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_mk::getContents() {
	$useLocalObjectStack();
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
			"QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Будистички календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Грегоријански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Грегоријански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Исламски календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Исламски граѓански календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Јапонски календар"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Мингуо-календар"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"претпладне/попладне"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ера"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"час"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"минута"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"месец"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"секунда"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"недела"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"ден во неделата"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"година"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"временска зона"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			$$new($StringArray, {
				u"пред нашата ера"_s,
				u"од нашата ера"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"пр.н.е."_s,
				u"ае."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		})
	});
}

JavaTimeSupplementary_mk::JavaTimeSupplementary_mk() {
}

$Class* JavaTimeSupplementary_mk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_mk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_mk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_mk",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_mk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_mk);
	});
	return class$;
}

$Class* JavaTimeSupplementary_mk::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun