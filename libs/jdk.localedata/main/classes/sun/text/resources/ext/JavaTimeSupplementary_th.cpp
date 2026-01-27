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

$MethodInfo _JavaTimeSupplementary_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(JavaTimeSupplementary_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(JavaTimeSupplementary_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _JavaTimeSupplementary_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.JavaTimeSupplementary_th",
	"sun.util.resources.OpenListResourceBundle",
	nullptr,
	nullptr,
	_JavaTimeSupplementary_th_MethodInfo_
};

$Object* allocate$JavaTimeSupplementary_th($Class* clazz) {
	return $of($alloc(JavaTimeSupplementary_th));
}

void JavaTimeSupplementary_th::init$() {
	$OpenListResourceBundle::init$();
}

$ObjectArray2* JavaTimeSupplementary_th::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("QuarterNames"_s),
			$of(sharedQuarterNames)
		}),
		$$new($ObjectArray, {
			$of("calendarname.buddhist"_s),
			$of(u"ปฏิทินพุทธ"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregorian"_s),
			$of(u"ปฏิทินเกรกอเรียน"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.gregory"_s),
			$of(u"ปฏิทินเกรกอเรียน"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic"_s),
			$of(u"ปฏิทินอิสลาม"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-civil"_s),
			$of(u"ปฏิทินอิสลามซีวิล"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.islamic-umalqura"_s),
			$of(u"ปฏิทินอิสลาม (อุมม์อัลกุรา)"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.japanese"_s),
			$of(u"ปฏิทินญี่ปุ่น"_s)
		}),
		$$new($ObjectArray, {
			$of("calendarname.roc"_s),
			$of(u"ปฏิทินไต้หวัน"_s)
		}),
		$$new($ObjectArray, {
			$of("field.dayperiod"_s),
			$of(u"ช่วงวัน"_s)
		}),
		$$new($ObjectArray, {
			$of("field.era"_s),
			$of(u"สมัย"_s)
		}),
		$$new($ObjectArray, {
			$of("field.hour"_s),
			$of(u"ชั่วโมง"_s)
		}),
		$$new($ObjectArray, {
			$of("field.minute"_s),
			$of(u"นาที"_s)
		}),
		$$new($ObjectArray, {
			$of("field.month"_s),
			$of(u"เดือน"_s)
		}),
		$$new($ObjectArray, {
			$of("field.second"_s),
			$of(u"วินาที"_s)
		}),
		$$new($ObjectArray, {
			$of("field.week"_s),
			$of(u"สัปดาห์"_s)
		}),
		$$new($ObjectArray, {
			$of("field.weekday"_s),
			$of(u"วันในสัปดาห์"_s)
		}),
		$$new($ObjectArray, {
			$of("field.year"_s),
			$of(u"ปี"_s)
		}),
		$$new($ObjectArray, {
			$of("field.zone"_s),
			$of(u"เขตเวลา"_s)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM GGGG y"_s,
				"d MMMM GGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
			$of("islamic.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of("islamic.long.Eras"_s),
			$of($$new($StringArray, {
				""_s,
				u"ฮิจเราะห์ศักราช"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.narrow.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("islamic.short.Eras"_s),
			$of(sharedEras)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.long.Eras"_s),
			$of($$new($StringArray, {
				"BC"_s,
				u"พุทธศักราช"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM G y"_s,
				"d MMMM G y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/yy G"_s
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
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์ศักราช"_s,
				u"คริสต์ศักราช"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM ปีGที่ y"_s,
				u"d MMMM ปีG y"_s,
				"d MMM G y"_s,
				"d/M/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.short.Eras"_s),
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"ค.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(sharedAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEEที่ d MMMM ปีGGGGที่ y"_s,
				u"d MMMM ปีGGGG y"_s,
				"d MMM GGGG y"_s,
				"d/M/y GGGG"_s
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(sharedMonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(sharedMonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("roc.QuarterAbbreviations"_s),
			$of(sharedQuarterNames)
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
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.AmPmMarkers"_s),
			$of(sharedNarrowAmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.narrow.Eras"_s),
			$of(sharedShortEras)
		}),
		$$new($ObjectArray, {
			$of("roc.short.Eras"_s),
			$of(sharedShortEras)
		})
	});
}

JavaTimeSupplementary_th::JavaTimeSupplementary_th() {
}

$Class* JavaTimeSupplementary_th::load$($String* name, bool initialize) {
	$loadClass(JavaTimeSupplementary_th, name, initialize, &_JavaTimeSupplementary_th_ClassInfo_, allocate$JavaTimeSupplementary_th);
	return class$;
}

$Class* JavaTimeSupplementary_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun