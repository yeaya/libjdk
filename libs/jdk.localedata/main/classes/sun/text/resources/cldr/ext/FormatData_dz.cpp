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

$MethodInfo _FormatData_dz_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_dz, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_dz, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_dz_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_dz",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_dz_MethodInfo_
};

$Object* allocate$FormatData_dz($Class* clazz) {
	return $of($alloc(FormatData_dz));
}

void FormatData_dz::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_dz::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"ལོ"_s)
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
			$of(u"ཇི་ཨེམ་ཏི་{0}"_s)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("DefaultNumberingSystem"_s),
			$of("tibt"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.gmtZeroFormat"_s),
			$of(u"ཇི་ཨེམ་ཊི་"_s)
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
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of(u"སྐར་མ"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"དུས་བསྐལ"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"སྔ་ཆ/ཕྱི་ཆ་"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"ཟླ་ཝ་"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"སྐར་ཆཱ་"_s)
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
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat"_s),
			$of(u"{0}་ཆུ་ཚོད།"_s)
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of("tibt.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(u"དུས་ཀུལ"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of(u"བདུན་ཕྲག་གི་ཉིམ"_s)
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
			$of("japanese.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("tibt.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of(u"བདུན་ཕྲག"_s)
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
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, སྤྱི་ལོ་y MMMM ཚེས་dd"_s,
				u"སྤྱི་ལོ་y MMMM ཚེས་ dd"_s,
				u"སྤྱི་ལོ་y ཟླ་MMM ཚེས་dd"_s,
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
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ཆུ་ཚོད"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##,##0.###"_s,
				u"¤#,##,##0.00"_s,
				u"#,##,##0 %"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayNarrows)
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
			$of(metaValue_QuarterAbbreviations)
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

FormatData_dz::FormatData_dz() {
}

$Class* FormatData_dz::load$($String* name, bool initialize) {
	$loadClass(FormatData_dz, name, initialize, &_FormatData_dz_ClassInfo_, allocate$FormatData_dz);
	return class$;
}

$Class* FormatData_dz::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun