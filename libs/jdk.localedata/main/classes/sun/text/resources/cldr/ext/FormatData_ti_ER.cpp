#include <sun/text/resources/cldr/ext/FormatData_ti_ER.h>
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

void FormatData_ti_ER::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ti_ER::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE፡ dd MMMM መዓልቲ y G"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		u"EEEE፡ dd MMMM መዓልቲ y GGGG"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"japanese.DatePatterns"_s,
			metaValue_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"standalone.DayNarrows"_s,
			$$new($StringArray, {
				u"ሰ"_s,
				u"ሰ"_s,
				u"ሰ"_s,
				u"ረ"_s,
				u"ሓ"_s,
				u"ዓ"_s,
				u"ቀ"_s
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
			metaValue_java_time_buddhist_DatePatterns
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"ዓመተ ዓለም"_s,
				u"ዓመተ ምህረት"_s
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
		})
	}));
	return data;
}

FormatData_ti_ER::FormatData_ti_ER() {
}

$Class* FormatData_ti_ER::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ti_ER, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ti_ER, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_ti_ER",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_ti_ER, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_ti_ER);
	});
	return class$;
}

$Class* FormatData_ti_ER::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun