#include <sun/text/resources/ext/FormatData_th.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_th",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_th_MethodInfo_
};

$Object* allocate$FormatData_th($Class* clazz) {
	return $of($alloc(FormatData_th));
}

void FormatData_th::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_th::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, timePatterns, $new($StringArray, {
		u"H\' นาฬิกา \'m\' นาที \'ss\' วินาที\'"_s,
		u"H\' นาฬิกา \'m\' นาที\'"_s,
		"H:mm:ss"_s,
		u"H:mm\' น.\'"_s
	}));
	$var($StringArray, datePatterns, $new($StringArray, {
		u"EEEE\'ที่ \'d MMMM G yyyy"_s,
		"d MMMM yyyy"_s,
		"d MMM yyyy"_s,
		"d/M/yyyy"_s
	}));
	$var($StringArray, dateTimePatterns, $new($StringArray, {"{1}, {0}"_s}));
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
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
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				u"ม.ค."_s,
				u"ก.พ."_s,
				u"มี.ค."_s,
				u"เม.ย."_s,
				u"พ.ค."_s,
				u"มิ.ย"_s,
				u"ก.ค."_s,
				u"ส.ค."_s,
				u"ก.ย."_s,
				u"ต.ค."_s,
				u"พ.ย."_s,
				u"ธ.ค."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"วันอาทิตย์"_s,
				u"วันจันทร์"_s,
				u"วันอังคาร"_s,
				u"วันพุธ"_s,
				u"วันพฤหัสบดี"_s,
				u"วันศุกร์"_s,
				u"วันเสาร์"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				u"อา."_s,
				u"จ."_s,
				u"อ."_s,
				u"พ."_s,
				u"พฤ."_s,
				u"ศ."_s,
				u"ส."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				u"อ"_s,
				u"จ"_s,
				u"อ"_s,
				u"พ"_s,
				u"พ"_s,
				u"ศ"_s,
				u"ส"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				u"ก่อนเที่ยง"_s,
				u"หลังเที่ยง"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.Eras"_s),
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.short.Eras"_s),
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"ค.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				u"ก่อน ค.ศ."_s,
				u"ค.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("narrow.Eras"_s),
			$of($$new($StringArray, {
				u"ก่อน ค.ศ."_s,
				u"ค.ศ."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.Eras"_s),
			$of($$new($StringArray, {
				u"ค.ศ."_s,
				u"เมจิ"_s,
				u"ทะอิโช"_s,
				u"โชวะ"_s,
				u"เฮเซ"_s,
				u"เรวะ"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.short.Eras"_s),
			$of($$new($StringArray, {
				u"ค.ศ."_s,
				u"ม"_s,
				u"ท"_s,
				u"ช"_s,
				u"ฮ"_s,
				"R"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(timePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(datePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.DateTimePatterns"_s),
			$of(dateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(timePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of(datePatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of(dateTimePatterns)
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GanjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_th::FormatData_th() {
}

$Class* FormatData_th::load$($String* name, bool initialize) {
	$loadClass(FormatData_th, name, initialize, &_FormatData_th_ClassInfo_, allocate$FormatData_th);
	return class$;
}

$Class* FormatData_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun