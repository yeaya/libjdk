#include <sun/text/resources/ext/FormatData_en_ZA.h>

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

$MethodInfo _FormatData_en_ZA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_ZA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_ZA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_ZA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_ZA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_ZA_MethodInfo_
};

$Object* allocate$FormatData_en_ZA($Class* clazz) {
	return $of($alloc(FormatData_en_ZA));
}

void FormatData_en_ZA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_ZA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤ #,##0.00;¤-#,##0.00"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a"_s,
				"h:mm:ss a"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd MMM yyyy"_s,
				"yyyy/MM/dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_en_ZA::FormatData_en_ZA() {
}

$Class* FormatData_en_ZA::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_ZA, name, initialize, &_FormatData_en_ZA_ClassInfo_, allocate$FormatData_en_ZA);
	return class$;
}

$Class* FormatData_en_ZA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun