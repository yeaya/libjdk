#include <sun/text/resources/ext/JavaTimeSupplementary_vi.h>
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

void JavaTimeSupplementary_vi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_vi::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"Quý 1"_s,
		u"Quý 2"_s,
		u"Quý 3"_s,
		u"Quý 4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		"SA"_s,
		"CH"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		"CN"_s,
		"Th 2"_s,
		"Th 3"_s,
		"Th 4"_s,
		"Th 5"_s,
		"Th 6"_s,
		"Th 7"_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"Chủ Nhật"_s,
		u"Thứ Hai"_s,
		u"Thứ Ba"_s,
		u"Thứ Tư"_s,
		u"Thứ Năm"_s,
		u"Thứ Sáu"_s,
		u"Thứ Bảy"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		"CN"_s,
		"T2"_s,
		"T3"_s,
		"T4"_s,
		"T5"_s,
		"T6"_s,
		"T7"_s
	}));
	$var($StringArray, sharedQuarterAbbreviations, $new($StringArray, {
		"Q1"_s,
		"Q2"_s,
		"Q3"_s,
		"Q4"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"s"_s,
		"c"_s
	}));
	$var($StringArray, sharedJavaTimeDatePatterns, $new($StringArray, {
		u"EEEE, \'ngày\' dd MMMM \'năm\' y G"_s,
		u"\'Ngày\' dd \'tháng\' M \'năm\' y G"_s,
		"dd-MM-y G"_s,
		"dd/MM/y GGGGG"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		"tr. CN"_s,
		"sau CN"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		u"Trước R.O.C"_s,
		"R.O.C."_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"Lịch Phật Giáo"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"Lịch Gregory"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"Lịch Gregory"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"Lịch Hồi Giáo"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"Lịch Islamic-Civil"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"Lịch Hồi Giáo - Umm al-Qura"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"Lịch Nhật Bản"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"Lịch Trung Hoa Dân Quốc"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			"SA/CH"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"Thời đại"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"Giờ"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"Phút"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"Tháng"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"Giây"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"Tuần"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"Ngày trong tuần"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"Năm"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"Múi giờ"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, \'ngày\' dd \'tháng\' MM \'năm\' y GGGG"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.DayAbbreviations"_s,
			sharedDayAbbreviations
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
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterAbbreviations
		}),
		$$new($ObjectArray, {
			"islamic.QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"islamic.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				"BE"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, \'ngày\' dd \'tháng\' MM \'năm\' y G"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, \'ngày\' dd MMMM \'năm\' y G"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.long.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			sharedJavaTimeDatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			sharedJavaTimeLongEras
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEE, \'ngày\' dd MMMM \'năm\' y GGGG"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"roc.DayAbbreviations"_s,
			sharedDayAbbreviations
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
			$$new($StringArray, {
				"thg 1"_s,
				"thg 2"_s,
				"thg 3"_s,
				"thg 4"_s,
				"thg 5"_s,
				"thg 6"_s,
				"thg 7"_s,
				"thg 8"_s,
				"thg 9"_s,
				"thg 10"_s,
				"thg 11"_s,
				"thg 12"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"tháng 1"_s,
				u"tháng 2"_s,
				u"tháng 3"_s,
				u"tháng 4"_s,
				u"tháng 5"_s,
				u"tháng 6"_s,
				u"tháng 7"_s,
				u"tháng 8"_s,
				u"tháng 9"_s,
				u"tháng 10"_s,
				u"tháng 11"_s,
				u"tháng 12"_s,
				""_s
			})
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
			"roc.abbreviated.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.long.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
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

JavaTimeSupplementary_vi::JavaTimeSupplementary_vi() {
}

$Class* JavaTimeSupplementary_vi::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_vi, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_vi, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_vi",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_vi, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_vi);
	});
	return class$;
}

$Class* JavaTimeSupplementary_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun