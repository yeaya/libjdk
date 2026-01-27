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

$MethodInfo _FormatData_ccp_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ccp, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ccp, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ccp_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ccp",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ccp_MethodInfo_
};

$Object* allocate$FormatData_ccp($Class* clazz) {
	return $of($alloc(FormatData_ccp));
}

void FormatData_ccp::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ccp::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		$cstr({0x1110E, 0x1111A, 0x1112A, 0x11120, 0x11122, 0x11128}),
		$cstr({0x1111C, 0x1112C, 0x1111B, 0x11134, 0x1111D, 0x11133, 0x11122, 0x1112A, 0x11120, 0x11122, 0x11128}),
		$cstr({0x1111F, 0x11122, 0x11134, 0x1110C, 0x11127}),
		$cstr({0x11103, 0x1112C, 0x1111B, 0x11133, 0x11122, 0x11128, 0x11123, 0x11134}),
		$cstr({0x1111F, 0x1112C}),
		$cstr({0x1110E, 0x1112A, 0x1111A, 0x11134}),
		$cstr({0x1110E, 0x1112A, 0x11123, 0x1112D}),
		$cstr({0x11103, 0x11109, 0x11127, 0x1110C, 0x11134, 0x11111, 0x11134}),
		$cstr({0x11125, 0x1112C, 0x1111B, 0x11134, 0x11111, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11103, 0x11127, 0x11107, 0x11134, 0x11111, 0x1112C, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x1111A, 0x11127, 0x1111E, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11113, 0x11128, 0x11125, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		""_s
	}));
	$var($StringArray, metaValue_standalone_MonthNames, $new($StringArray, {
		$cstr({0x1110E, 0x1111A, 0x1112A, 0x11120, 0x11122, 0x11128}),
		$cstr({0x1111C, 0x1112C, 0x1111B, 0x11134, 0x1111D, 0x11133, 0x11122, 0x1112A, 0x11120, 0x11122, 0x11128}),
		$cstr({0x1111F, 0x11122, 0x11134, 0x1110C, 0x11127}),
		$cstr({0x11103, 0x1112C, 0x1111B, 0x11133, 0x11122, 0x11128, 0x11123, 0x11134}),
		$cstr({0x1111F, 0x1112C}),
		$cstr({0x1110E, 0x1112A, 0x1111A, 0x11134}),
		$cstr({0x1110E, 0x1112A, 0x11123, 0x1112D}),
		$cstr({0x11103, 0x11109, 0x11127, 0x1110C, 0x11134, 0x11111, 0x11134}),
		$cstr({0x11125, 0x1112C, 0x1111B, 0x11134, 0x11111, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11103, 0x11127, 0x11107, 0x11134, 0x11111, 0x1112E, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x1111A, 0x11127, 0x1111E, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11113, 0x11128, 0x11125, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		$cstr({0x1110E, 0x1111A, 0x1112A}),
		$cstr({0x1111C, 0x1112C, 0x1111B, 0x11134}),
		$cstr({0x1111F, 0x11122, 0x11134, 0x1110C, 0x11127}),
		$cstr({0x11103, 0x1112C, 0x1111B, 0x11133, 0x11122, 0x11128, 0x11123, 0x11134}),
		$cstr({0x1111F, 0x1112C}),
		$cstr({0x1110E, 0x1112A, 0x1111A, 0x11134}),
		$cstr({0x1110E, 0x1112A, 0x11123, 0x1112D}),
		$cstr({0x11103, 0x11109, 0x11127, 0x1110C, 0x11134, 0x11111, 0x11134}),
		$cstr({0x11125, 0x1112C, 0x1111B, 0x11134, 0x11111, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11103, 0x11127, 0x11107, 0x11134, 0x11111, 0x1112E, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x1111A, 0x11127, 0x1111E, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11113, 0x11128, 0x11125, 0x1112C, 0x1111F, 0x11134, 0x1111D, 0x11122, 0x11134}),
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		$cstr({0x1110E}),
		$cstr({0x1111C, 0x1112C}),
		$cstr({0x1111F}),
		$cstr({0x11103, 0x1112C}),
		$cstr({0x1111F, 0x1112C}),
		$cstr({0x1110E, 0x1112A, 0x1111A, 0x11134}),
		$cstr({0x1110E, 0x1112A}),
		$cstr({0x11103}),
		$cstr({0x11125, 0x1112C}),
		$cstr({0x11103, 0x11127}),
		$cstr({0x1111A, 0x11127}),
		$cstr({0x11113, 0x11128}),
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		$cstr({0x11122, 0x11127, 0x1111D, 0x11128, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x11125, 0x11127, 0x1111F, 0x11134, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x1111F, 0x11127, 0x11101, 0x11109, 0x11127, 0x11123, 0x11134, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x1111D, 0x1112A, 0x11116, 0x11134, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x1111D, 0x11133, 0x11122, 0x11128, 0x11125, 0x1112A, 0x1111B, 0x11134, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x11125, 0x1112A, 0x11107, 0x11134, 0x11107, 0x1112E, 0x11122, 0x11134, 0x1111D, 0x11122, 0x11134}),
		$cstr({0x11125, 0x11127, 0x1111A, 0x11128, 0x1111D, 0x11122, 0x11134})
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		$cstr({0x11122, 0x11127, 0x1111D, 0x11128}),
		$cstr({0x11125, 0x11127, 0x1111F, 0x11134}),
		$cstr({0x1111F, 0x11127, 0x11101, 0x11109, 0x11127, 0x11123, 0x11134}),
		$cstr({0x1111D, 0x1112A, 0x11116, 0x11134}),
		$cstr({0x1111D, 0x11133, 0x11122, 0x11128, 0x11125, 0x1112A, 0x1111B, 0x11134}),
		$cstr({0x11125, 0x1112A, 0x11107, 0x11134, 0x11107, 0x1112E, 0x11122, 0x11134}),
		$cstr({0x11125, 0x11127, 0x1111A, 0x11128})
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		$cstr({0x11122, 0x11127}),
		$cstr({0x11125, 0x11127}),
		$cstr({0x1111F, 0x11127}),
		$cstr({0x1111D, 0x1112A}),
		$cstr({0x1111D, 0x11133, 0x11122, 0x11128}),
		$cstr({0x11125, 0x1112A}),
		$cstr({0x11125, 0x11127})
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		$cstr({0x11116, 0x11128, 0x1111A, 0x11134, 0x1111F, 0x1110E, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11118, 0x11128, ' ', 0x1111B, 0x11133, 0x11106, 0x11118, 0x11133, 0x11120, 0x1112C, ' ', 0x11116, 0x11128, 0x1111A, 0x11134, 0x1111F, 0x1110E, 0x11127, 0x11122, 0x11134}),
		$cstr({0x11116, 0x11128, 0x1111A, 0x11134, ' ', 0x1111B, 0x11133, 0x11106, 0x11118, 0x11133, 0x11120, 0x1112C, ' ', 0x11116, 0x11128, 0x1111A, 0x11134, 0x1111F, 0x1110E, 0x11127, 0x11122, 0x11134}),
		$cstr({0x1110C, 0x11133, 0x11106, 0x1112C, 0x11122, 0x11134, ' ', 0x1111B, 0x11133, 0x11106, 0x11118, 0x11133, 0x11120, 0x1112C, ' ', 0x11116, 0x11128, 0x1111A, 0x11134, 0x1111F, 0x1110E, 0x11127, 0x11122, 0x11134})
	}));
	$var($StringArray, metaValue_standalone_QuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		$cstr({0x11137}),
		$cstr({0x11138}),
		$cstr({0x11139}),
		$cstr({0x1113A})
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		""_s,
		""_s,
		$cstr({0x1111B, 0x11127, 0x11116, 0x11133, 0x11120, 0x11103, 0x1111F, 0x11127, 0x11123, 0x11133, 0x11120, 0x1112C}),
		$cstr({0x1111D, 0x1112C, 0x1111A, 0x11133, 0x11120, 0x1112C}),
		$cstr({0x11118, 0x11128, 0x1111D, 0x1112A, 0x1110E, 0x11133, 0x11120}),
		$cstr({0x1111D, 0x1112C, 0x11123, 0x11133, 0x11120, 0x1112C}),
		$cstr({0x11125, 0x1110E, 0x11127, 0x1111A, 0x11133, 0x11120}),
		""_s,
		$cstr({0x11122, 0x1112C, 0x11116, 0x11134}),
		""_s
	}));
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		$cstr({0x11108, 0x11133, 0x11122, 0x11128, 0x1110C, 0x11134, 0x11111, 0x11134, 0x1111B, 0x1112B, 0x11122, 0x11134, 0x1111D, 0x11127}),
		$cstr({0x11108, 0x11133, 0x11122, 0x11128, 0x1110C, 0x11134, 0x11111, 0x1111B, 0x11134, 0x11118, 0x11127})
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
		$cstr({0x11121, 0x1112A, 0x11107, 0x11134})
	}));
	$var($String, metaValue_calendarname_gregorian, $cstr({0x11109, 0x11133, 0x11122, 0x11109, 0x1112E, 0x11122, 0x11128, 0x11120, 0x1111A, 0x11134, ' ', 0x11107, 0x11133, 0x11120, 0x11123, 0x1112C, 0x1111A, 0x11134, 0x11113, 0x11122, 0x11134}));
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
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of($cstr({0x1111D, 0x11127, 0x1110F, 0x11127, 0x11122, 0x11134}))
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
			$of("GMT {0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of($cstr({0x11103, 0x11128, 0x11125, 0x11134, 0x11123, 0x1111F, 0x11128, 0x11107, 0x11134, '-', 0x11125, 0x11128, 0x1111E, 0x11128, 0x11123, 0x11134, ' ', 0x1111D, 0x11127, 0x11122, 0x11134, 0x11125, 0x11127, 0x1111B, 0x11127, 0x1111A, 0x11134, 0x1110F, 0x11129}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of($cstr({'{', '0', '}', ' ', 0x1111F, 0x1111A, 0x11127, 0x11107, 0x11134, ' ', 0x11103, 0x11127, 0x11107, 0x11134, 0x11116, 0x11127, 0x11116, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("DefaultNumberingSystem"_s),
			$of("cakm"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of($cstr({0x1110E, 0x1111B, 0x1111A, 0x11128, ' ', 0x11107, 0x11133, 0x11120, 0x11123, 0x1112C, 0x1111A, 0x11134, 0x11113, 0x11122, 0x11134}))
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of(metaValue_long_Eras)
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("cakm.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##,##0.00¤"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of(metaValue_cakm_NumberElements)
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of($cstr({0x1111F, 0x11128, 0x1111A, 0x11128, 0x11116, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of($cstr({0x11121, 0x1112A, 0x11107, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("AM/PM"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
				$cstr({0x1111F, 0x11127, 0x11126, 0x11127, 0x11122, 0x11127, 0x1111F, 0x11134}),
				$cstr({0x11125, 0x11127, 0x1111C, 0x11122, 0x11134}),
				$cstr({0x11122, 0x11127, 0x1111D, 0x11128, 0x11105, 0x11123, 0x11134, ' ', 0x11103, 0x11103, 0x1112A, 0x11120, 0x11123, 0x11134}),
				$cstr({0x11122, 0x11127, 0x1111D, 0x11128, 0x11105, 0x11125, 0x11134, ' ', 0x11125, 0x1111A, 0x11128}),
				$cstr({0x1110E, 0x11127, 0x1111F, 0x11118, 0x11128, 0x11105, 0x11123, 0x11134, ' ', 0x11103, 0x11103, 0x1112A, 0x11120, 0x11123, 0x11134}),
				$cstr({0x1110E, 0x11127, 0x1111F, 0x11118, 0x11128, 0x11105, 0x1110C, 0x11134, ' ', 0x11125, 0x1111A, 0x11128}),
				$cstr({0x11122, 0x11127, 0x1110E, 0x11127, 0x1111D, 0x11134}),
				$cstr({0x11125, 0x11133, 0x11103, 0x1111D, 0x11127, 0x1111A, 0x11134}),
				$cstr({0x11122, 0x11127, 0x1111F, 0x11134, 0x1110E, 0x1111A, 0x11134}),
				$cstr({0x11125, 0x11124, 0x11123, 0x11134}),
				$cstr({0x1110E, 0x11128, 0x11123, 0x11134, 0x11107, 0x11127, 0x11118, 0x11134}),
				$cstr({0x1110E, 0x11128, 0x11123, 0x11134, 0x11126, 0x11127, 0x1110E, 0x11134, 0x1110E, 0x11127}),
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of($cstr({0x1111F, 0x11128, 0x11101, 0x11109, 0x1112A, 0x11103, 0x1112E, ' ', 0x11107, 0x11133, 0x11120, 0x11123, 0x1112C, 0x1111A, 0x11134, 0x11113, 0x11122, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of($cstr({0x1111F, 0x1110F, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of($cstr({0x11125, 0x1112C, 0x11109, 0x1112C, 0x1111A, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNarrows"_s),
			$of($$new($StringArray, {
				$cstr({0x11137}),
				$cstr({0x11138}),
				$cstr({0x11139}),
				$cstr({0x1113A}),
				$cstr({0x1113B}),
				$cstr({0x1113C}),
				$cstr({0x1113D}),
				$cstr({0x1113E}),
				$cstr({0x1113F}),
				$cstr({0x11137, 0x11136}),
				$cstr({0x11137, 0x11137}),
				$cstr({0x11137, 0x11138}),
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
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of($cstr({0x11103, 0x11128, 0x11125, 0x11134, 0x11123, 0x1111F, 0x11128, 0x11107, 0x11134, ' ', 0x11107, 0x11133, 0x11120, 0x11123, 0x1112C, 0x1111A, 0x11134, 0x11113, 0x11122, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("DayPeriodRules"_s),
			$of("night1:20:00-04:00;morning2:06:00-12:00;afternoon1:12:00-16:00;morning1:04:00-06:00;afternoon2:16:00-18:00;evening1:18:00-20:00"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_standalone_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of(metaValue_short_CompactNumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of($cstr({'{', '0', '}', ' ', 0x11103, 0x11127, 0x11107, 0x11134, 0x11116, 0x11127}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
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
			$of($cstr({0x11103, 0x11127, 0x11107, 0x11134, 0x11116, 0x11127, 0x11122, 0x11134, ' ', 0x1110E, 0x11109}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_long_Eras)
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
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of($cstr({0x11125, 0x1111B, 0x11134, 0x11116, 0x11122, 0x11134, ' ', 0x11118, 0x11128, 0x1111A, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of(metaValue_standalone_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("cakm.NumberElements"_s),
			$of(metaValue_cakm_NumberElements)
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
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of($cstr({0x11125, 0x1111B, 0x11134, 0x11116}))
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
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of(metaValue_short_CompactNumberPatterns)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of($cstr({'{', '0', '}', ' ', 0x11118, 0x11128, 0x1111D, 0x1112A, 0x1110C, 0x11134, 0x1110E, 0x11133, 0x11120, ' ', 0x11103, 0x11127, 0x11107, 0x11134, 0x11116, 0x11127, 0x11116, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM, y"_s,
				"d MMMM, y"_s,
				"d MMM, y"_s,
				"d/M/yy"_s
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of($cstr({0x1110A, 0x1112E, 0x1111A, 0x11134, 0x11113}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of($cstr({0x1111D, 0x1112A, 0x11116, 0x11134, 0x11119, 0x1112E, ' ', 0x11107, 0x11133, 0x11120, 0x11123, 0x1112C, 0x1111A, 0x11134, 0x11113, 0x11122, 0x11134}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_standalone_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"#,##,##0.00¤"_s,
				"#,##,##0%"_s,
				u"#,##,##0.00¤;(#,##,##0.00¤)"_s
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

FormatData_ccp::FormatData_ccp() {
}

$Class* FormatData_ccp::load$($String* name, bool initialize) {
	$loadClass(FormatData_ccp, name, initialize, &_FormatData_ccp_ClassInfo_, allocate$FormatData_ccp);
	return class$;
}

$Class* FormatData_ccp::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun