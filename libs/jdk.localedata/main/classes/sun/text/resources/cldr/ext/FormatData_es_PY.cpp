#include <sun/text/resources/cldr/ext/FormatData_es_PY.h>

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

$MethodInfo _FormatData_es_PY_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_PY, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_PY, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_PY_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_PY",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_PY_MethodInfo_
};

$Object* allocate$FormatData_es_PY($Class* clazz) {
	return $of($alloc(FormatData_es_PY));
}

void FormatData_es_PY::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_PY::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
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
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
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
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00;¤ -#,##0.00"_s,
				u"#,##0 %"_s,
				u"¤#,##0.00"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		})
	}));
	return data;
}

FormatData_es_PY::FormatData_es_PY() {
}

$Class* FormatData_es_PY::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_PY, name, initialize, &_FormatData_es_PY_ClassInfo_, allocate$FormatData_es_PY);
	return class$;
}

$Class* FormatData_es_PY::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun