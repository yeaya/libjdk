#include <sun/text/resources/cldr/ext/FormatData_ms_BN.h>

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

$MethodInfo _FormatData_ms_BN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ms_BN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ms_BN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ms_BN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ms_BN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ms_BN_MethodInfo_
};

$Object* allocate$FormatData_ms_BN($Class* clazz) {
	return $of($alloc(FormatData_ms_BN));
}

void FormatData_ms_BN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ms_BN::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"dd MMMM y G"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"dd MMMM y GGGG"_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM y GGGG"_s,
				"d MMMM y GGGG"_s,
				"dd/MM/y GGGG"_s,
				"d/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM y G"_s,
				"d MMMM y G"_s,
				"dd/MM/y G"_s,
				"d/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"dd MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"d/MM/yy"_s
			}))
		})
	}));
	return data;
}

FormatData_ms_BN::FormatData_ms_BN() {
}

$Class* FormatData_ms_BN::load$($String* name, bool initialize) {
	$loadClass(FormatData_ms_BN, name, initialize, &_FormatData_ms_BN_ClassInfo_, allocate$FormatData_ms_BN);
	return class$;
}

$Class* FormatData_ms_BN::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun