#include <sun/text/resources/ext/FormatData_de_DE.h>
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

void FormatData_de_DE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_de_DE::getContents() {
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

FormatData_de_DE::FormatData_de_DE() {
}

$Class* FormatData_de_DE::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_de_DE, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_de_DE, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_de_DE",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_de_DE, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_de_DE);
	});
	return class$;
}

$Class* FormatData_de_DE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun