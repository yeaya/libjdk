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

void FormatData_th::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_th::getContents() {
	$useLocalObjectStack();
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
			"MonthNames"_s,
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
			"MonthAbbreviations"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthNarrows"_s,
			$$new($StringArray, {
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
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				u"วันอาทิตย์"_s,
				u"วันจันทร์"_s,
				u"วันอังคาร"_s,
				u"วันพุธ"_s,
				u"วันพฤหัสบดี"_s,
				u"วันศุกร์"_s,
				u"วันเสาร์"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				u"อา."_s,
				u"จ."_s,
				u"อ."_s,
				u"พ."_s,
				u"พฤ."_s,
				u"ศ."_s,
				u"ส."_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				u"อ"_s,
				u"จ"_s,
				u"อ"_s,
				u"พ"_s,
				u"พ"_s,
				u"ศ"_s,
				u"ส"_s
			})
		}),
		$$new($ObjectArray, {
			"AmPmMarkers"_s,
			$$new($StringArray, {
				u"ก่อนเที่ยง"_s,
				u"หลังเที่ยง"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.short.Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"พ.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				u"ปีก่อนคริสต์กาลที่"_s,
				u"ค.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				u"ก่อน ค.ศ."_s,
				u"ค.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			$$new($StringArray, {
				u"ก่อน ค.ศ."_s,
				u"ค.ศ."_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.Eras"_s,
			$$new($StringArray, {
				u"ค.ศ."_s,
				u"เมจิ"_s,
				u"ทะอิโช"_s,
				u"โชวะ"_s,
				u"เฮเซ"_s,
				u"เรวะ"_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.short.Eras"_s,
			$$new($StringArray, {
				u"ค.ศ."_s,
				u"ม"_s,
				u"ท"_s,
				u"ช"_s,
				u"ฮ"_s,
				"R"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			timePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			datePatterns
		}),
		$$new($ObjectArray, {
			"buddhist.DateTimePatterns"_s,
			dateTimePatterns
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			timePatterns
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			datePatterns
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			dateTimePatterns
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GanjkHmsSEDFwWxhKzZ"_s
		})
	});
}

FormatData_th::FormatData_th() {
}

$Class* FormatData_th::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_th, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_th, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_th",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_th, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_th);
	});
	return class$;
}

$Class* FormatData_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun