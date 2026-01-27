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

$MethodInfo _JavaTimeSupplementary_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_vi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_vi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_vi",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_vi_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_vi($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_vi));
}

void JavaTimeSupplementary_vi::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_vi::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"Lịch Phật Giáo"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"Lịch Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"Lịch Gregory"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"Lịch Hồi Giáo"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"Lịch Islamic-Civil"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"Lịch Hồi Giáo - Umm al-Qura"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"Lịch Nhật Bản"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"Lịch Trung Hoa Dân Quốc"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of("SA/CH"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"Thời đại"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"Giờ"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"Phút"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"Tháng"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"Giây"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"Tuần"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"Ngày trong tuần"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"Năm"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"Múi giờ"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ngày\' dd \'tháng\' MM \'năm\' y GGGG"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
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
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("islamic.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				"BE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ngày\' dd \'tháng\' MM \'năm\' y G"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ngày\' dd MMMM \'năm\' y G"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y G"_s,
				"dd-MM-y G"_s,
				"dd/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.long.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(sharedJavaTimeDatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of(sharedJavaTimeLongEras)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ngày\' dd MMMM \'năm\' y GGGG"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DayAbbreviations"_s),
			$of(sharedDayAbbreviations)
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
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
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
			$of("roc.abbreviated.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.long.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
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

JavaTimeSupplementary_vi::JavaTimeSupplementary_vi() {
}

$Class* JavaTimeSupplementary_vi::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_vi, name, initialize, &_JavaTimeSupplementary_vi_ClassInfo_, allocate$JavaTimeSupplementary_vi);
	return class$;
}

$Class* JavaTimeSupplementary_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun