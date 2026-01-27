#include <sun/text/resources/ext/FormatData_de_AT.h>

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

$MethodInfo _FormatData_de_AT_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_AT, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_AT, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_de_AT_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_de_AT",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_de_AT_MethodInfo_
};

$Object* allocate$FormatData_de_AT($Class* clazz) {
	return $of($alloc(FormatData_de_AT));
}

void FormatData_de_AT::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_AT::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
				u"Jänner"_s,
				"Februar"_s,
				u"März"_s,
				"April"_s,
				"Mai"_s,
				"Juni"_s,
				"Juli"_s,
				"August"_s,
				"September"_s,
				"Oktober"_s,
				"November"_s,
				"Dezember"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Jän"_s,
				"Feb"_s,
				u"Mär"_s,
				"Apr"_s,
				"Mai"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dez"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				u"Jän"_s,
				"Feb"_s,
				u"Mär"_s,
				"Apr"_s,
				"Mai"_s,
				"Jun"_s,
				"Jul"_s,
				"Aug"_s,
				"Sep"_s,
				"Okt"_s,
				"Nov"_s,
				"Dez"_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.00;-¤ #,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH:mm\' Uhr \'z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd. MMMM yyyy"_s,
				"dd. MMMM yyyy"_s,
				"dd.MM.yyyy"_s,
				"dd.MM.yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GuMtkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_de_AT::FormatData_de_AT() {
}

$Class* FormatData_de_AT::load$($String* name, bool initialize) {
	$loadClass(FormatData_de_AT, name, initialize, &_FormatData_de_AT_ClassInfo_, allocate$FormatData_de_AT);
	return class$;
}

$Class* FormatData_de_AT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun