#include <sun/text/resources/cldr/ext/FormatData_en_SE.h>

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

$MethodInfo _FormatData_en_SE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_SE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_SE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_SE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_SE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_SE_MethodInfo_
};

$Object* allocate$FormatData_en_SE($Class* clazz) {
	return $of($alloc(FormatData_en_SE));
}

void FormatData_en_SE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_SE::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"G y-MM-dd"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		"GGGG y-MM-dd"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				u" "_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				u"×10^"_s,
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
				"EEEE, MMMM d, y GGGG"_s,
				"MMMM d, y GGGG"_s,
				"MMM d, y GGGG"_s,
				"GGGG y-MM-dd"_s
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
				"EEEE, MMMM d, y G"_s,
				"MMMM d, y G"_s,
				"MMM d, y G"_s,
				"G y-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤"_s
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
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d MMM y"_s,
				"y-MM-dd"_s
			}))
		})
	}));
	return data;
}

FormatData_en_SE::FormatData_en_SE() {
}

$Class* FormatData_en_SE::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_SE, name, initialize, &_FormatData_en_SE_ClassInfo_, allocate$FormatData_en_SE);
	return class$;
}

$Class* FormatData_en_SE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun