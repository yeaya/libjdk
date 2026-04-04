#include <sun/text/resources/ext/FormatData_vi_VN.h>
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

void FormatData_vi_VN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_vi_VN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NumberPatterns"_s,
		$$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"#,##0.00 ¤;-#,##0.00 ¤"_s,
			"#,##0%"_s
		})
	})});
}

FormatData_vi_VN::FormatData_vi_VN() {
}

$Class* FormatData_vi_VN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_vi_VN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_vi_VN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_vi_VN",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_vi_VN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_vi_VN);
	});
	return class$;
}

$Class* FormatData_vi_VN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun