#include <sun/text/resources/cldr/ext/FormatData_es_UY.h>
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

void FormatData_es_UY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_UY::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		"enero"_s,
		"febrero"_s,
		"marzo"_s,
		"abril"_s,
		"mayo"_s,
		"junio"_s,
		"julio"_s,
		"agosto"_s,
		"setiembre"_s,
		"octubre"_s,
		"noviembre"_s,
		"diciembre"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"ene."_s,
		"feb."_s,
		"mar."_s,
		"abr."_s,
		"may."_s,
		"jun."_s,
		"jul."_s,
		"ago."_s,
		"set."_s,
		"oct."_s,
		"nov."_s,
		"dic."_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"latn.NumberElements"_s,
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
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			$$new($StringArray, {
				"Enero"_s,
				"Febrero"_s,
				"Marzo"_s,
				"Abril"_s,
				"Mayo"_s,
				"Junio"_s,
				"Julio"_s,
				"Agosto"_s,
				"Setiembre"_s,
				"Octubre"_s,
				"Noviembre"_s,
				"Diciembre"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			$$new($StringArray, {
				"Ene."_s,
				"Feb."_s,
				"Mar."_s,
				"Abr."_s,
				"May."_s,
				"Jun."_s,
				"Jul."_s,
				"Ago."_s,
				"Set."_s,
				"Oct."_s,
				"Nov."_s,
				"Dic."_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"latn.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				u"#,##0 %"_s,
				u"¤ #,##0.00;(¤ #,##0.00)"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthAbbreviations
		})
	}));
	return data;
}

FormatData_es_UY::FormatData_es_UY() {
}

$Class* FormatData_es_UY::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_UY, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_UY, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_es_UY",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_es_UY, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_es_UY);
	});
	return class$;
}

$Class* FormatData_es_UY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun