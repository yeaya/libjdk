#include <sun/text/resources/ext/FormatData_no_NO_NY.h>
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

void FormatData_no_NO_NY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_no_NO_NY::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"januar"_s,
				"februar"_s,
				"mars"_s,
				"april"_s,
				"mai"_s,
				"juni"_s,
				"juli"_s,
				"august"_s,
				"september"_s,
				"oktober"_s,
				"november"_s,
				"desember"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"jan"_s,
				"feb"_s,
				"mar"_s,
				"apr"_s,
				"mai"_s,
				"jun"_s,
				"jul"_s,
				"aug"_s,
				"sep"_s,
				"okt"_s,
				"nov"_s,
				"des"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"sundag"_s,
				u"måndag"_s,
				"tysdag"_s,
				"onsdag"_s,
				"torsdag"_s,
				"fredag"_s,
				"laurdag"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"su"_s,
				u"må"_s,
				"ty"_s,
				"on"_s,
				"to"_s,
				"fr"_s,
				"lau"_s
			})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
			$$new($StringArray, {
				","_s,
				u" "_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"\'kl \'HH.mm z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"d. MMMM yyyy"_s,
				"d. MMMM yyyy"_s,
				"dd.MMM.yyyy"_s,
				"dd.MM.yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_no_NO_NY::FormatData_no_NO_NY() {
}

$Class* FormatData_no_NO_NY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_no_NO_NY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_no_NO_NY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_no_NO_NY",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_no_NO_NY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_no_NO_NY);
	});
	return class$;
}

$Class* FormatData_no_NO_NY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun