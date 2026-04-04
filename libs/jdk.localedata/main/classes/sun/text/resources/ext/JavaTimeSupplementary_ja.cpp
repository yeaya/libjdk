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

void JavaTimeSupplementary_ja::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_ja::getContents() {
	$useLocalObjectStack();
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
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"タイ仏教暦"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"西暦(グレゴリオ暦)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"西暦(グレゴリオ暦)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"イスラム暦"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"イスラム歴(定周期、公民紀元)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"イスラム暦(ウンム・アルクラー)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"和暦"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"中華民国暦"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"午前/午後"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"時代"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"時"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"分"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"月"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"秒"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"週"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"曜日"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"年"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"タイムゾーン"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"islamic.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			sharedMonthNames
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"GGGGy年M月d日EEEE"_s,
				u"GGGGy年M月d日"_s,
				"Gy/MM/dd"_s,
				"Gy/MM/dd"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"仏暦"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				u"紀元前"_s,
				u"仏暦"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"Gy\'年\'M\'月\'d\'日\'"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s,
				"GGGGGy.MM.dd"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.japanese.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			sharedJavaTimeShortEras
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeShortEras
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			sharedDatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.DayNames"_s,
			sharedDayNames
		}),
		$$new($ObjectArray, {
			"roc.DayNarrows"_s,
			sharedDayNarrows
		}),
		$$new($ObjectArray, {
			"roc.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			sharedMonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			sharedMonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			sharedTimePatterns
		}),
		$$new($ObjectArray, {
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedEras
		})
	});
}

JavaTimeSupplementary_ja::JavaTimeSupplementary_ja() {
}

$Class* JavaTimeSupplementary_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_ja",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_ja);
	});
	return class$;
}

$Class* JavaTimeSupplementary_ja::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun