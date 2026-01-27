#include <sun/text/resources/ext/FormatData_nl_BE.h>

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

$MethodInfo _FormatData_nl_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_nl_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_nl_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_nl_BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_nl_BE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_nl_BE_MethodInfo_
};

$Object* allocate$FormatData_nl_BE($Class* clazz) {
	return $of($alloc(FormatData_nl_BE));
}

void FormatData_nl_BE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_nl_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 ¤;-#,##0.00 ¤"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"H.mm\' u. \'z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d-MMM-yyyy"_s,
				"d/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_nl_BE::FormatData_nl_BE() {
}

$Class* FormatData_nl_BE::load$($String* name, bool initialize) {
	$loadClass(FormatData_nl_BE, name, initialize, &_FormatData_nl_BE_ClassInfo_, allocate$FormatData_nl_BE);
	return class$;
}

$Class* FormatData_nl_BE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun