#include <sun/text/resources/ext/JavaTimeSupplementary_hi_IN.h>

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

$MethodInfo _JavaTimeSupplementary_hi_IN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_hi_IN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_hi_IN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_hi_IN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_hi_IN",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_hi_IN_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_hi_IN($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_hi_IN));
}

void JavaTimeSupplementary_hi_IN::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_hi_IN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		u"ति1"_s,
		u"ति2"_s,
		u"ति3"_s,
		u"ति4"_s
	}));
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"पहली तिमाही"_s,
		u"दूसरी तिमाही"_s,
		u"तीसरी तिमाही"_s,
		u"चौथी तिमाही"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"पूर्वाह्न"_s,
		u"अपराह्न"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		"GGGG EEEE, d MMMM y"_s,
		"GGGG d MMMM y"_s,
		"GGGG d MMM y"_s,
		"GGGG d/M/y"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"रवि"_s,
		u"सोम"_s,
		u"मंगल"_s,
		u"बुध"_s,
		u"गुरु"_s,
		u"शुक्र"_s,
		u"शनि"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"रविवार"_s,
		u"सोमवार"_s,
		u"मंगलवार"_s,
		u"बुधवार"_s,
		u"गुरुवार"_s,
		u"शुक्रवार"_s,
		u"शनिवार"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"र"_s,
		u"सो"_s,
		u"मं"_s,
		u"बु"_s,
		u"गु"_s,
		u"शु"_s,
		u"श"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, sharedAbbreviatedAmPmMarkers, $new($StringArray, {
		u"पूर्व"_s,
		u"अपर"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		u"पू"_s,
		u"अ"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		"G EEEE, d MMMM y"_s,
		"G d MMMM y"_s,
		"G d MMM y"_s,
		"G d/M/y"_s
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
			$of(u"बौद्ध पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"ग्रेगोरियन कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"ग्रेगोरियन कैलेंडर"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"इस्लामी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"इस्लामी नागरिक पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"जापानी पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"चीनी गणतंत्र पंचांग"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"पूर्वाह्न/अपराह्न"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"युग"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"घंटा"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"मिनट"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"माह"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"सेकंड"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"सप्ताह"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"सप्ताह का दिन"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"वर्ष"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"समय क्षेत्र"_s)
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
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				u"मुहर्रम"_s,
				u"सफर"_s,
				u"राबी प्रथम"_s,
				u"राबी द्वितीय"_s,
				u"जुम्डा प्रथम"_s,
				u"जुम्डा द्वितीय"_s,
				u"रजब"_s,
				u"शावन"_s,
				u"रमजान"_s,
				u"शव्व्ल"_s,
				u"जिल-क्दाह"_s,
				u"जिल्-हिज्जाह"_s,
				""_s
			}))
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
			$of("java.time.japanese.long.Eras"_s),
			$of($$new($StringArray, {
				u"ईसवी सन"_s,
				u"मेजी"_s,
				u"ताईशो"_s,
				u"शोवा"_s,
				u"हेईसेई"_s,
				u"रेइवा"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"ईस्वी"_s,
				u"मेजी"_s,
				u"ताईशो"_s,
				u"शोवा"_s,
				u"हेईसेई"_s,
				u"रेइवा"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of($$new($StringArray, {
				u"ईसा-पूर्व"_s,
				u"ईसवी सन"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"ईसापूर्व"_s,
				u"सन"_s
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
				u"जन॰"_s,
				u"फ़र॰"_s,
				u"मार्च"_s,
				u"अप्रैल"_s,
				u"मई"_s,
				u"जून"_s,
				u"जुल॰"_s,
				u"अग॰"_s,
				u"सित॰"_s,
				u"अक्तू॰"_s,
				u"नव॰"_s,
				u"दिस॰"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
				u"जनवरी"_s,
				u"फ़रवरी"_s,
				u"मार्च"_s,
				u"अप्रैल"_s,
				u"मई"_s,
				u"जून"_s,
				u"जुलाई"_s,
				u"अगस्त"_s,
				u"सितंबर"_s,
				u"अक्तूबर"_s,
				u"नवंबर"_s,
				u"दिसंबर"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ज"_s,
				u"फ़"_s,
				u"मा"_s,
				u"अ"_s,
				u"म"_s,
				u"जू"_s,
				u"जु"_s,
				u"अ"_s,
				u"सि"_s,
				u"अ"_s,
				u"न"_s,
				u"दि"_s,
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
		})
	});
}

JavaTimeSupplementary_hi_IN::JavaTimeSupplementary_hi_IN() {
}

$Class* JavaTimeSupplementary_hi_IN::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_hi_IN, name, initialize, &_JavaTimeSupplementary_hi_IN_ClassInfo_, allocate$JavaTimeSupplementary_hi_IN);
	return class$;
}

$Class* JavaTimeSupplementary_hi_IN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun