#include <sun/text/resources/cldr/ext/FormatData_my.h>
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

void FormatData_my::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_my::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ဇန်နဝါရီ"_s,
		u"ဖေဖော်ဝါရီ"_s,
		u"မတ်"_s,
		u"ဧပြီ"_s,
		u"မေ"_s,
		u"ဇွန်"_s,
		u"ဇူလိုင်"_s,
		u"ဩဂုတ်"_s,
		u"စက်တင်ဘာ"_s,
		u"အောက်တိုဘာ"_s,
		u"နိုဝင်ဘာ"_s,
		u"ဒီဇင်ဘာ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"ဇန်"_s,
		u"ဖေ"_s,
		u"မတ်"_s,
		u"ဧ"_s,
		u"မေ"_s,
		u"ဇွန်"_s,
		u"ဇူ"_s,
		u"ဩ"_s,
		u"စက်"_s,
		u"အောက်"_s,
		u"နို"_s,
		u"ဒီ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"ဇ"_s,
		u"ဖ"_s,
		u"မ"_s,
		u"ဧ"_s,
		u"မ"_s,
		u"ဇ"_s,
		u"ဇ"_s,
		u"ဩ"_s,
		u"စ"_s,
		u"အ"_s,
		u"န"_s,
		u"ဒ"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"တနင်္ဂနွေ"_s,
		u"တနင်္လာ"_s,
		u"အင်္ဂါ"_s,
		u"ဗုဒ္ဓဟူး"_s,
		u"ကြာသပတေး"_s,
		u"သောကြာ"_s,
		u"စနေ"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"တ"_s,
		u"တ"_s,
		u"အ"_s,
		u"ဗ"_s,
		u"က"_s,
		u"သ"_s,
		u"စ"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"ပထမ သုံးလပတ်"_s,
		u"ဒုတိယ သုံးလပတ်"_s,
		u"တတိယ သုံးလပတ်"_s,
		u"စတုတ္ထ သုံးလပတ်"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"ပ"_s,
		u"ဒု"_s,
		u"တ"_s,
		u"စ"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"နံနက်"_s,
		u"ညနေ"_s,
		u"သန်းခေါင်ယံ"_s,
		u"မွန်းတည့်"_s,
		u"နံနက်"_s,
		""_s,
		u"နေ့လယ်"_s,
		""_s,
		u"ညနေ"_s,
		""_s,
		u"ည"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"ဘီစီ"_s,
		u"အဒေီ"_s
	}));
	$var($StringArray, metaValue_java_time_TimePatterns, $new($StringArray, {
		"zzzz HH:mm:ss"_s,
		"z HH:mm:ss"_s,
		"B HH:mm:ss"_s,
		"B H:mm"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"zzzz HH:mm:ss"_s,
		"z HH:mm:ss"_s,
		"a HH:mm:ss"_s,
		"a H:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE G dd MMMM y"_s,
		"G dd MMMM y"_s,
		"G d MMM y"_s,
		"GGGGG dd-MM-yy"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE GGGG dd MMMM y"_s,
		"GGGG dd MMMM y"_s,
		"GGGG d MMM y"_s,
		"G dd-MM-yy"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"နိုင်ငံတကာသုံး ပြက္ခဒိန်"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"နှစ်"_s
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
			"islamic.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"mymr.NumberElements"_s,
			$$new($StringArray, {
				"."_s,
				","_s,
				u"၊"_s,
				"%"_s,
				u"၀"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"ဂဏန်းမဟုတ်သော"_s,
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
			"abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.standard"_s,
			u"{0} စံတော်ချိန်"_s
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			"mymr"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ဂျပန် ပြက္ခဒိန်"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"ခရစ်တော် မပေါ်မီနှစ်"_s,
				u"ခရစ်နှစ်"_s
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
			"narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
			$$new($StringArray, {
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
				u"ဂဏန်းမဟုတ်သော"_s,
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
			u"မိနစ်"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"ခေတ်"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"နံနက်/ညနေ"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"java.time.roc.TimePatterns"_s,
			metaValue_java_time_TimePatterns
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"မင်ဂုအို ပြက္ခဒိန်"_s
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"လ"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"စက္ကန့်"_s
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			metaValue_DayNames
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
			u"အစ္စလာမ် ပြက္ခဒိန်"_s
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:19:00-24:00;afternoon1:12:00-16:00;morning1:00:00-12:00;evening1:16:00-19:00"_s
		}),
		$$new($ObjectArray, {
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.islamic.TimePatterns"_s,
			metaValue_java_time_TimePatterns
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
			u"{0} အချိန်"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0ထောင်}"_s,
				u"{other:0သောင်း}"_s,
				u"{other:0သိန်း}"_s,
				u"{other:0သန်း}"_s,
				u"{other:0ကုဋေ}"_s,
				u"{other:00ကုဋေ}"_s,
				u"{other:ကုဋေ000}"_s,
				u"{other:ကုဋေ0000}"_s,
				u"{other:ကုဋေ0သောင်း}"_s,
				u"{other:ကုဋေ0သိန်း}"_s,
				u"{other:ကုဋေ0သန်း}"_s,
				u"{other:0ကောဋိ}"_s
			})
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
			metaValue_QuarterNames
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			metaValue_DayNarrows
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.TimePatterns"_s,
			metaValue_java_time_TimePatterns
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
			u"ဇုန်"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterNames
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
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"နေ့"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			metaValue_DayNames
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
			"mymr.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"japanese.DayAbbreviations"_s,
			metaValue_DayNames
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
			"java.time.TimePatterns"_s,
			metaValue_java_time_TimePatterns
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"ပတ်"_s
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
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:0ထောင်}"_s,
				u"{other:0သောင်း}"_s,
				u"{other:0သိန်း}"_s,
				u"{other:0သန်း}"_s,
				u"{other:0ကုဋေ}"_s,
				u"{other:00ကုဋေ}"_s,
				u"{other:ကုဋေ000}"_s,
				u"{other:ကုဋေ0ထ}"_s,
				u"{other:ကုဋေ0သ}"_s,
				u"{other:ဋေ0သိန်း}"_s,
				u"{other:ဋေ0သန်း}"_s,
				u"{other:0ကောဋိ}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat.daylight"_s,
			u"{0} နွေရာသီ စံတော်ချိန်"_s
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"y၊ MMMM d၊ EEEE"_s,
				u"y၊ d MMMM"_s,
				u"y၊ MMM d"_s,
				"dd-MM-yy"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DayAbbreviations"_s,
			metaValue_DayNames
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
			u"နာရီ"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"ဗုဒ္ဓ ပြက္ခဒိန်"_s
		}),
		$$new($ObjectArray, {
			"java.time.japanese.TimePatterns"_s,
			metaValue_java_time_TimePatterns
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
				"#,##0%"_s,
				u"¤ #,##0.00"_s
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

FormatData_my::FormatData_my() {
}

$Class* FormatData_my::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_my, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_my, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_my",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_my, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_my);
	});
	return class$;
}

$Class* FormatData_my::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun