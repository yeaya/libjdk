#include <sun/text/resources/ext/JavaTimeSupplementary_th.h>
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

void JavaTimeSupplementary_th::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_th::getContents() {
	$useLocalObjectStack();
	$var($StringArray, sharedQuarterNames, $new($StringArray, {
		u"ไตรมาส 1"_s,
		u"ไตรมาส 2"_s,
		u"ไตรมาส 3"_s,
		u"ไตรมาส 4"_s
	}));
	$var($StringArray, sharedAmPmMarkers, $new($StringArray, {
		u"ก่อนเที่ยง"_s,
		u"หลังเที่ยง"_s
	}));
	$var($StringArray, sharedDayAbbreviations, $new($StringArray, {
		u"อา."_s,
		u"จ."_s,
		u"อ."_s,
		u"พ."_s,
		u"พฤ."_s,
		u"ศ."_s,
		u"ส."_s
	}));
	$var($StringArray, sharedDayNames, $new($StringArray, {
		u"วันอาทิตย์"_s,
		u"วันจันทร์"_s,
		u"วันอังคาร"_s,
		u"วันพุธ"_s,
		u"วันพฤหัสบดี"_s,
		u"วันศุกร์"_s,
		u"วันเสาร์"_s
	}));
	$var($StringArray, sharedDayNarrows, $new($StringArray, {
		u"อา"_s,
		u"จ"_s,
		u"อ"_s,
		u"พ"_s,
		u"พฤ"_s,
		u"ศ"_s,
		u"ส"_s
	}));
	$var($StringArray, sharedEras, $new($StringArray, {
		""_s,
		u"ฮ.ศ."_s
	}));
	$var($StringArray, sharedTimePatterns, $new($StringArray, {
		u"H นาฬิกา mm นาที ss วินาที zzzz"_s,
		u"H นาฬิกา mm นาที ss วินาที z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, sharedNarrowAmPmMarkers, $new($StringArray, {
		"a"_s,
		"p"_s
	}));
	$var($StringArray, sharedJavaTimeLongEras, $new($StringArray, {
		u"ค.ศ."_s,
		u"เมจิ"_s,
		u"ทะอิโช"_s,
		u"โชวะ"_s,
		u"เฮเซ"_s,
		u"เรวะ"_s
	}));
	$var($StringArray, sharedShortEras, $new($StringArray, {
		u"ปีก่อนไต้หวัน"_s,
		u"ไต้หวัน"_s
	}));
	$var($StringArray, sharedMonthNarrows, $new($StringArray, {
		u"ม.ค."_s,
		u"ก.พ."_s,
		u"มี.ค."_s,
		u"เม.ย."_s,
		u"พ.ค."_s,
		u"มิ.ย."_s,
		u"ก.ค."_s,
		u"ส.ค."_s,
		u"ก.ย."_s,
		u"ต.ค."_s,
		u"พ.ย."_s,
		u"ธ.ค."_s,
		""_s
	}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"QuarterAbbreviations"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"QuarterNames"_s,
			sharedQuarterNames
		}),
		$$new($ObjectArray, {
			"calendarname.buddhist"_s,
			u"ปฏิทินพุทธ"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregorian"_s,
			u"ปฏิทินเกรกอเรียน"_s
		}),
		$$new($ObjectArray, {
			"calendarname.gregory"_s,
			u"ปฏิทินเกรกอเรียน"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic"_s,
			u"ปฏิทินอิสลาม"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-civil"_s,
			u"ปฏิทินอิสลามซีวิล"_s
		}),
		$$new($ObjectArray, {
			"calendarname.islamic-umalqura"_s,
			u"ปฏิทินอิสลาม (อุมม์อัลกุรา)"_s
		}),
		$$new($ObjectArray, {
			"calendarname.japanese"_s,
			u"ปฏิทินญี่ปุ่น"_s
		}),
		$$new($ObjectArray, {
			"calendarname.roc"_s,
			u"ปฏิทินไต้หวัน"_s
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"ช่วงวัน"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"สมัย"_s
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ชั่วโมง"_s
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"นาที"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"เดือน"_s
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"วินาที"_s
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"สัปดาห์"_s
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"วันในสัปดาห์"_s
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"ปี"_s
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"เขตเวลา"_s
		}),
		$$new($ObjectArray, {
			"islamic.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM GGGG y"_s,
				"d MMMM GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
			"islamic.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.MonthAbbreviations"_s,
			$$new($StringArray, {
				u"มุฮัร."_s,
				u"เศาะ."_s,
				u"รอบี I"_s,
				u"รอบี II"_s,
				u"จุมาดา I"_s,
				u"จุมาดา II"_s,
				u"เราะ."_s,
				u"ชะอ์."_s,
				u"เราะมะ."_s,
				u"เชาว."_s,
				u"ซุลกิอฺ."_s,
				u"ซุลหิจ."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.MonthNames"_s,
			$$new($StringArray, {
				u"มุฮะร์รอม"_s,
				u"ซอฟาร์"_s,
				u"รอบี I"_s,
				u"รอบี II"_s,
				u"จุมาดา I"_s,
				u"จุมาดา II"_s,
				u"รอจับ"_s,
				u"ชะอะบาน"_s,
				u"รอมะดอน"_s,
				u"เชาวัล"_s,
				u"ซุลกิอฺดะฮฺ"_s,
				u"ซุลหิจญะฮฺ"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.QuarterAbbreviations"_s,
			sharedQuarterNames
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
			"islamic.long.Eras"_s,
			$$new($StringArray, {
				""_s,
				u"ฮิจเราะห์ศักราช"_s
			})
		}),
		$$new($ObjectArray, {
			"islamic.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"islamic.narrow.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"islamic.short.Eras"_s,
			sharedEras
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.long.Eras"_s,
			$$new($StringArray, {
				"BC"_s,
				u"พุทธศักราช"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.short.Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/yy G"_s
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
			$$new($StringArray, {
				u"ปีก่อนคริสต์ศักราช"_s,
				u"คริสต์ศักราช"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.short.Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"ค.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"roc.AmPmMarkers"_s,
			sharedAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			$$new($StringArray, {
				u"EEEEที่ d MMMM ปีGGGGที่ y"_s,
				u"d MMMM ปีGGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			sharedMonthNarrows
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			$$new($StringArray, {
				u"มกราคม"_s,
				u"กุมภาพันธ์"_s,
				u"มีนาคม"_s,
				u"เมษายน"_s,
				u"พฤษภาคม"_s,
				u"มิถุนายน"_s,
				u"กรกฎาคม"_s,
				u"สิงหาคม"_s,
				u"กันยายน"_s,
				u"ตุลาคม"_s,
				u"พฤศจิกายน"_s,
				u"ธันวาคม"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"roc.MonthNarrows"_s,
			sharedMonthNarrows
		}),
		$$new($ObjectArray, {
			"roc.QuarterAbbreviations"_s,
			sharedQuarterNames
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
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.narrow.AmPmMarkers"_s,
			sharedNarrowAmPmMarkers
		}),
		$$new($ObjectArray, {
			"roc.narrow.Eras"_s,
			sharedShortEras
		}),
		$$new($ObjectArray, {
			"roc.short.Eras"_s,
			sharedShortEras
		})
	});
}

JavaTimeSupplementary_th::JavaTimeSupplementary_th() {
}

$Class* JavaTimeSupplementary_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_th, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_th, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.JavaTimeSupplementary_th",
		"sun.util.resources.OpenListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JavaTimeSupplementary_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JavaTimeSupplementary_th);
	});
	return class$;
}

$Class* JavaTimeSupplementary_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun