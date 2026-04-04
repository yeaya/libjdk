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

void FormatData_ff_Adlm::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ff_Adlm::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		$cstr({0x0001e905, 0x0001e92d, 0x0001e945, 0x0001e924, 0x0001e92e}),
		$cstr({0x0001e915, 0x0001e92e, 0x0001e924, 0x0001e93c, 0x0001e92e}),
		$cstr({0x0001e910, 0x0001e926, 0x0001e92e, 0x0001e945, 0x0001e934, 0x0001e92e}),
		$cstr({0x0001e905, 0x0001e92b, 0x0001e945, 0x0001e93c, 0x0001e92e}),
		$cstr({0x0001e901, 0x0001e935, 0x0001e945, 0x0001e936, 0x0001e92e}),
		$cstr({0x0001e911, 0x0001e92e, 0x0001e92a, 0x0001e927, 0x0001e92e}),
		$cstr({0x0001e903, 0x0001e92e, 0x0001e92a, 0x0001e927, 0x0001e92e}),
		$cstr({0x0001e914, 0x0001e935, 0x0001e933, 0x0001e92e}),
		$cstr({0x0001e905, 0x0001e92d, 0x0001e924, 0x0001e93c, 0x0001e92e}),
		$cstr({0x0001e912, 0x0001e922, 0x0001e92a, 0x0001e933, 0x0001e92e}),
		$cstr({0x0001e914, 0x0001e92e, 0x0001e924, 0x0001e92e}),
		$cstr({0x0001e910, 0x0001e926, 0x0001e92e, 0x0001e931, 0x0001e93c, 0x0001e92e}),
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		$cstr({0x0001e905}),
		$cstr({0x0001e915}),
		$cstr({0x0001e904}),
		$cstr({0x0001e905}),
		$cstr({0x0001e901}),
		$cstr({0x0001e911}),
		$cstr({0x0001e903}),
		$cstr({0x0001e914}),
		$cstr({0x0001e905}),
		$cstr({0x0001e912}),
		$cstr({0x0001e914}),
		$cstr({0x0001e904}),
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		$cstr({0x0001e908, 0x0001e92b, 0x0001e92c, 0x0001e926, 0x0001e92d, 0x0001e92a, 0x0001e946, 0x0001e92b}),
		$cstr({0x0001e900, 0x0001e944, 0x0001e929, 0x0001e935, 0x0001e932, 0x0001e94b, 0x0001e923, 0x0001e92b}),
		$cstr({0x0001e903, 0x0001e922, 0x0001e931, 0x0001e926, 0x0001e922, 0x0001e944, 0x0001e92a, 0x0001e92b}),
		$cstr({0x0001e910, 0x0001e936, 0x0001e92b, 0x0001e927, 0x0001e924, 0x0001e922, 0x0001e944, 0x0001e92a, 0x0001e92b}),
		$cstr({0x0001e910, 0x0001e922, 0x0001e944, 0x0001e927, 0x0001e922, 0x0001e944, 0x0001e932, 0x0001e923, 0x0001e92b}),
		$cstr({0x0001e903, 0x0001e922, 0x0001e931, 0x0001e932, 0x0001e923, 0x0001e92b}),
		$cstr({0x0001e916, 0x0001e92e, 0x0001e92a, 0x0001e926, 0x0001e92d, 0x0001e92a, 0x0001e946, 0x0001e92b})
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		$cstr({0x0001e908, 0x0001e92b, 0x0001e92c}),
		$cstr({0x0001e900, 0x0001e944, 0x0001e929, 0x0001e935}),
		$cstr({0x0001e903, 0x0001e922, 0x0001e926}),
		$cstr({0x0001e914, 0x0001e92b, 0x0001e927}),
		$cstr({0x0001e910, 0x0001e922, 0x0001e944, 0x0001e927}),
		$cstr({0x0001e903, 0x0001e922, 0x0001e923}),
		$cstr({0x0001e916, 0x0001e92e, 0x0001e92a})
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		$cstr({0x0001e908}),
		$cstr({0x0001e900, 0x0001e944}),
		$cstr({0x0001e903}),
		$cstr({0x0001e914}),
		$cstr({0x0001e910}),
		$cstr({0x0001e903}),
		$cstr({0x0001e916})
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		$cstr({0x0001e910, 0x0001e951}),
		$cstr({0x0001e910, 0x0001e952}),
		$cstr({0x0001e910, 0x0001e953}),
		$cstr({0x0001e910, 0x0001e954})
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		$cstr({0x0001e951}),
		$cstr({0x0001e952}),
		$cstr({0x0001e953}),
		$cstr({0x0001e954})
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		$cstr({0x0001e900, 0x0001e90e}),
		$cstr({0x0001e907, 0x0001e90e}),
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
		$cstr({0x0001e922}),
		$cstr({0x0001e929}),
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
		$cstr({0x0001e900, 0x0001e900, 0x0001e90b}),
		$cstr({0x0001e907, 0x0001e900, 0x0001e90b})
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		$cstr({0x0001e907, 0x0001e90a})
	}));
	$var($String, metaValue_calendarname_gregorian, $cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e92f, 0x0001e92d, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e918, 0x0001e92b, 0x0001e92a, 0x0001e93a, 0x0001e92e, 0x0001e92a, 0x0001e92d, 0x0001e934, 0x0001e922, 0x0001e932, 0x0001e933, 0x0001e92e}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			$cstr({0x0001e938, 0x0001e92d, 0x0001e93c, 0x0001e922, 0x0001e944, 0x0001e932, 0x0001e923, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtFormat"_s,
			$cstr({0x0001e911, 0x0001e916, 0x0001e918, '{', '0', '}'})
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			$cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e92f, 0x0001e92d, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e902, 0x0001e92d, 0x0001e927, 0x0001e924, 0x0001e922, 0x0001e944, 0x0001e925, 0x0001e934, 0x0001e922, 0x0001e932, 0x0001e933, 0x0001e92e, ' ', '(', 0x0001e922, 0x0001e924, 0x0001e946, 0x0001e935, 0x0001e931, 0x0001e922, 0x0001e924, ',', ' ', 0x0001e92c, 0x0001e92b, 0x0001e931, 0x0001e932, 0x0001e94b, 0x0001e923, 0x0001e92e, ' ', 0x0001e932, 0x0001e94b, 0x0001e926, 0x0001e92b, 0x0001e92f, 0x0001e946, 0x0001e922, 0x0001e944, 0x0001e933, 0x0001e935, ')'})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			$cstr({'{', '0', '}', ' ', 0x0001e911, 0x0001e92d, 0x0001e936, 0x0001e92e, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e916, 0x0001e922, 0x0001e931, 0x0001e92a, 0x0001e92d, 0x0001e93c, 0x0001e935, 0x0001e932, 0x0001e94b, 0x0001e923, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			"adlm"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			$cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e92f, 0x0001e92d, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e914, 0x0001e922, 0x0001e944, 0x0001e928, 0x0001e92e, 0x0001e932, 0x0001e92d, 0x0001e932, 0x0001e933, 0x0001e92e})
		}),
		$$new($ObjectArray, {
			"timezone.gmtZeroFormat"_s,
			$cstr({0x0001e911, 0x0001e916, 0x0001e918})
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				$cstr({0x0001e900, 0x0001e923, 0x0001e92e, ' ', 0x0001e900, 0x0001e932, 0x0001e946, 0x0001e922, 0x0001e926, 0x0001e92d, ' ', 0x0001e90b, 0x0001e945, 0x0001e927, 0x0001e922, 0x0001e944}),
				$cstr({0x0001e907, 0x0001e922, 0x0001e944, 0x0001e931, 0x0001e92e, ' ', 0x0001e900, 0x0001e932, 0x0001e946, 0x0001e922, 0x0001e926, 0x0001e92d, ' ', 0x0001e90b, 0x0001e945, 0x0001e927, 0x0001e922, 0x0001e944})
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				"{1}{0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
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
				$cstr({0x0001e90f, 0x0001e92e, 0x0001e908}),
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			$cstr({0x0001e938, 0x0001e92e, 0x0001e936, 0x0001e92e, 0x0001e925, 0x0001e922, 0x0001e944, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			$cstr({0x0001e93a, 0x0001e92d, 0x0001e92a, 0x0001e922, 0x0001e924})
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			$cstr({0x0001e900, 0x0001e90e, '/', 0x0001e907, 0x0001e90e})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				$cstr({0x0001e905}),
				$cstr({0x0001e915}),
				$cstr({0x0001e904}),
				$cstr({0x0001e905}),
				$cstr({0x0001e901}),
				$cstr({0x0001e911}),
				$cstr({0x0001e903}),
				$cstr({0x0001e914}),
				$cstr({0x0001e905}),
				$cstr({0x0001e912}),
				$cstr({0x0001e904}),
				$cstr({0x0001e904}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				$cstr({0x0001e914, 0x0001e92e, 0x0001e925, 0x0001e926, 0x0001e92b, 0x0001e932, 0x0001e93c, 0x0001e92b}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e926, 0x0001e946, 0x0001e92e, 0x0001e92a, 0x0001e923, 0x0001e935, '-', 0x0001e906, 0x0001e922, 0x0001e92a, 0x0001e922, 0x0001e932}),
				$cstr({0x0001e906, 0x0001e922, 0x0001e92a, 0x0001e922, 0x0001e932}),
				$cstr({0x0001e903, 0x0001e92d, 0x0001e925, 0x0001e928, 0x0001e922, 0x0001e92a, 0x0001e922, 0x0001e932}),
				$cstr({0x0001e904, 0x0001e922, 0x0001e928, 0x0001e946, 0x0001e922, 0x0001e92a, 0x0001e922, 0x0001e932}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e926, 0x0001e946, 0x0001e92e, 0x0001e92a, 0x0001e923, 0x0001e935, '-', 0x0001e908, 0x0001e922, 0x0001e944, 0x0001e936, 0x0001e92d, 0x0001e926, 0x0001e92d}),
				$cstr({0x0001e908, 0x0001e922, 0x0001e944, 0x0001e936, 0x0001e92d, 0x0001e926, 0x0001e92d}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e926, 0x0001e946, 0x0001e92e, 0x0001e92a, 0x0001e923, 0x0001e935, '-', 0x0001e905, 0x0001e935, 0x0001e945, 0x0001e925, 0x0001e922, 0x0001e934, 0x0001e92b, 0x0001e945}),
				$cstr({0x0001e905, 0x0001e935, 0x0001e945, 0x0001e925, 0x0001e922, 0x0001e934, 0x0001e92b, 0x0001e945}),
				$cstr({0x0001e914, 0x0001e935, 0x0001e945, 0x0001e924, 0x0001e923, 0x0001e922, 0x0001e944, 0x0001e932, 0x0001e94b, 0x0001e923, 0x0001e935}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e926, 0x0001e946, 0x0001e92e, 0x0001e92a, 0x0001e923, 0x0001e935, '-', 0x0001e901, 0x0001e92e, 0x0001e932, 0x0001e933, 0x0001e92d, 0x0001e932}),
				$cstr({0x0001e901, 0x0001e935, 0x0001e932, 0x0001e933, 0x0001e92d, 0x0001e932}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			$cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e92f, 0x0001e92d, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e918, 0x0001e92b, 0x0001e932, 0x0001e923, 0x0001e92d, 0x0001e934, 0x0001e922, 0x0001e932, 0x0001e933, 0x0001e92e, ' ', 0x0001e905, 0x0001e92d, 0x0001e945, 0x0001e932})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			$cstr({0x0001e924, 0x0001e92b, 0x0001e931, 0x0001e92a, 0x0001e935})
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			$cstr({0x0001e933, 0x0001e92d, 0x0001e932, 0x0001e930, 0x0001e92b, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNarrows"_s,
			$$new($StringArray, {
				$cstr({0x0001e951}),
				$cstr({0x0001e952}),
				$cstr({0x0001e953}),
				$cstr({0x0001e954}),
				$cstr({0x0001e955}),
				$cstr({0x0001e956}),
				$cstr({0x0001e957}),
				$cstr({0x0001e958}),
				$cstr({0x0001e959}),
				$cstr({0x0001e951, 0x0001e950}),
				$cstr({0x0001e951, 0x0001e951}),
				$cstr({0x0001e951, 0x0001e952}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			$cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e902, 0x0001e92d, 0x0001e927, 0x0001e924, 0x0001e922, 0x0001e944, 0x0001e925, 0x0001e934, 0x0001e922, 0x0001e932, 0x0001e933, 0x0001e92e})
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				$cstr({0x0001e905, 0x0001e92d, 0x0001e945, 0x0001e924}),
				$cstr({0x0001e915, 0x0001e92e, 0x0001e924}),
				$cstr({0x0001e904, 0x0001e92e, 0x0001e945, 0x0001e934}),
				$cstr({0x0001e905, 0x0001e92b, 0x0001e945, 0x0001e93c}),
				$cstr({0x0001e901, 0x0001e935, 0x0001e945, 0x0001e936}),
				$cstr({0x0001e911, 0x0001e92e, 0x0001e92a}),
				$cstr({0x0001e903, 0x0001e92e, 0x0001e92a}),
				$cstr({0x0001e914, 0x0001e935, 0x0001e933}),
				$cstr({0x0001e905, 0x0001e92d, 0x0001e924}),
				$cstr({0x0001e912, 0x0001e922, 0x0001e92a}),
				$cstr({0x0001e914, 0x0001e92e, 0x0001e924}),
				$cstr({0x0001e904, 0x0001e92e, 0x0001e931}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			$cstr({'{', '0', '}', ' ', 0x0001e911, 0x0001e92d, 0x0001e936, 0x0001e92e, 0x0001e945, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			$$new($StringArray, {
				$cstr({0x0001e910, 0x0001e922, 0x0001e934, 0x0001e929, 0x0001e92d, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e951, 0x0001e92a, 0x0001e92b}),
				$cstr({0x0001e910, 0x0001e922, 0x0001e934, 0x0001e929, 0x0001e92d, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e952, 0x0001e92a, 0x0001e92b}),
				$cstr({0x0001e910, 0x0001e922, 0x0001e934, 0x0001e929, 0x0001e92d, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e953, 0x0001e92a, 0x0001e92b}),
				$cstr({0x0001e910, 0x0001e922, 0x0001e934, 0x0001e929, 0x0001e92d, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e954, 0x0001e92a, 0x0001e92b})
			})
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			$cstr({0x0001e933, 0x0001e92d, 0x0001e936, 0x0001e92e, 0x0001e945, 0x0001e92a, 0x0001e92b, ' ', 0x0001e932, 0x0001e92e, 0x0001e933, 0x0001e946, 0x0001e935, 0x0001e945, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			$cstr({0x0001e93b, 0x0001e922, 0x0001e924, 0x0001e946, 0x0001e922, 0x0001e924, ' ', 0x0001e933, 0x0001e922, ' ', 0x0001e934, 0x0001e92e, 0x0001e932, 0x0001e93c, 0x0001e92b, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"java.time.islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			$cstr({0x0001e934, 0x0001e92e, 0x0001e932, 0x0001e93c, 0x0001e92b, 0x0001e92a, 0x0001e92b})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			$cstr({'{', '0', '}', ' ', 0x0001e910, 0x0001e936, 0x0001e922, 0x0001e925, 0x0001e932, 0x0001e923, 0x0001e92d, ' ', 0x0001e915, 0x0001e92b, 0x0001e945, 0x0001e92f, 0x0001e935})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"y MMMM d, EEEE"_s,
				"y MMMM d"_s,
				"y MMM d"_s,
				"y-MM-dd"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			$cstr({0x0001e932, 0x0001e94b, 0x0001e936, 0x0001e922, 0x0001e925, 0x0001e932, 0x0001e94b, 0x0001e923, 0x0001e92d})
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				$cstr({0x0001e914, 0x0001e92e, 0x0001e926, '.'}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e928, '.'}),
				$cstr({0x0001e906, 0x0001e922, 0x0001e92a, '.'}),
				$cstr({0x0001e903, 0x0001e92d, 0x0001e928, '.'}),
				$cstr({0x0001e904, 0x0001e922, 0x0001e928, '.'}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e92a, '.'}),
				$cstr({0x0001e908, 0x0001e922, 0x0001e936, '.'}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e927, '.'}),
				$cstr({0x0001e905, 0x0001e935, 0x0001e925, '.'}),
				$cstr({0x0001e914, 0x0001e935, 0x0001e924, '.'}),
				$cstr({0x0001e905, 0x0001e922, 0x0001e923, '.'}),
				$cstr({0x0001e901, 0x0001e92e, 0x0001e932, '.'}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			$cstr({0x0001e919, 0x0001e922, 0x0001e924, 0x0001e92f, 0x0001e92d, 0x0001e925, 0x0001e92b, 0x0001e92a, 0x0001e92b, ' ', 0x0001e904, 0x0001e935, 0x0001e945, 0x0001e923, 0x0001e922, 0x0001e934, 0x0001e922, 0x0001e932, 0x0001e933, 0x0001e92e})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.islamic.long.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"japanese.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_ff_Adlm::FormatData_ff_Adlm() {
}

$Class* FormatData_ff_Adlm::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ff_Adlm, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ff_Adlm, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_ff_Adlm",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ff_Adlm, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ff_Adlm);
	});
	return class$;
}

$Class* FormatData_ff_Adlm::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun