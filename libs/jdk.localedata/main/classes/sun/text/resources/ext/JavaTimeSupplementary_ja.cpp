#include <sun/text/resources/ext/JavaTimeSupplementary_ja.h>

#include <sun/util/resources/OpenListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenListResourceBundle = ::sun::util::resources::OpenListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _JavaTimeSupplementary_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_ja",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_ja_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_ja($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_ja));
}

void JavaTimeSupplementary_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"第1四半期"_s,
		u"第2四半期"_s,
		u"第3四半期"_s,
		u"第4四半期"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"午前"_s,
		u"午後"_s
	}));
	$var($StringArray, sharedDatePatterns, $new($StringArray, {
		u"GGGGy年M月d日EEEE"_s,
		u"GGGGy年M月d日"_s,
		"GGGGy/MM/dd"_s,
		"GGGGy/MM/dd"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"日"_s,
		u"月"_s,
		u"火"_s,
		u"水"_s,
		u"木"_s,
		u"金"_s,
		u"土"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"日曜日"_s,
		u"月曜日"_s,
		u"火曜日"_s,
		u"水曜日"_s,
		u"木曜日"_s,
		u"金曜日"_s,
		u"土曜日"_s
	}));
	$var($StringArray, sharedMonthNames, $new($StringArray, {
		u"ムハッラム"_s,
		u"サフアル"_s,
		u"ラビー・ウル・アウワル"_s,
		u"ラビー・ウッ・サーニー"_s,
		u"ジュマーダル・アウワル"_s,
		u"ジュマーダッサーニー"_s,
		u"ラジャブ"_s,
		u"シャアバーン"_s,
		u"ラマダーン"_s,
		u"シャウワール"_s,
		u"ズル・カイダ"_s,
		u"ズル・ヒッジャ"_s,
		""_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"H時mm分ss秒 zzzz"_s,
		"H:mm:ss z"_s,
		"H:mm:ss"_s,
		"H:mm"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"Gy年M月d日EEEE"_s,
		u"Gy年M月d日"_s,
		"Gy/MM/dd"_s,
		"Gy/MM/dd"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"西暦"_s,
		u"明治"_s,
		u"大正"_s,
		u"昭和"_s,
		u"平成"_s,
		u"令和"_s
	}));
	$var($StringArray, sharedJavaTimeShortEras, $new($StringArray, {
		u"紀元前"_s,
		u"西暦"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"民国前"_s,
		u"民国"_s
	}));
	$var($StringArray, sharedMonthAbbreviations, $new($StringArray, {
		u"1月"_s,
		u"2月"_s,
		u"3月"_s,
		u"4月"_s,
		u"5月"_s,
		u"6月"_s,
		u"7月"_s,
		u"8月"_s,
		u"9月"_s,
		u"10月"_s,
		u"11月"_s,
		u"12月"_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"タイ仏教暦"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"西暦(グレゴリオ暦)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"西暦(グレゴリオ暦)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"イスラム暦"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"イスラム歴(定周期、公民紀元)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"イスラム暦(ウンム・アルクラー)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"和暦"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"中華民国暦"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"午前/午後"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"時代"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"時"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"分"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"月"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"秒"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"週"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"曜日"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"年"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"タイムゾーン"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of(sharedMonthNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				"Gy/MM/dd"_s,
				"Gy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"仏暦"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"紀元前"_s,
				u"仏暦"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"Gy\'年\'M\'月\'d\'日\'"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(sharedDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNames"_s),
			$of(sharedDayNames)
		}),
		$$new($ObjectArray, {
			$of("roc.DayNarrows"_s),
			$of(sharedDayNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(sharedMonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(sharedTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedEras)
		})
	});
}

JavaTimeSupplementary_ja::JavaTimeSupplementary_ja() {
}

$Class* JavaTimeSupplementary_ja::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_ja, name, initialize, &_JavaTimeSupplementary_ja_ClassInfo_, allocate$JavaTimeSupplementary_ja);
	return class$;
}

$Class* JavaTimeSupplementary_ja::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun