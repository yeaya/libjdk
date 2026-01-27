#include <sun/text/resources/cldr/ext/FormatData_ar_LB.h>

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

$MethodInfo _FormatData_ar_LB_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar_LB, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar_LB, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ar_LB_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_LB",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_LB_MethodInfo_
};

$Object* allocate$FormatData_ar_LB($Class* clazz) {
	return $of($alloc(FormatData_ar_LB));
}

void FormatData_ar_LB::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_LB::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"كانون الثاني"_s,
		u"شباط"_s,
		u"آذار"_s,
		u"نيسان"_s,
		u"أيار"_s,
		u"حزيران"_s,
		u"تموز"_s,
		u"آب"_s,
		u"أيلول"_s,
		u"تشرين الأول"_s,
		u"تشرين الثاني"_s,
		u"كانون الأول"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"ك"_s,
		u"ش"_s,
		u"آ"_s,
		u"ن"_s,
		u"أ"_s,
		u"ح"_s,
		u"ت"_s,
		u"آ"_s,
		u"أ"_s,
		u"ت"_s,
		u"ت"_s,
		u"ك"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("latn.NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				u"\u200e%\u200e"_s,
				"0"_s,
				"#"_s,
				u"\u200e-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"ليس رقمًا"_s,
				""_s,
				""_s
			}))
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("roc.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthNames"_s),
			$of(metaValue_MonthNames)
		}),
		$$new($ObjectArray, {
			$of("standalone.MonthAbbreviations"_s),
			$of(metaValue_MonthNames)
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
			$of("standalone.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("buddhist.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		}),
		$$new($ObjectArray, {
			$of("japanese.MonthNarrows"_s),
			$of(metaValue_MonthNarrows)
		})
	}));
	return data;
}

FormatData_ar_LB::FormatData_ar_LB() {
}

$Class* FormatData_ar_LB::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_LB, name, initialize, &_FormatData_ar_LB_ClassInfo_, allocate$FormatData_ar_LB);
	return class$;
}

$Class* FormatData_ar_LB::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun