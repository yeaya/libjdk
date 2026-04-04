#include <sun/text/resources/cldr/ext/FormatData_mzn.h>
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

void FormatData_mzn::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_mzn::getContents() {
	$useLocalObjectStack();
	$var($StringArray, metaValue_MonthNames, $new($StringArray, {
		u"ژانویه"_s,
		u"فوریه"_s,
		u"مارس"_s,
		u"آوریل"_s,
		u"مه"_s,
		u"ژوئن"_s,
		u"ژوئیه"_s,
		u"اوت"_s,
		u"سپتامبر"_s,
		u"اکتبر"_s,
		u"نوامبر"_s,
		u"دسامبر"_s,
		""_s
	}));
	$var($StringArray, metaValue_Eras, $new($StringArray, {
		u"پ.م"_s,
		u"م."_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.year"_s,
			u"سال"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberElements"_s,
			$$new($StringArray, {
				u"٫"_s,
				u"٬"_s,
				u"؛"_s,
				u"٪"_s,
				u"۰"_s,
				"#"_s,
				u"\u200e-\u200e"_s,
				u"×۱۰^"_s,
				u"؉"_s,
				u"∞"_s,
				"NaN"_s,
				""_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.zone"_s,
			u"زمونی منقطه"_s
		}),
		$$new($ObjectArray, {
			"field.month"_s,
			u"ماه"_s
		}),
		$$new($ObjectArray, {
			"arabext.NumberPatterns"_s,
			$$new($StringArray, {
				"#,##0.###"_s,
				u"¤ #,##0.00"_s,
				"#,##0%"_s,
				""_s
			})
		}),
		$$new($ObjectArray, {
			"field.second"_s,
			u"ثانیه"_s
		}),
		$$new($ObjectArray, {
			"roc.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"narrow.Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"field.week"_s,
			u"هفته"_s
		}),
		$$new($ObjectArray, {
			"DefaultNumberingSystem"_s,
			"arabext"_s
		}),
		$$new($ObjectArray, {
			"Eras"_s,
			metaValue_Eras
		}),
		$$new($ObjectArray, {
			"japanese.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"roc.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"long.Eras"_s,
			$$new($StringArray, {
				u"قبل میلاد"_s,
				u"بعد میلاد"_s
			})
		}),
		$$new($ObjectArray, {
			"buddhist.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.weekday"_s,
			u"هفته\u200cی ِروز"_s
		}),
		$$new($ObjectArray, {
			"MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"buddhist.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.hour"_s,
			u"ساعِت"_s
		}),
		$$new($ObjectArray, {
			"japanese.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.minute"_s,
			u"دقیقه"_s
		}),
		$$new($ObjectArray, {
			"field.era"_s,
			u"تقویم"_s
		}),
		$$new($ObjectArray, {
			"standalone.MonthNames"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"standalone.MonthAbbreviations"_s,
			metaValue_MonthNames
		}),
		$$new($ObjectArray, {
			"field.dayperiod"_s,
			u"صواحی/ظُر"_s
		})
	}));
	return data;
}

FormatData_mzn::FormatData_mzn() {
}

$Class* FormatData_mzn::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_mzn, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_mzn, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.text.resources.cldr.ext.FormatData_mzn",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FormatData_mzn, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormatData_mzn);
	});
	return class$;
}

$Class* FormatData_mzn::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun