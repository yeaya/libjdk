#include <sun/text/resources/cldr/ext/FormatData_ff_Adlm.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_ff_Adlm_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ff_Adlm, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ff_Adlm, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ff_Adlm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ff_Adlm",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ff_Adlm_MethodInfo_
};

$Object* allocate$FormatData_ff_Adlm($Class* clazz) {
	return $of($alloc(FormatData_ff_Adlm));
}

void FormatData_ff_Adlm::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ff_Adlm::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		$cstr({0x1E905, 0x1E92D, 0x1E945, 0x1E924, 0x1E92E}),
		$cstr({0x1E915, 0x1E92E, 0x1E924, 0x1E93C, 0x1E92E}),
		$cstr({0x1E910, 0x1E926, 0x1E92E, 0x1E945, 0x1E934, 0x1E92E}),
		$cstr({0x1E905, 0x1E92B, 0x1E945, 0x1E93C, 0x1E92E}),
		$cstr({0x1E901, 0x1E935, 0x1E945, 0x1E936, 0x1E92E}),
		$cstr({0x1E911, 0x1E92E, 0x1E92A, 0x1E927, 0x1E92E}),
		$cstr({0x1E903, 0x1E92E, 0x1E92A, 0x1E927, 0x1E92E}),
		$cstr({0x1E914, 0x1E935, 0x1E933, 0x1E92E}),
		$cstr({0x1E905, 0x1E92D, 0x1E924, 0x1E93C, 0x1E92E}),
		$cstr({0x1E912, 0x1E922, 0x1E92A, 0x1E933, 0x1E92E}),
		$cstr({0x1E914, 0x1E92E, 0x1E924, 0x1E92E}),
		$cstr({0x1E910, 0x1E926, 0x1E92E, 0x1E931, 0x1E93C, 0x1E92E}),
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		$cstr({0x1E905}),
		$cstr({0x1E915}),
		$cstr({0x1E904}),
		$cstr({0x1E905}),
		$cstr({0x1E901}),
		$cstr({0x1E911}),
		$cstr({0x1E903}),
		$cstr({0x1E914}),
		$cstr({0x1E905}),
		$cstr({0x1E912}),
		$cstr({0x1E914}),
		$cstr({0x1E904}),
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		$cstr({0x1E908, 0x1E92B, 0x1E92C, 0x1E926, 0x1E92D, 0x1E92A, 0x1E946, 0x1E92B}),
		$cstr({0x1E900, 0x1E944, 0x1E929, 0x1E935, 0x1E932, 0x1E94B, 0x1E923, 0x1E92B}),
		$cstr({0x1E903, 0x1E922, 0x1E931, 0x1E926, 0x1E922, 0x1E944, 0x1E92A, 0x1E92B}),
		$cstr({0x1E910, 0x1E936, 0x1E92B, 0x1E927, 0x1E924, 0x1E922, 0x1E944, 0x1E92A, 0x1E92B}),
		$cstr({0x1E910, 0x1E922, 0x1E944, 0x1E927, 0x1E922, 0x1E944, 0x1E932, 0x1E923, 0x1E92B}),
		$cstr({0x1E903, 0x1E922, 0x1E931, 0x1E932, 0x1E923, 0x1E92B}),
		$cstr({0x1E916, 0x1E92E, 0x1E92A, 0x1E926, 0x1E92D, 0x1E92A, 0x1E946, 0x1E92B})
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		$cstr({0x1E908, 0x1E92B, 0x1E92C}),
		$cstr({0x1E900, 0x1E944, 0x1E929, 0x1E935}),
		$cstr({0x1E903, 0x1E922, 0x1E926}),
		$cstr({0x1E914, 0x1E92B, 0x1E927}),
		$cstr({0x1E910, 0x1E922, 0x1E944, 0x1E927}),
		$cstr({0x1E903, 0x1E922, 0x1E923}),
		$cstr({0x1E916, 0x1E92E, 0x1E92A})
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		$cstr({0x1E908}),
		$cstr({0x1E900, 0x1E944}),
		$cstr({0x1E903}),
		$cstr({0x1E914}),
		$cstr({0x1E910}),
		$cstr({0x1E903}),
		$cstr({0x1E916})
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		$cstr({0x1E910, 0x1E951}),
		$cstr({0x1E910, 0x1E952}),
		$cstr({0x1E910, 0x1E953}),
		$cstr({0x1E910, 0x1E954})
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		$cstr({0x1E951}),
		$cstr({0x1E952}),
		$cstr({0x1E953}),
		$cstr({0x1E954})
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		$cstr({0x1E900, 0x1E90E}),
		$cstr({0x1E907, 0x1E90E}),
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		$cstr({0x1E922}),
		$cstr({0x1E929}),
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		$cstr({0x1E900, 0x1E900, 0x1E90B}),
		$cstr({0x1E907, 0x1E900, 0x1E90B})
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		$cstr({0x1E907, 0x1E90A})
	}));
	$var($String, metaValue_calendarname_gregorian, $cstr({0x1E919, 0x1E922, 0x1E924, 0x1E92F, 0x1E92D, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E918, 0x1E92B, 0x1E92A, 0x1E93A, 0x1E92E, 0x1E92A, 0x1E92D, 0x1E934, 0x1E922, 0x1E932, 0x1E933, 0x1E92E}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of($cstr({0x1E938, 0x1E92D, 0x1E93C, 0x1E922, 0x1E944, 0x1E932, 0x1E923, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtFormat"_s),
			$of($cstr({0x1E911, 0x1E916, 0x1E918, '{', '0', '}'}))
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of($cstr({0x1E919, 0x1E922, 0x1E924, 0x1E92F, 0x1E92D, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E902, 0x1E92D, 0x1E927, 0x1E924, 0x1E922, 0x1E944, 0x1E925, 0x1E934, 0x1E922, 0x1E932, 0x1E933, 0x1E92E, ' ', '(', 0x1E922, 0x1E924, 0x1E946, 0x1E935, 0x1E931, 0x1E922, 0x1E924, ',', ' ', 0x1E92C, 0x1E92B, 0x1E931, 0x1E932, 0x1E94B, 0x1E923, 0x1E92E, ' ', 0x1E932, 0x1E94B, 0x1E926, 0x1E92B, 0x1E92F, 0x1E946, 0x1E922, 0x1E944, 0x1E933, 0x1E935, ')'}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of($cstr({'{', '0', '}', ' ', 0x1E911, 0x1E92D, 0x1E936, 0x1E92E, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E916, 0x1E922, 0x1E931, 0x1E92A, 0x1E92D, 0x1E93C, 0x1E935, 0x1E932, 0x1E94B, 0x1E923, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("adlm"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of($cstr({0x1E919, 0x1E922, 0x1E924, 0x1E92F, 0x1E92D, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E914, 0x1E922, 0x1E944, 0x1E928, 0x1E92E, 0x1E932, 0x1E92D, 0x1E932, 0x1E933, 0x1E92E}))
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of($cstr({0x1E911, 0x1E916, 0x1E918}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				$cstr({0x1E900, 0x1E923, 0x1E92E, ' ', 0x1E900, 0x1E932, 0x1E946, 0x1E922, 0x1E926, 0x1E92D, ' ', 0x1E90B, 0x1E945, 0x1E927, 0x1E922, 0x1E944}),
				$cstr({0x1E907, 0x1E922, 0x1E944, 0x1E931, 0x1E92E, ' ', 0x1E900, 0x1E932, 0x1E946, 0x1E922, 0x1E926, 0x1E92D, ' ', 0x1E90B, 0x1E945, 0x1E927, 0x1E922, 0x1E944})
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1}{0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				u"⹁"_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				$cstr({0x1E90F, 0x1E92E, 0x1E908}),
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of($cstr({0x1E938, 0x1E92E, 0x1E936, 0x1E92E, 0x1E925, 0x1E922, 0x1E944, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of($cstr({0x1E93A, 0x1E92D, 0x1E92A, 0x1E922, 0x1E924}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of($cstr({0x1E900, 0x1E90E, '/', 0x1E907, 0x1E90E}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
				$cstr({0x1E905}),
				$cstr({0x1E915}),
				$cstr({0x1E904}),
				$cstr({0x1E905}),
				$cstr({0x1E901}),
				$cstr({0x1E911}),
				$cstr({0x1E903}),
				$cstr({0x1E914}),
				$cstr({0x1E905}),
				$cstr({0x1E912}),
				$cstr({0x1E904}),
				$cstr({0x1E904}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				$cstr({0x1E914, 0x1E92E, 0x1E925, 0x1E926, 0x1E92B, 0x1E932, 0x1E93C, 0x1E92B}),
				$cstr({0x1E905, 0x1E922, 0x1E926, 0x1E946, 0x1E92E, 0x1E92A, 0x1E923, 0x1E935, '-', 0x1E906, 0x1E922, 0x1E92A, 0x1E922, 0x1E932}),
				$cstr({0x1E906, 0x1E922, 0x1E92A, 0x1E922, 0x1E932}),
				$cstr({0x1E903, 0x1E92D, 0x1E925, 0x1E928, 0x1E922, 0x1E92A, 0x1E922, 0x1E932}),
				$cstr({0x1E904, 0x1E922, 0x1E928, 0x1E946, 0x1E922, 0x1E92A, 0x1E922, 0x1E932}),
				$cstr({0x1E905, 0x1E922, 0x1E926, 0x1E946, 0x1E92E, 0x1E92A, 0x1E923, 0x1E935, '-', 0x1E908, 0x1E922, 0x1E944, 0x1E936, 0x1E92D, 0x1E926, 0x1E92D}),
				$cstr({0x1E908, 0x1E922, 0x1E944, 0x1E936, 0x1E92D, 0x1E926, 0x1E92D}),
				$cstr({0x1E905, 0x1E922, 0x1E926, 0x1E946, 0x1E92E, 0x1E92A, 0x1E923, 0x1E935, '-', 0x1E905, 0x1E935, 0x1E945, 0x1E925, 0x1E922, 0x1E934, 0x1E92B, 0x1E945}),
				$cstr({0x1E905, 0x1E935, 0x1E945, 0x1E925, 0x1E922, 0x1E934, 0x1E92B, 0x1E945}),
				$cstr({0x1E914, 0x1E935, 0x1E945, 0x1E924, 0x1E923, 0x1E922, 0x1E944, 0x1E932, 0x1E94B, 0x1E923, 0x1E935}),
				$cstr({0x1E905, 0x1E922, 0x1E926, 0x1E946, 0x1E92E, 0x1E92A, 0x1E923, 0x1E935, '-', 0x1E901, 0x1E92E, 0x1E932, 0x1E933, 0x1E92D, 0x1E932}),
				$cstr({0x1E901, 0x1E935, 0x1E932, 0x1E933, 0x1E92D, 0x1E932}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of($cstr({0x1E919, 0x1E922, 0x1E924, 0x1E92F, 0x1E92D, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E918, 0x1E92B, 0x1E932, 0x1E923, 0x1E92D, 0x1E934, 0x1E922, 0x1E932, 0x1E933, 0x1E92E, ' ', 0x1E905, 0x1E92D, 0x1E945, 0x1E932}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of($cstr({0x1E924, 0x1E92B, 0x1E931, 0x1E92A, 0x1E935}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of($cstr({0x1E933, 0x1E92D, 0x1E932, 0x1E930, 0x1E92B, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				$cstr({0x1E951}),
				$cstr({0x1E952}),
				$cstr({0x1E953}),
				$cstr({0x1E954}),
				$cstr({0x1E955}),
				$cstr({0x1E956}),
				$cstr({0x1E957}),
				$cstr({0x1E958}),
				$cstr({0x1E959}),
				$cstr({0x1E951, 0x1E950}),
				$cstr({0x1E951, 0x1E951}),
				$cstr({0x1E951, 0x1E952}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of($cstr({0x1E919, 0x1E922, 0x1E924, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E902, 0x1E92D, 0x1E927, 0x1E924, 0x1E922, 0x1E944, 0x1E925, 0x1E934, 0x1E922, 0x1E932, 0x1E933, 0x1E92E}))
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				$cstr({0x1E905, 0x1E92D, 0x1E945, 0x1E924}),
				$cstr({0x1E915, 0x1E92E, 0x1E924}),
				$cstr({0x1E904, 0x1E92E, 0x1E945, 0x1E934}),
				$cstr({0x1E905, 0x1E92B, 0x1E945, 0x1E93C}),
				$cstr({0x1E901, 0x1E935, 0x1E945, 0x1E936}),
				$cstr({0x1E911, 0x1E92E, 0x1E92A}),
				$cstr({0x1E903, 0x1E92E, 0x1E92A}),
				$cstr({0x1E914, 0x1E935, 0x1E933}),
				$cstr({0x1E905, 0x1E92D, 0x1E924}),
				$cstr({0x1E912, 0x1E922, 0x1E92A}),
				$cstr({0x1E914, 0x1E92E, 0x1E924}),
				$cstr({0x1E904, 0x1E92E, 0x1E931}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of($cstr({'{', '0', '}', ' ', 0x1E911, 0x1E92D, 0x1E936, 0x1E92E, 0x1E945, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				$cstr({0x1E910, 0x1E922, 0x1E934, 0x1E929, 0x1E92D, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E951, 0x1E92A, 0x1E92B}),
				$cstr({0x1E910, 0x1E922, 0x1E934, 0x1E929, 0x1E92D, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E952, 0x1E92A, 0x1E92B}),
				$cstr({0x1E910, 0x1E922, 0x1E934, 0x1E929, 0x1E92D, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E953, 0x1E92A, 0x1E92B}),
				$cstr({0x1E910, 0x1E922, 0x1E934, 0x1E929, 0x1E92D, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E954, 0x1E92A, 0x1E92B})
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of($cstr({0x1E933, 0x1E92D, 0x1E936, 0x1E92E, 0x1E945, 0x1E92A, 0x1E92B, ' ', 0x1E932, 0x1E92E, 0x1E933, 0x1E946, 0x1E935, 0x1E945, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of($cstr({0x1E93B, 0x1E922, 0x1E924, 0x1E946, 0x1E922, 0x1E924, ' ', 0x1E933, 0x1E922, ' ', 0x1E934, 0x1E92E, 0x1E932, 0x1E93C, 0x1E92B, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of($cstr({0x1E934, 0x1E92E, 0x1E932, 0x1E93C, 0x1E92B, 0x1E92A, 0x1E92B}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of($cstr({'{', '0', '}', ' ', 0x1E910, 0x1E936, 0x1E922, 0x1E925, 0x1E932, 0x1E923, 0x1E92D, ' ', 0x1E915, 0x1E92B, 0x1E945, 0x1E92F, 0x1E935}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
				"y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of($cstr({0x1E932, 0x1E94B, 0x1E936, 0x1E922, 0x1E925, 0x1E932, 0x1E94B, 0x1E923, 0x1E92D}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				$cstr({0x1E914, 0x1E92E, 0x1E926, '.'}),
				$cstr({0x1E905, 0x1E922, 0x1E928, '.'}),
				$cstr({0x1E906, 0x1E922, 0x1E92A, '.'}),
				$cstr({0x1E903, 0x1E92D, 0x1E928, '.'}),
				$cstr({0x1E904, 0x1E922, 0x1E928, '.'}),
				$cstr({0x1E905, 0x1E922, 0x1E92A, '.'}),
				$cstr({0x1E908, 0x1E922, 0x1E936, '.'}),
				$cstr({0x1E905, 0x1E922, 0x1E927, '.'}),
				$cstr({0x1E905, 0x1E935, 0x1E925, '.'}),
				$cstr({0x1E914, 0x1E935, 0x1E924, '.'}),
				$cstr({0x1E905, 0x1E922, 0x1E923, '.'}),
				$cstr({0x1E901, 0x1E92E, 0x1E932, '.'}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of($cstr({0x1E919, 0x1E922, 0x1E924, 0x1E92F, 0x1E92D, 0x1E925, 0x1E92B, 0x1E92A, 0x1E92B, ' ', 0x1E904, 0x1E935, 0x1E945, 0x1E923, 0x1E922, 0x1E934, 0x1E922, 0x1E932, 0x1E933, 0x1E92E}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayNarrows)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ff_Adlm::FormatData_ff_Adlm() {
}

$Class* FormatData_ff_Adlm::load$($String* name, bool initialize) {
	$loadClass(FormatData_ff_Adlm, name, initialize, &_FormatData_ff_Adlm_ClassInfo_, allocate$FormatData_ff_Adlm);
	return class$;
}

$Class* FormatData_ff_Adlm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun