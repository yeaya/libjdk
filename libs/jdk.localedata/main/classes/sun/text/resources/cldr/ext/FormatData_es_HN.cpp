#include <sun/text/resources/cldr/ext/FormatData_es_HN.h>
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

void FormatData_es_HN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_HN::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE dd \'de\' MMMM \'de\' y G"_s,
		"dd \'de\' MMMM \'de\' y G"_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE dd \'de\' MMMM \'de\' y GGGG"_s,
		"dd \'de\' MMMM \'de\' y GGGG"_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE dd \'de\' MMMM \'de\' y GGGG"_s,
				"dd \'de\' MMMM \'de\' y GGGG"_s,
				"dd/MM/y GGGG"_s,
				"dd/MM/yy G"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.roc.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.buddhist.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"java.time.japanese.DatePatterns"_s,
			$$new($StringArray, {
				"EEEE dd \'de\' MMMM \'de\' y G"_s,
				"dd \'de\' MMMM \'de\' y G"_s,
				"dd/MM/y G"_s,
				"dd/MM/yy GGGGG"_s
			})
		}),
		$$new($ObjectArray, {
			"java.time.islamic.DatePatterns"_s,
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"roc.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"islamic.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE dd \'de\' MMMM \'de\' y"_s,
				"dd \'de\' MMMM \'de\' y"_s,
				"d MMM y"_s,
				"d/M/yy"_s
			})
		})
	}));
	return data;
}

FormatData_es_HN::FormatData_es_HN() {
}

$Class* FormatData_es_HN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_HN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_HN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_es_HN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_es_HN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_es_HN);
	});
	return class$;
}

$Class* FormatData_es_HN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun