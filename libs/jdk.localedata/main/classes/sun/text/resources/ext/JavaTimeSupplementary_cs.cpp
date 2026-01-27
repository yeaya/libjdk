#include <sun/text/resources/ext/JavaTimeSupplementary_cs.h>

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

$MethodInfo _JavaTimeSupplementary_cs_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_cs, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_cs, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_cs_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_cs",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_cs_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_cs($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_cs));
}

void JavaTimeSupplementary_cs::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_cs::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"1. čtvrtletí"_s,
		u"2. čtvrtletí"_s,
		u"3. čtvrtletí"_s,
		u"4. čtvrtletí"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"dop."_s,
		"odp."_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y GGGG"_s,
		"d. MMMM y GGGG"_s,
		"d. M. y GGGG"_s,
		"dd.MM.yy G"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"ne"_s,
		"po"_s,
		u"út"_s,
		"st"_s,
		u"čt"_s,
		u"pá"_s,
		"so"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"neděle"_s,
		u"pondělí"_s,
		u"úterý"_s,
		u"středa"_s,
		u"čtvrtek"_s,
		u"pátek"_s,
		"sobota"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"N"_s,
		"P"_s,
		u"Ú"_s,
		"S"_s,
		u"Č"_s,
		"P"_s,
		"S"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"H:mm:ss zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"EEEE d. MMMM y G"_s,
		"d. MMMM y G"_s,
		"d. M. y G"_s,
		"dd.MM.yy GGGGG"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Před R. O. C."_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Buddhistický kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Gregoriánský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Gregoriánský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Muslimský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Muslimský občanský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Japonský kalendář"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Kalendář Čínské republiky"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"část dne"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"letopočet"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of("hodina"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of("minuta"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"měsíc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of("sekunda"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"týden"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"den v týdnu"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of("rok"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"časové pásmo"_s)
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
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d. MMMM y G"_s,
				"d. MMMM y G"_s,
				"d. M. y G"_s,
				"dd.MM.yy GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"př. n. l."_s,
				"n. l."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"př.Kr."_s,
				"po Kr."_s
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
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"led"_s,
				u"úno"_s,
				u"bře"_s,
				"dub"_s,
				u"kvě"_s,
				u"čvn"_s,
				u"čvc"_s,
				"srp"_s,
				u"zář"_s,
				u"říj"_s,
				"lis"_s,
				"pro"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				"ledna"_s,
				u"února"_s,
				u"března"_s,
				"dubna"_s,
				u"května"_s,
				u"června"_s,
				u"července"_s,
				"srpna"_s,
				u"září"_s,
				u"října"_s,
				"listopadu"_s,
				"prosince"_s,
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
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("timezone.hourFormat"_s),
			$of("+H:mm;-H:mm"_s)
		})
	});
}

JavaTimeSupplementary_cs::JavaTimeSupplementary_cs() {
}

$Class* JavaTimeSupplementary_cs::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_cs, name, initialize, &_JavaTimeSupplementary_cs_ClassInfo_, allocate$JavaTimeSupplementary_cs);
	return class$;
}

$Class* JavaTimeSupplementary_cs::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun