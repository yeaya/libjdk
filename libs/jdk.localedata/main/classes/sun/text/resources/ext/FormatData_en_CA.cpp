#include <sun/text/resources/ext/FormatData_en_CA.h>
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

void FormatData_en_CA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_CA::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"h:mm:ss \'o\'\'clock\' a z"_s,
				"h:mm:ss z a"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE, MMMM d, yyyy"_s,
				"MMMM d, yyyy"_s,
				"d-MMM-yyyy"_s,
				"dd/MM/yy"_s
			})
		}),
		$$new($ObjectArray, {
			"DateTimePatterns"_s,
			$$new($StringArray, {"{1} {0}"_s})
		}),
		$$new($ObjectArray, {
			"DateTimePatternChars"_s,
			"GyMdkHmsSEDFwWahKzZ"_s
		})
	});
}

FormatData_en_CA::FormatData_en_CA() {
}

$Class* FormatData_en_CA::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_CA, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_CA, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_en_CA",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_en_CA, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_en_CA);
	});
	return class$;
}

$Class* FormatData_en_CA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun