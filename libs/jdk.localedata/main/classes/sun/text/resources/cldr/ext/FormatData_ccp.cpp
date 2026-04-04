#include <sun/text/resources/cldr/ext/FormatData_ccp.h>
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

void FormatData_ccp::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ccp::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		$cstr({0x0001110e, 0x0001111a, 0x0001112a, 0x00011120, 0x00011122, 0x00011128}),
		$cstr({0x0001111c, 0x0001112c, 0x0001111b, 0x00011134, 0x0001111d, 0x00011133, 0x00011122, 0x0001112a, 0x00011120, 0x00011122, 0x00011128}),
		$cstr({0x0001111f, 0x00011122, 0x00011134, 0x0001110c, 0x00011127}),
		$cstr({0x00011103, 0x0001112c, 0x0001111b, 0x00011133, 0x00011122, 0x00011128, 0x00011123, 0x00011134}),
		$cstr({0x0001111f, 0x0001112c}),
		$cstr({0x0001110e, 0x0001112a, 0x0001111a, 0x00011134}),
		$cstr({0x0001110e, 0x0001112a, 0x00011123, 0x0001112d}),
		$cstr({0x00011103, 0x00011109, 0x00011127, 0x0001110c, 0x00011134, 0x00011111, 0x00011134}),
		$cstr({0x00011125, 0x0001112c, 0x0001111b, 0x00011134, 0x00011111, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011111, 0x0001112c, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x0001111a, 0x00011127, 0x0001111e, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011113, 0x00011128, 0x00011125, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		""_s
	}));
	$var($StringArray, metaValue_standalone_MonthNames, $new($StringArray, {
		$cstr({0x0001110e, 0x0001111a, 0x0001112a, 0x00011120, 0x00011122, 0x00011128}),
		$cstr({0x0001111c, 0x0001112c, 0x0001111b, 0x00011134, 0x0001111d, 0x00011133, 0x00011122, 0x0001112a, 0x00011120, 0x00011122, 0x00011128}),
		$cstr({0x0001111f, 0x00011122, 0x00011134, 0x0001110c, 0x00011127}),
		$cstr({0x00011103, 0x0001112c, 0x0001111b, 0x00011133, 0x00011122, 0x00011128, 0x00011123, 0x00011134}),
		$cstr({0x0001111f, 0x0001112c}),
		$cstr({0x0001110e, 0x0001112a, 0x0001111a, 0x00011134}),
		$cstr({0x0001110e, 0x0001112a, 0x00011123, 0x0001112d}),
		$cstr({0x00011103, 0x00011109, 0x00011127, 0x0001110c, 0x00011134, 0x00011111, 0x00011134}),
		$cstr({0x00011125, 0x0001112c, 0x0001111b, 0x00011134, 0x00011111, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011111, 0x0001112e, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x0001111a, 0x00011127, 0x0001111e, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011113, 0x00011128, 0x00011125, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		$cstr({0x0001110e, 0x0001111a, 0x0001112a}),
		$cstr({0x0001111c, 0x0001112c, 0x0001111b, 0x00011134}),
		$cstr({0x0001111f, 0x00011122, 0x00011134, 0x0001110c, 0x00011127}),
		$cstr({0x00011103, 0x0001112c, 0x0001111b, 0x00011133, 0x00011122, 0x00011128, 0x00011123, 0x00011134}),
		$cstr({0x0001111f, 0x0001112c}),
		$cstr({0x0001110e, 0x0001112a, 0x0001111a, 0x00011134}),
		$cstr({0x0001110e, 0x0001112a, 0x00011123, 0x0001112d}),
		$cstr({0x00011103, 0x00011109, 0x00011127, 0x0001110c, 0x00011134, 0x00011111, 0x00011134}),
		$cstr({0x00011125, 0x0001112c, 0x0001111b, 0x00011134, 0x00011111, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011111, 0x0001112e, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x0001111a, 0x00011127, 0x0001111e, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011113, 0x00011128, 0x00011125, 0x0001112c, 0x0001111f, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		$cstr({0x0001110e}),
		$cstr({0x0001111c, 0x0001112c}),
		$cstr({0x0001111f}),
		$cstr({0x00011103, 0x0001112c}),
		$cstr({0x0001111f, 0x0001112c}),
		$cstr({0x0001110e, 0x0001112a, 0x0001111a, 0x00011134}),
		$cstr({0x0001110e, 0x0001112a}),
		$cstr({0x00011103}),
		$cstr({0x00011125, 0x0001112c}),
		$cstr({0x00011103, 0x00011127}),
		$cstr({0x0001111a, 0x00011127}),
		$cstr({0x00011113, 0x00011128}),
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		$cstr({0x00011122, 0x00011127, 0x0001111d, 0x00011128, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x00011125, 0x00011127, 0x0001111f, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x0001111f, 0x00011127, 0x00011101, 0x00011109, 0x00011127, 0x00011123, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x0001111d, 0x0001112a, 0x00011116, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x0001111d, 0x00011133, 0x00011122, 0x00011128, 0x00011125, 0x0001112a, 0x0001111b, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x00011125, 0x0001112a, 0x00011107, 0x00011134, 0x00011107, 0x0001112e, 0x00011122, 0x00011134, 0x0001111d, 0x00011122, 0x00011134}),
		$cstr({0x00011125, 0x00011127, 0x0001111a, 0x00011128, 0x0001111d, 0x00011122, 0x00011134})
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		$cstr({0x00011122, 0x00011127, 0x0001111d, 0x00011128}),
		$cstr({0x00011125, 0x00011127, 0x0001111f, 0x00011134}),
		$cstr({0x0001111f, 0x00011127, 0x00011101, 0x00011109, 0x00011127, 0x00011123, 0x00011134}),
		$cstr({0x0001111d, 0x0001112a, 0x00011116, 0x00011134}),
		$cstr({0x0001111d, 0x00011133, 0x00011122, 0x00011128, 0x00011125, 0x0001112a, 0x0001111b, 0x00011134}),
		$cstr({0x00011125, 0x0001112a, 0x00011107, 0x00011134, 0x00011107, 0x0001112e, 0x00011122, 0x00011134}),
		$cstr({0x00011125, 0x00011127, 0x0001111a, 0x00011128})
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		$cstr({0x00011122, 0x00011127}),
		$cstr({0x00011125, 0x00011127}),
		$cstr({0x0001111f, 0x00011127}),
		$cstr({0x0001111d, 0x0001112a}),
		$cstr({0x0001111d, 0x00011133, 0x00011122, 0x00011128}),
		$cstr({0x00011125, 0x0001112a}),
		$cstr({0x00011125, 0x00011127})
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		$cstr({0x00011116, 0x00011128, 0x0001111a, 0x00011134, 0x0001111f, 0x0001110e, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011118, 0x00011128, ' ', 0x0001111b, 0x00011133, 0x00011106, 0x00011118, 0x00011133, 0x00011120, 0x0001112c, ' ', 0x00011116, 0x00011128, 0x0001111a, 0x00011134, 0x0001111f, 0x0001110e, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x00011116, 0x00011128, 0x0001111a, 0x00011134, ' ', 0x0001111b, 0x00011133, 0x00011106, 0x00011118, 0x00011133, 0x00011120, 0x0001112c, ' ', 0x00011116, 0x00011128, 0x0001111a, 0x00011134, 0x0001111f, 0x0001110e, 0x00011127, 0x00011122, 0x00011134}),
		$cstr({0x0001110c, 0x00011133, 0x00011106, 0x0001112c, 0x00011122, 0x00011134, ' ', 0x0001111b, 0x00011133, 0x00011106, 0x00011118, 0x00011133, 0x00011120, 0x0001112c, ' ', 0x00011116, 0x00011128, 0x0001111a, 0x00011134, 0x0001111f, 0x0001110e, 0x00011127, 0x00011122, 0x00011134})
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		$cstr({0x00011137}),
		$cstr({0x00011138}),
		$cstr({0x00011139}),
		$cstr({0x0001113a})
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		$cstr({0x0001111b, 0x00011127, 0x00011116, 0x00011133, 0x00011120, 0x00011103, 0x0001111f, 0x00011127, 0x00011123, 0x00011133, 0x00011120, 0x0001112c}),
		$cstr({0x0001111d, 0x0001112c, 0x0001111a, 0x00011133, 0x00011120, 0x0001112c}),
		$cstr({0x00011118, 0x00011128, 0x0001111d, 0x0001112a, 0x0001110e, 0x00011133, 0x00011120}),
		$cstr({0x0001111d, 0x0001112c, 0x00011123, 0x00011133, 0x00011120, 0x0001112c}),
		$cstr({0x00011125, 0x0001110e, 0x00011127, 0x0001111a, 0x00011133, 0x00011120}),
		""_s,
		$cstr({0x00011122, 0x0001112c, 0x00011116, 0x00011134}),
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		$cstr({0x00011108, 0x00011133, 0x00011122, 0x00011128, 0x0001110c, 0x00011134, 0x00011111, 0x00011134, 0x0001111b, 0x0001112b, 0x00011122, 0x00011134, 0x0001111d, 0x00011127}),
		$cstr({0x00011108, 0x00011133, 0x00011122, 0x00011128, 0x0001110c, 0x00011134, 0x00011111, 0x0001111b, 0x00011134, 0x00011118, 0x00011127})
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y G"_s,
		"d MMMM, y G"_s,
		"d MMM, y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM, y GGGG"_s,
		"d MMMM, y GGGG"_s,
		"d MMM, y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		$cstr({0x00011121, 0x0001112a, 0x00011107, 0x00011134})
	}));
	$var($String, metaValue_calendarname_gregorian, $cstr({0x00011109, 0x00011133, 0x00011122, 0x00011109, 0x0001112e, 0x00011122, 0x00011128, 0x00011120, 0x0001111a, 0x00011134, ' ', 0x00011107, 0x00011133, 0x00011120, 0x00011123, 0x0001112c, 0x0001111a, 0x00011134, 0x00011113, 0x00011122, 0x00011134}));
	$var($StringArray, metaValue_cakm_NumberElements, $new($StringArray, {
		"."_s,
		","_s,
		";"_s,
		"%"_s,
		"0"_s,
		"#"_s,
		"-"_s,
		"E"_s,
		u"‰"_s,
		u"∞"_s,
		"NaN"_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_short_CompactNumberPatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"{other:0K}"_s,
		"{other:00K}"_s,
		"{other:000K}"_s,
		"{other:0M}"_s,
		"{other:00M}"_s,
		"{other:000M}"_s,
		"{other:0G}"_s,
		"{other:00G}"_s,
		"{other:000G}"_s,
		"{other:0T}"_s,
		"{other:00T}"_s,
		"{other:000T}"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			$cstr({0x0001111d, 0x00011127, 0x0001110f, 0x00011127, 0x00011122, 0x00011134})
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
			"GMT {0}"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
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
			$cstr({0x00011103, 0x00011128, 0x00011125, 0x00011134, 0x00011123, 0x0001111f, 0x00011128, 0x00011107, 0x00011134, '-', 0x00011125, 0x00011128, 0x0001111e, 0x00011128, 0x00011123, 0x00011134, ' ', 0x0001111d, 0x00011127, 0x00011122, 0x00011134, 0x00011125, 0x00011127, 0x0001111b, 0x00011127, 0x0001111a, 0x00011134, 0x0001110f, 0x00011129})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_long_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			$cstr({'{', '0', '}', ' ', 0x0001111f, 0x0001111a, 0x00011127, 0x00011107, 0x00011134, ' ', 0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011116, 0x00011127, 0x00011116, 0x00011134})
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			"cakm"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			$cstr({0x0001110e, 0x0001111b, 0x0001111a, 0x00011128, ' ', 0x00011107, 0x00011133, 0x00011120, 0x00011123, 0x0001112c, 0x0001111a, 0x00011134, 0x00011113, 0x00011122, 0x00011134})
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			metaValue_long_Eras
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"cakm.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##,##0.00¤"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			metaValue_cakm_NumberElements
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			$cstr({0x0001111f, 0x00011128, 0x0001111a, 0x00011128, 0x00011116, 0x00011134})
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			$cstr({0x00011121, 0x0001112a, 0x00011107, 0x00011134})
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"AM/PM"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				$cstr({0x0001111f, 0x00011127, 0x00011126, 0x00011127, 0x00011122, 0x00011127, 0x0001111f, 0x00011134}),
				$cstr({0x00011125, 0x00011127, 0x0001111c, 0x00011122, 0x00011134}),
				$cstr({0x00011122, 0x00011127, 0x0001111d, 0x00011128, 0x00011105, 0x00011123, 0x00011134, ' ', 0x00011103, 0x00011103, 0x0001112a, 0x00011120, 0x00011123, 0x00011134}),
				$cstr({0x00011122, 0x00011127, 0x0001111d, 0x00011128, 0x00011105, 0x00011125, 0x00011134, ' ', 0x00011125, 0x0001111a, 0x00011128}),
				$cstr({0x0001110e, 0x00011127, 0x0001111f, 0x00011118, 0x00011128, 0x00011105, 0x00011123, 0x00011134, ' ', 0x00011103, 0x00011103, 0x0001112a, 0x00011120, 0x00011123, 0x00011134}),
				$cstr({0x0001110e, 0x00011127, 0x0001111f, 0x00011118, 0x00011128, 0x00011105, 0x0001110c, 0x00011134, ' ', 0x00011125, 0x0001111a, 0x00011128}),
				$cstr({0x00011122, 0x00011127, 0x0001110e, 0x00011127, 0x0001111d, 0x00011134}),
				$cstr({0x00011125, 0x00011133, 0x00011103, 0x0001111d, 0x00011127, 0x0001111a, 0x00011134}),
				$cstr({0x00011122, 0x00011127, 0x0001111f, 0x00011134, 0x0001110e, 0x0001111a, 0x00011134}),
				$cstr({0x00011125, 0x00011124, 0x00011123, 0x00011134}),
				$cstr({0x0001110e, 0x00011128, 0x00011123, 0x00011134, 0x00011107, 0x00011127, 0x00011118, 0x00011134}),
				$cstr({0x0001110e, 0x00011128, 0x00011123, 0x00011134, 0x00011126, 0x00011127, 0x0001110e, 0x00011134, 0x0001110e, 0x00011127}),
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			$cstr({0x0001111f, 0x00011128, 0x00011101, 0x00011109, 0x0001112a, 0x00011103, 0x0001112e, ' ', 0x00011107, 0x00011133, 0x00011120, 0x00011123, 0x0001112c, 0x0001111a, 0x00011134, 0x00011113, 0x00011122, 0x00011134})
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			$cstr({0x0001111f, 0x0001110f, 0x00011134})
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			$cstr({0x00011125, 0x0001112c, 0x00011109, 0x0001112c, 0x0001111a, 0x00011134})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNarrows"_s,
			$$new($StringArray, {
				$cstr({0x00011137}),
				$cstr({0x00011138}),
				$cstr({0x00011139}),
				$cstr({0x0001113a}),
				$cstr({0x0001113b}),
				$cstr({0x0001113c}),
				$cstr({0x0001113d}),
				$cstr({0x0001113e}),
				$cstr({0x0001113f}),
				$cstr({0x00011137, 0x00011136}),
				$cstr({0x00011137, 0x00011137}),
				$cstr({0x00011137, 0x00011138}),
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
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			$cstr({0x00011103, 0x00011128, 0x00011125, 0x00011134, 0x00011123, 0x0001111f, 0x00011128, 0x00011107, 0x00011134, ' ', 0x00011107, 0x00011133, 0x00011120, 0x00011123, 0x0001112c, 0x0001111a, 0x00011134, 0x00011113, 0x00011122, 0x00011134})
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"night1:20:00-04:00;morning2:06:00-12:00;afternoon1:12:00-16:00;morning1:04:00-06:00;afternoon2:16:00-18:00;evening1:18:00-20:00"_s
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_standalone_MonthNames
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			metaValue_short_CompactNumberPatterns
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			$cstr({'{', '0', '}', ' ', 0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011116, 0x00011127})
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
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
			$cstr({0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011116, 0x00011127, 0x00011122, 0x00011134, ' ', 0x0001110e, 0x00011109})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_long_Eras
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
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			$cstr({0x00011125, 0x0001111b, 0x00011134, 0x00011116, 0x00011122, 0x00011134, ' ', 0x00011118, 0x00011128, 0x0001111a, 0x00011134})
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
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
			metaValue_standalone_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"cakm.NumberElements"_s,
			metaValue_cakm_NumberElements
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
			"buddhist.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			$cstr({0x00011125, 0x0001111b, 0x00011134, 0x00011116})
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
			"java.time.roc.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			metaValue_short_CompactNumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			$cstr({'{', '0', '}', ' ', 0x00011118, 0x00011128, 0x0001111d, 0x0001112a, 0x0001110c, 0x00011134, 0x0001110e, 0x00011133, 0x00011120, ' ', 0x00011103, 0x00011127, 0x00011107, 0x00011134, 0x00011116, 0x00011127, 0x00011116, 0x00011134})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"d/M/yy"_s
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			$cstr({0x0001110a, 0x0001112e, 0x0001111a, 0x00011134, 0x00011113})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_long_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			$cstr({0x0001111d, 0x0001112a, 0x00011116, 0x00011134, 0x00011119, 0x0001112e, ' ', 0x00011107, 0x00011133, 0x00011120, 0x00011123, 0x0001112c, 0x0001111a, 0x00011134, 0x00011113, 0x00011122, 0x00011134})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_standalone_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##,##0.###"_s,
				u"#,##,##0.00¤"_s,
				"#,##,##0%"_s,
				u"#,##,##0.00¤;(#,##,##0.00¤)"_s
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

FormatData_ccp::FormatData_ccp() {
}

$Class* FormatData_ccp::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ccp, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ccp, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_ccp",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ccp, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ccp);
	});
	return class$;
}

$Class* FormatData_ccp::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun