#include <sun/text/resources/cldr/ext/FormatData_gd.h>
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

void FormatData_gd::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_gd::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"dhen Fhaoilleach"_s,
		"dhen Ghearran"_s,
		u"dhen Mhàrt"_s,
		"dhen Ghiblean"_s,
		u"dhen Chèitean"_s,
		u"dhen Ògmhios"_s,
		"dhen Iuchar"_s,
		u"dhen Lùnastal"_s,
		"dhen t-Sultain"_s,
		u"dhen Dàmhair"_s,
		"dhen t-Samhain"_s,
		u"dhen Dùbhlachd"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"Faoi"_s,
		"Gearr"_s,
		u"Màrt"_s,
		"Gibl"_s,
		u"Cèit"_s,
		u"Ògmh"_s,
		"Iuch"_s,
		u"Lùna"_s,
		"Sult"_s,
		u"Dàmh"_s,
		"Samh"_s,
		u"Dùbh"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"F"_s,
		"G"_s,
		"M"_s,
		"G"_s,
		"C"_s,
		u"Ò"_s,
		"I"_s,
		"L"_s,
		"S"_s,
		"D"_s,
		"S"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"DiDòmhnaich"_s,
		"DiLuain"_s,
		u"DiMàirt"_s,
		"DiCiadain"_s,
		"DiarDaoin"_s,
		"DihAoine"_s,
		"DiSathairne"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"DiD"_s,
		"DiL"_s,
		"DiM"_s,
		"DiC"_s,
		"Dia"_s,
		"Dih"_s,
		"DiS"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"C"_s,
		"A"_s,
		"H"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1d chairteal"_s,
		"2na cairteal"_s,
		"3s cairteal"_s,
		"4mh cairteal"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"C1"_s,
		"C2"_s,
		"C3"_s,
		"C4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"m"_s,
		"f"_s,
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
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d\'mh\' MMMM y G"_s,
		"d\'mh\' MMMM y G"_s,
		"d MMM y G"_s,
		"d/M/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d\'mh\' MMMM y GGGG"_s,
		"d\'mh\' MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"d/M/y G"_s
	}));
	$var($StringArray, metaValue_japanese_DateTimePatterns, $new($StringArray, {
		"{1} \'aig\' {0}"_s,
		"{1} \'aig\' {0}"_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		u"Ro Ph. na Sìne"_s,
		u"Mínguó"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		"Ro PnS"_s,
		u"Mínguó"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"Am Mìosachan Griogarach"_s);
	$var($StringArray, metaValue_adlm_NumberElements, $new($StringArray, {
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
	$var($StringArray, metaValue_adlm_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"¤ #,##0.00"_s,
		"#,##0%"_s,
		""_s
	}));
	$var($StringArray, metaValue_fullwide_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"¤#,##0.00"_s,
		"#,##0%"_s,
		u"¤#,##0.00;(¤#,##0.00)"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"rohg.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"Am Mìosachan Ioslamach (Umm al-Qura)"_s
		}),
		$$new($ObjectArray, {
			"osma.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"lana.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Am Mìosachan Ioslamach (clàrach, linn sìobhalta)"_s
		}),
		$$new($ObjectArray, {
			"talu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"gonm.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"mtei.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꯰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			"islamic.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"cakm.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
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
			"narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"guru.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"੦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			"mionaid"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"bali.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"cham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꩐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"adlm.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"saur.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"arab.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"٠"_s,
				"#"_s,
				u"\u061c-"_s,
				u"اس"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"beng.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"shrd.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"takr.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"deva.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"०"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"sund.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"diog"_s
		}),
		$$new($ObjectArray, {
			"vaii.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Am Mìosachan Ioslamach"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"brah.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"gong.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"olck.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"tibt.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"khmr.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"orya.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"႐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꧐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"laoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"໐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"sund.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᮰"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"telu.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"kali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꤀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"lanatham.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
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
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"mong.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"tamldec.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymr.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"nkoo.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"߀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"cakm.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"tibt.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"༠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			"sora.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"gujr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"૦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"limb.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᥆"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"shrd.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"mlym.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"Tìde samhraidh: {0}"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d\'mh\' MMMM y"_s,
				"d\'mh\' MMMM y"_s,
				"d MMM y"_s,
				"dd/MM/y"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"japanese.DateTimePatterns"_s,
			metaValue_japanese_DateTimePatterns
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
			"vaii.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꘠"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"adlm.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"bliadhna"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				"-"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			"java.time.japanese.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"mtei.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"takr.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"၀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			$$new($StringArray, {
				"R"_s,
				"A"_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"Bun-àm: {0}"_s
		}),
		$$new($ObjectArray, {
			"tamldec.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"௦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Am Mìosachan Seapanach"_s
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"beng.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"০"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"Ro Chrìosta"_s,
				u"An dèidh Chrìosta"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"saur.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"꣐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"gong.NumberElements"_s,
			metaValue_adlm_NumberElements
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
			"field.era"_s,
			"linn"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"m/f"_s
		}),
		$$new($ObjectArray, {
			"lana.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Mìosachan Poblachd na Sìne"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"mìos"_s
		}),
		$$new($ObjectArray, {
			"osma.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_Eras
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
			"gonm.NumberElements"_s,
			metaValue_adlm_NumberElements
		}),
		$$new($ObjectArray, {
			"guru.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"knda.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"೦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"bali.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᭐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"sora.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'mhìle two:0\' \'mhìle few:0\' \'mìltean other:0\' \'mìle}"_s,
				u"{one:00\' \'mhìle two:00\' \'mhìle few:00\' \'mìltean other:00\' \'mìle}"_s,
				u"{one:000\' \'mhìle two:000\' \'mhìle few:000\' \'mìltean other:000\' \'mìle}"_s,
				"{one:0\' \'mhillean two:0\' \'mhillean few:0\' \'milleanan other:0\' \'millean}"_s,
				"{one:00\' \'mhillean two:00\' \'mhillean few:00\' \'milleanan other:00\' \'millean}"_s,
				"{one:000\' \'mhillean two:000\' \'mhillean few:000\' \'milleanan other:000\' \'millean}"_s,
				"{one:0\' \'bhillean two:0\' \'bhillean few:0\' \'billeanan other:0\' \'billean}"_s,
				"{one:00\' \'bhillean two:00\' \'bhillean few:00\' \'billeanan other:00\' \'billean}"_s,
				"{one:000\' \'bhillean two:000\' \'bhillean few:000\' \'billeanan other:000\' \'billean}"_s,
				"{one:0\' \'trillean two:0\' \'thrillean few:0\' \'trilleanan other:0\' \'trillean}"_s,
				"{one:00\' \'trillean two:00\' \'thrillean few:00\' \'trilleanan other:00\' \'trillean}"_s,
				"{one:000\' \'trillean two:000\' \'thrillean few:000\' \'trilleanan other:000\' \'trillean}"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"standalone.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"mlym.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"൦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"lepc.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᱀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"gujr.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"fullwide.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"０"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"limb.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.time.roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"khmr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"០"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"roinn-tìde"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.DateTimePatterns"_s,
			$$new($StringArray, {
				"{1} \'aig\' {0}"_s,
				"{1} \'aig\' {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
		}),
		$$new($ObjectArray, {
			"arab.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"thai.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"๐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"RC"_s,
				"AD"_s
			})
		}),
		$$new($ObjectArray, {
			"lepc.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"nkoo.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mong.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᠐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			"latha na seachdaine"_s
		}),
		$$new($ObjectArray, {
			"islamic.DateTimePatterns"_s,
			metaValue_japanese_DateTimePatterns
		}),
		$$new($ObjectArray, {
			"brah.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"thai.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"fullwide.NumberPatterns"_s,
			metaValue_fullwide_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"telu.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"౦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"olck.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"knda.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"lanatham.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"᪐"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"laoo.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"talu.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"seachdain"_s
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"orya.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				";"_s,
				"%"_s,
				u"୦"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
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
			"rohg.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{one:0K two:0K few:0K other:0K}"_s,
				"{one:00K two:00K few:00K other:00K}"_s,
				"{one:000K two:000K few:000K other:000K}"_s,
				"{one:0M two:0M few:0M other:0M}"_s,
				"{one:00M two:00M few:00M other:00M}"_s,
				"{one:000M two:000M few:000M other:000M}"_s,
				"{one:0B two:0B few:0B other:0B}"_s,
				"{one:00B two:00B few:00B other:00B}"_s,
				"{one:000B two:000B few:000B other:000B}"_s,
				"{one:0T two:0T few:0T other:0T}"_s,
				"{one:00T two:00T few:00T other:00T}"_s,
				"{one:000T two:000T few:000T other:000T}"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"cham.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"PluralRules"_s,
			"one:n = 1,11;few:n = 3..10,13..19;two:n = 2,12"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"uair a thìde"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Am Mìosachan Budach"_s
		}),
		$$new($ObjectArray, {
			"kali.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			metaValue_fullwide_NumberPatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				"Am Faoilleach"_s,
				"An Gearran"_s,
				u"Am Màrt"_s,
				"An Giblean"_s,
				u"An Cèitean"_s,
				u"An t-Ògmhios"_s,
				"An t-Iuchar"_s,
				u"An Lùnastal"_s,
				"An t-Sultain"_s,
				u"An Dàmhair"_s,
				"An t-Samhain"_s,
				u"An Dùbhlachd"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayNarrows"_s,
			metaValue_DayNarrows
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
			"deva.NumberPatterns"_s,
			metaValue_adlm_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		})
	}));
	return data;
}

FormatData_gd::FormatData_gd() {
}

$Class* FormatData_gd::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_gd, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_gd, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_gd",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_gd, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_gd);
	});
	return class$;
}

$Class* FormatData_gd::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun