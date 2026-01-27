#include <sun/text/resources/ext/FormatData_hr_HR.h>

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

$MethodInfo _FormatData_hr_HR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_hr_HR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_hr_HR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_hr_HR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_hr_HR",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_hr_HR_MethodInfo_
};

$Object* allocate$FormatData_hr_HR($Class* clazz) {
	return $of($alloc(FormatData_hr_HR));
}

void FormatData_hr_HR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_hr_HR::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.##;-¤ #,##0.##"_s,
				"#,##0%"_s
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
				"yyyy. MMMM dd"_s,
				"yyyy. MMMM dd"_s,
				"dd.MM.yyyy."_s,
				"dd.MM.yy."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_hr_HR::FormatData_hr_HR() {
}

$Class* FormatData_hr_HR::load$($String* name, bool initialize) {
	$loadClass(FormatData_hr_HR, name, initialize, &_FormatData_hr_HR_ClassInfo_, allocate$FormatData_hr_HR);
	return class$;
}

$Class* FormatData_hr_HR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun