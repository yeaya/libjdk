#include <sun/text/resources/ext/FormatData_lt_LT.h>
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

void FormatData_lt_LT::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_lt_LT::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NumberPatterns"_s,
		$$new($StringArray, {
			"##,##0.##;-##,##0.##"_s,
			u"#,##0.## ¤;-#,##0.## ¤"_s,
			"#,##%"_s
		})
	})});
}

FormatData_lt_LT::FormatData_lt_LT() {
}

$Class* FormatData_lt_LT::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_lt_LT, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_lt_LT, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_lt_LT",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_lt_LT, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_lt_LT);
	});
	return class$;
}

$Class* FormatData_lt_LT::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun