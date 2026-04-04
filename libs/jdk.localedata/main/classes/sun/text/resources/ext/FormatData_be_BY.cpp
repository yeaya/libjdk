#include <sun/text/resources/ext/FormatData_be_BY.h>
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

void FormatData_be_BY::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_be_BY::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NumberPatterns"_s,
		$$new($StringArray, {
			"#,##0.###;-#,##0.###"_s,
			u"¤#,##0.##;-¤#,##0.##"_s,
			"#,##0%"_s
		})
	})});
}

FormatData_be_BY::FormatData_be_BY() {
}

$Class* FormatData_be_BY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_be_BY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_be_BY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_be_BY",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_be_BY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_be_BY);
	});
	return class$;
}

$Class* FormatData_be_BY::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun