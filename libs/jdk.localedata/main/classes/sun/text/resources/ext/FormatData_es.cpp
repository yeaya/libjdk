#include <sun/text/resources/ext/FormatData_es.h>
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

void FormatData_es::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			$$new($StringArray, {
				"enero"_s,
				"febrero"_s,
				"marzo"_s,
				"abril"_s,
				"mayo"_s,
				"junio"_s,
				"julio"_s,
				"agosto"_s,
				"septiembre"_s,
				"octubre"_s,
				"noviembre"_s,
				"diciembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			$$new($StringArray, {
				"ene"_s,
				"feb"_s,
				"mar"_s,
				"abr"_s,
				"may"_s,
				"jun"_s,
				"jul"_s,
				"ago"_s,
				"sep"_s,
				"oct"_s,
				"nov"_s,
				"dic"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"MonthNarrows"_s,
			$$new($StringArray, {
				"E"_s,
				"F"_s,
				"M"_s,
				"A"_s,
				"M"_s,
				"J"_s,
				"J"_s,
				"A"_s,
				"S"_s,
				"O"_s,
				"N"_s,
				"D"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"DayNames"_s,
			$$new($StringArray, {
				"domingo"_s,
				"lunes"_s,
				"martes"_s,
				u"miércoles"_s,
				"jueves"_s,
				"viernes"_s,
				u"sábado"_s
			})
		}),
		$$new($ObjectArray, {
			"DayAbbreviations"_s,
			$$new($StringArray, {
				"dom"_s,
				"lun"_s,
				"mar"_s,
				u"mié"_s,
				"jue"_s,
				"vie"_s,
				u"sáb"_s
			})
		}),
		$$new($ObjectArray, {
			"DayNarrows"_s,
			$$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"X"_s,
				"J"_s,
				"V"_s,
				"S"_s
			})
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			$$new($StringArray, {
				"antes de Cristo"_s,
				u"anno Dómini"_s
			})
		}),
		$$new($ObjectArray, {
			"short.Eras"_s,
			$$new($StringArray, {
				"a.C."_s,
				"d.C."_s
			})
		}),
		$$new($ObjectArray, {
			"NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s,
				"#,##0%"_s
			})
		}),
		$$new($ObjectArray, {
			"NumberElements"_s,
			$$new($StringArray, {
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
				u"�"_s
			})
		}),
		$$new($ObjectArray, {
			"TimePatterns"_s,
			$$new($StringArray, {
				"HH\'H\'mm\'\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			})
		}),
		$$new($ObjectArray, {
			"DatePatterns"_s,
			$$new($StringArray, {
				"EEEE d\' de \'MMMM\' de \'yyyy"_s,
				"d\' de \'MMMM\' de \'yyyy"_s,
				"dd-MMM-yyyy"_s,
				"d/MM/yy"_s
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

FormatData_es::FormatData_es() {
}

$Class* FormatData_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.ext.FormatData_es",
		"sun.util.resources.ParallelListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_es);
	});
	return class$;
}

$Class* FormatData_es::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun