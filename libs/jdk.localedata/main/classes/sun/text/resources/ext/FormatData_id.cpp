#include <sun/text/resources/ext/FormatData_id.h>

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

$MethodInfo _FormatData_id_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_id, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_id, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_id_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_id",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_id_MethodInfo_
};

$Object* allocate$FormatData_id($Class* clazz) {
	return $of($alloc(FormatData_id));
}

void FormatData_id::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_id::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				"Januari"_s,
				"Februari"_s,
				"Maret"_s,
				"April"_s,
				"Mei"_s,
				"Juni"_s,
				"Juli"_s,
				"Agustus"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Desember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"Jan"_s,
				"Feb"_s,
				"Mar"_s,
				"Apr"_s,
				"Mei"_s,
				"Jun"_s,
				"Jul"_s,
				"Agu"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Des"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"Minggu"_s,
				"Senin"_s,
				"Selasa"_s,
				"Rabu"_s,
				"Kamis"_s,
				"Jumat"_s,
				"Sabtu"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"Min"_s,
				"Sen"_s,
				"Sel"_s,
				"Rab"_s,
				"Kam"_s,
				"Jum"_s,
				"Sab"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"BCE"_s,
				"CE"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00"_s,
				"#,##0%"_s
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
				"NaN"_s
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
				"EEEE, yyyy MMMM dd"_s,
				"yyyy MMMM d"_s,
				"yyyy MMM d"_s,
				"yy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_id::FormatData_id() {
}

$Class* FormatData_id::load$($String* name, bool initialize) {
	$loadClass(FormatData_id, name, initialize, &_FormatData_id_ClassInfo_, allocate$FormatData_id);
	return class$;
}

$Class* FormatData_id::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun