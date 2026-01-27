#include <sun/text/resources/cldr/ext/FormatData_ar_MR.h>

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

$MethodInfo _FormatData_ar_MR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ar_MR, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ar_MR, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ar_MR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ar_MR",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ar_MR_MethodInfo_
};

$Object* allocate$FormatData_ar_MR($Class* clazz) {
	return $of($alloc(FormatData_ar_MR));
}

void FormatData_ar_MR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ar_MR::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"يناير"_s,
		u"فبراير"_s,
		u"مارس"_s,
		u"إبريل"_s,
		u"مايو"_s,
		u"يونيو"_s,
		u"يوليو"_s,
		u"أغشت"_s,
		u"شتمبر"_s,
		u"أكتوبر"_s,
		u"نوفمبر"_s,
		u"دجمبر"_s,
		""_s
	}));
	$var($StringArray, metaValue_MonthNarrows, $new($StringArray, {
		u"ي"_s,
		u"ف"_s,
		u"م"_s,
		u"إ"_s,
		u"و"_s,
		u"ن"_s,
		u"ل"_s,
		u"غ"_s,
		u"ش"_s,
		u"ك"_s,
		u"ب"_s,
		u"د"_s,
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

FormatData_ar_MR::FormatData_ar_MR() {
}

$Class* FormatData_ar_MR::load$($String* name, bool initialize) {
	$loadClass(FormatData_ar_MR, name, initialize, &_FormatData_ar_MR_ClassInfo_, allocate$FormatData_ar_MR);
	return class$;
}

$Class* FormatData_ar_MR::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun