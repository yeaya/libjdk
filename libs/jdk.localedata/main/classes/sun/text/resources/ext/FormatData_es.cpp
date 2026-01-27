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

$MethodInfo _FormatData_es_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_es",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_MethodInfo_
};

$Object* allocate$FormatData_es($Class* clazz) {
	return $of($alloc(FormatData_es));
}

void FormatData_es::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNames"_s),
			$of($$new($StringArray, {
				"domingo"_s,
				"lunes"_s,
				"martes"_s,
				u"miércoles"_s,
				"jueves"_s,
				"viernes"_s,
				u"sábado"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayAbbreviations"_s),
			$of($$new($StringArray, {
				"dom"_s,
				"lun"_s,
				"mar"_s,
				u"mié"_s,
				"jue"_s,
				"vie"_s,
				u"sáb"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DayNarrows"_s),
			$of($$new($StringArray, {
				"D"_s,
				"L"_s,
				"M"_s,
				"X"_s,
				"J"_s,
				"V"_s,
				"S"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("Eras"_s),
			$of($$new($StringArray, {
				"antes de Cristo"_s,
				u"anno Dómini"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("short.Eras"_s),
			$of($$new($StringArray, {
				"a.C."_s,
				"d.C."_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"¤#,##0.00;(¤#,##0.00)"_s,
				"#,##0%"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("NumberElements"_s),
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
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"HH\'H\'mm\'\' z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d\' de \'MMMM\' de \'yyyy"_s,
				"d\' de \'MMMM\' de \'yyyy"_s,
				"dd-MMM-yyyy"_s,
				"d/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GyMdkHmsSEDFwWahKzZ"_s)
		})
	});
}

FormatData_es::FormatData_es() {
}

$Class* FormatData_es::load$($String* name, bool initialize) {
	$loadClass(FormatData_es, name, initialize, &_FormatData_es_ClassInfo_, allocate$FormatData_es);
	return class$;
}

$Class* FormatData_es::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun