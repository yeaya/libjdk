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

$MethodInfo _FormatData_es_UY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_UY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_UY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_UY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_UY",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_UY_MethodInfo_
};

$Object* allocate$FormatData_es_UY($Class* clazz) {
	return $of($alloc(FormatData_es_UY));
}

void FormatData_es_UY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_UY::getContents() {
	$useLocalCurrentObjectStackCache();
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
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
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
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of($$new($StringArray, {
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
			}))
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				u"#,##0 %"_s,
				u"¤ #,##0.00;(¤ #,##0.00)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		})
	}));
	return data;
}

FormatData_es_UY::FormatData_es_UY() {
}

$Class* FormatData_es_UY::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_UY, name, initialize, &_FormatData_es_UY_ClassInfo_, allocate$FormatData_es_UY);
	return class$;
}

$Class* FormatData_es_UY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun