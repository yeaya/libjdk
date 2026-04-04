#include <sun/text/resources/ext/FormatData_es_AR.h>
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

void FormatData_es_AR::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_AR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;¤-#,##0.00"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"HH\'h\'\'\'mm z"_s,
				"H:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d\' de \'MMMM\' de \'yyyy"_s,
				"d\' de \'MMMM\' de \'yyyy"_s,
				"dd/MM/yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		})
	});
}

FormatData_es_AR::FormatData_es_AR() {
}

$Class* FormatData_es_AR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_AR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_AR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_es_AR",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_es_AR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_es_AR);
	});
	return class$;
}

$Class* FormatData_es_AR::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun