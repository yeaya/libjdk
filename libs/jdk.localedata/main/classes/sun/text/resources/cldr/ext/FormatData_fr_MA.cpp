#include <sun/text/resources/cldr/ext/FormatData_fr_MA.h>

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

$MethodInfo _FormatData_fr_MA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_MA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_MA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_MA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_MA",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_MA_MethodInfo_
};

$Object* allocate$FormatData_fr_MA($Class* clazz) {
	return $of($alloc(FormatData_fr_MA));
}

void FormatData_fr_MA::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_MA::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthAbbreviations, $new($StringArray, {
		"jan."_s,
		u"fév."_s,
		"mar."_s,
		"avr."_s,
		"mai"_s,
		"jui."_s,
		"juil."_s,
		u"août"_s,
		"sept."_s,
		"oct."_s,
		"nov."_s,
		u"déc."_s,
		""_s
	}));
	$var($StringArray, metaValue_AmPmMarkers, $new($StringArray, {
		"a.m."_s,
		"p.m."_s,
		"minuit"_s,
		"midi"_s,
		"du matin"_s,
		""_s,
		u"de l’après-midi"_s,
		""_s,
		"du soir"_s,
		""_s,
		"du matin"_s,
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
			$of("japanese.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("roc.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("islamic.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		}),
		$$new($ObjectArray, {
			$of("buddhist.AmPmMarkers"_s),
			$of(metaValue_AmPmMarkers)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###"_s,
				u"#,##0.00 ¤"_s,
				u"#,##0 %"_s,
				u"#,##0.00 ¤;(#,##0.00 ¤)"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthAbbreviations)
		})
	}));
	return data;
}

FormatData_fr_MA::FormatData_fr_MA() {
}

$Class* FormatData_fr_MA::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_MA, name, initialize, &_FormatData_fr_MA_ClassInfo_, allocate$FormatData_fr_MA);
	return class$;
}

$Class* FormatData_fr_MA::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun