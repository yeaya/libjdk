#include <sun/text/resources/ext/FormatData_ms_MY.h>

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

$MethodInfo _FormatData_ms_MY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ms_MY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ms_MY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ms_MY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_ms_MY",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ms_MY_MethodInfo_
};

$Object* allocate$FormatData_ms_MY($Class* clazz) {
	return $of($alloc(FormatData_ms_MY));
}

void FormatData_ms_MY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_ms_MY::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE dd MMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd/MM/yyyy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_ms_MY::FormatData_ms_MY() {
}

$Class* FormatData_ms_MY::load$($String* name, bool initialize) {
	$loadClass(FormatData_ms_MY, name, initialize, &_FormatData_ms_MY_ClassInfo_, allocate$FormatData_ms_MY);
	return class$;
}

$Class* FormatData_ms_MY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun