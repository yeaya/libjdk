#include <sun/text/resources/cldr/ext/FormatData_es_CL.h>

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

$MethodInfo _FormatData_es_CL_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_CL, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_CL, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_CL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_CL",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_CL_MethodInfo_
};

$Object* allocate$FormatData_es_CL($Class* clazz) {
	return $of($alloc(FormatData_es_CL));
}

void FormatData_es_CL::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_CL::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		"dd-MM-y G"_s,
		"dd-MM-y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		"dd-MM-y GGGG"_s,
		"dd-MM-y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
				"EEEE, d \'de\' MMMM \'de\' y G"_s,
				"d \'de\' MMMM \'de\' y G"_s,
				"dd-MM-y G"_s,
				"dd-MM-y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d \'de\' MMMM \'de\' y"_s,
				"d \'de\' MMMM \'de\' y"_s,
				"dd-MM-y"_s,
				"dd-MM-yy"_s
			}))
		}),
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
				"EEEE, d \'de\' MMMM \'de\' y GGGG"_s,
				"d \'de\' MMMM \'de\' y GGGG"_s,
				"dd-MM-y GGGG"_s,
				"dd-MM-y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
				"ene."_s,
				"feb."_s,
				"mar."_s,
				"abr."_s,
				"may."_s,
				"jun."_s,
				"jul."_s,
				"ago."_s,
				"sept."_s,
				"oct."_s,
				"nov."_s,
				"dic."_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤#,##0.00;¤-#,##0.00"_s,
				u"#,##0 %"_s,
				u"¤#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("standalone.QuarterNames"_s),
			$of($$new($StringArray, {
				u"1.° trimestre"_s,
				u"2.° trimestre"_s,
				u"3.° trimestre"_s,
				u"4.º trimestre"_s
			}))
		})
	}));
	return data;
}

FormatData_es_CL::FormatData_es_CL() {
}

$Class* FormatData_es_CL::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_CL, name, initialize, &_FormatData_es_CL_ClassInfo_, allocate$FormatData_es_CL);
	return class$;
}

$Class* FormatData_es_CL::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun