#include <sun/text/resources/cldr/ext/FormatData_ce.h>

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

$MethodInfo _FormatData_ce_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ce, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ce, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ce_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ce",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ce_MethodInfo_
};

$Object* allocate$FormatData_ce($Class* clazz) {
	return $of($alloc(FormatData_ce));
}

void FormatData_ce::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ce::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"январь"_s,
		u"февраль"_s,
		u"март"_s,
		u"апрель"_s,
		u"май"_s,
		u"июнь"_s,
		u"июль"_s,
		u"август"_s,
		u"сентябрь"_s,
		u"октябрь"_s,
		u"ноябрь"_s,
		u"декабрь"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		u"янв"_s,
		u"фев"_s,
		u"мар"_s,
		u"апр"_s,
		u"май"_s,
		u"июн"_s,
		u"июл"_s,
		u"авг"_s,
		u"сен"_s,
		u"окт"_s,
		u"ноя"_s,
		u"дек"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"Я"_s,
		u"Ф"_s,
		u"М"_s,
		u"А"_s,
		u"М"_s,
		u"И"_s,
		u"И"_s,
		u"А"_s,
		u"С"_s,
		u"О"_s,
		u"Н"_s,
		u"Д"_s,
		""_s
	}));
	$var($StringArray, metaValue_DayNames, $new($StringArray, {
		u"кӀира"_s,
		u"оршот"_s,
		u"шинара"_s,
		u"кхаара"_s,
		u"еара"_s,
		u"пӀераска"_s,
		u"шуот"_s
	}));
	$var($StringArray, metaValue_DayAbbreviations, $new($StringArray, {
		u"кӀи"_s,
		u"ор"_s,
		u"ши"_s,
		u"кха"_s,
		u"еа"_s,
		u"пӀе"_s,
		u"шуо"_s
	}));
	$var($StringArray, metaValue_QuarterNames, $new($StringArray, {
		u"1-гӀа квартал"_s,
		u"2-гӀа квартал"_s,
		u"3-гӀа квартал"_s,
		u"4-гӀа квартал"_s
	}));
	$var($StringArray, metaValue_QuarterAbbreviations, $new($StringArray, {
		u"1-гӀа кв."_s,
		u"2-гӀа кв."_s,
		u"3-гӀа кв."_s,
		u"4-гӀа кв."_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"в. э. тӀ. я"_s,
		u"в. э"_s
	}));
	$var($StringArray, metaValue_buddhist_QuarterNarrows, $new($StringArray, {
		"1"_s,
		"2"_s,
		"3"_s,
		"4"_s
	}));
	$var($String, metaValue_calendarname_gregorian, u"григорианан"_s);
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"шо"_s)
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
			$of($$new($StringArray, {
				u"кӀ"_s,
				u"о"_s,
				u"ш"_s,
				u"кх"_s,
				u"е"_s,
				u"пӀ"_s,
				u"ш"_s
			}))
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
			$of("islamic.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"сахьтан аса"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"японийн"_s)
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of(metaValue_Eras)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(metaValue_DayNames)
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
			$of("islamic.QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("long.Eras"_s),
			$of($$new($StringArray, {
				u"Ӏийса пайхамар вина де кхачале"_s,
				u"Ӏийса пайхамар вина дийнахь дуьйна"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
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
			$of("field.weekday"_s),
			$of(u"кӀиранан де"_s)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
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
				u"Терхьаш дац"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNames"_s),
			$of(metaValue_DayNames)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"минот"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"мур"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"делкъал тӀехьа"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
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
			$of("japanese.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("field.month"_s),
			$of(u"бутт"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"секунд"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"кӀира"_s)
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
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
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"исламан"_s)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("short.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0 эзар other:0 эзар}"_s,
				u"{one:00 эзар other:00 эзар}"_s,
				u"{one:000 эзар other:000 эзар}"_s,
				u"{one:0 млн other:0 млн}"_s,
				u"{one:00 млн other:00 млн}"_s,
				u"{one:000 млн other:000 млн}"_s,
				u"{one:0 млрд other:0 млрд}"_s,
				u"{one:00 млрд other:00 млрд}"_s,
				u"{one:000 млрд other:000 млрд}"_s,
				u"{one:0 трлн other:0 трлн}"_s,
				u"{one:00 трлн other:00 трлн}"_s,
				u"{one:000 трлн other:000 трлн}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(metaValue_calendarname_gregorian)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayAbbreviations"_s),
			$of(metaValue_DayAbbreviations)
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
			$of("PluralRules"_s),
			$of("one:n = 1"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"сахьт"_s)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0\' \'эзар other:0\' \'эзар}"_s,
				u"{one:00\' \'эзар other:00\' \'эзар}"_s,
				u"{one:000\' \'эзар other:000\' \'эзар}"_s,
				u"{one:0\' \'миллион other:0\' \'миллион}"_s,
				u"{one:00\' \'миллион other:00\' \'миллион}"_s,
				u"{one:000\' \'миллион other:000\' \'миллион}"_s,
				u"{one:0\' \'миллиард other:0\' \'миллиард}"_s,
				u"{one:00\' \'миллиард other:00\' \'миллиард}"_s,
				u"{one:000\' \'миллиард other:000\' \'миллиард}"_s,
				u"{one:0\' \'триллион other:0\' \'триллион}"_s,
				u"{one:00\' \'триллион other:00\' \'триллион}"_s,
				u"{one:000\' \'триллион other:000\' \'триллион}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.QuarterNarrows"_s),
			$of(metaValue_buddhist_QuarterNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.DayNarrows"_s),
			$of(metaValue_DayAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(metaValue_QuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterAbbreviations"_s),
			$of(metaValue_QuarterAbbreviations)
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
			$of("calendarname.gregory"_s),
			$of(metaValue_calendarname_gregorian)
		})
	}));
	return data;
}

FormatData_ce::FormatData_ce() {
}

$Class* FormatData_ce::load$($String* name, bool initialize) {
	$loadClass(FormatData_ce, name, initialize, &_FormatData_ce_ClassInfo_, allocate$FormatData_ce);
	return class$;
}

$Class* FormatData_ce::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun