#include <sun/text/resources/cldr/ext/FormatData_hy.h>
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

void FormatData_hy::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_hy::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"հունվարի"_s,
		u"փետրվարի"_s,
		u"մարտի"_s,
		u"ապրիլի"_s,
		u"մայիսի"_s,
		u"հունիսի"_s,
		u"հուլիսի"_s,
		u"օգոստոսի"_s,
		u"սեպտեմբերի"_s,
		u"հոկտեմբերի"_s,
		u"նոյեմբերի"_s,
		u"դեկտեմբերի"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"հնվ"_s,
		u"փտվ"_s,
		u"մրտ"_s,
		u"ապր"_s,
		u"մյս"_s,
		u"հնս"_s,
		u"հլս"_s,
		u"օգս"_s,
		u"սեպ"_s,
		u"հոկ"_s,
		u"նոյ"_s,
		u"դեկ"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"Հ"_s,
		u"Փ"_s,
		u"Մ"_s,
		u"Ա"_s,
		u"Մ"_s,
		u"Հ"_s,
		u"Հ"_s,
		u"Օ"_s,
		u"Ս"_s,
		u"Հ"_s,
		u"Ն"_s,
		u"Դ"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"կիրակի"_s,
		u"երկուշաբթի"_s,
		u"երեքշաբթի"_s,
		u"չորեքշաբթի"_s,
		u"հինգշաբթի"_s,
		u"ուրբաթ"_s,
		u"շաբաթ"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"կիր"_s,
		u"երկ"_s,
		u"երք"_s,
		u"չրք"_s,
		u"հնգ"_s,
		u"ուր"_s,
		u"շբթ"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"Կ"_s,
		u"Ե"_s,
		u"Ե"_s,
		u"Չ"_s,
		u"Հ"_s,
		u"Ո"_s,
		u"Շ"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-ին եռամսյակ"_s,
		u"2-րդ եռամսյակ"_s,
		u"3-րդ եռամսյակ"_s,
		u"4-րդ եռամսյակ"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-ին եռմս."_s,
		u"2-րդ եռմս."_s,
		u"3-րդ եռմս."_s,
		u"4-րդ եռմս."_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"կեսգիշերին"_s,
		u"կեսօրին"_s,
		u"առավոտյան"_s,
		""_s,
		u"ցերեկվա"_s,
		""_s,
		u"երեկոյան"_s,
		""_s,
		u"գիշերվա"_s,
		""_s
	}));
	$var($StringArray, metaValue_narrow_AmPmMarkers, $new($StringArray, {
		u"ա"_s,
		u"հ"_s,
		u"կգ․"_s,
		u"կօ․"_s,
		u"առվ"_s,
		""_s,
		u"ցրկ"_s,
		""_s,
		u"երկ"_s,
		""_s,
		u"գշր"_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"AM"_s,
		"PM"_s,
		u"կեսգիշեր"_s,
		u"կեսօր"_s,
		u"առավոտյան"_s,
		""_s,
		u"ցերեկը"_s,
		""_s,
		u"երեկոյան"_s,
		""_s,
		u"գիշերը"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"մ.թ.ա."_s,
		u"մ.թ."_s
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
		u"d MMMM, y թ. G, EEEE"_s,
		u"dd MMMM, y թ. G"_s,
		u"dd MMM, y թ. G"_s,
		"dd.MM.y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"d MMMM, y թ. GGGG, EEEE"_s,
		u"dd MMMM, y թ. GGGG"_s,
		u"dd MMM, y թ. GGGG"_s,
		"dd.MM.y G"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"գրիգորյան օրացույց"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"տարի"_s
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
			"roc.QuarterNames"_s,
			metaValue_QuarterNames
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
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ճապոնական օրացույց"_s
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
				u"Քրիստոսից առաջ"_s,
				u"Քրիստոսից հետո"_s
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
				"{1}, {0}"_s,
				"{1}, {0}"_s,
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
				u"ՈչԹ"_s,
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
			u"րոպե"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"թվարկություն"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ԿԱ/ԿՀ"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			metaValue_MonthNarrows
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_buddhist_QuarterNarrows
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"մինգուո օրացույց"_s
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
			u"ամիս"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"վայրկյան"_s
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
			u"իսլամական օրացույց"_s
		}),
		$$new($ObjectArray, {
			"DayPeriodRules"_s,
			"midnight:00:00;noon:12:00;night1:00:00-06:00;afternoon1:12:00-18:00;morning1:06:00-12:00;evening1:18:00-24:00"_s
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
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'հազար other:0\' \'հազար}"_s,
				u"{one:00\' \'հազար other:00\' \'հազար}"_s,
				u"{one:000\' \'հազար other:000\' \'հազար}"_s,
				u"{one:0\' \'միլիոն other:0\' \'միլիոն}"_s,
				u"{one:00\' \'միլիոն other:00\' \'միլիոն}"_s,
				u"{one:000\' \'միլիոն other:000\' \'միլիոն}"_s,
				u"{one:0\' \'միլիարդ other:0\' \'միլիարդ}"_s,
				u"{one:00\' \'միլիարդ other:00\' \'միլիարդ}"_s,
				u"{one:000\' \'միլիարդ other:000\' \'միլիարդ}"_s,
				u"{one:0\' \'տրիլիոն other:0\' \'տրիլիոն}"_s,
				u"{one:00\' \'տրիլիոն other:00\' \'տրիլիոն}"_s,
				u"{one:000\' \'տրիլիոն other:000\' \'տրիլիոն}"_s
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
			u"ժամային գոտի"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"buddhist.narrow.AmPmMarkers"_s,
			metaValue_narrow_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.abbreviated.AmPmMarkers"_s,
			metaValue_abbreviated_AmPmMarkers
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
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"շաբաթվա օր"_s
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
			u"շաբաթ"_s
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
				u"{one:0 հզր other:0 հզր}"_s,
				u"{one:00 հզր other:00 հզր}"_s,
				u"{one:000 հզր other:000 հզր}"_s,
				u"{one:0 մլն other:0 մլն}"_s,
				u"{one:00 մլն other:00 մլն}"_s,
				u"{one:000 մլն other:000 մլն}"_s,
				u"{one:0 մլրդ other:0 մլրդ}"_s,
				u"{one:00 մլրդ other:00 մլրդ}"_s,
				u"{one:000 մլրդ other:000 մլրդ}"_s,
				u"{one:0 տրլն other:0 տրլն}"_s,
				u"{one:00 տրլն other:00 տրլն}"_s,
				u"{one:000 տրլն other:000 տրլն}"_s
			})
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"y թ. MMMM d, EEEE"_s,
				u"dd MMMM, y թ."_s,
				u"dd MMM, y թ."_s,
				"dd.MM.yy"_s
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
			"one:i = 0,1"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ժամ"_s
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"բուդդայական օրացույց"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"հունվար"_s,
				u"փետրվար"_s,
				u"մարտ"_s,
				u"ապրիլ"_s,
				u"մայիս"_s,
				u"հունիս"_s,
				u"հուլիս"_s,
				u"օգոստոս"_s,
				u"սեպտեմբեր"_s,
				u"հոկտեմբեր"_s,
				u"նոյեմբեր"_s,
				u"դեկտեմբեր"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				"#,##0%"_s,
				u"#,##0.00 ¤"_s
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
			metaValue_abbreviated_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			metaValue_calendarname_gregorian
		})
	}));
	return data;
}

FormatData_hy::FormatData_hy() {
}

$Class* FormatData_hy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_hy, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_hy, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_hy",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_hy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_hy);
	});
	return class$;
}

$Class* FormatData_hy::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun