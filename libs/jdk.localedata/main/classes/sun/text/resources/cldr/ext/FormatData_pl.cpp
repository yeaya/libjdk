#include <sun/text/resources/cldr/ext/FormatData_pl.h>
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

void FormatData_pl::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_pl::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"stycznia"_s,
		"lutego"_s,
		"marca"_s,
		"kwietnia"_s,
		"maja"_s,
		"czerwca"_s,
		"lipca"_s,
		"sierpnia"_s,
		u"września"_s,
		u"października"_s,
		"listopada"_s,
		"grudnia"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"sty"_s,
		"lut"_s,
		"mar"_s,
		"kwi"_s,
		"maj"_s,
		"cze"_s,
		"lip"_s,
		"sie"_s,
		"wrz"_s,
		u"paź"_s,
		"lis"_s,
		"gru"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		"s"_s,
		"l"_s,
		"m"_s,
		"k"_s,
		"m"_s,
		"c"_s,
		"l"_s,
		"s"_s,
		"w"_s,
		"p"_s,
		"l"_s,
		"g"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		"niedziela"_s,
		u"poniedziałek"_s,
		"wtorek"_s,
		u"środa"_s,
		"czwartek"_s,
		u"piątek"_s,
		"sobota"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		"niedz."_s,
		"pon."_s,
		"wt."_s,
		u"śr."_s,
		"czw."_s,
		"pt."_s,
		"sob."_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		"n"_s,
		"p"_s,
		"w"_s,
		u"ś"_s,
		"c"_s,
		"p"_s,
		"s"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"I kwartał"_s,
		u"II kwartał"_s,
		u"III kwartał"_s,
		u"IV kwartał"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		"I kw."_s,
		"II kw."_s,
		"III kw."_s,
		"IV kw."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"o północy"_s,
		u"w południe"_s,
		"rano"_s,
		u"przed południem"_s,
		u"po południu"_s,
		""_s,
		"wieczorem"_s,
		""_s,
		"w nocy"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s,
		u"o półn."_s,
		u"w poł."_s,
		"rano"_s,
		u"przed poł."_s,
		u"po poł."_s,
		""_s,
		"wiecz."_s,
		""_s,
		"w nocy"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		"p.n.e."_s,
		"n.e."_s
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
		"e.b."_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"dd.MM.y G"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"dd.MM.y GGGG"_s
	}));
	$var($StringArray, metaValue_java_time_roc_long_Eras, $new($StringArray, {
		"przed ROC"_s,
		"ROC"_s
	}));
	$var($StringArray, metaValue_java_time_roc_Eras, $new($StringArray, {
		"Przed ROC"_s,
		"ROC"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"kalendarz gregoriański"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			"rok"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			"kalendarz islamski (Umm al-Kura)"_s
		}),
		$$new($ObjectArray, {
			"japanese.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
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
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			"kalendarz islamski (metoda obliczeniowa)"_s
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
			"roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			"{0} (czas standardowy)"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"kalendarz japoński"_s
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
			"long.Eras"_s,
			$$new($StringArray, {
				u"przed naszą erą"_s,
				"naszej ery"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
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
				"{1}, {0}"_s,
				"{1}, {0}"_s
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
				u" "_s,
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
			"minuta"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			"era"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"rano / po południu / wieczorem"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				"S"_s,
				"L"_s,
				"M"_s,
				"K"_s,
				"M"_s,
				"C"_s,
				"L"_s,
				"S"_s,
				"W"_s,
				"P"_s,
				"L"_s,
				"G"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				"Muharram"_s,
				"Safar"_s,
				u"Rabiʻ I"_s,
				u"Rabiʻ II"_s,
				u"Dżumada I"_s,
				u"Dżumada II"_s,
				u"Radżab"_s,
				"Szaban"_s,
				"Ramadan"_s,
				"Szawwal"_s,
				"Zu al-kada"_s,
				u"Zu al-hidżdża"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"kalendarz Republiki Chińskiej"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"miesiąc"_s
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			"sekunda"_s
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
			u"kalendarz muzułmański"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.long.Eras"_s,
			metaValue_java_time_roc_long_Eras
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:21:00-06:00;morning2:10:00-12:00;afternoon1:12:00-18:00;morning1:06:00-10:00;evening1:18:00-21:00"_s
		}),
		$$new($ObjectArray, {
			"java.time.roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			"czas: {0}"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'tysiąc few:0\' \'tysiące many:0\' \'tysięcy other:0\' \'tysiąca}"_s,
				u"{one:00\' \'tysiąc few:00\' \'tysiące many:00\' \'tysięcy other:00\' \'tysiąca}"_s,
				u"{one:000\' \'tysiąc few:000\' \'tysiące many:000\' \'tysięcy other:000\' \'tysiąca}"_s,
				u"{one:0\' \'milion few:0\' \'miliony many:0\' \'milionów other:0\' \'miliona}"_s,
				u"{one:00\' \'milion few:00\' \'miliony many:00\' \'milionów other:00\' \'miliona}"_s,
				u"{one:000\' \'milion few:000\' \'miliony many:000\' \'milionów other:000\' \'miliona}"_s,
				u"{one:0\' \'miliard few:0\' \'miliardy many:0\' \'miliardów other:0\' \'miliarda}"_s,
				u"{one:00\' \'miliard few:00\' \'miliardy many:00\' \'miliardów other:00\' \'miliarda}"_s,
				u"{one:000\' \'miliard few:000\' \'miliardy many:000\' \'miliardów other:000\' \'miliarda}"_s,
				u"{one:0\' \'bilion few:0\' \'biliony many:0\' \'bilionów other:0\' \'biliona}"_s,
				u"{one:00\' \'bilion few:00\' \'biliony many:00\' \'bilionów other:00\' \'biliona}"_s,
				u"{one:000\' \'bilion few:000\' \'biliony many:000\' \'bilionów other:000\' \'biliona}"_s
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
			"japanese.MonthNarrows"_s,
			metaValue_MonthNarrows
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
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				"N"_s,
				"P"_s,
				"W"_s,
				u"Ś"_s,
				"C"_s,
				"P"_s,
				"S"_s
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
			"TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.roc.Eras"_s,
			metaValue_java_time_roc_Eras
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			"strefa czasowa"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			metaValue_java_time_roc_long_Eras
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
			"islamic.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"dzień tygodnia"_s
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
			"japanese.QuarterNames"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"buddhist.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
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
			"buddhist.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"tydzień"_s
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
			metaValue_buddhist_QuarterNarrows
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
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0 tys\'.\' few:0 tys\'.\' many:0 tys\'.\' other:0 tys\'.\'}"_s,
				u"{one:00 tys\'.\' few:00 tys\'.\' many:00 tys\'.\' other:00 tys\'.\'}"_s,
				u"{one:000 tys\'.\' few:000 tys\'.\' many:000 tys\'.\' other:000 tys\'.\'}"_s,
				u"{one:0 mln few:0 mln many:0 mln other:0 mln}"_s,
				u"{one:00 mln few:00 mln many:00 mln other:00 mln}"_s,
				u"{one:000 mln few:000 mln many:000 mln other:000 mln}"_s,
				u"{one:0 mld few:0 mld many:0 mld other:0 mld}"_s,
				u"{one:00 mld few:00 mld many:00 mld other:00 mld}"_s,
				u"{one:000 mld few:000 mld many:000 mld other:000 mld}"_s,
				u"{one:0 bln few:0 bln many:0 bln other:0 bln}"_s,
				u"{one:00 bln few:00 bln many:00 bln other:00 bln}"_s,
				u"{one:000 bln few:000 bln many:000 bln other:000 bln}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.narrow.Eras"_s,
			metaValue_java_time_buddhist_long_Eras
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			"{0} (czas letni)"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"dd.MM.y"_s
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
			"PluralRules"_s,
			"one:i = 1 and v = 0;few:v = 0 and i % 10 = 2..4 and i % 100 != 12..14;many:v = 0 and i != 1 and i % 10 = 0..1 or v = 0 and i % 10 = 5..9 or v = 0 and i % 100 = 12..14"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			"godzina"_s
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				"Muh."_s,
				"Saf."_s,
				"Rab. I"_s,
				"Rab. II"_s,
				u"Dżu. I"_s,
				u"Dżu. II"_s,
				"Ra."_s,
				"Sza."_s,
				"Ram."_s,
				"Szaw."_s,
				"Zu al-k."_s,
				"Zu al-h."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			"kalendarz buddyjski"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"styczeń"_s,
				"luty"_s,
				"marzec"_s,
				u"kwiecień"_s,
				"maj"_s,
				"czerwiec"_s,
				"lipiec"_s,
				u"sierpień"_s,
				u"wrzesień"_s,
				u"październik"_s,
				"listopad"_s,
				u"grudzień"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
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
			"QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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

FormatData_pl::FormatData_pl() {
}

$Class* FormatData_pl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_pl, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_pl, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_pl",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_pl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_pl);
	});
	return class$;
}

$Class* FormatData_pl::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun