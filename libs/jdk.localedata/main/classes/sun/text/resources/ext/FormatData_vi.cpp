#include <sun/text/resources/ext/FormatData_vi.h>

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

$MethodInfo _FormatData_vi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_vi, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_vi, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_vi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_vi",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_vi_MethodInfo_
};

$Object* allocate$FormatData_vi($Class* clazz) {
	return $of($alloc(FormatData_vi));
}

void FormatData_vi::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_vi::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"tháng một"_s,
				u"tháng hai"_s,
				u"tháng ba"_s,
				u"tháng tư"_s,
				u"tháng năm"_s,
				u"tháng sáu"_s,
				u"tháng bảy"_s,
				u"tháng tám"_s,
				u"tháng chín"_s,
				u"tháng mười"_s,
				u"tháng mười một"_s,
				u"tháng mười hai"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
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
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
				"1"_s,
				"2"_s,
				"3"_s,
				"4"_s,
				"5"_s,
				"6"_s,
				"7"_s,
				"8"_s,
				"9"_s,
				"10"_s,
				"11"_s,
				"12"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				u"Chủ nhật"_s,
				u"Thứ hai"_s,
				u"Thứ ba"_s,
				u"Thứ tư"_s,
				u"Thứ năm"_s,
				u"Thứ sáu"_s,
				u"Thứ bảy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"Th 2"_s,
				"Th 3"_s,
				"Th 4"_s,
				"Th 5"_s,
				"Th 6"_s,
				"Th 7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"T2"_s,
				"T3"_s,
				"T4"_s,
				"T5"_s,
				"T6"_s,
				"T7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.DayNarrows"_s),
			$of($$new($StringArray, {
				"CN"_s,
				"T2"_s,
				"T3"_s,
				"T4"_s,
				"T5"_s,
				"T6"_s,
				"T7"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of($$new($StringArray, {
				"SA"_s,
				"CH"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"tr. CN"_s,
				"sau CN"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm:ss z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				u"EEEE, \'ngày\' dd MMMM \'năm\' yyyy"_s,
				u"\'Ngày\' dd \'tháng\' M \'năm\' yyyy"_s,
				"dd-MM-yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{0} {1}"_s}))
		})
	});
}

FormatData_vi::FormatData_vi() {
}

$Class* FormatData_vi::load$($String* name, bool initialize) {
	$loadClass(FormatData_vi, name, initialize, &_FormatData_vi_ClassInfo_, allocate$FormatData_vi);
	return class$;
}

$Class* FormatData_vi::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun