#include <sun/text/resources/cldr/ext/FormatData_fr.h>
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

void FormatData_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"janvier"_s,
		u"février"_s,
		"mars"_s,
		"avril"_s,
		"mai"_s,
		"juin"_s,
		"juillet"_s,
		u"août"_s,
		"septembre"_s,
		"octobre"_s,
		"novembre"_s,
		u"décembre"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"janv."_s,
		u"févr."_s,
		"mars"_s,
		"avr."_s,
		"mai"_s,
		"juin"_s,
		"juil."_s,
		u"août"_s,
		"sept."_s,
		"oct."_s,
		"nov."_s,
		u"déc."_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"J"_s,
		"F"_s,
		"M"_s,
		"A"_s,
		"M"_s,
		"J"_s,
		"J"_s,
		"A"_s,
		"S"_s,
		"O"_s,
		"N"_s,
		"D"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"dimanche"_s,
		"lundi"_s,
		"mardi"_s,
		"mercredi"_s,
		"jeudi"_s,
		"vendredi"_s,
		"samedi"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"dim."_s,
		"lun."_s,
		"mar."_s,
		"mer."_s,
		"jeu."_s,
		"ven."_s,
		"sam."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"D"_s,
		"L"_s,
		"M"_s,
		"M"_s,
		"J"_s,
		"V"_s,
		"S"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		"1er trimestre"_s,
		"2e trimestre"_s,
		"3e trimestre"_s,
		"4e trimestre"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"T1"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"minuit"_s,
		"midi"_s,
		"du matin"_s,
		""_s,
		u"de l’après-midi"_s,
		""_s,
		"du soir"_s,
		""_s,
		"du matin"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		"minuit"_s,
		"midi"_s,
		"mat."_s,
		""_s,
		"ap.m."_s,
		""_s,
		"soir"_s,
		""_s,
		"nuit"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"av. J.-C."_s,
		"ap. J.-C."_s
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
	$var($StringArray, metaValue_java_time_buddhist_long_Eras, $new($StringArray, {
		"BC"_s,
		u"ère bouddhique"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_Eras, $new($StringArray, {
		"BC"_s,
		"E. B."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_narrow_Eras, $new($StringArray, {
		"BC"_s,
		"EB"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd/MM/y G"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"avant RdC"_s,
		"RdC"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		"av. RdC"_s,
		"RdC"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		u"ère de l’Hégire"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_narrow_Eras, $new($StringArray, {
		""_s,
		"H"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"calendrier grégorien"_s);
	$var($StringArray, metaValue_arabext_NumberPatterns, $new($StringArray, {
		"#,##0.###"_s,
		u"¤ #,##0.00"_s,
		"#,##0%"_s,
		""_s
	}));
	$var($StringArray, metaValue_brah_NumberElements, $new($StringArray, {
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
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"rohg.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"calendrier musulman (Umm al Qura)"_s
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_narrow_Eras
		}),
		$$new($ObjectArray, {
			"osma.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			u"calendrier musulman (tabulaire, époque civile)"_s
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
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
			"timezone.gmtZeroFormat"_s,
			"UTC"_s
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {
				u"{1} \'à\' {0}"_s,
				u"{1} \'à\' {0}"_s,
				"{1}, {0}"_s,
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
				","_s,
				u" "_s,
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
			})
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
			"minute"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"bali.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"mouharram"_s,
				"safar"_s,
				"rabia al awal"_s,
				"rabia ath-thani"_s,
				"joumada al oula"_s,
				"joumada ath-thania"_s,
				"rajab"_s,
				"chaabane"_s,
				"ramadan"_s,
				"chawwal"_s,
				"dhou al qi`da"_s,
				"dhou al-hijja"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"saur.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"arab.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪\u061c"_s,
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"shrd.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"takr.NumberElements"_s,
			metaValue_brah_NumberElements
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
			"islamic.Eras"_s,
			metaValue_java_time_islamic_Eras
		}),
		$$new($ObjectArray, {
			"sund.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"seconde"_s
		}),
		$$new($ObjectArray, {
			"vaii.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			"calendrier musulman"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:00:00-04:00;afternoon1:12:00-18:00;morning1:04:00-12:00;evening1:18:00-24:00"_s
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"brah.NumberElements"_s,
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"gong.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			"heure : {0}"_s
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"khmr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"java.time.buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"orya.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"buddhist.long.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
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
			metaValue_arabext_NumberPatterns
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
			metaValue_java_time_islamic_Eras
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"mong.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"tamldec.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"mymr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			metaValue_brah_NumberElements
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
			metaValue_brah_NumberElements
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"mlym.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_narrow_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} (heure d’été)"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
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
			$$new($StringArray, {
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s,
				"{1} {0}"_s
			})
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
			"QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"année"_s
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
				u"\u200e-\u200e"_s,
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
			"timezone.gmtFormat"_s,
			"UTC{0}"_s
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"takr.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			"{0} (heure standard)"_s
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
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			"calendrier japonais"_s
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_narrow_Eras
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
				u"avant Jésus-Christ"_s,
				u"après Jésus-Christ"_s
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
			metaValue_brah_NumberElements
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
			u"ère"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"cadran"_s
		}),
		$$new($ObjectArray, {
			"lana.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"calendrier républicain chinois"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			"mois"_s
		}),
		$$new($ObjectArray, {
			"osma.NumberElements"_s,
			metaValue_brah_NumberElements
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
			metaValue_brah_NumberElements
		}),
		$$new($ObjectArray, {
			"guru.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"sora.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{1:mille one:0\' \'millier other:0\' \'mille}"_s,
				"{one:00\' \'mille other:00\' \'mille}"_s,
				"{one:000\' \'mille other:000\' \'mille}"_s,
				"{one:0\' \'million other:0\' \'millions}"_s,
				"{one:00\' \'million other:00\' \'millions}"_s,
				"{one:000\' \'million other:000\' \'millions}"_s,
				"{one:0\' \'milliard other:0\' \'milliards}"_s,
				"{one:00\' \'milliard other:00\' \'milliards}"_s,
				"{one:000\' \'milliard other:000\' \'milliards}"_s,
				"{one:0\' \'billion other:0\' \'billions}"_s,
				"{one:00\' \'billion other:00\' \'billions}"_s,
				"{one:000\' \'billion other:000\' \'billions}"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
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
			metaValue_arabext_NumberPatterns
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
			metaValue_arabext_NumberPatterns
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
			"fuseau horaire"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"lepc.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"mymrshan.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"nkoo.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"jour de la semaine"_s
		}),
		$$new($ObjectArray, {
			"brah.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"java.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"thai.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"fullwide.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"timezone.hourFormat"_s,
			u"+HH:mm;−HH:mm"_s
		}),
		$$new($ObjectArray, {
			"olck.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"knda.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
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
			"buddhist.Eras"_s,
			metaValue_java_time_buddhist_Eras
		}),
		$$new($ObjectArray, {
			"laoo.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"talu.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			"semaine"_s
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
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"short.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0 k other:0 k}"_s,
				u"{one:00 k other:00 k}"_s,
				u"{one:000 k other:000 k}"_s,
				u"{one:0 M other:0 M}"_s,
				u"{one:00 M other:00 M}"_s,
				u"{one:000 M other:000 M}"_s,
				u"{one:0 Md other:0 Md}"_s,
				u"{one:00 Md other:00 Md}"_s,
				u"{one:000 Md other:000 Md}"_s,
				u"{one:0 Bn other:0 Bn}"_s,
				u"{one:00 Bn other:00 Bn}"_s,
				u"{one:000 Bn other:000 Bn}"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayAbbreviations
		}),
		$$new($ObjectArray, {
			"cham.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"PluralRules"_s,
			"one:i = 0,1;many:e = 0 and i != 0 and i % 1000000 = 0 and v = 0 or e != 0..5"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"heure"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				"mouh."_s,
				"saf."_s,
				"rab. aw."_s,
				"rab. th."_s,
				"joum. oul."_s,
				"joum. tha."_s,
				"raj."_s,
				"chaa."_s,
				"ram."_s,
				"chaw."_s,
				"dhou. q."_s,
				"dhou. h."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			metaValue_java_time_islamic_narrow_Eras
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"calendrier bouddhiste"_s
		}),
		$$new($ObjectArray, {
			"kali.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
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
			"deva.NumberPatterns"_s,
			metaValue_arabext_NumberPatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		})
	}));
	return data;
}

FormatData_fr::FormatData_fr() {
}

$Class* FormatData_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_fr);
	});
	return class$;
}

$Class* FormatData_fr::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun