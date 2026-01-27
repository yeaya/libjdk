#include <sun/text/resources/cldr/ext/FormatData_fr_CA.h>

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

$MethodInfo _FormatData_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_CA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_CA_MethodInfo_
};

$Object* allocate$FormatData_fr_CA($Class* clazz) {
	return $of($alloc(FormatData_fr_CA));
}

void FormatData_fr_CA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"janv."_s,
		u"févr."_s,
		"mars"_s,
		"avr."_s,
		"mai"_s,
		"juin"_s,
		"juill."_s,
		u"août"_s,
		"sept."_s,
		"oct."_s,
		"nov."_s,
		u"déc."_s,
		""_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
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
		"a"_s,
		"p"_s,
		"minuit"_s,
		"midi"_s,
		"mat."_s,
		""_s,
		u"après-midi"_s,
		""_s,
		"soir"_s,
		""_s,
		"mat."_s,
		""_s
	}));
	$var($StringArray, metaValue_abbreviated_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		"minuit"_s,
		"midi"_s,
		"du mat."_s,
		""_s,
		u"après-midi"_s,
		""_s,
		"du soir"_s,
		""_s,
		"du mat."_s,
		""_s
	}));
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH \'h\' mm \'min\' ss \'s\' zzzz"_s,
		"HH \'h\' mm \'min\' ss \'s\' z"_s,
		"HH \'h\' mm \'min\' ss \'s\'"_s,
		"HH \'h\' mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y G"_s,
		"d MMMM y G"_s,
		"d MMM y G"_s,
		"yy-MM-dd GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE d MMMM y GGGG"_s,
		"d MMMM y GGGG"_s,
		"d MMM y GGGG"_s,
		"yy-MM-dd G"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_long_Eras, $new($StringArray, {
		""_s,
		"Anno Hegirae"_s
	}));
	$var($StringArray, metaValue_java_time_islamic_narrow_Eras, $new($StringArray, {
		""_s,
		"AH"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"calendrier musulman (calculé, Umm al-Qura)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"d MMM y GGGG"_s,
				"y-MM-dd G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.standard"_s),
			$of("{0} (heure normale)"_s)
		}),
		$$new($ObjectArray, {
			$of("japanese.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("buddhist.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
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
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				u"{one:0 k other:0 k}"_s,
				u"{one:00 k other:00 k}"_s,
				u"{one:000 k other:000 k}"_s,
				u"{one:0 M other:0 M}"_s,
				u"{one:00 M other:00 M}"_s,
				u"{one:000 M other:000 M}"_s,
				u"{one:0 G other:0 G}"_s,
				u"{one:00 G other:00 G}"_s,
				u"{one:000 G other:000 G}"_s,
				u"{one:0 T other:0 T}"_s,
				u"{one:00 T other:00 T}"_s,
				u"{one:000 T other:000 T}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("timezone.regionFormat.daylight"_s),
			$of(u"{0} (heure avancée)"_s)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM y G"_s,
				"d MMMM y G"_s,
				"d MMM y G"_s,
				"y-MM-dd GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {
				u"{1} \'à\' {0}"_s,
				u"{1} \'à\' {0}"_s,
				"{1}, {0}"_s,
				"{1} {0}"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(metaValue_java_time_islamic_narrow_Eras)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("long.CompactNumberPatterns"_s),
			$of($$new($StringArray, {
				""_s,
				""_s,
				""_s,
				"{1:0\' \'mille one:0\' \'mille other:0\' \'mille}"_s,
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(metaValue_narrow_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.long.Eras"_s),
			$of(metaValue_java_time_islamic_long_Eras)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(metaValue_abbreviated_AmPmMarkers)
		})
	}));
	return data;
}

FormatData_fr_CA::FormatData_fr_CA() {
}

$Class* FormatData_fr_CA::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_CA, name, initialize, &_FormatData_fr_CA_ClassInfo_, allocate$FormatData_fr_CA);
	return class$;
}

$Class* FormatData_fr_CA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun