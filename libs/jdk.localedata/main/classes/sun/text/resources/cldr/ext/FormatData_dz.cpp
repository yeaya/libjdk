#include <sun/text/resources/cldr/ext/FormatData_dz.h>
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

void FormatData_dz::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_dz::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ཟླ་དངཔ་"_s,
		u"ཟླ་གཉིས་པ་"_s,
		u"ཟླ་གསུམ་པ་"_s,
		u"ཟླ་བཞི་པ་"_s,
		u"ཟླ་ལྔ་པ་"_s,
		u"ཟླ་དྲུག་པ"_s,
		u"ཟླ་བདུན་པ་"_s,
		u"ཟླ་བརྒྱད་པ་"_s,
		u"ཟླ་དགུ་པ་"_s,
		u"ཟླ་བཅུ་པ་"_s,
		u"ཟླ་བཅུ་གཅིག་པ་"_s,
		u"ཟླ་བཅུ་གཉིས་པ་"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"༡"_s,
		u"༢"_s,
		u"༣"_s,
		u"༤"_s,
		u"༥"_s,
		u"༦"_s,
		u"༧"_s,
		u"༨"_s,
		u"༩"_s,
		u"༡༠"_s,
		u"༡༡"_s,
		"12"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"༡"_s,
		u"༢"_s,
		u"༣"_s,
		"4"_s,
		u"༥"_s,
		u"༦"_s,
		u"༧"_s,
		u"༨"_s,
		"9"_s,
		u"༡༠"_s,
		u"༡༡"_s,
		u"༡༢"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"གཟའ་ཟླ་བ་"_s,
		u"གཟའ་མིག་དམར་"_s,
		u"གཟའ་ལྷག་པ་"_s,
		u"གཟའ་ཕུར་བུ་"_s,
		u"གཟའ་པ་སངས་"_s,
		u"གཟའ་སྤེན་པ་"_s,
		u"གཟའ་ཉི་མ་"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"ཟླ་"_s,
		u"མིར་"_s,
		u"ལྷག་"_s,
		u"ཕུར་"_s,
		u"སངས་"_s,
		u"སྤེན་"_s,
		u"ཉི་"_s
	}));
	$var($StringArray, metaValue_DayNarrows, $new($StringArray, {
		u"ཟླ"_s,
		u"མིར"_s,
		u"ལྷག"_s,
		u"ཕུར"_s,
		u"སངྶ"_s,
		u"སྤེན"_s,
		u"ཉི"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"བཞི་དཔྱ་དང་པ་"_s,
		u"བཞི་དཔྱ་གཉིས་པ་"_s,
		u"བཞི་དཔྱ་གསུམ་པ་"_s,
		u"བཞི་དཔྱ་བཞི་པ་"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"བཞི་དཔྱ་༡"_s,
		u"བཞི་དཔྱ་༢"_s,
		u"བཞི་དཔྱ་༣"_s,
		u"བཞི་དཔྱ་༤"_s
	}));
	$var($StringArray, metaValue_QuarterNarrows, $new($StringArray, {
		u"༡"_s,
		u"༢"_s,
		u"༣"_s,
		u"༤"_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		u"སྔ་ཆ་"_s,
		u"ཕྱི་ཆ་"_s,
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
	$var($StringArray, metaValue_long_Eras, $new($StringArray, {
		"BCE"_s,
		"CE"_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		u"ཆུ་ཚོད་ h སྐར་མ་ mm:ss a zzzz"_s,
		u"ཆུ་ཚོད་ h སྐར་མ་ mm:ss a z"_s,
		u"ཆུ་ཚོད་h:mm:ss a"_s,
		u"ཆུ་ཚོད་ h སྐར་མ་ mm a"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, G སྤྱི་ལོ་y MMMM ཚེས་dd"_s,
		u"G སྤྱི་ལོ་y MMMM ཚེས་ dd"_s,
		u"G སྤྱི་ལོ་y ཟླ་MMM ཚེས་dd"_s,
		"GGGGG y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE, GGGG སྤྱི་ལོ་y MMMM ཚེས་dd"_s,
		u"GGGG སྤྱི་ལོ་y MMMM ཚེས་ dd"_s,
		u"GGGG སྤྱི་ལོ་y ཟླ་MMM ཚེས་dd"_s,
		"G y-MM-dd"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"གྲེག་གོ་རི་ཡཱན་ཟླ་ཐོ"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ལོ"_s
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
			u"ཇི་ཨེམ་ཏི་{0}"_s
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
			"DefaultNumberingSystem"_s,
			"tibt"_s
		}),
		$$new($ObjectArray, {
			"japanese.abbreviated.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"timezone.gmtZeroFormat"_s,
			u"ཇི་ཨེམ་ཊི་"_s
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
			u"སྐར་མ"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"དུས་བསྐལ"_s
		}),
		$$new($ObjectArray, {
			"buddhist.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"སྔ་ཆ/ཕྱི་ཆ་"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
				u"༡"_s,
				u"༢"_s,
				u"༣"_s,
				u"༤"_s,
				u"༥"_s,
				u"༦"_s,
				u"༧"_s,
				u"༨"_s,
				u"༩"_s,
				u"༡༠"_s,
				u"༡༡"_s,
				u"༡༢"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.QuarterNarrows"_s,
			metaValue_QuarterNarrows
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
			u"ཟླ་ཝ་"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"སྐར་ཆཱ་"_s
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
			"japanese.narrow.AmPmMarkers"_s,
			metaValue_AmPmMarkers
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"ཟླ་༡"_s,
				u"ཟླ་༢"_s,
				u"ཟླ་༣"_s,
				u"ཟླ་༤"_s,
				u"ཟླ་༥"_s,
				u"ཟླ་༦"_s,
				u"ཟླ་༧"_s,
				u"ཟླ་༨"_s,
				u"ཟླ་༩"_s,
				u"ཟླ་༡༠"_s,
				u"ཟླ་༡༡"_s,
				u"ཟླ་༡༢"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"timezone.regionFormat"_s,
			u"{0}་ཆུ་ཚོད།"_s
		}),
		$$new($ObjectArray, {
			"long.CompactNumberPatterns"_s,
			$$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{other:སྟོང་ཕྲག\' \'0}"_s,
				u"{other:ཁྲི་ཕྲག\' \'0}"_s,
				u"{other:འབུམ་ཕྲག\' \'0}"_s,
				u"{other:ས་ཡ་\' \'0}"_s,
				u"{other:བྱེ་བ་\' \'0}"_s,
				u"{other:དུང་ཕྱུར་\' \'0}"_s,
				u"{other:དུང་ཕྱུར་\' \'00}"_s,
				u"{other:དུང་ཕྱུར་བརྒྱ་\' \'0}"_s,
				u"{other:དུང་ཕྱུར་སྟོང\' \'0}"_s,
				u"{other:དུང་ཕྱུར་ཁྲི་\' \'0}"_s,
				u"{other:དུང་ཕྱུར་འབུམ་\' \'0}"_s,
				u"{other:དུང་ཕྱུར་ས་ཡ་\' \'0}"_s
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
			"tibt.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			})
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
			u"དུས་ཀུལ"_s
		}),
		$$new($ObjectArray, {
			"japanese.QuarterAbbreviations"_s,
			metaValue_QuarterAbbreviations
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
			u"བདུན་ཕྲག་གི་ཉིམ"_s
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
				u"གྲངས་མེད"_s,
				u"ཨང་མད"_s,
				""_s,
				""_s
			})
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
			u"བདུན་ཕྲག"_s
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
			"calendarname.gregorian"_s,
			metaValue_calendarname_gregorian
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, སྤྱི་ལོ་y MMMM ཚེས་dd"_s,
				u"སྤྱི་ལོ་y MMMM ཚེས་ dd"_s,
				u"སྤྱི་ལོ་y ཟླ་MMM ཚེས་dd"_s,
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
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"standalone.DayNames"_s,
			metaValue_DayNames
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ཆུ་ཚོད"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				u"སྤྱི་ཟླ་དངཔ་"_s,
				u"སྤྱི་ཟླ་གཉིས་པ་"_s,
				u"སྤྱི་ཟླ་གསུམ་པ་"_s,
				u"སྤྱི་ཟླ་བཞི་པ"_s,
				u"སྤྱི་ཟླ་ལྔ་པ་"_s,
				u"སྤྱི་ཟླ་དྲུག་པ"_s,
				u"སྤྱི་ཟླ་བདུན་པ་"_s,
				u"སྤྱི་ཟླ་བརྒྱད་པ་"_s,
				u"སྤྱི་ཟླ་དགུ་པ་"_s,
				u"སྤྱི་ཟླ་བཅུ་པ་"_s,
				u"སྤྱི་ཟླ་བཅུ་གཅིག་པ་"_s,
				u"སྤྱི་ཟླ་བཅུ་གཉིས་པ་"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤#,##,##0.00"_s,
				u"#,##,##0 %"_s,
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

FormatData_dz::FormatData_dz() {
}

$Class* FormatData_dz::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_dz, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_dz, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_dz",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_dz, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_dz);
	});
	return class$;
}

$Class* FormatData_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun