#include <sun/text/resources/ext/FormatData_cs_CZ.h>
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

void FormatData_cs_CZ::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_cs_CZ::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {$$new($ObjectArray, {
		"NumberPatterns"_s,
		$$new($StringArray, {
			"#,##0.##;-#,##0.##"_s,
			u"#,##0.## ¤;-#,##0.## ¤"_s,
			"#,##0%"_s
		})
	})});
}

FormatData_cs_CZ::FormatData_cs_CZ() {
}

$Class* FormatData_cs_CZ::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_cs_CZ, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_cs_CZ, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_cs_CZ",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_cs_CZ, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_cs_CZ);
	});
	return class$;
}

$Class* FormatData_cs_CZ::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun