#include <sun/text/resources/cldr/ext/FormatData_en_MG.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

void FormatData_en_MG::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_MG::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"buddhist.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"japanese.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"roc.TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			metaValue_TimePatterns
		}),
		$$new($ObjectArray, {
			"islamic.TimePatterns"_s,
			metaValue_TimePatterns
		})
	}));
	return data;
}

FormatData_en_MG::FormatData_en_MG() {
}

$Class* FormatData_en_MG::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_MG, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_MG, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_en_MG",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_en_MG, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_en_MG);
	});
	return class$;
}

$Class* FormatData_en_MG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun